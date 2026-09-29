// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/battle/main_battle_routine.asm (source_named).
bool execute_battle_main_battle_routine_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/main_battle_routine.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC246EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x00FFC9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC246F2.
    case 0xC246F4: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    case 0xC246F6: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC246F4.
    case 0xC246F8: cpu.execute_instruction<0x51>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    case 0xC246F9: cpu.execute_instruction<0xD0>(0x000066, 2); return true;
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC246F8.
    case 0xC246FA: cpu.execute_instruction<0x66>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:28 LDA #1
    case 0xC246FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC246FA.
    case 0xC246FC: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC246FB.
    case 0xC246FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:29 STA @LOCAL12
    case 0xC246FE: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:30 STA @LOCAL11
    case 0xC24700: cpu.execute_instruction<0x85>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC24702: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24704: cpu.execute_instruction<0x8D>(0x009B55, 3); return true;
    // src/battle/main_battle_routine.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC24707: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:35 LDA #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC24709: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x009B20, 3); return true;
    // src/battle/main_battle_routine.asm:35 LDA #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC24709.
    case 0xC2470B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:36 STA @VIRTUAL02
    case 0xC2470C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC2470E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC24710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC24712: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24710.
    case 0xC24713: cpu.execute_instruction<0x0E>(0x0006A2, 3); return true;
    // src/battle/main_battle_routine.asm:43 LDX #6
    case 0xC24714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:43 LDX #6
    // Overlapping static entry reached from 0xC24714.
    case 0xC24716: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC24717: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:46 LDA @VIRTUAL02
    case 0xC24719: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:50 JSL MEMSET16
    case 0xC2471B: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/main_battle_routine.asm:52 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC2471F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003C, 2); else cpu.execute_instruction<0xA0>(0x009B3C, 3); return true;
    // src/battle/main_battle_routine.asm:52 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC2471F.
    case 0xC24721: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:53 STY @LOCAL10
    case 0xC24722: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC24724: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24726: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24728: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24726.
    case 0xC24729: cpu.execute_instruction<0x0E>(0x0006A2, 3); return true;
    // src/battle/main_battle_routine.asm:60 LDX #6
    case 0xC2472A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:60 LDX #6
    // Overlapping static entry reached from 0xC2472A.
    case 0xC2472C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC2472D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:63 TYA
    case 0xC2472F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:67 JSL MEMSET16
    case 0xC24730: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/main_battle_routine.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC24734: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:69 LDA #1
    case 0xC24736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/main_battle_routine.asm:71 LDX @VIRTUAL02
    case 0xC24738: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:71 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC24736.
    case 0xC24739: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:72 STA __BSS_START__,X
    case 0xC2473A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:73 LDY @LOCAL10
    case 0xC2473D: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:74 STA __BSS_START__,Y
    case 0xC2473F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC24742: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:82 LDA #1
    case 0xC24744: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:82 LDA #1
    // Overlapping static entry reached from 0xC24744.
    case 0xC24746: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:83 STA ENEMIES_IN_BATTLE
    case 0xC24747: cpu.execute_instruction<0x8D>(0x00A18C, 3); return true;
    // src/battle/main_battle_routine.asm:84 STA CURRENT_BATTLE_GROUP
    case 0xC2474A: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2474D: cpu.execute_instruction<0xAF>(0xD0C615, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24751: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24753: cpu.execute_instruction<0xAF>(0xD0C617, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24757: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:86 LDY #1
    case 0xC24759: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:86 LDY #1
    // Overlapping static entry reached from 0xC24759.
    case 0xC2475B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/main_battle_routine.asm:87 LDA [@VIRTUAL06],Y
    case 0xC2475C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:88 STA ENEMIES_IN_BATTLE_IDS
    case 0xC2475E: cpu.execute_instruction<0x8D>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:90 STZ GIYGAS_PHASE
    case 0xC24761: cpu.execute_instruction<0x9C>(0x00AB7C, 3); return true;
    // src/battle/main_battle_routine.asm:91 LDA CURRENT_BATTLE_GROUP
    case 0xC24764: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC24767: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0001DB, 3); return true;
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC24767.
    case 0xC24769: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    case 0xC2476A: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC24769.
    case 0xC2476B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    case 0xC2476C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC2476B.
    case 0xC2476D: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC2476C.
    case 0xC2476E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:95 STA GIYGAS_PHASE
    case 0xC2476F: cpu.execute_instruction<0x8D>(0x00AB7C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24772.
    case 0xC24774: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24775: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24777.
    case 0xC24779: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2477A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:98 LDA CURRENT_BATTLE_GROUP
    case 0xC2477C: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/main_battle_routine.asm:99 ASL
    case 0xC2477F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:100 ASL
    case 0xC24780: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:101 STA @LOCAL0F
    case 0xC24781: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24783: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24785: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24787: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24789: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:103 CLC
    case 0xC2478B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:104 ADC @VIRTUAL0A
    case 0xC2478C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:105 STA @VIRTUAL0A
    case 0xC2478E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:106 LDA [@VIRTUAL0A]
    case 0xC24790: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:107 STA @LOCAL0E
    case 0xC24792: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:108 LDA @LOCAL0F
    case 0xC24794: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:109 INC
    case 0xC24796: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:110 INC
    case 0xC24797: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:111 CLC
    case 0xC24798: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:112 ADC @VIRTUAL06
    case 0xC24799: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:113 STA @VIRTUAL06
    case 0xC2479B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:114 LDA [@VIRTUAL06]
    case 0xC2479D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:116 STA @LOCAL0F
    case 0xC2479F: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:120 LDA CURRENT_BATTLE_GROUP
    case 0xC247A1: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/main_battle_routine.asm:121 ASL
    case 0xC247A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:122 ASL
    case 0xC247A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:123 ASL
    case 0xC247A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:124 CLC
    case 0xC247A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC247A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC247A8.
    case 0xC247AA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:126 TAX
    case 0xC247AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:127 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC247AC: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    case 0xC247B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC247B0.
    case 0xC247B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:130 STA @LOCAL0D
    case 0xC247B3: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:138 STZ MIRROR_ENEMY
    case 0xC247B5: cpu.execute_instruction<0x9C>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:140 STZ @LOCAL0C
    case 0xC247B8: cpu.execute_instruction<0x64>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC247BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:142 STZ BATTLE_ITEM_USED ;huh... usually mother 2 optimizes this worse
    case 0xC247BC: cpu.execute_instruction<0x9C>(0x00AB7E, 3); return true;
    // src/battle/main_battle_routine.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC247BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:144 STZ @LOCAL0B
    case 0xC247C1: cpu.execute_instruction<0x64>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:153 STZ BATTLE_MONEY_SCRATCH
    case 0xC247C3: cpu.execute_instruction<0x9C>(0x00AB7A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC247C6.
    case 0xC247C8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247C9: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC247CC.
    case 0xC247CE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247CF: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/main_battle_routine.asm:155 JSL UNKNOWN_C08726
    case 0xC247D2: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/battle/main_battle_routine.asm:156 JSL UNKNOWN_C2E0E7
    case 0xC247D6: cpu.execute_instruction<0x22>(0xC2E03C, 4); return true;
    // src/battle/main_battle_routine.asm:157 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC247DA: cpu.execute_instruction<0x22>(0xC2C882, 4); return true;
    // src/battle/main_battle_routine.asm:158 JSL LOAD_WINDOW_GFX
    case 0xC247DE: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247E2.
    case 0xC247E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247E7.
    case 0xC247E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247EC.
    case 0xC247EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247EF.
    case 0xC247F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247F4.
    case 0xC247F7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247F7.
    case 0xC247F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x002BA4, 3); return true;
    // src/battle/main_battle_routine.asm:161 LDY @LOCAL0D
    case 0xC247FA: cpu.execute_instruction<0xA4>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:161 LDY @LOCAL0D
    // Overlapping static entry reached from 0xC247F9.
    case 0xC247FB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:162 LDX @LOCAL0F
    case 0xC247FC: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:169 LDA @LOCAL0E
    case 0xC247FE: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:170 JSL LOAD_BATTLE_BG
    case 0xC24800: cpu.execute_instruction<0x22>(0xC2D0D5, 4); return true;
    // src/battle/main_battle_routine.asm:171 JSL UNKNOWN_C2EEE7
    case 0xC24804: cpu.execute_instruction<0x22>(0xC2EE00, 4); return true;
    // src/battle/main_battle_routine.asm:172 LDY #0
    case 0xC24808: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:172 LDY #0
    // Overlapping static entry reached from 0xC24808.
    case 0xC2480A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:174 STY @LOCAL0A
    case 0xC2480B: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:178 BRA @UNKNOWN4
    case 0xC2480D: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/battle/main_battle_routine.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC2480F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC24811: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC24813: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24811.
    case 0xC24814: cpu.execute_instruction<0x0E>(0x004EA2, 3); return true;
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    case 0xC24815: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24815.
    case 0xC24817: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC24818: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:184 TYA
    case 0xC2481A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:185 TXY
    case 0xC2481B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:186 JSL MULT168
    case 0xC2481C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:187 CLC
    case 0xC24820: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24821: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24821.
    case 0xC24823: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    case 0xC24824: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    // Overlapping static entry reached from 0xC24823.
    case 0xC24825: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/battle/main_battle_routine.asm:191 LDY @LOCAL0A
    case 0xC24828: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:192 INY
    case 0xC2482A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:193 STY @LOCAL0A
    case 0xC2482B: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    case 0xC2482D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2482D.
    case 0xC2482F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:201 BCC @UNKNOWN3
    case 0xC24830: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:202 STZ HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24832: cpu.execute_instruction<0x9C>(0x00ABE1, 3); return true;
    // src/battle/main_battle_routine.asm:203 LDY #0
    case 0xC24835: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:203 LDY #0
    // Overlapping static entry reached from 0xC24835.
    case 0xC24837: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:204 STY @LOCAL09
    case 0xC24838: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:205 STZ @LOCAL10
    case 0xC2483A: cpu.execute_instruction<0x64>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:206 JMP @UNKNOWN9
    case 0xC2483C: cpu.execute_instruction<0x4C>(0x0048E1, 3); return true;
    // src/battle/main_battle_routine.asm:209 LDA @LOCAL10
    case 0xC2483F: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:210 CLC
    case 0xC24841: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:211 ADC #.LOWORD(GAME_STATE)
    case 0xC24842: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:211 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24842.
    case 0xC24844: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:212 TAX
    case 0xC24845: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:213 LDA a:game_state::party_members,X
    case 0xC24846: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    case 0xC24849: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC24849.
    case 0xC2484B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:219 STA @VIRTUAL04
    case 0xC2484C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:220 STA @LOCAL08
    case 0xC2484E: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:221 LDA @VIRTUAL04
    case 0xC24850: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:222 BEQ @UNKNOWN7
    case 0xC24852: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:223 LDA @VIRTUAL04
    case 0xC24854: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:224 CMP #4
    case 0xC24856: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:224 CMP #4
    // Overlapping static entry reached from 0xC24856.
    case 0xC24858: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24859: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC2485B: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:226 LDA @LOCAL10
    case 0xC2485D: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    case 0xC2485F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2485F.
    case 0xC24861: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:228 JSL MULT168
    case 0xC24862: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:229 CLC
    case 0xC24866: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24867: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24867.
    case 0xC24869: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:231 TAX
    case 0xC2486A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:232 LDA @VIRTUAL04
    case 0xC2486B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:233 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2486D: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/battle/main_battle_routine.asm:234 BRA @UNKNOWN8
    case 0xC24871: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/battle/main_battle_routine.asm:236 LDA @VIRTUAL04
    case 0xC24873: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:237 CMP #5
    case 0xC24875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:237 CMP #5
    // Overlapping static entry reached from 0xC24875.
    case 0xC24877: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:238 BCC @UNKNOWN8
    case 0xC24878: cpu.execute_instruction<0x90>(0x000065, 2); return true;
    // src/battle/main_battle_routine.asm:239 LDA @LOCAL10
    case 0xC2487A: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    case 0xC2487C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2487C.
    case 0xC2487E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:241 JSL MULT168
    case 0xC2487F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:242 STA @VIRTUAL02
    case 0xC24883: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:243 CLC
    case 0xC24885: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24886.
    case 0xC24888: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:245 TAX
    case 0xC24889: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:246 STX @LOCAL07
    case 0xC2488A: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:247 LDA @VIRTUAL04
    case 0xC2488C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:248 ASL
    case 0xC2488E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:249 TAX
    case 0xC2488F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:250 INX
    case 0xC24890: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:251 LDA f:NPC_AI_TABLE,X
    case 0xC24891: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    case 0xC24895: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC24895.
    case 0xC24897: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:253 LDX @LOCAL07
    case 0xC24898: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:254 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2489A: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/main_battle_routine.asm:255 LDX @VIRTUAL02
    case 0xC2489E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:256 SEP #PROC_FLAGS::ACCUM8
    case 0xC248A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:257 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC248A2: cpu.execute_instruction<0x9E>(0x00A1BC, 3); return true;
    // src/battle/main_battle_routine.asm:258 REP #PROC_FLAGS::ACCUM8
    case 0xC248A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:259 LDA @VIRTUAL04
    case 0xC248A7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC248A9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:261 LDX @VIRTUAL02
    case 0xC248AB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:262 STA BATTLERS_TABLE+battler::npc_id,X
    case 0xC248AD: cpu.execute_instruction<0x9D>(0x00A1BD, 3); return true;
    // src/battle/main_battle_routine.asm:263 LDY @LOCAL09
    case 0xC248B0: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC248B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:265 TYA
    case 0xC248B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC248B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:267 LDX @VIRTUAL02
    case 0xC248B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:268 STA BATTLERS_TABLE+16,X
    case 0xC248B9: cpu.execute_instruction<0x9D>(0x00A1BE, 3); return true;
    // src/battle/main_battle_routine.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC248BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:270 TYA
    case 0xC248BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:271 ASL
    case 0xC248BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:273 CLC
    case 0xC248C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:274 ADC #.LOWORD(GAME_STATE)
    case 0xC248C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:274 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC248C1.
    case 0xC248C3: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:275 TAX
    case 0xC248C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:276 LDA a:game_state::party_npc_1_hp,X
    case 0xC248C5: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/main_battle_routine.asm:281 LDX @VIRTUAL02
    case 0xC248C8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:282 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC248CA: cpu.execute_instruction<0x9D>(0x00A1C1, 3); return true;
    // src/battle/main_battle_routine.asm:283 LDX @VIRTUAL02
    case 0xC248CD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:284 STA BATTLERS_TABLE+battler::hp,X
    case 0xC248CF: cpu.execute_instruction<0x9D>(0x00A1BF, 3); return true;
    // src/battle/main_battle_routine.asm:285 INY
    case 0xC248D2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:286 STY @LOCAL09
    case 0xC248D3: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:287 LDX @VIRTUAL02
    case 0xC248D5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:288 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC248D7: cpu.execute_instruction<0x9E>(0x00A1C7, 3); return true;
    // src/battle/main_battle_routine.asm:289 LDX @VIRTUAL02
    case 0xC248DA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:290 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC248DC: cpu.execute_instruction<0x9E>(0x00A1C5, 3); return true;
    // src/battle/main_battle_routine.asm:292 INC @LOCAL10
    case 0xC248DF: cpu.execute_instruction<0xE6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:294 LDA @LOCAL10
    case 0xC248E1: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:295 CMP #6
    case 0xC248E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:295 CMP #6
    // Overlapping static entry reached from 0xC248E3.
    case 0xC248E5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248E6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248E8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248EA: cpu.execute_instruction<0x4C>(0x00483F, 3); return true;
    // src/battle/main_battle_routine.asm:297 JSL UNKNOWN_C2F0D1
    case 0xC248ED: cpu.execute_instruction<0x22>(0xC2EFEE, 4); return true;
    // src/battle/main_battle_routine.asm:298 LDY #0
    case 0xC248F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:298 LDY #0
    // Overlapping static entry reached from 0xC248F1.
    case 0xC248F3: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:299 STY @LOCAL10
    case 0xC248F4: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:300 BRA @UNKNOWN12
    case 0xC248F6: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:302 TYA
    case 0xC248F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    case 0xC248F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC248F9.
    case 0xC248FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:304 JSL MULT168
    case 0xC248FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:305 CLC
    case 0xC24900: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC24901: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00A41E, 3); return true;
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC24901.
    case 0xC24903: cpu.execute_instruction<0xA4>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:307 TAX
    case 0xC24904: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    case 0xC24905: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:309 LDY @LOCAL10
    case 0xC24907: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:310 TYA
    case 0xC24909: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:311 ASL
    case 0xC2490A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:312 TAX
    case 0xC2490B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:313 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2490C: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:314 LDX @LOCAL07
    case 0xC2490F: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:315 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24911: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/main_battle_routine.asm:316 LDY @LOCAL10
    case 0xC24915: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:317 INY
    case 0xC24917: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:318 STY @LOCAL10
    case 0xC24918: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:320 CPY ENEMIES_IN_BATTLE
    case 0xC2491A: cpu.execute_instruction<0xCC>(0x00A18C, 3); return true;
    // src/battle/main_battle_routine.asm:321 BCC @UNKNOWN11
    case 0xC2491D: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/main_battle_routine.asm:322 JSL UNKNOWN_C2F121
    case 0xC2491F: cpu.execute_instruction<0x22>(0xC2F03E, 4); return true;
    // src/battle/main_battle_routine.asm:323 JSL UNKNOWN_C2F8F9
    case 0xC24923: cpu.execute_instruction<0x22>(0xC2F812, 4); return true;
    // src/battle/main_battle_routine.asm:324 JSL UNKNOWN_C47F87
    case 0xC24927: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/battle/main_battle_routine.asm:325 LDA #24
    case 0xC2492B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/battle/main_battle_routine.asm:325 LDA #24
    // Overlapping static entry reached from 0xC2492B.
    case 0xC2492D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:326 JSL UNKNOWN_C0856B
    case 0xC2492E: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/battle/main_battle_routine.asm:327 LDA #1
    case 0xC24932: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:327 LDA #1
    // Overlapping static entry reached from 0xC24932.
    case 0xC24934: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:328 STA BATTLE_MODE_FLAG
    case 0xC24935: cpu.execute_instruction<0x8D>(0x00993B, 3); return true;
    // src/battle/main_battle_routine.asm:329 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24938: cpu.execute_instruction<0xAD>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    case 0xC2493B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2493B.
    case 0xC2493D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:331 JSL MULT168
    case 0xC2493E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:332 CLC
    case 0xC24942: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    case 0xC24943: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24943.
    case 0xC24945: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:334 TAX
    case 0xC24946: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:335 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24947: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    case 0xC2494B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC2494B.
    case 0xC2494D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:337 JSL CHANGE_MUSIC
    case 0xC2494E: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/battle/main_battle_routine.asm:338 JSL UNKNOWN_C08744
    case 0xC24952: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/battle/main_battle_routine.asm:339 LDX #1
    case 0xC24956: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:339 LDX #1
    // Overlapping static entry reached from 0xC24956.
    case 0xC24958: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/main_battle_routine.asm:340 TXA
    case 0xC24959: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:341 JSL FADE_IN
    case 0xC2495A: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/battle/main_battle_routine.asm:342 LDA BATTLE_MODE
    case 0xC2495E: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24961: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24963: cpu.execute_instruction<0x4C>(0x004C1D, 3); return true;
    // src/battle/main_battle_routine.asm:344 LDA @LOCAL12
    case 0xC24966: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:345 JSL UNKNOWN_C1DCCB
    case 0xC24968: cpu.execute_instruction<0x22>(0xC1DAA6, 4); return true;
    // src/battle/main_battle_routine.asm:346 LDA #0
    case 0xC2496C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:346 LDA #0
    // Overlapping static entry reached from 0xC2496C.
    case 0xC2496E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:347 STA @VIRTUAL02
    case 0xC2496F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:348 TAY
    case 0xC24971: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:349 STY @LOCAL10
    case 0xC24972: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:350 JMP @UNKNOWN19
    case 0xC24974: cpu.execute_instruction<0x4C>(0x004A41, 3); return true;
    // src/battle/main_battle_routine.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC24977: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:354 TYA
    case 0xC24979: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:355 CLC
    case 0xC2497A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:356 ADC #.LOWORD(GAME_STATE)
    case 0xC2497B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:356 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2497B.
    case 0xC2497D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:357 TAX
    case 0xC2497E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:358 LDA a:game_state::party_members,X
    case 0xC2497F: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    case 0xC24982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    // Overlapping static entry reached from 0xC24982.
    case 0xC24984: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:363 STA @VIRTUAL04
    case 0xC24985: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:364 STA @LOCAL08
    case 0xC24987: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:365 LDA @VIRTUAL04
    case 0xC24989: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:366 BEQ @UNKNOWN16
    case 0xC2498B: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:367 LDA @VIRTUAL04
    case 0xC2498D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:368 CMP #4
    case 0xC2498F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:368 CMP #4
    // Overlapping static entry reached from 0xC2498F.
    case 0xC24991: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24992: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24994: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:370 TYA
    case 0xC24996: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    case 0xC24997: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24997.
    case 0xC24999: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:372 JSL MULT168
    case 0xC2499A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:373 CLC
    case 0xC2499E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2499F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2499F.
    case 0xC249A1: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:375 TAX
    case 0xC249A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:376 LDA @VIRTUAL04
    case 0xC249A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:377 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC249A5: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/battle/main_battle_routine.asm:378 JMP @UNKNOWN18
    case 0xC249A9: cpu.execute_instruction<0x4C>(0x004A3C, 3); return true;
    // src/battle/main_battle_routine.asm:380 LDA @VIRTUAL04
    case 0xC249AC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:381 CMP #5
    case 0xC249AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:381 CMP #5
    // Overlapping static entry reached from 0xC249AE.
    case 0xC249B0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B5: cpu.execute_instruction<0x4C>(0x004A3C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x009DDA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC249B8.
    case 0xC249BA: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC249BD.
    case 0xC249BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:384 LDA @VIRTUAL04
    case 0xC249C2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:385 ASL
    case 0xC249C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:387 STA @LOCAL09
    case 0xC249C5: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249C7: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249C9: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249CB: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249CD: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:392 CLC
    case 0xC249CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:393 ADC @VIRTUAL0A
    case 0xC249D0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:394 STA @VIRTUAL0A
    case 0xC249D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:395 LDA [@VIRTUAL0A]
    case 0xC249D4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    case 0xC249D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC249D6.
    case 0xC249D8: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:397 AND #$0001
    case 0xC249D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:397 AND #$0001
    // Overlapping static entry reached from 0xC249D9.
    case 0xC249DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:398 BEQ @UNKNOWN18
    case 0xC249DC: cpu.execute_instruction<0xF0>(0x00005E, 2); return true;
    // src/battle/main_battle_routine.asm:399 TYA
    case 0xC249DE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    case 0xC249DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC249DF.
    case 0xC249E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:401 JSL MULT168
    case 0xC249E2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:403 STA @LOCAL06
    case 0xC249E6: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:407 CLC
    case 0xC249E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC249E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC249E9.
    case 0xC249EB: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:409 TAX
    case 0xC249EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:411 LDA @LOCAL09
    case 0xC249ED: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:415 INC
    case 0xC249EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:416 CLC
    case 0xC249F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:417 ADC @VIRTUAL06
    case 0xC249F1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:418 STA @VIRTUAL06
    case 0xC249F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:419 LDA [@VIRTUAL06]
    case 0xC249F5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    case 0xC249F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC249F7.
    case 0xC249F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:421 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC249FA: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/main_battle_routine.asm:422 LDA @VIRTUAL02
    case 0xC249FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:423 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC24A02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BE, 2); else cpu.execute_instruction<0xA0>(0x00A1BE, 3); return true;
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC24A02.
    case 0xC24A04: cpu.execute_instruction<0xA1>(0x000091, 2); return true;
    // src/battle/main_battle_routine.asm:426 STA (@LOCAL06),Y
    case 0xC24A05: cpu.execute_instruction<0x91>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:426 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A04.
    case 0xC24A06: cpu.execute_instruction<0x1D>(0x0020C2, 3); return true;
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    case 0xC24A07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:431 LDA @VIRTUAL02
    case 0xC24A09: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:432 ASL
    case 0xC24A0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:434 CLC
    case 0xC24A0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:435 ADC #.LOWORD(GAME_STATE)
    case 0xC24A0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:435 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24A0D.
    case 0xC24A0F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:436 TAX
    case 0xC24A10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:437 LDA a:game_state::party_npc_1_hp,X
    case 0xC24A11: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/main_battle_routine.asm:438 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    case 0xC24A14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C1, 2); else cpu.execute_instruction<0xA0>(0x00A1C1, 3); return true;
    // src/battle/main_battle_routine.asm:438 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    // Overlapping static entry reached from 0xC24A14.
    case 0xC24A16: cpu.execute_instruction<0xA1>(0x000091, 2); return true;
    // src/battle/main_battle_routine.asm:439 STA (@LOCAL06),Y
    case 0xC24A17: cpu.execute_instruction<0x91>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:439 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A16.
    case 0xC24A18: cpu.execute_instruction<0x1D>(0x00BFA0, 3); return true;
    // src/battle/main_battle_routine.asm:440 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    case 0xC24A19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BF, 2); else cpu.execute_instruction<0xA0>(0x00A1BF, 3); return true;
    // src/battle/main_battle_routine.asm:440 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24A19.
    case 0xC24A1B: cpu.execute_instruction<0xA1>(0x000091, 2); return true;
    // src/battle/main_battle_routine.asm:441 STA (@LOCAL06),Y
    case 0xC24A1C: cpu.execute_instruction<0x91>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:441 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A1B.
    case 0xC24A1D: cpu.execute_instruction<0x1D>(0x0002E6, 3); return true;
    // src/battle/main_battle_routine.asm:442 INC @VIRTUAL02
    case 0xC24A1E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:443 LDX @LOCAL06
    case 0xC24A20: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:444 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC24A22: cpu.execute_instruction<0x9E>(0x00A1C7, 3); return true;
    // src/battle/main_battle_routine.asm:445 LDX @LOCAL06
    case 0xC24A25: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:446 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC24A27: cpu.execute_instruction<0x9E>(0x00A1C5, 3); return true;
    // src/battle/main_battle_routine.asm:447 LDX @LOCAL06
    case 0xC24A2A: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:462 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:463 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC24A2E: cpu.execute_instruction<0x9E>(0x00A1BC, 3); return true;
    // src/battle/main_battle_routine.asm:464 REP #PROC_FLAGS::ACCUM8
    case 0xC24A31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:465 LDA @VIRTUAL04
    case 0xC24A33: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    case 0xC24A37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BD, 2); else cpu.execute_instruction<0xA0>(0x00A1BD, 3); return true;
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    // Overlapping static entry reached from 0xC24A37.
    case 0xC24A39: cpu.execute_instruction<0xA1>(0x000091, 2); return true;
    // src/battle/main_battle_routine.asm:469 STA (@LOCAL06),Y
    case 0xC24A3A: cpu.execute_instruction<0x91>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:469 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A39.
    case 0xC24A3B: cpu.execute_instruction<0x1D>(0x0031A4, 3); return true;
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    case 0xC24A3C: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:475 INY
    case 0xC24A3E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:476 STY @LOCAL10
    case 0xC24A3F: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:478 CPY #6
    case 0xC24A41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:478 CPY #6
    // Overlapping static entry reached from 0xC24A41.
    case 0xC24A43: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A44: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A46: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A48: cpu.execute_instruction<0x4C>(0x004977, 3); return true;
    // src/battle/main_battle_routine.asm:480 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24A4B: cpu.execute_instruction<0x22>(0xC1DB18, 4); return true;
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    case 0xC24A4F: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC24A60.
    case 0xC24A52: cpu.execute_instruction<0xC1>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC24A53: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24A52.
    case 0xC24A54: cpu.execute_instruction<0x4C>(0x00C087, 3); return true;
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    case 0xC24A57: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    case 0xC24A5B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    case 0xC24A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24A5E.
    case 0xC24A60: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24A61: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24A60.
    case 0xC24A62: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24A63: cpu.execute_instruction<0x4C>(0x004C03, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24A62.
    case 0xC24A64: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:489 LDA PAD_PRESS
    case 0xC24A66: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    case 0xC24A69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC24A69.
    case 0xC24A6B: cpu.execute_instruction<0x20>(0x004EF0, 3); return true;
    // src/battle/main_battle_routine.asm:491 BEQ @UNKNOWN23
    case 0xC24A6C: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/battle/main_battle_routine.asm:492 LDA CURRENT_BATTLE_GROUP
    case 0xC24A6E: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/main_battle_routine.asm:493 JSL ENEMY_SELECT_MODE
    case 0xC24A71: cpu.execute_instruction<0x22>(0xC1DF69, 4); return true;
    // src/battle/main_battle_routine.asm:494 STA @LOCAL10
    case 0xC24A75: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:495 STA CURRENT_BATTLE_GROUP
    case 0xC24A77: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24A7A.
    case 0xC24A7C: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24A7F.
    case 0xC24A81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A82: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:497 LDA @LOCAL10
    case 0xC24A84: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:498 ASL
    case 0xC24A86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:499 ASL
    case 0xC24A87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:500 TAX
    case 0xC24A88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A89: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8B: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8D: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:502 CLC
    case 0xC24A91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:503 ADC @VIRTUAL0A
    case 0xC24A92: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:504 STA @VIRTUAL0A
    case 0xC24A94: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:505 LDA [@VIRTUAL0A]
    case 0xC24A96: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:506 STA @LOCAL0E
    case 0xC24A98: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:507 TXA
    case 0xC24A9A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:508 INC
    case 0xC24A9B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:509 INC
    case 0xC24A9C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:510 CLC
    case 0xC24A9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:511 ADC @VIRTUAL06
    case 0xC24A9E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:512 STA @VIRTUAL06
    case 0xC24AA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:513 LDA [@VIRTUAL06]
    case 0xC24AA2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:515 STA @LOCAL0F
    case 0xC24AA4: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:519 LDA @LOCAL10
    case 0xC24AA6: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:520 ASL
    case 0xC24AA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:521 ASL
    case 0xC24AA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:522 ASL
    case 0xC24AAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:523 CLC
    case 0xC24AAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC24AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC24AAC.
    case 0xC24AAE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:525 TAX
    case 0xC24AAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:526 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC24AB0: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    case 0xC24AB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC24AB4.
    case 0xC24AB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:529 STA @LOCAL0D
    case 0xC24AB7: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:533 JMP @UNKNOWN32
    case 0xC24AB9: cpu.execute_instruction<0x4C>(0x004B6F, 3); return true;
    // src/battle/main_battle_routine.asm:535 LDA PAD_HELD
    case 0xC24ABC: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    case 0xC24ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC24ABF.
    case 0xC24AC1: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    case 0xC24AC2: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC24AC1.
    case 0xC24AC3: cpu.execute_instruction<0x0C>(0x0033A5, 3); return true;
    // src/battle/main_battle_routine.asm:538 LDA @LOCAL11
    case 0xC24AC4: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:539 CMP #15
    case 0xC24AC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:539 CMP #15
    // Overlapping static entry reached from 0xC24AC6.
    case 0xC24AC8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:540 BCS @UNKNOWN25
    case 0xC24AC9: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:541 INC @LOCAL11
    case 0xC24ACB: cpu.execute_instruction<0xE6>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:542 JMP @UNKNOWN32
    case 0xC24ACD: cpu.execute_instruction<0x4C>(0x004B6F, 3); return true;
    // src/battle/main_battle_routine.asm:544 LDA PAD_HELD
    case 0xC24AD0: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    case 0xC24AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC24AD3.
    case 0xC24AD5: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:546 BEQ @UNKNOWN25
    case 0xC24AD6: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:547 LDA @LOCAL11
    case 0xC24AD8: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:548 CMP #1
    case 0xC24ADA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:548 CMP #1
    // Overlapping static entry reached from 0xC24ADA.
    case 0xC24ADC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24ADD: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24ADF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:550 DEC @LOCAL11
    case 0xC24AE1: cpu.execute_instruction<0xC6>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:551 JMP @UNKNOWN32
    case 0xC24AE3: cpu.execute_instruction<0x4C>(0x004B6F, 3); return true;
    // src/battle/main_battle_routine.asm:553 LDA PAD_HELD
    case 0xC24AE6: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    case 0xC24AE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC24AE9.
    case 0xC24AEB: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    case 0xC24AEC: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC24AEB.
    case 0xC24AED: cpu.execute_instruction<0x0D>(0x0035A5, 3); return true;
    // src/battle/main_battle_routine.asm:556 LDA @LOCAL12
    case 0xC24AEE: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:557 CMP #1
    case 0xC24AF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:557 CMP #1
    // Overlapping static entry reached from 0xC24AF0.
    case 0xC24AF2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24AF3: cpu.execute_instruction<0x90>(0x000019, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24AF5: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:559 DEC @LOCAL12
    case 0xC24AF7: cpu.execute_instruction<0xC6>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:560 BRA @UNKNOWN32
    case 0xC24AF9: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/battle/main_battle_routine.asm:562 LDA PAD_HELD
    case 0xC24AFB: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    case 0xC24AFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    // Overlapping static entry reached from 0xC24AFE.
    case 0xC24B00: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:564 BEQ @UNKNOWN27
    case 0xC24B01: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:565 LDA @LOCAL12
    case 0xC24B03: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    case 0xC24B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC24B05.
    case 0xC24B07: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:567 BCS @UNKNOWN27
    case 0xC24B08: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:568 INC @LOCAL12
    case 0xC24B0A: cpu.execute_instruction<0xE6>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:569 BRA @UNKNOWN32
    case 0xC24B0C: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:571 LDA PAD_PRESS
    case 0xC24B0E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    case 0xC24B11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24B40.
    case 0xC24B12: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24B11.
    case 0xC24B13: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:573 BEQ @UNKNOWN28
    case 0xC24B14: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:574 LDA HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24B16: cpu.execute_instruction<0xAD>(0x00ABE1, 3); return true;
    // src/battle/main_battle_routine.asm:575 STA @LOCAL12
    case 0xC24B19: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:576 BRA @UNKNOWN32
    case 0xC24B1B: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:578 LDA PAD_PRESS
    case 0xC24B1D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    case 0xC24B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC24B20.
    case 0xC24B22: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:580 BEQ @UNKNOWN29
    case 0xC24B23: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:581 LDA DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B25: cpu.execute_instruction<0xAD>(0x00AC45, 3); return true;
    // src/battle/main_battle_routine.asm:582 JSL SHOW_PSI_ANIMATION
    case 0xC24B28: cpu.execute_instruction<0x22>(0xC2E06B, 4); return true;
    // src/battle/main_battle_routine.asm:583 LDX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B2C: cpu.execute_instruction<0xAE>(0x00AC45, 3); return true;
    // src/battle/main_battle_routine.asm:584 INX
    case 0xC24B2F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:585 STX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B30: cpu.execute_instruction<0x8E>(0x00AC45, 3); return true;
    // src/battle/main_battle_routine.asm:586 CPX #34
    case 0xC24B33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000022, 2); else cpu.execute_instruction<0xE0>(0x000022, 3); return true;
    // src/battle/main_battle_routine.asm:586 CPX #34
    // Overlapping static entry reached from 0xC24B33.
    case 0xC24B35: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:587 BNE @UNKNOWN29
    case 0xC24B36: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/battle/main_battle_routine.asm:588 STZ DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B38: cpu.execute_instruction<0x9C>(0x00AC45, 3); return true;
    // src/battle/main_battle_routine.asm:590 LDA PAD_PRESS
    case 0xC24B3B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    case 0xC24B3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC24B3E.
    case 0xC24B40: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24B41: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24B43: cpu.execute_instruction<0x4C>(0x004A53, 3); return true;
    // src/battle/main_battle_routine.asm:593 LDX DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B46: cpu.execute_instruction<0xAE>(0x00AC49, 3); return true;
    // src/battle/main_battle_routine.asm:594 LDA DEBUGGING_CURRENT_SWIRL
    case 0xC24B49: cpu.execute_instruction<0xAD>(0x00AC47, 3); return true;
    // src/battle/main_battle_routine.asm:595 JSL UNKNOWN_C4A67E
    case 0xC24B4C: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/battle/main_battle_routine.asm:596 LDX DEBUGGING_CURRENT_SWIRL
    case 0xC24B50: cpu.execute_instruction<0xAE>(0x00AC47, 3); return true;
    // src/battle/main_battle_routine.asm:597 INX
    case 0xC24B53: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:598 STX DEBUGGING_CURRENT_SWIRL
    case 0xC24B54: cpu.execute_instruction<0x8E>(0x00AC47, 3); return true;
    // src/battle/main_battle_routine.asm:599 CPX #8
    case 0xC24B57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:599 CPX #8
    // Overlapping static entry reached from 0xC24B57.
    case 0xC24B59: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24B5A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24B5C: cpu.execute_instruction<0x4C>(0x004A53, 3); return true;
    // src/battle/main_battle_routine.asm:601 STZ DEBUGGING_CURRENT_SWIRL
    case 0xC24B5F: cpu.execute_instruction<0x9C>(0x00AC47, 3); return true;
    // src/battle/main_battle_routine.asm:602 LDA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B62: cpu.execute_instruction<0xAD>(0x00AC49, 3); return true;
    // src/battle/main_battle_routine.asm:603 INC
    case 0xC24B65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:604 AND #$0003
    case 0xC24B66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:604 AND #$0003
    // Overlapping static entry reached from 0xC24B66.
    case 0xC24B68: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:605 STA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B69: cpu.execute_instruction<0x8D>(0x00AC49, 3); return true;
    // src/battle/main_battle_routine.asm:606 JMP @UNKNOWN21
    case 0xC24B6C: cpu.execute_instruction<0x4C>(0x004A53, 3); return true;
    // src/battle/main_battle_routine.asm:609 LDA #0
    case 0xC24B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:609 LDA #0
    // Overlapping static entry reached from 0xC24B6F.
    case 0xC24B71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:610 STA @LOCAL0B
    case 0xC24B72: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:614 LDA @LOCAL11
    case 0xC24B74: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:615 AND #$0001
    case 0xC24B76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:615 AND #$0001
    // Overlapping static entry reached from 0xC24B76.
    case 0xC24B78: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:616 BEQ @UNKNOWN33
    case 0xC24B79: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:617 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:618 LDA #1
    case 0xC24B7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    case 0xC24B7F: cpu.execute_instruction<0x8D>(0x009B20, 3); return true;
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC24B7D.
    case 0xC24B80: cpu.execute_instruction<0x20>(0x00C29B, 3); return true;
    // src/battle/main_battle_routine.asm:621 REP #PROC_FLAGS::ACCUM8
    case 0xC24B82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:621 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24B80.
    case 0xC24B83: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/battle/main_battle_routine.asm:622 LDA #1
    case 0xC24B84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:622 LDA #1
    // Overlapping static entry reached from 0xC24B84.
    case 0xC24B86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:623 STA @LOCAL0B
    case 0xC24B87: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:629 LDA @LOCAL11
    case 0xC24B89: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:630 AND #$0002
    case 0xC24B8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:630 AND #$0002
    // Overlapping static entry reached from 0xC24B8B.
    case 0xC24B8D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:631 BEQ @UNKNOWN34
    case 0xC24B8E: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:632 LDA @LOCAL0B
    case 0xC24B90: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:633 CLC
    case 0xC24B92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:634 ADC #.LOWORD(GAME_STATE)
    case 0xC24B93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:634 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24B93.
    case 0xC24B95: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:635 TAX
    case 0xC24B96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:636 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:637 LDA #2
    case 0xC24B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x009D02, 3); return true;
    // src/battle/main_battle_routine.asm:638 STA a:game_state::party_members,X
    case 0xC24B9B: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:638 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24B99.
    case 0xC24B9C: cpu.execute_instruction<0x77>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:639 REP #PROC_FLAGS::ACCUM8
    case 0xC24B9E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:640 LDA @LOCAL0B
    case 0xC24BA0: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:641 INC
    case 0xC24BA2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:642 STA @LOCAL0B
    case 0xC24BA3: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:655 LDA @LOCAL11
    case 0xC24BA5: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:656 AND #$0004
    case 0xC24BA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:656 AND #$0004
    // Overlapping static entry reached from 0xC24BA7.
    case 0xC24BA9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:657 BEQ @UNKNOWN35
    case 0xC24BAA: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:658 LDA @LOCAL0B
    case 0xC24BAC: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:659 CLC
    case 0xC24BAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:660 ADC #.LOWORD(GAME_STATE)
    case 0xC24BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:660 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BAF.
    case 0xC24BB1: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:661 TAX
    case 0xC24BB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:662 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:663 LDA #3
    case 0xC24BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/battle/main_battle_routine.asm:664 STA a:game_state::party_members,X
    case 0xC24BB7: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:664 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24BB5.
    case 0xC24BB8: cpu.execute_instruction<0x77>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:665 REP #PROC_FLAGS::ACCUM8
    case 0xC24BBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:666 LDA @LOCAL0B
    case 0xC24BBC: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:667 INC
    case 0xC24BBE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:668 STA @LOCAL0B
    case 0xC24BBF: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:681 LDA @LOCAL11
    case 0xC24BC1: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:682 AND #$0008
    case 0xC24BC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:682 AND #$0008
    // Overlapping static entry reached from 0xC24BC3.
    case 0xC24BC5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:683 BEQ @UNKNOWN36
    case 0xC24BC6: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:684 LDA @LOCAL0B
    case 0xC24BC8: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:685 CLC
    case 0xC24BCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:686 ADC #.LOWORD(GAME_STATE)
    case 0xC24BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:686 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BCB.
    case 0xC24BCD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:687 TAX
    case 0xC24BCE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:688 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BCF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:689 LDA #4
    case 0xC24BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x009D04, 3); return true;
    // src/battle/main_battle_routine.asm:690 STA a:game_state::party_members,X
    case 0xC24BD3: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:690 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24BD1.
    case 0xC24BD4: cpu.execute_instruction<0x77>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:691 REP #PROC_FLAGS::ACCUM8
    case 0xC24BD6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:692 LDA @LOCAL0B
    case 0xC24BD8: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:693 INC
    case 0xC24BDA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:694 STA @LOCAL0B
    case 0xC24BDB: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:707 LDA @LOCAL0B
    case 0xC24BDD: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24BE1: cpu.execute_instruction<0x8D>(0x009B55, 3); return true;
    // src/battle/main_battle_routine.asm:714 BRA @UNKNOWN38
    case 0xC24BE4: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:718 CLC
    case 0xC24BE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:719 ADC #.LOWORD(GAME_STATE)
    case 0xC24BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:719 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BE7.
    case 0xC24BE9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:720 TAX
    case 0xC24BEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:721 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BEB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:722 STZ a:game_state::party_members,X
    case 0xC24BED: cpu.execute_instruction<0x9E>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:723 REP #PROC_FLAGS::ACCUM8
    case 0xC24BF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:724 LDA @LOCAL0B
    case 0xC24BF2: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:725 INC
    case 0xC24BF4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:726 STA @LOCAL0B
    case 0xC24BF5: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:733 REP #PROC_FLAGS::ACCUM8
    case 0xC24BF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:734 LDA @LOCAL0B
    case 0xC24BF9: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:735 CMP #$0006
    case 0xC24BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:735 CMP #$0006
    // Overlapping static entry reached from 0xC24BFB.
    case 0xC24BFD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:739 BCC @UNKNOWN37
    case 0xC24BFE: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // src/battle/main_battle_routine.asm:740 JMP @UNKNOWN2
    case 0xC24C00: cpu.execute_instruction<0x4C>(0x0047B5, 3); return true;
    // src/battle/main_battle_routine.asm:742 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24C03: cpu.execute_instruction<0xAD>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    case 0xC24C06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24C06.
    case 0xC24C08: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:744 JSL MULT168
    case 0xC24C09: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:746 CLC
    case 0xC24C0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    case 0xC24C0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24C0E.
    case 0xC24C10: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:748 TAX
    case 0xC24C11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:749 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24C12: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    case 0xC24C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    // Overlapping static entry reached from 0xC24C16.
    case 0xC24C18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:751 JSL CHANGE_MUSIC
    case 0xC24C19: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    case 0xC24C1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    // Overlapping static entry reached from 0xC24C1D.
    case 0xC24C1F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:754 JSL GET_EVENT_FLAG
    case 0xC24C20: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/battle/main_battle_routine.asm:755 CMP #0
    case 0xC24C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:755 CMP #0
    // Overlapping static entry reached from 0xC24C24.
    case 0xC24C26: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:756 BEQ @UNKNOWN41
    case 0xC24C27: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24C29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000082, 2); else cpu.execute_instruction<0xA2>(0x00A382, 3); return true;
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24C29.
    case 0xC24C2B: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24C2B.
    case 0xC24C2D: cpu.execute_instruction<0xD7>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24C2C.
    case 0xC24C2E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:759 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24C2F: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/main_battle_routine.asm:760 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:761 LDA #1
    case 0xC24C35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    case 0xC24C37: cpu.execute_instruction<0x8D>(0x00A392, 3); return true;
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    // Overlapping static entry reached from 0xC24C35.
    case 0xC24C38: cpu.execute_instruction<0x92>(0x0000A3, 2); return true;
    // src/battle/main_battle_routine.asm:763 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::ally_or_enemy
    case 0xC24C3A: cpu.execute_instruction<0x9C>(0x00A390, 3); return true;
    // src/battle/main_battle_routine.asm:764 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x008DD7, 3); return true;
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24C3F: cpu.execute_instruction<0x8D>(0x00A391, 3); return true;
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24C3D.
    case 0xC24C40: cpu.execute_instruction<0x91>(0x0000A3, 2); return true;
    // src/battle/main_battle_routine.asm:768 REP #PROC_FLAGS::ACCUM8
    case 0xC24C42: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:769 LDA #0
    case 0xC24C44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:769 LDA #0
    // Overlapping static entry reached from 0xC24C44.
    case 0xC24C46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:770 STA @LOCAL07
    case 0xC24C47: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:775 BRA @UNKNOWN45
    case 0xC24C49: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/battle/main_battle_routine.asm:778 CLC
    case 0xC24C4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:779 ADC #.LOWORD(GAME_STATE)
    case 0xC24C4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:779 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24C4C.
    case 0xC24C4E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:780 TAX
    case 0xC24C4F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:781 LDA a:game_state::party_members,X
    case 0xC24C50: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    case 0xC24C53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    // Overlapping static entry reached from 0xC24C53.
    case 0xC24C55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:787 STA @VIRTUAL04
    case 0xC24C56: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:788 STA @LOCAL08
    case 0xC24C58: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:789 LDA @VIRTUAL04
    case 0xC24C5A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:790 BEQ @UNKNOWN44
    case 0xC24C5C: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/main_battle_routine.asm:791 LDA @VIRTUAL04
    case 0xC24C5E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:792 CMP #4
    case 0xC24C60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:792 CMP #4
    // Overlapping static entry reached from 0xC24C60.
    case 0xC24C62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24C63: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24C65: cpu.execute_instruction<0xB0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:794 LDA @VIRTUAL04
    case 0xC24C67: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:795 DEC
    case 0xC24C69: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    case 0xC24C6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24C6A.
    case 0xC24C6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:797 JSL MULT168
    case 0xC24C6D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:798 CLC
    case 0xC24C71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24C72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24C72.
    case 0xC24C74: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/battle/main_battle_routine.asm:800 TAX
    case 0xC24C75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC24C76: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC24C74.
    case 0xC24C77: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    case 0xC24C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    // Overlapping static entry reached from 0xC24C79.
    case 0xC24C7B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    case 0xC24C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC24C7C.
    case 0xC24C7E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:804 BNE @UNKNOWN44
    case 0xC24C7F: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24C81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000082, 2); else cpu.execute_instruction<0xA2>(0x00A382, 3); return true;
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24C81.
    case 0xC24C83: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24C84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24C83.
    case 0xC24C85: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24C84.
    case 0xC24C86: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:807 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24C87: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/main_battle_routine.asm:808 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:809 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24C8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24C8F: cpu.execute_instruction<0x8D>(0x00A391, 3); return true;
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24C8D.
    case 0xC24C90: cpu.execute_instruction<0x91>(0x0000A3, 2); return true;
    // src/battle/main_battle_routine.asm:811 BRA @UNKNOWN46
    case 0xC24C92: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:814 LDA @LOCAL07
    case 0xC24C94: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:815 INC
    case 0xC24C96: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:816 STA @LOCAL07
    case 0xC24C97: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:825 CMP #TOTAL_PARTY_COUNT
    case 0xC24C99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:825 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24C99.
    case 0xC24C9B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:829 BCC @UNKNOWN42
    case 0xC24C9C: cpu.execute_instruction<0x90>(0x0000AD, 2); return true;
    // src/battle/main_battle_routine.asm:831 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24C9E: cpu.execute_instruction<0x22>(0xC1DB18, 4); return true;
    // src/battle/main_battle_routine.asm:832 LDA ENEMIES_IN_BATTLE
    case 0xC24CA2: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/main_battle_routine.asm:833 JSR RAND_LIMIT
    case 0xC24CA5: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/main_battle_routine.asm:835 ASL
    case 0xC24CA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:836 TAX
    case 0xC24CA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:837 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24CAA: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:839 STA @LOCAL0A
    case 0xC24CAD: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CAF.
    case 0xC24CB1: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB1.
    case 0xC24CB3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB3.
    case 0xC24CB5: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB4.
    case 0xC24CB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:845 LDA @LOCAL0A
    case 0xC24CB9: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    case 0xC24CBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24CBB.
    case 0xC24CBD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:850 JSL MULT168
    case 0xC24CBE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:853 STA @LOCAL0A
    case 0xC24CC2: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:857 CLC
    case 0xC24CC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    case 0xC24CC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC24CC5.
    case 0xC24CC7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CC8: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCA: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCC: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCE: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:860 CLC
    case 0xC24CD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:861 ADC @VIRTUAL0A
    case 0xC24CD1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:862 STA @VIRTUAL0A
    case 0xC24CD3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:863 LDA [@VIRTUAL0A]
    case 0xC24CD5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    case 0xC24CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    // Overlapping static entry reached from 0xC24CD7.
    case 0xC24CD9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    case 0xC24CDA: cpu.execute_instruction<0x8D>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:867 LDA @LOCAL0A
    case 0xC24CDD: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:871 CLC
    case 0xC24CDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    case 0xC24CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC24CE0.
    case 0xC24CE2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:873 CLC
    case 0xC24CE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:874 ADC @VIRTUAL06
    case 0xC24CE4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:875 STA @VIRTUAL06
    case 0xC24CE6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:876 LDA [@VIRTUAL06]
    case 0xC24CE8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    case 0xC24CEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    // Overlapping static entry reached from 0xC24CEA.
    case 0xC24CEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:878 BEQ @RARITY_ZERO
    case 0xC24CED: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:879 CMP #1
    case 0xC24CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:879 CMP #1
    // Overlapping static entry reached from 0xC24CEF.
    case 0xC24CF1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:880 BEQ @RARITY_ONE
    case 0xC24CF2: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:881 CMP #2
    case 0xC24CF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:881 CMP #2
    // Overlapping static entry reached from 0xC24CF4.
    case 0xC24CF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:882 BEQ @RARITY_TWO
    case 0xC24CF7: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/main_battle_routine.asm:883 CMP #3
    case 0xC24CF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:883 CMP #3
    // Overlapping static entry reached from 0xC24CF9.
    case 0xC24CFB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:884 BEQ @RARITY_THREE
    case 0xC24CFC: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/main_battle_routine.asm:885 CMP #4
    case 0xC24CFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:885 CMP #4
    // Overlapping static entry reached from 0xC24CFE.
    case 0xC24D00: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:886 BEQ @RARITY_FOUR
    case 0xC24D01: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/main_battle_routine.asm:887 CMP #5
    case 0xC24D03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:887 CMP #5
    // Overlapping static entry reached from 0xC24D03.
    case 0xC24D05: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:888 BEQ @RARITY_FIVE
    case 0xC24D06: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/main_battle_routine.asm:889 CMP #6
    case 0xC24D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:889 CMP #6
    // Overlapping static entry reached from 0xC24D08.
    case 0xC24D0A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:890 BEQ @RARITY_SIX
    case 0xC24D0B: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:891 BRA @RARITY_SEVEN
    case 0xC24D0D: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/battle/main_battle_routine.asm:893 JSL RAND
    case 0xC24D0F: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    case 0xC24D13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    // Overlapping static entry reached from 0xC24D13.
    case 0xC24D15: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:895 BEQ @RARITY_SEVEN
    case 0xC24D16: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/main_battle_routine.asm:896 STZ ITEM_DROPPED
    case 0xC24D18: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:897 BRA @RARITY_SEVEN
    case 0xC24D1B: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:899 JSL RAND
    case 0xC24D1D: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    case 0xC24D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    // Overlapping static entry reached from 0xC24D21.
    case 0xC24D23: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:901 BEQ @RARITY_SEVEN
    case 0xC24D24: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/main_battle_routine.asm:902 STZ ITEM_DROPPED
    case 0xC24D26: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:903 BRA @RARITY_SEVEN
    case 0xC24D29: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/battle/main_battle_routine.asm:905 JSL RAND
    case 0xC24D2B: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    case 0xC24D2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    // Overlapping static entry reached from 0xC24D2F.
    case 0xC24D31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:907 BEQ @RARITY_SEVEN
    case 0xC24D32: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/main_battle_routine.asm:908 STZ ITEM_DROPPED
    case 0xC24D34: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:909 BRA @RARITY_SEVEN
    case 0xC24D37: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/battle/main_battle_routine.asm:911 JSL RAND
    case 0xC24D39: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    case 0xC24D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    // Overlapping static entry reached from 0xC24D3D.
    case 0xC24D3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:913 BEQ @RARITY_SEVEN
    case 0xC24D40: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:914 STZ ITEM_DROPPED
    case 0xC24D42: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:915 BRA @RARITY_SEVEN
    case 0xC24D45: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:917 JSL RAND
    case 0xC24D47: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    case 0xC24D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    // Overlapping static entry reached from 0xC24D4B.
    case 0xC24D4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:919 BEQ @RARITY_SEVEN
    case 0xC24D4E: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:920 STZ ITEM_DROPPED
    case 0xC24D50: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:921 BRA @RARITY_SEVEN
    case 0xC24D53: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:923 JSL RAND
    case 0xC24D55: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    case 0xC24D59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    // Overlapping static entry reached from 0xC24D59.
    case 0xC24D5B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:925 BEQ @RARITY_SEVEN
    case 0xC24D5C: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:926 STZ ITEM_DROPPED
    case 0xC24D5E: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:927 BRA @RARITY_SEVEN
    case 0xC24D61: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:929 JSL RAND
    case 0xC24D63: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    case 0xC24D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    // Overlapping static entry reached from 0xC24D67.
    case 0xC24D69: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:931 BEQ @RARITY_SEVEN
    case 0xC24D6A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/main_battle_routine.asm:932 STZ ITEM_DROPPED
    case 0xC24D6C: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:934 LDA ITEM_DROPPED
    case 0xC24D6F: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24D72: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24D74: cpu.execute_instruction<0x4C>(0x004E00, 3); return true;
    // src/battle/main_battle_routine.asm:936 LDX #0
    case 0xC24D77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:936 LDX #0
    // Overlapping static entry reached from 0xC24D77.
    case 0xC24D79: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:937 STX @LOCAL10
    case 0xC24D7A: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:938 BRA @CONSOLATION_OUTER_LOOP_ENTRY
    case 0xC24D7C: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/battle/main_battle_routine.asm:940 LDY #8
    case 0xC24D7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:940 LDY #8
    // Overlapping static entry reached from 0xC24D7E.
    case 0xC24D80: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:942 STY @LOCAL0A
    case 0xC24D81: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:946 BRA @CONSOLATION_INNER_LOOP_ENTRY
    case 0xC24D83: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/battle/main_battle_routine.asm:948 TYA
    case 0xC24D85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    case 0xC24D86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24D86.
    case 0xC24D88: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:950 JSL MULT168
    case 0xC24D89: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:952 STA @LOCAL09
    case 0xC24D8D: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:953 TAX
    case 0xC24D8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:954 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24D90: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    case 0xC24D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    // Overlapping static entry reached from 0xC24D93.
    case 0xC24D95: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:956 BEQ @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24D96: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00302E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D98.
    case 0xC24D9A: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9A.
    case 0xC24D9C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9C.
    case 0xC24D9E: cpu.execute_instruction<0xC2>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9D.
    case 0xC24D9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24DA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:958 LDX @LOCAL10
    case 0xC24DA2: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:959 TXA
    case 0xC24DA4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DAA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:961 STA @VIRTUAL02
    case 0xC24DAC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:962 LDA @LOCAL09
    case 0xC24DAE: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:963 TAX
    case 0xC24DB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:964 LDA @VIRTUAL02
    case 0xC24DB1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB3: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB5: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB7: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB9: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:966 CLC
    case 0xC24DBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:967 ADC @VIRTUAL0A
    case 0xC24DBC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:968 STA @VIRTUAL0A
    case 0xC24DBE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:969 LDA [@VIRTUAL0A]
    case 0xC24DC0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    case 0xC24DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    // Overlapping static entry reached from 0xC24DC2.
    case 0xC24DC4: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:971 CMP BATTLERS_TABLE + battler::id,X
    case 0xC24DC5: cpu.execute_instruction<0xDD>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:972 BNE @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24DC8: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:973 LDA #7
    case 0xC24DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:973 LDA #7
    // Overlapping static entry reached from 0xC24DCA.
    case 0xC24DCC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:974 JSR RAND_LIMIT
    case 0xC24DCD: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/main_battle_routine.asm:975 PHA
    case 0xC24DD0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:976 LDA @VIRTUAL02
    case 0xC24DD1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:977 PLY
    case 0xC24DD3: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:978 STY @VIRTUAL02
    case 0xC24DD4: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:979 CLC
    case 0xC24DD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    case 0xC24DD7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:981 INC
    case 0xC24DD9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:982 CLC
    case 0xC24DDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:983 ADC @VIRTUAL06
    case 0xC24DDB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:984 STA @VIRTUAL06
    case 0xC24DDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:985 LDA [@VIRTUAL06]
    case 0xC24DDF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    case 0xC24DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    // Overlapping static entry reached from 0xC24DE1.
    case 0xC24DE3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:987 STA ITEM_DROPPED
    case 0xC24DE4: cpu.execute_instruction<0x8D>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:990 LDY @LOCAL0A
    case 0xC24DE7: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:991 INY
    case 0xC24DE9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:992 STY @LOCAL0A
    case 0xC24DEA: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    case 0xC24DEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24DEC.
    case 0xC24DEE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1000 BCC @CONSOLATION_INNER_LOOP_BEGIN
    case 0xC24DEF: cpu.execute_instruction<0x90>(0x000094, 2); return true;
    // src/battle/main_battle_routine.asm:1001 LDX @LOCAL10
    case 0xC24DF1: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1002 INX
    case 0xC24DF3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1003 STX @LOCAL10
    case 0xC24DF4: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1005 CPX #2
    case 0xC24DF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1005 CPX #2
    // Overlapping static entry reached from 0xC24DF6.
    case 0xC24DF8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DF9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DFB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DFD: cpu.execute_instruction<0x4C>(0x004D7E, 3); return true;
    // src/battle/main_battle_routine.asm:1009 STZ @LOCAL09
    case 0xC24E00: cpu.execute_instruction<0x64>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1013 LDA BATTLE_INITIATIVE
    case 0xC24E02: cpu.execute_instruction<0xAD>(0x005142, 3); return true;
    // src/battle/main_battle_routine.asm:1014 BEQ @UNKNOWN64
    case 0xC24E05: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1015 CMP #1
    case 0xC24E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1015 CMP #1
    // Overlapping static entry reached from 0xC24E07.
    case 0xC24E09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1016 BEQ @UNKNOWN62
    case 0xC24E0A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1017 CMP #2
    case 0xC24E0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1017 CMP #2
    // Overlapping static entry reached from 0xC24E0C.
    case 0xC24E0E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1018 BEQ @UNKNOWN63
    case 0xC24E0F: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:1019 BRA @UNKNOWN64
    case 0xC24E11: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    case 0xC24E13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24E13.
    case 0xC24E15: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1023 STA @LOCAL09
    case 0xC24E16: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1027 BRA @UNKNOWN64
    case 0xC24E18: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC24E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC24E1A.
    case 0xC24E1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1031 STA @LOCAL09
    case 0xC24E1D: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1036 STZ BATTLE_INITIATIVE
    case 0xC24E1F: cpu.execute_instruction<0x9C>(0x005142, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24E22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24E22.
    case 0xC24E24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24E25: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24E29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E29.
    case 0xC24E2B: cpu.execute_instruction<0xA4>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    case 0xC24E2C: cpu.execute_instruction<0x8D>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24E2B.
    case 0xC24E2D: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:1041 LDA #1
    case 0xC24E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24E2F.
    case 0xC24E31: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1042 JSL FIX_ATTACKER_NAME
    case 0xC24E32: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E36.
    case 0xC24E38: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E39: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E38.
    case 0xC24E3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E3B.
    case 0xC24E3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E3E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1044 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24E40: cpu.execute_instruction<0xAD>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    case 0xC24E43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24E43.
    case 0xC24E45: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1046 JSL MULT168
    case 0xC24E46: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1047 CLC
    case 0xC24E4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    case 0xC24E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    // Overlapping static entry reached from 0xC24E4B.
    case 0xC24E4D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1049 CLC
    case 0xC24E4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1050 ADC @VIRTUAL0A
    case 0xC24E4F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1051 STA @VIRTUAL0A
    case 0xC24E51: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E53.
    case 0xC24E55: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E56: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E58: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E59: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E5D: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:1054 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC24E67: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1056 LDA @LOCAL09
    case 0xC24E6B: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    case 0xC24E6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24E6D.
    case 0xC24E6F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1061 BNE @UNKNOWN65
    case 0xC24E70: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x004718, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E72.
    case 0xC24E74: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E74.
    case 0xC24E76: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E77.
    case 0xC24E79: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E7A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E7C: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1064 LDA #0
    case 0xC24E80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1064 LDA #0
    // Overlapping static entry reached from 0xC24E80.
    case 0xC24E82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1065 STA @LOCAL10
    case 0xC24E83: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1066 BRA @UNKNOWN70
    case 0xC24E85: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    case 0xC24E87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E87.
    case 0xC24E89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1069 JSL MULT168
    case 0xC24E8A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1070 CLC
    case 0xC24E8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00A41E, 3); return true;
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E8F.
    case 0xC24E91: cpu.execute_instruction<0xA4>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    case 0xC24E92: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24E91.
    case 0xC24E93: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    case 0xC24E95: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    case 0xC24E99: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:1075 LDA a:battler::afflictions+2,X
    case 0xC24E9C: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    case 0xC24E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    // Overlapping static entry reached from 0xC24E9F.
    case 0xC24EA1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    case 0xC24EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC24EA2.
    case 0xC24EA4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1078 BNE @UNKNOWN67
    case 0xC24EA5: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24EA7.
    case 0xC24EA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24EAC.
    case 0xC24EAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EB1: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1081 LDX CURRENT_TARGET
    case 0xC24EB5: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:1082 LDA a:battler::afflictions+4,X
    case 0xC24EB8: cpu.execute_instruction<0xBD>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    case 0xC24EBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    // Overlapping static entry reached from 0xC24EBB.
    case 0xC24EBD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1084 BEQ @UNKNOWN68
    case 0xC24EBE: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24EC0.
    case 0xC24EC2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24EC5.
    case 0xC24EC7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24ECA: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1087 LDX CURRENT_TARGET
    case 0xC24ECE: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:1088 LDA a:battler::afflictions+3,X
    case 0xC24ED1: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    case 0xC24ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    // Overlapping static entry reached from 0xC24ED4.
    case 0xC24ED6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    case 0xC24ED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC24ED7.
    case 0xC24ED9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1091 BNE @UNKNOWN69
    case 0xC24EDA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24EDC.
    case 0xC24EDE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EDF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24EE1.
    case 0xC24EE3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE6: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1094 LDA @LOCAL10
    case 0xC24EEA: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1095 INC
    case 0xC24EEC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1096 STA @LOCAL10
    case 0xC24EED: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    case 0xC24EEF: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    // Overlapping static entry reached from 0xC24A6B.
    case 0xC24EF0: cpu.execute_instruction<0x8C>(0x0090A1, 3); return true;
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    case 0xC24EF2: cpu.execute_instruction<0x90>(0x000093, 2); return true;
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    // Overlapping static entry reached from 0xC24EF0.
    case 0xC24EF3: cpu.execute_instruction<0x93>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC24EF4: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC24EF3.
    case 0xC24EF5: cpu.execute_instruction<0x36>(0x0000DB, 2); return true;
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC24EF5.
    case 0xC24EF7: cpu.execute_instruction<0xC1>(0x000064, 2); return true;
    // src/battle/main_battle_routine.asm:1102 STZ @LOCAL06
    case 0xC24EF8: cpu.execute_instruction<0x64>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1102 STZ @LOCAL06
    // Overlapping static entry reached from 0xC24EF7.
    case 0xC24EF9: cpu.execute_instruction<0x1D>(0x001DA5, 3); return true;
    // src/battle/main_battle_routine.asm:1103 LDA @LOCAL06
    case 0xC24EFA: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1108 STA SPECIAL_DEFEAT
    case 0xC24EFC: cpu.execute_instruction<0x8D>(0x00ABE3, 3); return true;
    // src/battle/main_battle_routine.asm:1109 JMP @UNKNOWN236
    case 0xC24EFF: cpu.execute_instruction<0x4C>(0x005FB8, 3); return true;
    // src/battle/main_battle_routine.asm:1112 INC @LOCAL0B
    case 0xC24F02: cpu.execute_instruction<0xE6>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:1116 JSL UNKNOWN_C2F917
    case 0xC24F04: cpu.execute_instruction<0x22>(0xC2F830, 4); return true;
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC24F08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AE, 2); else cpu.execute_instruction<0xA0>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24F08.
    case 0xC24F0A: cpu.execute_instruction<0xA1>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    case 0xC24F0B: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    // Overlapping static entry reached from 0xC24F0A.
    case 0xC24F0C: cpu.execute_instruction<0x31>(0x0000A2, 2); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    case 0xC24F0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24F0C.
    case 0xC24F0E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24F0D.
    case 0xC24F0F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:1120 STX @LOCAL05
    case 0xC24F10: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1121 BRA @UNKNOWN74
    case 0xC24F12: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/battle/main_battle_routine.asm:1123 TYX
    case 0xC24F14: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1124 SEP #PROC_FLAGS::ACCUM8
    case 0xC24F15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1125 STZ a:battler::has_taken_turn,X
    case 0xC24F17: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/battle/main_battle_routine.asm:1126 REP #PROC_FLAGS::ACCUM8
    case 0xC24F1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1127 LDA a:battler::consciousness,Y
    case 0xC24F1C: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    case 0xC24F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    // Overlapping static entry reached from 0xC24F1F.
    case 0xC24F21: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1129 BEQ @UNKNOWN73
    case 0xC24F22: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1130 TYA
    case 0xC24F24: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1131 CLC
    case 0xC24F25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    case 0xC24F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    // Overlapping static entry reached from 0xC24F26.
    case 0xC24F28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1133 STA @VIRTUAL02
    case 0xC24F29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1134 LDA a:battler::speed,Y
    case 0xC24F2B: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:1135 JSR FIFTY_PERCENT_VARIANCE
    case 0xC24F2E: cpu.execute_instruction<0x20>(0x006983, 3); return true;
    // src/battle/main_battle_routine.asm:1136 LDX @VIRTUAL02
    case 0xC24F31: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1137 STA __BSS_START__,X
    case 0xC24F33: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1138 CMP #0
    case 0xC24F36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1138 CMP #0
    // Overlapping static entry reached from 0xC24F36.
    case 0xC24F38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1139 BNE @UNKNOWN73
    case 0xC24F39: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1140 LDA #1
    case 0xC24F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1140 LDA #1
    // Overlapping static entry reached from 0xC24F3B.
    case 0xC24F3D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:1141 LDX @VIRTUAL02
    case 0xC24F3E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1142 STA __BSS_START__,X
    case 0xC24F40: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1144 LDY @LOCAL10
    case 0xC24F43: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1145 TYA
    case 0xC24F45: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1146 CLC
    case 0xC24F46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    case 0xC24F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F47.
    case 0xC24F49: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:1148 TAY
    case 0xC24F4A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1149 STY @LOCAL10
    case 0xC24F4B: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1150 LDX @LOCAL05
    case 0xC24F4D: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1151 INX
    case 0xC24F4F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1152 STX @LOCAL05
    case 0xC24F50: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    case 0xC24F52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24F52.
    case 0xC24F54: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1155 BCC @UNKNOWN72
    case 0xC24F55: cpu.execute_instruction<0x90>(0x0000BD, 2); return true;
    // src/battle/main_battle_routine.asm:1156 LDA #0
    case 0xC24F57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1156 LDA #0
    // Overlapping static entry reached from 0xC24F57.
    case 0xC24F59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1157 STA @LOCAL10
    case 0xC24F5A: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1158 BRA @UNKNOWN76
    case 0xC24F5C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    case 0xC24F5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1161 JSL MULT168
    case 0xC24F61: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1162 TAX
    case 0xC24F65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1163 SEP #PROC_FLAGS::ACCUM8
    case 0xC24F66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1164 STZ PARTY_CHARACTERS + char_struct::unknown94,X
    case 0xC24F68: cpu.execute_instruction<0x9E>(0x009CDC, 3); return true;
    // src/battle/main_battle_routine.asm:1165 REP #PROC_FLAGS::ACCUM8
    case 0xC24F6B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1166 LDA @LOCAL10
    case 0xC24F6D: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1167 INC
    case 0xC24F6F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1168 STA @LOCAL10
    case 0xC24F70: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1170 CMP #4
    case 0xC24F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1170 CMP #4
    // Overlapping static entry reached from 0xC24F72.
    case 0xC24F74: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1171 BCC @UNKNOWN75
    case 0xC24F75: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/main_battle_routine.asm:1172 LDY #0
    case 0xC24F77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1172 LDY #0
    // Overlapping static entry reached from 0xC24F77.
    case 0xC24F79: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1173 STY @LOCAL04
    case 0xC24F7A: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1174 TYA
    case 0xC24F7C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1175 STA @VIRTUAL02
    case 0xC24F7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1176 JMP @UNKNOWN106
    case 0xC24F7F: cpu.execute_instruction<0x4C>(0x0051B4, 3); return true;
    // src/battle/main_battle_routine.asm:1178 JSL CHECK_DEAD_PLAYERS
    case 0xC24F82: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:1179 LDA #0
    case 0xC24F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1179 LDA #0
    // Overlapping static entry reached from 0xC24F86.
    case 0xC24F88: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1180 JSL COUNT_CHARS
    case 0xC24F89: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:1181 CMP #0
    case 0xC24F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1181 CMP #0
    // Overlapping static entry reached from 0xC24F8D.
    case 0xC24F8F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1182 BNE @UNKNOWN78
    case 0xC24F90: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24F92.
    case 0xC24F94: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24F95: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/battle/main_battle_routine.asm:1184 JMP @UNKNOWN225
    case 0xC24F99: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:1187 LDA @VIRTUAL02
    case 0xC24F9C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1188 CLC
    case 0xC24F9E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1189 ADC #.LOWORD(GAME_STATE)
    case 0xC24F9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:1189 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24F9F.
    case 0xC24FA1: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1190 TAX
    case 0xC24FA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1191 LDA a:game_state::party_members,X
    case 0xC24FA3: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    case 0xC24FA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    // Overlapping static entry reached from 0xC24FA6.
    case 0xC24FA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1197 STA @VIRTUAL04
    case 0xC24FA9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1198 STA @LOCAL08
    case 0xC24FAB: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1199 LDA @VIRTUAL04
    case 0xC24FAD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC24FAF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC24FB1: cpu.execute_instruction<0x4C>(0x0051B0, 3); return true;
    // src/battle/main_battle_routine.asm:1201 LDA @VIRTUAL04
    case 0xC24FB4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1202 CMP #4
    case 0xC24FB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1202 CMP #4
    // Overlapping static entry reached from 0xC24FB6.
    case 0xC24FB8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FB9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FBB: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FBD: cpu.execute_instruction<0x4C>(0x0051B0, 3); return true;
    // src/battle/main_battle_routine.asm:1205 LDA @LOCAL09
    case 0xC24FC0: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1209 CMP #2
    case 0xC24FC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1209 CMP #2
    // Overlapping static entry reached from 0xC24FC2.
    case 0xC24FC4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1210 BEQ @UNKNOWN82
    case 0xC24FC5: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/main_battle_routine.asm:1212 LDA @LOCAL09
    case 0xC24FC7: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1216 CMP #3
    case 0xC24FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1216 CMP #3
    // Overlapping static entry reached from 0xC24FC9.
    case 0xC24FCB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1217 BEQ @UNKNOWN82
    case 0xC24FCC: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/battle/main_battle_routine.asm:1219 LDA @LOCAL09
    case 0xC24FCE: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1223 CMP #4
    case 0xC24FD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1223 CMP #4
    // Overlapping static entry reached from 0xC24FD0.
    case 0xC24FD2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1224 BEQ @UNKNOWN82
    case 0xC24FD3: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:1225 LDA @VIRTUAL04
    case 0xC24FD5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1226 CMP #4
    case 0xC24FD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1226 CMP #4
    // Overlapping static entry reached from 0xC24FD7.
    case 0xC24FD9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1227 BNE @UNKNOWN81
    case 0xC24FDA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1228 LDA MIRROR_ENEMY
    case 0xC24FDC: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:1229 BNE @UNKNOWN82
    case 0xC24FDF: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:1231 LDA @VIRTUAL04
    case 0xC24FE1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1232 DEC
    case 0xC24FE3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    case 0xC24FE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24FE4.
    case 0xC24FE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1234 JSL MULT168
    case 0xC24FE7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1235 CLC
    case 0xC24FEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24FEC.
    case 0xC24FEE: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/battle/main_battle_routine.asm:1237 TAX
    case 0xC24FEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC24FF0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC24FEE.
    case 0xC24FF1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    case 0xC24FF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    // Overlapping static entry reached from 0xC24FF3.
    case 0xC24FF5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    case 0xC24FF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC24FF6.
    case 0xC24FF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1241 BEQ @UNKNOWN82
    case 0xC24FF9: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    case 0xC24FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC24FFB.
    case 0xC24FFD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1243 BEQ @UNKNOWN82
    case 0xC24FFE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1244 LDA a:STATUS_GROUP::TEMPORARY,X
    case 0xC25000: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    case 0xC25003: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    // Overlapping static entry reached from 0xC25003.
    case 0xC25005: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1246 TAX
    case 0xC25006: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    case 0xC25007: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25007.
    case 0xC25009: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1248 BEQ @UNKNOWN82
    case 0xC2500A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    case 0xC2500C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2500C.
    case 0xC2500E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1250 BNE @UNKNOWN83
    case 0xC2500F: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC25011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC25011.
    case 0xC25013: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1253 STA @LOCAL07
    case 0xC25014: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1254 SEP #PROC_FLAGS::ACCUM8
    case 0xC25016: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1255 STZ BATTLE_ITEM_USED
    case 0xC25018: cpu.execute_instruction<0x9C>(0x00AB7E, 3); return true;
    // src/battle/main_battle_routine.asm:1256 JMP @UNKNOWN91
    case 0xC2501B: cpu.execute_instruction<0x4C>(0x0050A9, 3); return true;
    // src/battle/main_battle_routine.asm:1258 LDA @VIRTUAL02
    case 0xC2501E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1259 JSL REDIRECT_C43573
    case 0xC25020: cpu.execute_instruction<0x22>(0xC1DBA9, 4); return true;
    // src/battle/main_battle_routine.asm:1260 LDY @LOCAL04
    case 0xC25024: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1261 TYX
    case 0xC25026: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1262 LDA @VIRTUAL04
    case 0xC25027: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1263 JSL BATTLE_SELECTION_MENU
    case 0xC25029: cpu.execute_instruction<0x22>(0xC23040, 4); return true;
    // src/battle/main_battle_routine.asm:1265 STA @LOCAL07
    case 0xC2502D: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1266 JSL REDIRECT_C3E6F8
    case 0xC2502F: cpu.execute_instruction<0x22>(0xC1DBAF, 4); return true;
    // src/battle/main_battle_routine.asm:1267 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC25033: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/battle/main_battle_routine.asm:1268 LDA BATTLE_MODE
    case 0xC25037: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/battle/main_battle_routine.asm:1269 BEQ @UNKNOWN84
    case 0xC2503A: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1270 LDA @LOCAL07
    case 0xC2503C: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    case 0xC2503E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    // Overlapping static entry reached from 0xC2503E.
    case 0xC25040: cpu.execute_instruction<0xFF>(0x6405D0, 4); return true;
    // src/battle/main_battle_routine.asm:1272 BNE @UNKNOWN84
    case 0xC25041: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    case 0xC25043: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    // Overlapping static entry reached from 0xC25040.
    case 0xC25044: cpu.execute_instruction<0x17>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    case 0xC25045: cpu.execute_instruction<0x4C>(0x005FBF, 3); return true;
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    // Overlapping static entry reached from 0xC25044.
    case 0xC25046: cpu.execute_instruction<0xBF>(0x1FA55F, 4); return true;
    // src/battle/main_battle_routine.asm:1276 LDA @LOCAL07
    case 0xC25048: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    case 0xC2504A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000117, 3); return true;
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC2504A.
    case 0xC2504C: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    case 0xC2504D: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    // Overlapping static entry reached from 0xC2504C.
    case 0xC2504E: cpu.execute_instruction<0x1D>(0x0001A9, 3); return true;
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC2504F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC2504F.
    case 0xC25051: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1280 STA @LOCAL07
    case 0xC25052: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1282 LDA @LOCAL09
    case 0xC25054: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1286 CMP #1
    case 0xC25056: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1286 CMP #1
    // Overlapping static entry reached from 0xC25056.
    case 0xC25058: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1287 BNE @UNKNOWN85
    case 0xC25059: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1288 LDA #4
    case 0xC2505B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1288 LDA #4
    // Overlapping static entry reached from 0xC2505B.
    case 0xC2505D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1290 STA @LOCAL09
    case 0xC2505E: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1294 BRA @UNKNOWN86
    case 0xC25060: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1296 LDA #3
    case 0xC25062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1296 LDA #3
    // Overlapping static entry reached from 0xC25062.
    case 0xC25064: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1298 STA @LOCAL09
    case 0xC25065: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1303 LDA #1
    case 0xC25067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1303 LDA #1
    // Overlapping static entry reached from 0xC25067.
    case 0xC25069: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1305 STA @LOCAL0C
    case 0xC2506A: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:1310 LDA @LOCAL07
    case 0xC2506C: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    case 0xC2506E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    // Overlapping static entry reached from 0xC2506E.
    case 0xC25070: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25071: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25073: cpu.execute_instruction<0x4C>(0x0047B5, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC25070.
    case 0xC25074: cpu.execute_instruction<0xB5>(0x000047, 2); return true;
    // src/battle/main_battle_routine.asm:1313 CMP #0
    case 0xC25076: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC25076.
    case 0xC25078: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1314 BNE @UNKNOWN90
    case 0xC25079: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1315 LDY @LOCAL04
    case 0xC2507B: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC2507D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC2507F: cpu.execute_instruction<0x4C>(0x004F82, 3); return true;
    // src/battle/main_battle_routine.asm:1317 DEY
    case 0xC25082: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1318 STY @LOCAL04
    case 0xC25083: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1319 TYA
    case 0xC25085: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1320 ASL
    case 0xC25086: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1321 TAX
    case 0xC25087: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1322 LDA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25088: cpu.execute_instruction<0xBD>(0x00AC39, 3); return true;
    // src/battle/main_battle_routine.asm:1323 STA @VIRTUAL02
    case 0xC2508B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1324 JMP @UNKNOWN77
    case 0xC2508D: cpu.execute_instruction<0x4C>(0x004F82, 3); return true;
    // src/battle/main_battle_routine.asm:1326 LDY @LOCAL04
    case 0xC25090: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1327 TYA
    case 0xC25092: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1328 ASL
    case 0xC25093: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1329 TAX
    case 0xC25094: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1330 LDA @VIRTUAL02
    case 0xC25095: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1331 STA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25097: cpu.execute_instruction<0x9D>(0x00AC39, 3); return true;
    // src/battle/main_battle_routine.asm:1332 INY
    case 0xC2509A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1333 STY @LOCAL04
    case 0xC2509B: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1334 LDA @LOCAL07
    case 0xC2509D: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1335 CMP #1
    case 0xC2509F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1335 CMP #1
    // Overlapping static entry reached from 0xC2509F.
    case 0xC250A1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1336 BNE @UNKNOWN91
    case 0xC250A2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1337 LDA #0
    case 0xC250A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1337 LDA #0
    // Overlapping static entry reached from 0xC250A4.
    case 0xC250A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1338 STA @LOCAL07
    case 0xC250A7: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1340 REP #PROC_FLAGS::ACCUM8
    case 0xC250A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1341 STZ @LOCAL05
    case 0xC250AB: cpu.execute_instruction<0x64>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1342 JMP @UNKNOWN104
    case 0xC250AD: cpu.execute_instruction<0x4C>(0x0051A4, 3); return true;
    // src/battle/main_battle_routine.asm:1344 LDA @LOCAL05
    case 0xC250B0: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    case 0xC250B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC250B2.
    case 0xC250B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1346 JSL MULT168
    case 0xC250B5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1347 TAX
    case 0xC250B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1348 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC250BA: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    case 0xC250BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    // Overlapping static entry reached from 0xC250BD.
    case 0xC250BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC250C0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC250C2: cpu.execute_instruction<0x4C>(0x0051A2, 3); return true;
    // src/battle/main_battle_routine.asm:1351 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC250C5: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    case 0xC250C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    // Overlapping static entry reached from 0xC250C8.
    case 0xC250CA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC250CB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC250CD: cpu.execute_instruction<0x4C>(0x0051A2, 3); return true;
    // src/battle/main_battle_routine.asm:1354 LDA @VIRTUAL04
    case 0xC250D0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1355 CMP BATTLERS_TABLE + battler::id,X
    case 0xC250D2: cpu.execute_instruction<0xDD>(0x00A1AE, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC250D5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC250D7: cpu.execute_instruction<0x4C>(0x0051A2, 3); return true;
    // src/battle/main_battle_routine.asm:1357 LDA @LOCAL07
    case 0xC250DA: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1358 STA BATTLERS_TABLE+battler::current_action,X
    case 0xC250DC: cpu.execute_instruction<0x9D>(0x00A1B2, 3); return true;
    // src/battle/main_battle_routine.asm:1359 LDA BATTLE_ITEM_USED
    case 0xC250DF: cpu.execute_instruction<0xAD>(0x00AB7E, 3); return true;
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    case 0xC250E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    // Overlapping static entry reached from 0xC250E2.
    case 0xC250E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1361 BEQ @UNKNOWN96
    case 0xC250E5: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:1362 SEP #PROC_FLAGS::ACCUM8
    case 0xC250E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1363 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC250E9: cpu.execute_instruction<0xAD>(0x00AB80, 3); return true;
    // src/battle/main_battle_routine.asm:1364 STA BATTLERS_TABLE+7,X
    case 0xC250EC: cpu.execute_instruction<0x9D>(0x00A1B5, 3); return true;
    // src/battle/main_battle_routine.asm:1365 LDA BATTLE_ITEM_USED
    case 0xC250EF: cpu.execute_instruction<0xAD>(0x00AB7E, 3); return true;
    // src/battle/main_battle_routine.asm:1366 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC250F2: cpu.execute_instruction<0x9D>(0x00A1B6, 3); return true;
    // src/battle/main_battle_routine.asm:1367 BRA @UNKNOWN97
    case 0xC250F5: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1369 SEP #PROC_FLAGS::ACCUM8
    case 0xC250F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1370 STZ BATTLERS_TABLE+7,X
    case 0xC250F9: cpu.execute_instruction<0x9E>(0x00A1B5, 3); return true;
    // src/battle/main_battle_routine.asm:1371 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC250FC: cpu.execute_instruction<0xAD>(0x00AB80, 3); return true;
    // src/battle/main_battle_routine.asm:1372 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC250FF: cpu.execute_instruction<0x9D>(0x00A1B6, 3); return true;
    // src/battle/main_battle_routine.asm:1374 REP #PROC_FLAGS::ACCUM8
    case 0xC25102: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1375 LDA @LOCAL05
    case 0xC25104: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    case 0xC25106: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25106.
    case 0xC25108: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1377 JSL MULT168
    case 0xC25109: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1379 TAX
    case 0xC2510D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1380 STX @LOCAL0A
    case 0xC2510E: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1381 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC25110: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00AB83, 3); return true;
    // src/battle/main_battle_routine.asm:1381 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC25110.
    case 0xC25112: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1382 STA @LOCAL07
    case 0xC25113: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1383 TAX
    case 0xC25115: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1390 SEP #PROC_FLAGS::ACCUM8
    case 0xC25116: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1391 LDA __BSS_START__,X
    case 0xC25118: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1393 LDX @LOCAL0A
    case 0xC2511B: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1397 STA BATTLERS_TABLE + battler::action_targetting,X
    case 0xC2511D: cpu.execute_instruction<0x9D>(0x00A1B7, 3); return true;
    // src/battle/main_battle_routine.asm:1404 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25120: cpu.execute_instruction<0xAD>(0x00AB84, 3); return true;
    // src/battle/main_battle_routine.asm:1405 STA BATTLERS_TABLE + battler::current_target,X
    case 0xC25123: cpu.execute_instruction<0x9D>(0x00A1B8, 3); return true;
    // src/battle/main_battle_routine.asm:1407 REP #PROC_FLAGS::ACCUM8
    case 0xC25126: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1408 LDA @LOCAL07
    case 0xC25128: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1409 TAX
    case 0xC2512A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1414 LDA __BSS_START__,X
    case 0xC2512B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    case 0xC2512E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    // Overlapping static entry reached from 0xC2512E.
    case 0xC25130: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1416 CMP #1
    case 0xC25131: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1416 CMP #1
    // Overlapping static entry reached from 0xC25131.
    case 0xC25133: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1417 BNE @UNKNOWN101
    case 0xC25134: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/battle/main_battle_routine.asm:1418 LDA #0
    case 0xC25136: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1418 LDA #0
    // Overlapping static entry reached from 0xC25136.
    case 0xC25138: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1420 STA @LOCAL0A
    case 0xC25139: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1424 BRA @UNKNOWN100
    case 0xC2513B: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    case 0xC2513D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2513D.
    case 0xC2513F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1427 JSL MULT168
    case 0xC25140: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1428 TAX
    case 0xC25144: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1429 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25145: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    case 0xC25148: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    // Overlapping static entry reached from 0xC25148.
    case 0xC2514A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1431 BEQ @UNKNOWN99
    case 0xC2514B: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:1432 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2514D: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    case 0xC25150: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    // Overlapping static entry reached from 0xC25150.
    case 0xC25152: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1434 BNE @UNKNOWN99
    case 0xC25153: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1435 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25155: cpu.execute_instruction<0xAD>(0x00AB84, 3); return true;
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    case 0xC25158: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    // Overlapping static entry reached from 0xC25158.
    case 0xC2515A: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:1437 CMP BATTLERS_TABLE+battler::id,X
    case 0xC2515B: cpu.execute_instruction<0xDD>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:1438 BNE @UNKNOWN99
    case 0xC2515E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1439 LDA @LOCAL05
    case 0xC25160: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    case 0xC25162: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25162.
    case 0xC25164: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1441 JSL MULT168
    case 0xC25165: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1442 TAX
    case 0xC25169: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1444 LDA @LOCAL0A
    case 0xC2516A: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1448 SEP #PROC_FLAGS::ACCUM8
    case 0xC2516C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1449 INC
    case 0xC2516E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1450 STA BATTLERS_TABLE+battler::current_target,X
    case 0xC2516F: cpu.execute_instruction<0x9D>(0x00A1B8, 3); return true;
    // src/battle/main_battle_routine.asm:1451 BRA @UNKNOWN101
    case 0xC25172: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1454 LDA @LOCAL0A
    case 0xC25174: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1455 INC
    case 0xC25176: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1456 STA @LOCAL0A
    case 0xC25177: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1464 CMP #6
    case 0xC25179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1464 CMP #6
    // Overlapping static entry reached from 0xC25179.
    case 0xC2517B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1465 BCC @UNKNOWN98
    case 0xC2517C: cpu.execute_instruction<0x90>(0x0000BF, 2); return true;
    // src/battle/main_battle_routine.asm:1467 REP #PROC_FLAGS::ACCUM8
    case 0xC2517E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1468 LDA @LOCAL05
    case 0xC25180: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    case 0xC25182: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25182.
    case 0xC25184: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1470 JSL MULT168
    case 0xC25185: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1471 TAX
    case 0xC25189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1472 LDA BATTLERS_TABLE+battler::current_action,X
    case 0xC2518A: cpu.execute_instruction<0xBD>(0x00A1B2, 3); return true;
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    case 0xC2518D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC2518D.
    case 0xC2518F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1474 BNE @UNKNOWN102
    case 0xC25190: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:1475 SEP #PROC_FLAGS::ACCUM8
    case 0xC25192: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1476 LDA #1
    case 0xC25194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    case 0xC25196: cpu.execute_instruction<0x9D>(0x00A1D2, 3); return true;
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    // Overlapping static entry reached from 0xC25194.
    case 0xC25197: cpu.execute_instruction<0xD2>(0x0000A1, 2); return true;
    // src/battle/main_battle_routine.asm:1478 BRA @UNKNOWN105
    case 0xC25199: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1480 SEP #PROC_FLAGS::ACCUM8
    case 0xC2519B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1481 STZ BATTLERS_TABLE+battler::guarding,X
    case 0xC2519D: cpu.execute_instruction<0x9E>(0x00A1D2, 3); return true;
    // src/battle/main_battle_routine.asm:1482 BRA @UNKNOWN105
    case 0xC251A0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:1484 INC @LOCAL05
    case 0xC251A2: cpu.execute_instruction<0xE6>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1487 LDA @LOCAL05
    case 0xC251A4: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    case 0xC251A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC251A6.
    case 0xC251A8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251A9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251AB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251AD: cpu.execute_instruction<0x4C>(0x0050B0, 3); return true;
    // src/battle/main_battle_routine.asm:1491 REP #PROC_FLAGS::ACCUM8
    case 0xC251B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1492 INC @VIRTUAL02
    case 0xC251B2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1494 LDA @VIRTUAL02
    case 0xC251B4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1495 CMP #6
    case 0xC251B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1495 CMP #6
    // Overlapping static entry reached from 0xC251B6.
    case 0xC251B8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251B9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251BB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251BD: cpu.execute_instruction<0x4C>(0x004F82, 3); return true;
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC251C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC251C0.
    case 0xC251C2: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    case 0xC251C3: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    // Overlapping static entry reached from 0xC251C2.
    case 0xC251C4: cpu.execute_instruction<0x19>(0x0000A0, 3); return true;
    // src/battle/main_battle_routine.asm:1502 LDY #0
    case 0xC251C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1502 LDY #0
    // Overlapping static entry reached from 0xC251C5.
    case 0xC251C7: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1504 STY @LOCAL05
    case 0xC251C8: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1508 JMP @UNKNOWN132
    case 0xC251CA: cpu.execute_instruction<0x4C>(0x005403, 3); return true;
    // src/battle/main_battle_routine.asm:1511 LDY #battler::consciousness
    case 0xC251CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1511 LDY #battler::consciousness
    // Overlapping static entry reached from 0xC251CD.
    case 0xC251CF: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1512 LDA (@LOCAL04),Y
    case 0xC251D0: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1513 AND #$00FF
    case 0xC251D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1513 AND #$00FF
    // Overlapping static entry reached from 0xC251D2.
    case 0xC251D4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1514 BEQ @UNKNOWN109
    case 0xC251D5: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:1515 LDY #battler::ally_or_enemy
    case 0xC251D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1515 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC251D7.
    case 0xC251D9: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1516 LDA (@LOCAL04),Y
    case 0xC251DA: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    case 0xC251DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    // Overlapping static entry reached from 0xC251DC.
    case 0xC251DE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1526 CMP #1
    case 0xC251DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1526 CMP #1
    // Overlapping static entry reached from 0xC251DF.
    case 0xC251E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1527 BEQ @UNKNOWN111
    case 0xC251E2: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/battle/main_battle_routine.asm:1530 LDY #battler::npc_id
    case 0xC251E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:1530 LDY #battler::npc_id
    // Overlapping static entry reached from 0xC251E4.
    case 0xC251E6: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1531 LDA (@LOCAL04),Y
    case 0xC251E7: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1532 AND #$00FF
    case 0xC251E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1532 AND #$00FF
    // Overlapping static entry reached from 0xC251E9.
    case 0xC251EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1533 BNE @UNKNOWN111
    case 0xC251EC: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1534 LDA (@LOCAL04)
    case 0xC251EE: cpu.execute_instruction<0xB2>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    case 0xC251F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC251F0.
    case 0xC251F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC251F3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC251F5: cpu.execute_instruction<0x4C>(0x0053F6, 3); return true;
    // src/battle/main_battle_routine.asm:1545 LDA MIRROR_ENEMY
    case 0xC251F8: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC251FB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC251FD: cpu.execute_instruction<0x4C>(0x0053F6, 3); return true;
    // src/battle/main_battle_routine.asm:1549 LDA @LOCAL09
    case 0xC25200: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1553 CMP #1
    case 0xC25202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1553 CMP #1
    // Overlapping static entry reached from 0xC25202.
    case 0xC25204: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1554 BEQ @UNKNOWN112
    case 0xC25205: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1556 LDA @LOCAL09
    case 0xC25207: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1560 CMP #4
    case 0xC25209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1560 CMP #4
    // Overlapping static entry reached from 0xC25209.
    case 0xC2520B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1561 BNE @UNKNOWN113
    case 0xC2520C: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1564 LDY #battler::ally_or_enemy
    case 0xC2520E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1564 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2520E.
    case 0xC25210: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1565 LDA (@LOCAL04),Y
    case 0xC25211: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1566 AND #$00FF
    case 0xC25213: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1566 AND #$00FF
    // Overlapping static entry reached from 0xC25213.
    case 0xC25215: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1567 CMP #1
    case 0xC25216: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1567 CMP #1
    // Overlapping static entry reached from 0xC25216.
    case 0xC25218: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1568 BNE @UNKNOWN113
    case 0xC25219: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1569 LDX @LOCAL04
    case 0xC2521B: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1578 STZ a:battler::current_action,X
    case 0xC2521D: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1579 JMP @UNKNOWN131
    case 0xC25220: cpu.execute_instruction<0x4C>(0x0053F6, 3); return true;
    // src/battle/main_battle_routine.asm:1582 LDA @LOCAL09
    case 0xC25223: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1583 CMP #$0002
    case 0xC25225: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1583 CMP #$0002
    // Overlapping static entry reached from 0xC25225.
    case 0xC25227: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1584 BNE @UNKNOWN114
    case 0xC25228: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1585 LDY #battler::ally_or_enemy
    case 0xC2522A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1585 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2522A.
    case 0xC2522C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1586 LDA (@LOCAL04),Y
    case 0xC2522D: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1587 AND #$00FF
    case 0xC2522F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1587 AND #$00FF
    // Overlapping static entry reached from 0xC2522F.
    case 0xC25231: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1588 BNE @UNKNOWN114
    case 0xC25232: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1589 LDX @LOCAL04
    case 0xC25234: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1600 STZ a:battler::current_action,X
    case 0xC25236: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1601 JMP @UNKNOWN131
    case 0xC25239: cpu.execute_instruction<0x4C>(0x0053F6, 3); return true;
    // src/battle/main_battle_routine.asm:1604 LDY #battler::ally_or_enemy
    case 0xC2523C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1604 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2523C.
    case 0xC2523E: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1605 LDA (@LOCAL04),Y
    case 0xC2523F: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1606 AND #$00FF
    case 0xC25241: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1606 AND #$00FF
    // Overlapping static entry reached from 0xC25241.
    case 0xC25243: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1607 BNE @UNKNOWN115
    case 0xC25244: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1608 LDA (@LOCAL04)
    case 0xC25246: cpu.execute_instruction<0xB2>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    case 0xC25248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25248.
    case 0xC2524A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1618 BNE @UNKNOWN115
    case 0xC2524B: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2524D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2524D.
    case 0xC2524F: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25250: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2524F.
    case 0xC25251: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25251.
    case 0xC25253: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25252.
    case 0xC25254: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25255: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1620 LDA MIRROR_ENEMY
    case 0xC25257: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    case 0xC2525A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2525A.
    case 0xC2525C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1622 JSL MULT168
    case 0xC2525D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1623 CLC
    case 0xC25261: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1624 ADC @VIRTUAL06
    case 0xC25262: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1625 STA @VIRTUAL06
    case 0xC25264: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1626 BRA @UNKNOWN116
    case 0xC25266: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25268: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25268.
    case 0xC2526A: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2526B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526A.
    case 0xC2526C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2526D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526C.
    case 0xC2526E: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526D.
    case 0xC2526F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25270: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1630 LDA (@LOCAL04)
    case 0xC25272: cpu.execute_instruction<0xB2>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    case 0xC25274: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25274.
    case 0xC25276: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1636 JSL MULT168
    case 0xC25277: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1637 CLC
    case 0xC2527B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1638 ADC @VIRTUAL06
    case 0xC2527C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1639 STA @VIRTUAL06
    case 0xC2527E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1641 SEP #PROC_FLAGS::ACCUM8
    case 0xC25280: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    case 0xC25282: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    // Overlapping static entry reached from 0xC25282.
    case 0xC25284: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/main_battle_routine.asm:1643 LDA [@VIRTUAL06],Y
    case 0xC25285: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1644 REP #PROC_FLAGS::ACCUM8
    case 0xC25287: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    case 0xC25289: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    // Overlapping static entry reached from 0xC25289.
    case 0xC2528B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1646 BEQ @ACTION_PATTERN_1
    case 0xC2528C: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1647 CMP #1
    case 0xC2528E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1647 CMP #1
    // Overlapping static entry reached from 0xC2528E.
    case 0xC25290: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1648 BEQ @ACTION_PATTERN_2
    case 0xC25291: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1649 CMP #2
    case 0xC25293: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1649 CMP #2
    // Overlapping static entry reached from 0xC25293.
    case 0xC25295: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1650 BEQ @ACTION_PATTERN_3
    case 0xC25296: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/main_battle_routine.asm:1651 CMP #3
    case 0xC25298: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1651 CMP #3
    // Overlapping static entry reached from 0xC25298.
    case 0xC2529A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1652 BEQ @ACTION_PATTERN_4
    case 0xC2529B: cpu.execute_instruction<0xF0>(0x000072, 2); return true;
    // src/battle/main_battle_routine.asm:1653 JMP @UNKNOWN125
    case 0xC2529D: cpu.execute_instruction<0x4C>(0x005342, 3); return true;
    // src/battle/main_battle_routine.asm:1655 JSL RAND
    case 0xC252A0: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    case 0xC252A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    // Overlapping static entry reached from 0xC252A4.
    case 0xC252A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1657 STA @VIRTUAL04
    case 0xC252A7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1658 STA @LOCAL08
    case 0xC252A9: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1659 JMP @UNKNOWN125
    case 0xC252AB: cpu.execute_instruction<0x4C>(0x005342, 3); return true;
    // src/battle/main_battle_routine.asm:1661 JSL RAND
    case 0xC252AE: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    case 0xC252B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    // Overlapping static entry reached from 0xC252B2.
    case 0xC252B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1663 BEQ @ACTION_PATTERN_2_4TH
    case 0xC252B5: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1664 CMP #1
    case 0xC252B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1664 CMP #1
    // Overlapping static entry reached from 0xC252B7.
    case 0xC252B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1665 BEQ @ACTION_PATTERN_2_3RD
    case 0xC252BA: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1666 CMP #2
    case 0xC252BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1666 CMP #2
    // Overlapping static entry reached from 0xC252BC.
    case 0xC252BE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1667 BEQ @ACTION_PATTERN_2_2ND
    case 0xC252BF: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1668 CMP #3
    case 0xC252C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1668 CMP #3
    // Overlapping static entry reached from 0xC252C1.
    case 0xC252C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1669 BEQ @ACTION_PATTERN_2_2ND
    case 0xC252C4: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1670 BRA @ACTION_PATTERN_2_1ST
    case 0xC252C6: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1672 LDA #3
    case 0xC252C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1672 LDA #3
    // Overlapping static entry reached from 0xC252C8.
    case 0xC252CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1673 STA @VIRTUAL04
    case 0xC252CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1674 STA @LOCAL08
    case 0xC252CD: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1675 BRA @UNKNOWN125
    case 0xC252CF: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/battle/main_battle_routine.asm:1677 LDA #2
    case 0xC252D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1677 LDA #2
    // Overlapping static entry reached from 0xC252D1.
    case 0xC252D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1678 STA @VIRTUAL04
    case 0xC252D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1679 STA @LOCAL08
    case 0xC252D6: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1680 BRA @UNKNOWN125
    case 0xC252D8: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/main_battle_routine.asm:1682 LDA #1
    case 0xC252DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1682 LDA #1
    // Overlapping static entry reached from 0xC252DA.
    case 0xC252DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1683 STA @VIRTUAL04
    case 0xC252DD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1684 STA @LOCAL08
    case 0xC252DF: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1685 BRA @UNKNOWN125
    case 0xC252E1: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/battle/main_battle_routine.asm:1687 LDA #0
    case 0xC252E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1687 LDA #0
    // Overlapping static entry reached from 0xC252E3.
    case 0xC252E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1688 STA @VIRTUAL04
    case 0xC252E6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1689 STA @LOCAL08
    case 0xC252E8: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1690 BRA @UNKNOWN125
    case 0xC252EA: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:1693 LDA @LOCAL04
    case 0xC252EC: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1697 CLC
    case 0xC252EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    case 0xC252EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC252EF.
    case 0xC252F1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1699 TAX
    case 0xC252F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1700 SEP #PROC_FLAGS::ACCUM8
    case 0xC252F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1701 LDA __BSS_START__,X
    case 0xC252F5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1702 STA @LOCAL02
    case 0xC252F8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1703 REP #PROC_FLAGS::ACCUM8
    case 0xC252FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    case 0xC252FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    // Overlapping static entry reached from 0xC252FC.
    case 0xC252FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1705 STA @VIRTUAL04
    case 0xC252FF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1706 STA @LOCAL08
    case 0xC25301: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1707 SEP #PROC_FLAGS::ACCUM8
    case 0xC25303: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1708 LDA @LOCAL02
    case 0xC25305: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1709 INC
    case 0xC25307: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1710 AND #$0003
    case 0xC25308: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    case 0xC2530A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC25308.
    case 0xC2530B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1712 BRA @UNKNOWN125
    case 0xC2530D: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:1716 LDA @LOCAL04
    case 0xC2530F: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1720 CLC
    case 0xC25311: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    case 0xC25312: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC25312.
    case 0xC25314: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1722 TAX
    case 0xC25315: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1723 STX @LOCAL10
    case 0xC25316: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1724 LDA __BSS_START__,X
    case 0xC25318: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    case 0xC2531B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    // Overlapping static entry reached from 0xC2531B.
    case 0xC2531D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1726 ASL
    case 0xC2531E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1728 STA @LOCAL0A
    case 0xC2531F: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1732 JSL RAND
    case 0xC25321: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:1734 STA @VIRTUAL02
    case 0xC25325: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    case 0xC25327: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    // Overlapping static entry reached from 0xC25327.
    case 0xC25329: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1739 STA @VIRTUAL02
    case 0xC2532A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1741 LDA @LOCAL0A
    case 0xC2532C: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1745 CLC
    case 0xC2532E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1746 ADC @VIRTUAL02
    case 0xC2532F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1747 STA @VIRTUAL04
    case 0xC25331: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1748 STA @LOCAL08
    case 0xC25333: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1749 LDX @LOCAL10
    case 0xC25335: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1750 SEP #PROC_FLAGS::ACCUM8
    case 0xC25337: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1751 LDA __BSS_START__,X
    case 0xC25339: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1752 INC
    case 0xC2533C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1753 AND #$0001
    case 0xC2533D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    case 0xC2533F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2533D.
    case 0xC25340: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1756 REP #PROC_FLAGS::ACCUM8
    case 0xC25342: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1757 LDA @LOCAL04
    case 0xC25344: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1761 INC
    case 0xC25346: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1762 INC
    case 0xC25347: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1763 INC
    case 0xC25348: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1764 INC
    case 0xC25349: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1766 STA @LOCAL0A
    case 0xC2534A: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1770 TAX
    case 0xC2534C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1771 LDA @LOCAL08
    case 0xC2534D: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1772 STA @VIRTUAL04
    case 0xC2534F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1773 ASL
    case 0xC25351: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1774 CLC
    case 0xC25352: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    case 0xC25353: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000035, 2); else cpu.execute_instruction<0x69>(0x000035, 3); return true;
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    // Overlapping static entry reached from 0xC25353.
    case 0xC25355: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25356: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25358: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2535A: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2535C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1777 CLC
    case 0xC2535E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1778 ADC @VIRTUAL0A
    case 0xC2535F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1779 STA @VIRTUAL0A
    case 0xC25361: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1780 LDA [@VIRTUAL0A]
    case 0xC25363: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1781 STA __BSS_START__,X
    case 0xC25365: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1783 LDA @LOCAL04
    case 0xC25368: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1787 CLC
    case 0xC2536A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1788 ADC #8
    case 0xC2536B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1788 ADC #8
    // Overlapping static entry reached from 0xC2536B.
    case 0xC2536D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1789 TAX
    case 0xC2536E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1790 STX @LOCAL10
    case 0xC2536F: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1791 LDA @VIRTUAL04
    case 0xC25371: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1792 CLC
    case 0xC25373: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    case 0xC25374: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00003F, 3); return true;
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    // Overlapping static entry reached from 0xC25374.
    case 0xC25376: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1794 CLC
    case 0xC25377: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1795 ADC @VIRTUAL06
    case 0xC25378: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1796 STA @VIRTUAL06
    case 0xC2537A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1797 SEP #PROC_FLAGS::ACCUM8
    case 0xC2537C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1798 LDA [@VIRTUAL06]
    case 0xC2537E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1799 STA @VIRTUAL00
    case 0xC25380: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1800 STA __BSS_START__,X
    case 0xC25382: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1801 REP #PROC_FLAGS::ACCUM8
    case 0xC25385: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1803 LDA @LOCAL0A
    case 0xC25387: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1807 TAX
    case 0xC25389: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1808 LDA __BSS_START__,X
    case 0xC2538A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    case 0xC2538D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F5, 2); else cpu.execute_instruction<0xC9>(0x0000F5, 3); return true;
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    // Overlapping static entry reached from 0xC2538D.
    case 0xC2538F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1810 BNE @UNKNOWN127
    case 0xC25390: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:1812 LDY #battler::ally_or_enemy
    case 0xC25392: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1812 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC25392.
    case 0xC25394: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1813 LDA (@LOCAL04),Y
    case 0xC25395: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    case 0xC25397: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    // Overlapping static entry reached from 0xC25397.
    case 0xC25399: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1819 BNE @UNKNOWN126
    case 0xC2539A: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1821 LDA (@LOCAL04)
    case 0xC2539C: cpu.execute_instruction<0xB2>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    case 0xC2539E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2539E.
    case 0xC253A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1827 BNE @UNKNOWN126
    case 0xC253A1: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1828 LDA @VIRTUAL00
    case 0xC253A3: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    case 0xC253A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    // Overlapping static entry reached from 0xC253A5.
    case 0xC253A7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:1830 STA MIRROR_ENEMY
    case 0xC253A8: cpu.execute_instruction<0x8D>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:1831 JMP @UNKNOWN114
    case 0xC253AB: cpu.execute_instruction<0x4C>(0x00523C, 3); return true;
    // src/battle/main_battle_routine.asm:1834 LDY #battler::current_action_argument
    case 0xC253AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1834 LDY #battler::current_action_argument
    // Overlapping static entry reached from 0xC253AE.
    case 0xC253B0: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1835 LDA (@LOCAL04),Y
    case 0xC253B1: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    case 0xC253B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    // Overlapping static entry reached from 0xC253B3.
    case 0xC253B5: cpu.execute_instruction<0x00>(0x000092, 2); return true;
    // src/battle/main_battle_routine.asm:1842 STA (@LOCAL04)
    case 0xC253B6: cpu.execute_instruction<0x92>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1847 JMP @UNKNOWN114
    case 0xC253B8: cpu.execute_instruction<0x4C>(0x00523C, 3); return true;
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    case 0xC253BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC253BB.
    case 0xC253BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1850 BNE @UNKNOWN128
    case 0xC253BE: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1851 JSL SELECT_STEALABLE_ITEM
    case 0xC253C0: cpu.execute_instruction<0x22>(0xC241D3, 4); return true;
    // src/battle/main_battle_routine.asm:1852 SEP #PROC_FLAGS::ACCUM8
    case 0xC253C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1853 LDX @LOCAL10
    case 0xC253C6: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1854 STA __BSS_START__,X
    case 0xC253C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1856 LDX @LOCAL04
    case 0xC253CB: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1860 REP #PROC_FLAGS::ACCUM8
    case 0xC253CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1861 STZ a:battler::initiative,X
    case 0xC253CF: cpu.execute_instruction<0x9E>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:1864 LDY #battler::current_action
    case 0xC253D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1864 LDY #battler::current_action
    // Overlapping static entry reached from 0xC253D2.
    case 0xC253D4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/main_battle_routine.asm:1865 LDA (@LOCAL04),Y
    case 0xC253D5: cpu.execute_instruction<0xB1>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    case 0xC253D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000067, 2); else cpu.execute_instruction<0xC9>(0x000067, 3); return true;
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    // Overlapping static entry reached from 0xC253D7.
    case 0xC253D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1871 BNE @NOT_DEFENDING
    case 0xC253DA: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1872 SEP #PROC_FLAGS::ACCUM8
    case 0xC253DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1873 LDA #1
    case 0xC253DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A001, 3); return true;
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    case 0xC253E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000024, 2); else cpu.execute_instruction<0xA0>(0x000024, 3); return true;
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    // Overlapping static entry reached from 0xC253DE.
    case 0xC253E1: cpu.execute_instruction<0x24>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    // Overlapping static entry reached from 0xC253E0.
    case 0xC253E2: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/main_battle_routine.asm:1876 STA (@LOCAL04),Y
    case 0xC253E3: cpu.execute_instruction<0x91>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1881 BRA @UNKNOWN130
    case 0xC253E5: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1884 LDX @LOCAL04
    case 0xC253E7: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1888 SEP #PROC_FLAGS::ACCUM8
    case 0xC253E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1889 STZ a:battler::guarding,X
    case 0xC253EB: cpu.execute_instruction<0x9E>(0x000024, 3); return true;
    // src/battle/main_battle_routine.asm:1891 REP #PROC_FLAGS::ACCUM8
    case 0xC253EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1893 LDA @LOCAL04
    case 0xC253F0: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1897 JSL CHOOSE_TARGET
    case 0xC253F2: cpu.execute_instruction<0x22>(0xC24344, 4); return true;
    // src/battle/main_battle_routine.asm:1900 LDA @LOCAL04
    case 0xC253F6: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1904 CLC
    case 0xC253F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    case 0xC253F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC253F9.
    case 0xC253FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1909 STA @LOCAL04
    case 0xC253FC: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1911 LDY @LOCAL05
    case 0xC253FE: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1912 INY
    case 0xC25400: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1913 STY @LOCAL05
    case 0xC25401: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    case 0xC25403: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25403.
    case 0xC25405: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC25406: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC25408: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC2540A: cpu.execute_instruction<0x4C>(0x0051CD, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2540D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2540D.
    case 0xC2540F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC25410: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/battle/main_battle_routine.asm:1924 LDA @LOCAL09
    case 0xC25414: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC25416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC25416.
    case 0xC25418: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1929 BNE @UNKNOWN134
    case 0xC25419: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC2541B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00472C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC2541B.
    case 0xC2541D: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC2541E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC2541D.
    case 0xC2541F: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25420: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC25420.
    case 0xC25422: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25423: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25425: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:1933 LDA @LOCAL0C
    case 0xC25429: cpu.execute_instruction<0xA5>(0x000029, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2542B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2542D: cpu.execute_instruction<0x4C>(0x005533, 3); return true;
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25430: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AE, 2); else cpu.execute_instruction<0xA0>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25430.
    case 0xC25432: cpu.execute_instruction<0xA1>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1940 STY @LOCAL0C
    case 0xC25433: cpu.execute_instruction<0x84>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:1940 STY @LOCAL0C
    // Overlapping static entry reached from 0xC25432.
    case 0xC25434: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000064, 2); else cpu.execute_instruction<0x29>(0x001B64, 3); return true;
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    case 0xC25435: cpu.execute_instruction<0x64>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    // Overlapping static entry reached from 0xC25434.
    case 0xC25436: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1945 LDA #0
    case 0xC25437: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1945 LDA #0
    // Overlapping static entry reached from 0xC25437.
    case 0xC25439: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1946 STA @VIRTUAL04
    case 0xC2543A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1947 STA @LOCAL08
    case 0xC2543C: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1948 STA @VIRTUAL02
    case 0xC2543E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1949 JMP @UNKNOWN140
    case 0xC25440: cpu.execute_instruction<0x4C>(0x0054CB, 3); return true;
    // src/battle/main_battle_routine.asm:1951 LDA a:battler::consciousness,Y
    case 0xC25443: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    case 0xC25446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    // Overlapping static entry reached from 0xC25446.
    case 0xC25448: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1953 BEQ @UNKNOWN139
    case 0xC25449: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/battle/main_battle_routine.asm:1954 LDA a:battler::npc_id,Y
    case 0xC2544B: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    case 0xC2544E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    // Overlapping static entry reached from 0xC2544E.
    case 0xC25450: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1956 BNE @UNKNOWN139
    case 0xC25451: cpu.execute_instruction<0xD0>(0x00006E, 2); return true;
    // src/battle/main_battle_routine.asm:1957 LDA a:battler::ally_or_enemy,Y
    case 0xC25453: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    case 0xC25456: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    // Overlapping static entry reached from 0xC25456.
    case 0xC25458: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1959 CMP #1
    case 0xC25459: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1959 CMP #1
    // Overlapping static entry reached from 0xC25459.
    case 0xC2545B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1960 BNE @UNKNOWN138
    case 0xC2545C: cpu.execute_instruction<0xD0>(0x000058, 2); return true;
    // src/battle/main_battle_routine.asm:1961 LDA a:battler::id,Y
    case 0xC2545E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    case 0xC25461: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25461.
    case 0xC25463: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1963 JSL MULT168
    case 0xC25464: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:1964 CLC
    case 0xC25468: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    case 0xC25469: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC25469.
    case 0xC2546B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1966 TAX
    case 0xC2546C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1967 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2546D: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    case 0xC25471: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    // Overlapping static entry reached from 0xC25471.
    case 0xC25473: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25474: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25476: cpu.execute_instruction<0x4C>(0x005523, 3); return true;
    // src/battle/main_battle_routine.asm:1971 LDY @LOCAL0C
    case 0xC25479: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:1975 LDA a:battler::afflictions,Y
    case 0xC2547B: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    case 0xC2547E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    // Overlapping static entry reached from 0xC2547E.
    case 0xC25480: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1977 TAX
    case 0xC25481: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1978 CPX #1
    case 0xC25482: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1978 CPX #1
    // Overlapping static entry reached from 0xC25482.
    case 0xC25484: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1979 BEQ @UNKNOWN139
    case 0xC25485: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/main_battle_routine.asm:1980 CPX #2
    case 0xC25487: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1980 CPX #2
    // Overlapping static entry reached from 0xC25487.
    case 0xC25489: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1981 BEQ @UNKNOWN139
    case 0xC2548A: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:1982 CPX #3
    case 0xC2548C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1982 CPX #3
    // Overlapping static entry reached from 0xC2548C.
    case 0xC2548E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1983 BEQ @UNKNOWN139
    case 0xC2548F: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:1984 LDA a:battler::afflictions+2,Y
    case 0xC25491: cpu.execute_instruction<0xB9>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    case 0xC25494: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    // Overlapping static entry reached from 0xC25494.
    case 0xC25496: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1986 TAX
    case 0xC25497: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1987 CPX #1
    case 0xC25498: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1987 CPX #1
    // Overlapping static entry reached from 0xC25498.
    case 0xC2549A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1988 BEQ @UNKNOWN139
    case 0xC2549B: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/main_battle_routine.asm:1989 CPX #3
    case 0xC2549D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1989 CPX #3
    // Overlapping static entry reached from 0xC2549D.
    case 0xC2549F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1990 BEQ @UNKNOWN139
    case 0xC254A0: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1991 CPX #4
    case 0xC254A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1991 CPX #4
    // Overlapping static entry reached from 0xC254A2.
    case 0xC254A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1992 BEQ @UNKNOWN139
    case 0xC254A5: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:1993 LDA a:battler::speed,Y
    case 0xC254A7: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:1994 CMP @VIRTUAL04
    case 0xC254AA: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC254AC: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC254AE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1996 STA @VIRTUAL04
    case 0xC254B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1997 STA @LOCAL08
    case 0xC254B2: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1998 BRA @UNKNOWN139
    case 0xC254B4: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:2000 LDA a:battler::speed,Y
    case 0xC254B6: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:2001 CMP @LOCAL05
    case 0xC254B9: cpu.execute_instruction<0xC5>(0x00001B, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC254BB: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC254BD: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2003 STA @LOCAL05
    case 0xC254BF: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2005 TYA
    case 0xC254C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2006 CLC
    case 0xC254C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    case 0xC254C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC254C3.
    case 0xC254C5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:2008 TAY
    case 0xC254C6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2010 STY @LOCAL0C
    case 0xC254C7: cpu.execute_instruction<0x84>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:2014 INC @VIRTUAL02
    case 0xC254C9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2016 LDA @VIRTUAL02
    case 0xC254CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    case 0xC254CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC254CD.
    case 0xC254CF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D4: cpu.execute_instruction<0x4C>(0x005443, 3); return true;
    // src/battle/main_battle_routine.asm:2019 LDA @VIRTUAL04
    case 0xC254D7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2020 BEQ @UNKNOWN142
    case 0xC254D9: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:2022 LDA @LOCAL09
    case 0xC254DB: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:2026 CMP #4
    case 0xC254DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2026 CMP #4
    // Overlapping static entry reached from 0xC254DD.
    case 0xC254DF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2027 BEQ @UNKNOWN142
    case 0xC254E0: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/battle/main_battle_routine.asm:2029 LDA @LOCAL0B
    case 0xC254E2: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2034 CLC
    case 0xC254EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2035 ADC @LOCAL05
    case 0xC254EC: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2036 TAX
    case 0xC254EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2038 STX @LOCAL0C
    case 0xC254EF: cpu.execute_instruction<0x86>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:2042 LDA @LOCAL08
    case 0xC254F1: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2043 STA @VIRTUAL04
    case 0xC254F3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2044 TXA
    case 0xC254F5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2045 CMP @VIRTUAL04
    case 0xC254F6: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2046 BCC @UNKNOWN143
    case 0xC254F8: cpu.execute_instruction<0x90>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:2047 LDA #100
    case 0xC254FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2047 LDA #100
    // Overlapping static entry reached from 0xC254FA.
    case 0xC254FC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2048 JSR RAND_LIMIT
    case 0xC254FD: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/main_battle_routine.asm:2050 STA @LOCAL0A
    case 0xC25500: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2051 LDX @LOCAL0C
    case 0xC25502: cpu.execute_instruction<0xA6>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:2056 TXA
    case 0xC25504: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2057 SEC
    case 0xC25505: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2058 SBC @VIRTUAL04
    case 0xC25506: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2059 STA @VIRTUAL02
    case 0xC25508: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2061 LDA @LOCAL0A
    case 0xC2550A: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2065 CMP @VIRTUAL02
    case 0xC2550C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2066 BCS @UNKNOWN143
    case 0xC2550E: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25510: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC25510.
    case 0xC25512: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25513: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25515: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC25515.
    case 0xC25517: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25518: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC2551A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2069 STZ @LOCAL03
    case 0xC2551E: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2070 JMP @UNKNOWN237
    case 0xC25520: cpu.execute_instruction<0x4C>(0x005FBF, 3); return true;
    // src/battle/main_battle_routine.asm:2073 STZ @LOCAL0C
    case 0xC25523: cpu.execute_instruction<0x64>(0x000029, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25525: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DD, 2); else cpu.execute_instruction<0xA9>(0x0000DD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25525.
    case 0xC25527: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25528: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC2552A.
    case 0xC2552C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552F: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2080 STZ @LOCAL09
    case 0xC25533: cpu.execute_instruction<0x64>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:2084 JMP @UNKNOWN234
    case 0xC25535: cpu.execute_instruction<0x4C>(0x005FAD, 3); return true;
    // src/battle/main_battle_routine.asm:2086 JSL CHECK_DEAD_PLAYERS
    case 0xC25538: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:2087 LDA #0
    case 0xC2553C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2087 LDA #0
    // Overlapping static entry reached from 0xC2553C.
    case 0xC2553E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2088 JSL COUNT_CHARS
    case 0xC2553F: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2089 CMP #0
    case 0xC25543: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2089 CMP #0
    // Overlapping static entry reached from 0xC25543.
    case 0xC25545: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25546: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25548: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:2091 LDA #1
    case 0xC2554B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2091 LDA #1
    // Overlapping static entry reached from 0xC2554B.
    case 0xC2554D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2092 JSL COUNT_CHARS
    case 0xC2554E: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2093 CMP #0
    case 0xC25552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2093 CMP #0
    // Overlapping static entry reached from 0xC25552.
    case 0xC25554: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25555: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25557: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    case 0xC2555A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    // Overlapping static entry reached from 0xC2555A.
    case 0xC2555C: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/battle/main_battle_routine.asm:2096 STA @VIRTUAL04
    case 0xC2555D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    case 0xC2555F: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    // Overlapping static entry reached from 0xC2555C.
    case 0xC25560: cpu.execute_instruction<0x21>(0x0000A0, 2); return true;
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    case 0xC25561: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    // Overlapping static entry reached from 0xC25560.
    case 0xC25562: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    // Overlapping static entry reached from 0xC25561.
    case 0xC25563: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2100 STY @LOCAL05
    case 0xC25564: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2101 TYA
    case 0xC25566: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2106 STA @LOCAL10
    case 0xC25567: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2107 BRA @UNKNOWN150
    case 0xC25569: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    case 0xC2556B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2556B.
    case 0xC2556D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    case 0xC2556E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:2112 TAX
    case 0xC25572: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2113 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25573: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/main_battle_routine.asm:2114 AND #$00FF
    case 0xC25576: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2114 AND #$00FF
    // Overlapping static entry reached from 0xC25576.
    case 0xC25578: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2115 BEQ @UNKNOWN149
    case 0xC25579: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/battle/main_battle_routine.asm:2116 LDA BATTLERS_TABLE+13,X
    case 0xC2557B: cpu.execute_instruction<0xBD>(0x00A1BB, 3); return true;
    // src/battle/main_battle_routine.asm:2117 AND #$00FF
    case 0xC2557E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2117 AND #$00FF
    // Overlapping static entry reached from 0xC2557E.
    case 0xC25580: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2118 BNE @UNKNOWN149
    case 0xC25581: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:2119 LDA BATTLERS_TABLE+70,X
    case 0xC25583: cpu.execute_instruction<0xBD>(0x00A1F4, 3); return true;
    // src/battle/main_battle_routine.asm:2120 TAX
    case 0xC25586: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2121 LDY @LOCAL05
    case 0xC25587: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2122 STY @VIRTUAL02
    case 0xC25589: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2123 TXA
    case 0xC2558B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2137 CMP @VIRTUAL02
    case 0xC2558C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2138 BCC @UNKNOWN149
    case 0xC2558E: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2139 LDA @LOCAL10
    case 0xC25590: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2140 STA @VIRTUAL04
    case 0xC25592: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2141 STA @LOCAL08
    case 0xC25594: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2143 TXY
    case 0xC25596: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2144 STY @LOCAL05
    case 0xC25597: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2149 LDA @LOCAL10
    case 0xC25599: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2150 INC
    case 0xC2559B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2151 STA @LOCAL10
    case 0xC2559C: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    case 0xC2559E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2559E.
    case 0xC255A0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2154 BCC @UNKNOWN148
    case 0xC255A1: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/battle/main_battle_routine.asm:2155 LDA @VIRTUAL04
    case 0xC255A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    case 0xC255A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    // Overlapping static entry reached from 0xC255A5.
    case 0xC255A7: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC255A8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC255AA: cpu.execute_instruction<0x4C>(0x005FB4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC255A7.
    case 0xC255AB: cpu.execute_instruction<0xB4>(0x00005F, 2); return true;
    // src/battle/main_battle_routine.asm:2158 JSL REDIRECT_C10FA3
    case 0xC255AD: cpu.execute_instruction<0x22>(0xC1DB30, 4); return true;
    // src/battle/main_battle_routine.asm:2159 LDA @VIRTUAL04
    case 0xC255B1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    case 0xC255B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC255B3.
    case 0xC255B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2161 JSL MULT168
    case 0xC255B6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:2162 CLC
    case 0xC255BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC255BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC255BB.
    case 0xC255BD: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:2164 TAX
    case 0xC255BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    case 0xC255BF: cpu.execute_instruction<0x8E>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    case 0xC255C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2167 LDA #1
    case 0xC255C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    case 0xC255C6: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    // Overlapping static entry reached from 0xC255C4.
    case 0xC255C7: cpu.execute_instruction<0x0D>(0x00AE00, 3); return true;
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    case 0xC255C9: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC255C7.
    case 0xC255CA: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:2170 REP #PROC_FLAGS::ACCUM8
    case 0xC255CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2171 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC255CE: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    case 0xC255D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    // Overlapping static entry reached from 0xC255D1.
    case 0xC255D3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:2173 TAX
    case 0xC255D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    case 0xC255D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC255D5.
    case 0xC255D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC255D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC255DA: cpu.execute_instruction<0x4C>(0x005FAD, 3); return true;
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    case 0xC255DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC255DD.
    case 0xC255DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC255E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC255E2: cpu.execute_instruction<0x4C>(0x005FAD, 3); return true;
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    case 0xC255E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC255E5.
    case 0xC255E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2179 BEQ @UNKNOWN154
    case 0xC255E8: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2180 LDX CURRENT_ATTACKER
    case 0xC255EA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2181 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC255ED: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    case 0xC255F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    // Overlapping static entry reached from 0xC255F0.
    case 0xC255F2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    case 0xC255F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC255F3.
    case 0xC255F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC255F6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC255F8: cpu.execute_instruction<0x4C>(0x00568A, 3); return true;
    // src/battle/main_battle_routine.asm:2186 LDX CURRENT_ATTACKER
    case 0xC255FB: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2187 INX
    case 0xC255FE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2188 INX
    case 0xC255FF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2189 INX
    case 0xC25600: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2190 INX
    case 0xC25601: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2192 STX @LOCAL0A
    case 0xC25602: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2196 LDA __BSS_START__,X
    case 0xC25604: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2197 STA @LOCAL10
    case 0xC25607: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25609: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2199 TAX
    case 0xC25610: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2200 INX
    case 0xC25611: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2201 INX
    case 0xC25612: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2202 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25613: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    case 0xC25617: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    // Overlapping static entry reached from 0xC25617.
    case 0xC25619: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    case 0xC2561A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC2561A.
    case 0xC2561C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2205 BEQ @UNKNOWN157
    case 0xC2561D: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/main_battle_routine.asm:2206 LDA @LOCAL10
    case 0xC2561F: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    case 0xC25621: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC25621.
    case 0xC25623: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2208 BEQ @UNKNOWN157
    case 0xC25624: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC25626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000123, 3); return true;
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC25626.
    case 0xC25628: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    case 0xC25629: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25628.
    case 0xC2562A: cpu.execute_instruction<0x5F>(0x0124C9, 4); return true;
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC2562B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000124, 3); return true;
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC2562B.
    case 0xC2562D: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    case 0xC2562E: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2562D.
    case 0xC2562F: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC25630: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000025, 2); else cpu.execute_instruction<0xC9>(0x000125, 3); return true;
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC25630.
    case 0xC25632: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    case 0xC25633: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25632.
    case 0xC25634: cpu.execute_instruction<0x55>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC25635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000026, 2); else cpu.execute_instruction<0xC9>(0x000126, 3); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25634.
    case 0xC25636: cpu.execute_instruction<0x26>(0x000001, 2); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25635.
    case 0xC25637: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    case 0xC25638: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25637.
    case 0xC25639: cpu.execute_instruction<0x50>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC2563A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000127, 3); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25639.
    case 0xC2563B: cpu.execute_instruction<0x27>(0x000001, 2); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC2563A.
    case 0xC2563C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    case 0xC2563D: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2563C.
    case 0xC2563E: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC2563F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000128, 3); return true;
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC2563F.
    case 0xC25641: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    case 0xC25642: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25641.
    case 0xC25643: cpu.execute_instruction<0x46>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC25644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000029, 2); else cpu.execute_instruction<0xC9>(0x000129, 3); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC25643.
    case 0xC25645: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x00F001, 3); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC25644.
    case 0xC25646: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    case 0xC25647: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25646.
    case 0xC25648: cpu.execute_instruction<0x41>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC25649: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002A, 2); else cpu.execute_instruction<0xC9>(0x00012A, 3); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25648.
    case 0xC2564A: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25649.
    case 0xC2564B: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    case 0xC2564C: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2564B.
    case 0xC2564D: cpu.execute_instruction<0x3C>(0x002BC9, 3); return true;
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC2564E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002B, 2); else cpu.execute_instruction<0xC9>(0x00012B, 3); return true;
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC2564E.
    case 0xC25650: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    case 0xC25651: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25650.
    case 0xC25652: cpu.execute_instruction<0x37>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    case 0xC25653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC25652.
    case 0xC25654: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC25653.
    case 0xC25655: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2228 BEQ @UNKNOWN157
    case 0xC25656: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    case 0xC25658: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000118, 3); return true;
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC25658.
    case 0xC2565A: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    case 0xC2565B: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2565A.
    case 0xC2565C: cpu.execute_instruction<0x2D>(0x0000C9, 3); return true;
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    case 0xC2565D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC2565D.
    case 0xC2565F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2232 BEQ @UNKNOWN157
    case 0xC25660: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2233 LDX CURRENT_ATTACKER
    case 0xC25662: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2234 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25665: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    case 0xC25668: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    // Overlapping static entry reached from 0xC25668.
    case 0xC2566A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    case 0xC2566B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2566B.
    case 0xC2566D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2237 BNE @UNKNOWN155
    case 0xC2566E: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    case 0xC25670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    // Overlapping static entry reached from 0xC25670.
    case 0xC25672: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2240 LDX @LOCAL0A
    case 0xC25673: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2244 STA __BSS_START__,X ;battler::current_action
    case 0xC25675: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2245 BRA @UNKNOWN156
    case 0xC25678: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    case 0xC2567A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0000FE, 3); return true;
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    // Overlapping static entry reached from 0xC2567A.
    case 0xC2567C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2249 LDX @LOCAL0A
    case 0xC2567D: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2253 STA __BSS_START__,X ;battler::current_action
    case 0xC2567F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2255 LDX CURRENT_ATTACKER
    case 0xC25682: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2256 SEP #PROC_FLAGS::ACCUM8
    case 0xC25685: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2257 STZ a:battler::action_item_slot,X
    case 0xC25687: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2259 LDX CURRENT_ATTACKER
    case 0xC2568A: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2260 REP #PROC_FLAGS::ACCUM8
    case 0xC2568D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2261 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2568F: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    case 0xC25692: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    // Overlapping static entry reached from 0xC25692.
    case 0xC25694: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    case 0xC25695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25695.
    case 0xC25697: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2264 BNE @UNKNOWN158
    case 0xC25698: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2265 LDX CURRENT_ATTACKER
    case 0xC2569A: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2266 INX
    case 0xC2569D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2267 INX
    case 0xC2569E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2268 INX
    case 0xC2569F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2269 INX
    case 0xC256A0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2270 LDA __BSS_START__,X ;battler::current_action
    case 0xC256A1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2271 BEQ @UNKNOWN158
    case 0xC256A4: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    case 0xC256A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0000FD, 3); return true;
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    // Overlapping static entry reached from 0xC256A6.
    case 0xC256A8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:2273 STA __BSS_START__,X ;battler::current_action
    case 0xC256A9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2274 LDX CURRENT_ATTACKER
    case 0xC256AC: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2275 SEP #PROC_FLAGS::ACCUM8
    case 0xC256AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2276 STZ a:battler::action_item_slot,X
    case 0xC256B1: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2278 LDX CURRENT_ATTACKER
    case 0xC256B4: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2279 REP #PROC_FLAGS::ACCUM8
    case 0xC256B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2280 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC256B9: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    case 0xC256BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    // Overlapping static entry reached from 0xC256BC.
    case 0xC256BE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    case 0xC256BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC256BF.
    case 0xC256C1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2283 BNE @UNKNOWN159
    case 0xC256C2: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2284 LDX CURRENT_ATTACKER
    case 0xC256C4: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2285 INX
    case 0xC256C7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2286 INX
    case 0xC256C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2287 INX
    case 0xC256C9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2288 INX
    case 0xC256CA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2289 LDA __BSS_START__,X ;battler::current_action
    case 0xC256CB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2290 BEQ @UNKNOWN159
    case 0xC256CE: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    case 0xC256D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    // Overlapping static entry reached from 0xC256D0.
    case 0xC256D2: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:2292 STA __BSS_START__,X ;battler::current_action
    case 0xC256D3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2293 LDX CURRENT_ATTACKER
    case 0xC256D6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2294 SEP #PROC_FLAGS::ACCUM8
    case 0xC256D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2295 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC256DB: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2296 LDX CURRENT_ATTACKER
    case 0xC256DE: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2297 STZ a:battler::action_item_slot,X
    case 0xC256E1: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2299 LDX CURRENT_ATTACKER
    case 0xC256E4: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2300 REP #PROC_FLAGS::ACCUM8
    case 0xC256E7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2301 LDA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC256E9: cpu.execute_instruction<0xBD>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    case 0xC256EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    // Overlapping static entry reached from 0xC256EC.
    case 0xC256EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2303 BEQ @UNKNOWN160
    case 0xC256EF: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:2304 LDX CURRENT_ATTACKER
    case 0xC256F1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2305 INX
    case 0xC256F4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2306 INX
    case 0xC256F5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2307 INX
    case 0xC256F6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2308 INX
    case 0xC256F7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2310 STX @LOCAL0A
    case 0xC256F8: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2314 LDA __BSS_START__,X ;battler::current_action
    case 0xC256FA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2315 STA @LOCAL10
    case 0xC256FD: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256FF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25701: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25702: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25704: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25705: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2317 TAX
    case 0xC25706: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2318 INX
    case 0xC25707: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2319 INX
    case 0xC25708: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2320 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25709: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    case 0xC2570D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    // Overlapping static entry reached from 0xC2570D.
    case 0xC2570F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    case 0xC25710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25710.
    case 0xC25712: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2323 BNE @UNKNOWN160
    case 0xC25713: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2324 LDA @LOCAL10
    case 0xC25715: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2325 BEQ @UNKNOWN160
    case 0xC25717: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    case 0xC25719: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    // Overlapping static entry reached from 0xC25719.
    case 0xC2571B: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2328 LDX @LOCAL0A
    case 0xC2571C: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2328 LDX @LOCAL0A
    // Overlapping static entry reached from 0xC2571B.
    case 0xC2571D: cpu.execute_instruction<0x25>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    case 0xC2571E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    // Overlapping static entry reached from 0xC2571D.
    case 0xC2571F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:2334 LDX CURRENT_ATTACKER
    case 0xC25721: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2335 LDA a:battler::afflictions+STATUS_GROUP::HOMESICKNESS,X
    case 0xC25724: cpu.execute_instruction<0xBD>(0x000022, 3); return true;
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    case 0xC25727: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    // Overlapping static entry reached from 0xC25727.
    case 0xC25729: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    case 0xC2572A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    // Overlapping static entry reached from 0xC2572A.
    case 0xC2572C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2338 BNE @UNKNOWN161
    case 0xC2572D: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2339 LDX CURRENT_ATTACKER
    case 0xC2572F: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2340 LDA a:battler::current_action,X
    case 0xC25732: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2341 BEQ @UNKNOWN161
    case 0xC25735: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2342 JSL RAND
    case 0xC25737: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    case 0xC2573B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    // Overlapping static entry reached from 0xC2573B.
    case 0xC2573D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2344 BNE @UNKNOWN161
    case 0xC2573E: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    case 0xC25740: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0000FB, 3); return true;
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    // Overlapping static entry reached from 0xC25740.
    case 0xC25742: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/main_battle_routine.asm:2346 LDX CURRENT_ATTACKER
    case 0xC25743: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2347 STA a:battler::current_action,X
    case 0xC25746: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2348 LDX CURRENT_ATTACKER
    case 0xC25749: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    case 0xC2574C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    case 0xC2574E: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2352 REP #PROC_FLAGS::ACCUM8
    case 0xC25751: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25753.
    case 0xC25755: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25756: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25758: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25758.
    case 0xC2575A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC2575B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2354 LDX CURRENT_ATTACKER
    case 0xC2575D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2355 LDA a:battler::current_action,X
    case 0xC25760: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25763: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25765: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25766: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25768: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25769: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2358 STA @LOCAL0A
    case 0xC2576A: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2576C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2576E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25770: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25772: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2363 CLC
    case 0xC25774: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2364 ADC @VIRTUAL0A
    case 0xC25775: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2365 STA @VIRTUAL0A
    case 0xC25777: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2366 LDA [@VIRTUAL0A]
    case 0xC25779: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    case 0xC2577B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    // Overlapping static entry reached from 0xC2577B.
    case 0xC2577D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2368 CMP #1
    case 0xC2577E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2368 CMP #1
    // Overlapping static entry reached from 0xC2577E.
    case 0xC25780: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2369 BNE @UNKNOWN163
    case 0xC25781: cpu.execute_instruction<0xD0>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:2371 LDA @LOCAL0A
    case 0xC25783: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2375 INC
    case 0xC25785: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2376 CLC
    case 0xC25786: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2377 ADC @VIRTUAL06
    case 0xC25787: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2378 STA @VIRTUAL06
    case 0xC25789: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2379 LDA [@VIRTUAL06]
    case 0xC2578B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    case 0xC2578D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    // Overlapping static entry reached from 0xC2578D.
    case 0xC2578F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2381 BNE @UNKNOWN163
    case 0xC25790: cpu.execute_instruction<0xD0>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:2382 LDX CURRENT_ATTACKER
    case 0xC25792: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2383 LDA a:battler::ally_or_enemy,X
    case 0xC25795: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    case 0xC25798: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    // Overlapping static entry reached from 0xC25798.
    case 0xC2579A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2385 BNE @UNKNOWN162
    case 0xC2579B: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2386 SEP #PROC_FLAGS::ACCUM8
    case 0xC2579D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2387 LDA #1
    case 0xC2579F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    case 0xC257A1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2579F.
    case 0xC257A2: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:2389 STA a:battler::action_targetting,X
    case 0xC257A4: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    case 0xC257A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC257A7.
    case 0xC257A9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:2391 REP #PROC_FLAGS::ACCUM8
    case 0xC257AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2392 LDA CURRENT_ATTACKER
    case 0xC257AC: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2393 SEC
    case 0xC257AF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC257B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AE, 2); else cpu.execute_instruction<0xE9>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC257B0.
    case 0xC257B2: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC257B3: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC257B2.
    case 0xC257B4: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    case 0xC257B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2397 INC
    case 0xC257B9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    case 0xC257BA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2399 STA a:battler::current_target,X
    case 0xC257BD: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/main_battle_routine.asm:2400 BRA @UNKNOWN163
    case 0xC257C0: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2402 SEP #PROC_FLAGS::ACCUM8
    case 0xC257C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2403 LDA #17
    case 0xC257C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00AE11, 3); return true;
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    case 0xC257C6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC257C4.
    case 0xC257C7: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:2405 STA a:battler::action_targetting,X
    case 0xC257C9: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    case 0xC257CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC257CC.
    case 0xC257CE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:2407 REP #PROC_FLAGS::ACCUM8
    case 0xC257CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2408 LDA CURRENT_ATTACKER
    case 0xC257D1: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2409 SEC
    case 0xC257D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC257D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AE, 2); else cpu.execute_instruction<0xE9>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC257D5.
    case 0xC257D7: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC257D8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC257D7.
    case 0xC257D9: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/battle/main_battle_routine.asm:2412 TAX
    case 0xC257DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    case 0xC257DD: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2414 JSL UNKNOWN_C4A228
    case 0xC257E0: cpu.execute_instruction<0x22>(0xC47695, 4); return true;
    // src/battle/main_battle_routine.asm:2416 LDX #0
    case 0xC257E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2416 LDX #0
    // Overlapping static entry reached from 0xC257E4.
    case 0xC257E6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2418 STX @LOCAL10
    case 0xC257E7: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2422 REP #PROC_FLAGS::ACCUM8
    case 0xC257E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2423 LDA CURRENT_ATTACKER
    case 0xC257EB: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2424 STA CURRENT_TARGET
    case 0xC257EE: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:2425 TXA
    case 0xC257F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2426 JSL FIX_ATTACKER_NAME
    case 0xC257F2: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // src/battle/main_battle_routine.asm:2427 JSL FIX_TARGET_NAME
    case 0xC257F6: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/main_battle_routine.asm:2428 LDX CURRENT_ATTACKER
    case 0xC257FA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2429 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC257FD: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    case 0xC25800: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    // Overlapping static entry reached from 0xC25800.
    case 0xC25802: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    case 0xC25803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC25803.
    case 0xC25805: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2432 BEQ @UNKNOWN164
    case 0xC25806: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    case 0xC25808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC25808.
    case 0xC2580A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2434 BEQ @UNKNOWN165
    case 0xC2580B: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    case 0xC2580D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC2580D.
    case 0xC2580F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2436 BEQ @UNKNOWN166
    case 0xC25810: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    case 0xC25812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC25812.
    case 0xC25814: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2438 BEQ @UNKNOWN167
    case 0xC25815: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/battle/main_battle_routine.asm:2439 JMP @UNKNOWN168
    case 0xC25817: cpu.execute_instruction<0x4C>(0x0058B0, 3); return true;
    // src/battle/main_battle_routine.asm:2441 LDA #20
    case 0xC2581A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/main_battle_routine.asm:2441 LDA #20
    // Overlapping static entry reached from 0xC2581A.
    case 0xC2581C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2442 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2581D: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/main_battle_routine.asm:2443 TAX
    case 0xC25820: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2445 STX @LOCAL10
    case 0xC25821: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x002EAC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25823.
    case 0xC25825: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25826: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25828.
    case 0xC2582A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC2582B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2450 TXA
    case 0xC2582D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC2582E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC25830: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25832: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25834: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25836: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25838: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2453 JSL DISPLAY_TEXT_WAIT
    case 0xC2583A: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:2454 BRA @UNKNOWN168
    case 0xC2583E: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/battle/main_battle_routine.asm:2456 LDA #20
    case 0xC25840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/main_battle_routine.asm:2456 LDA #20
    // Overlapping static entry reached from 0xC25840.
    case 0xC25842: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2457 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25843: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/main_battle_routine.asm:2458 TAX
    case 0xC25846: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2460 STX @LOCAL10
    case 0xC25847: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25849: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x002EC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25849.
    case 0xC2584B: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2584C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2584E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2584E.
    case 0xC25850: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25851: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2465 TXA
    case 0xC25853: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25854: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25856: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25858: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2468 JSL DISPLAY_TEXT_WAIT
    case 0xC25860: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:2469 BRA @UNKNOWN168
    case 0xC25864: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/battle/main_battle_routine.asm:2471 LDA #4
    case 0xC25866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2471 LDA #4
    // Overlapping static entry reached from 0xC25866.
    case 0xC25868: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2472 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25869: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/main_battle_routine.asm:2473 TAX
    case 0xC2586C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2475 STX @LOCAL10
    case 0xC2586D: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2586F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x002EDB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2586F.
    case 0xC25871: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25872: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25874: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25874.
    case 0xC25876: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25877: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2480 TXA
    case 0xC25879: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC2587A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC2587C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2587E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25880: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25882: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25884: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2483 JSL DISPLAY_TEXT_WAIT
    case 0xC25886: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:2484 BRA @UNKNOWN168
    case 0xC2588A: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/battle/main_battle_routine.asm:2486 LDA #4
    case 0xC2588C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2486 LDA #4
    // Overlapping static entry reached from 0xC2588C.
    case 0xC2588E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2487 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2588F: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/main_battle_routine.asm:2488 TAX
    case 0xC25892: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2490 STX @LOCAL10
    case 0xC25893: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25895: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x002EF5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25895.
    case 0xC25897: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25898: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC2589A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2589A.
    case 0xC2589C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC2589D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2495 TXA
    case 0xC2589F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC258A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC258A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258AA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2498 JSL DISPLAY_TEXT_WAIT
    case 0xC258AC: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:2501 LDX @LOCAL10
    case 0xC258B0: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2505 LDA CURRENT_ATTACKER
    case 0xC258B2: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2506 JSL LOSE_HP_STATUS
    case 0xC258B5: cpu.execute_instruction<0x22>(0xC2BC91, 4); return true;
    // src/battle/main_battle_routine.asm:2507 LDX CURRENT_ATTACKER
    case 0xC258B9: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2508 LDA a:battler::hp,X
    case 0xC258BC: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/main_battle_routine.asm:2509 BNE @UNKNOWN171
    case 0xC258BF: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2510 LDA CURRENT_ATTACKER
    case 0xC258C1: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2511 JSL KO_TARGET
    case 0xC258C4: cpu.execute_instruction<0x22>(0xC27491, 4); return true;
    // src/battle/main_battle_routine.asm:2512 LDA #0
    case 0xC258C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2512 LDA #0
    // Overlapping static entry reached from 0xC258C8.
    case 0xC258CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2513 JSL COUNT_CHARS
    case 0xC258CB: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2514 CMP #0
    case 0xC258CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2514 CMP #0
    // Overlapping static entry reached from 0xC258CF.
    case 0xC258D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC258D2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC258D4: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:2516 LDA #1
    case 0xC258D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2516 LDA #1
    // Overlapping static entry reached from 0xC258D7.
    case 0xC258D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2517 JSL COUNT_CHARS
    case 0xC258DA: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2518 CMP #0
    case 0xC258DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2518 CMP #0
    // Overlapping static entry reached from 0xC258DE.
    case 0xC258E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC258E1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC258E3: cpu.execute_instruction<0x4C>(0x005FAD, 3); return true;
    // src/battle/main_battle_routine.asm:2520 JMP @UNKNOWN225
    case 0xC258E6: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:2522 LDX CURRENT_ATTACKER
    case 0xC258E9: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2523 LDA a:battler::ally_or_enemy,X
    case 0xC258EC: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    case 0xC258EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    // Overlapping static entry reached from 0xC258EF.
    case 0xC258F1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2525 CMP #1
    case 0xC258F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2525 CMP #1
    // Overlapping static entry reached from 0xC258F2.
    case 0xC258F4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2526 BNE @UNKNOWN172
    case 0xC258F5: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/battle/main_battle_routine.asm:2527 LDA CURRENT_ATTACKER
    case 0xC258F7: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2528 JSL CHOOSE_TARGET
    case 0xC258FA: cpu.execute_instruction<0x22>(0xC24344, 4); return true;
    // src/battle/main_battle_routine.asm:2529 LDX CURRENT_ATTACKER
    case 0xC258FE: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2530 LDA a:battler::current_action,X
    case 0xC25901: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    case 0xC25904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC25904.
    case 0xC25906: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2532 BNE @UNKNOWN172
    case 0xC25907: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2533 JSL SELECT_STEALABLE_ITEM
    case 0xC25909: cpu.execute_instruction<0x22>(0xC241D3, 4); return true;
    // src/battle/main_battle_routine.asm:2534 SEP #PROC_FLAGS::ACCUM8
    case 0xC2590D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2535 LDX CURRENT_ATTACKER
    case 0xC2590F: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2536 STA a:battler::current_action_argument,X
    case 0xC25912: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2538 REP #PROC_FLAGS::ACCUM8
    case 0xC25915: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2539 LDA CURRENT_ATTACKER
    case 0xC25917: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2540 JSL UNKNOWN_C24703
    case 0xC2591A: cpu.execute_instruction<0x22>(0xC245D0, 4); return true;
    // src/battle/main_battle_routine.asm:2541 LDX CURRENT_ATTACKER
    case 0xC2591E: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2542 LDA a:battler::ally_or_enemy,X
    case 0xC25921: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    case 0xC25924: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    // Overlapping static entry reached from 0xC25924.
    case 0xC25926: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2544 BNE @UNKNOWN174
    case 0xC25927: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/battle/main_battle_routine.asm:2545 LDX CURRENT_ATTACKER
    case 0xC25929: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2546 LDA a:battler::current_action,X
    case 0xC2592C: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2592F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25931: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25932: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25934: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25935: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2548 TAX
    case 0xC25936: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2549 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25937: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    case 0xC2593B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    // Overlapping static entry reached from 0xC2593B.
    case 0xC2593D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2551 BNE @UNKNOWN174
    case 0xC2593E: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/battle/main_battle_routine.asm:2552 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25940: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25944: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25944.
    case 0xC25946: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25947: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25949: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25949.
    case 0xC2594B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2594C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2594E: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25951: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25953: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25956: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2555 CMP @VIRTUAL0A+2
    case 0xC25958: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2556 BNE @UNKNOWN173
    case 0xC2595A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2557 LDA @VIRTUAL06
    case 0xC2595C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2558 CMP @VIRTUAL0A
    case 0xC2595E: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2560 BNE @UNKNOWN174
    case 0xC25960: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:2561 LDA CURRENT_ATTACKER
    case 0xC25962: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2562 JSL CHOOSE_TARGET
    case 0xC25965: cpu.execute_instruction<0x22>(0xC24344, 4); return true;
    // src/battle/main_battle_routine.asm:2563 LDA CURRENT_ATTACKER
    case 0xC25969: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2564 JSL UNKNOWN_C24703
    case 0xC2596C: cpu.execute_instruction<0x22>(0xC245D0, 4); return true;
    // src/battle/main_battle_routine.asm:2565 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25970: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // src/battle/main_battle_routine.asm:2567 LDY #0
    case 0xC25974: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2567 LDY #0
    // Overlapping static entry reached from 0xC25974.
    case 0xC25976: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2568 STY @LOCAL10
    case 0xC25977: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2569 LDX CURRENT_ATTACKER
    case 0xC25979: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2570 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2597C: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    case 0xC2597F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    // Overlapping static entry reached from 0xC2597F.
    case 0xC25981: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25982.
    case 0xC25984: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2573 BNE @UNKNOWN175
    case 0xC25985: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:2574 LDA #100
    case 0xC25987: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2574 LDA #100
    // Overlapping static entry reached from 0xC25987.
    case 0xC25989: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2575 JSR RAND_LIMIT
    case 0xC2598A: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    case 0xC2598D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    // Overlapping static entry reached from 0xC2598D.
    case 0xC2598F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2577 BCC @UNKNOWN176
    case 0xC25990: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2579 LDX CURRENT_ATTACKER
    case 0xC25992: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2580 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25995: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    case 0xC25998: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    // Overlapping static entry reached from 0xC25998.
    case 0xC2599A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    case 0xC2599B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC2599B.
    case 0xC2599D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2583 BNE @UNKNOWN179
    case 0xC2599E: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/battle/main_battle_routine.asm:2585 LDX CURRENT_ATTACKER
    case 0xC259A0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2586 LDA a:battler::current_action,X
    case 0xC259A3: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2588 TAX
    case 0xC259AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2589 INX
    case 0xC259AE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2590 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC259AF: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    case 0xC259B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    // Overlapping static entry reached from 0xC259B3.
    case 0xC259B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2592 BEQ @UNKNOWN179
    case 0xC259B6: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/main_battle_routine.asm:2593 LDY #1
    case 0xC259B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2593 LDY #1
    // Overlapping static entry reached from 0xC259B8.
    case 0xC259BA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2594 STY @LOCAL10
    case 0xC259BB: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2596 JSR FEELING_STRANGE_RETARGETTING
    case 0xC259BD: cpu.execute_instruction<0x20>(0x003EBD, 3); return true;
    // src/battle/main_battle_routine.asm:2597 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC259C0: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC259C4.
    case 0xC259C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC259C9.
    case 0xC259CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259CC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259CE: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D3: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2600 CMP @VIRTUAL0A+2
    case 0xC259D8: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2601 BNE @UNKNOWN178
    case 0xC259DA: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2602 LDA @VIRTUAL06
    case 0xC259DC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2603 CMP @VIRTUAL0A
    case 0xC259DE: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2605 BEQ @UNKNOWN177
    case 0xC259E0: cpu.execute_instruction<0xF0>(0x0000DB, 2); return true;
    // src/battle/main_battle_routine.asm:2607 LDX CURRENT_ATTACKER
    case 0xC259E2: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2608 LDA a:battler::current_action,X
    case 0xC259E5: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    case 0xC259E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC259E8.
    case 0xC259EA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2610 BNE @UNKNOWN180
    case 0xC259EB: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2611 LDX CURRENT_ATTACKER
    case 0xC259ED: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2612 LDA a:battler::current_action_argument,X
    case 0xC259F0: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    case 0xC259F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    // Overlapping static entry reached from 0xC259F3.
    case 0xC259F5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2614 JSL UNKNOWN_C24348
    case 0xC259F6: cpu.execute_instruction<0x22>(0xC24205, 4); return true;
    // src/battle/main_battle_routine.asm:2615 CMP #0
    case 0xC259FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2615 CMP #0
    // Overlapping static entry reached from 0xC259FA.
    case 0xC259FC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2616 BNE @UNKNOWN180
    case 0xC259FD: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2617 LDX CURRENT_ATTACKER
    case 0xC259FF: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2618 SEP #PROC_FLAGS::ACCUM8
    case 0xC25A02: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2619 STZ a:battler::current_action_argument,X
    case 0xC25A04: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2621 REP #PROC_FLAGS::ACCUM8
    case 0xC25A07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2622 LDA #0
    case 0xC25A09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2622 LDA #0
    // Overlapping static entry reached from 0xC25A09.
    case 0xC25A0B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2623 JSL FIX_ATTACKER_NAME
    case 0xC25A0C: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // src/battle/main_battle_routine.asm:2624 LDX CURRENT_ATTACKER
    case 0xC25A10: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2625 SEP #PROC_FLAGS::ACCUM8
    case 0xC25A13: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2626 LDA a:battler::current_action_argument,X
    case 0xC25A15: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2627 JSL REDIRECT_C1ACF8
    case 0xC25A18: cpu.execute_instruction<0x22>(0xC1DB59, 4); return true;
    // src/battle/main_battle_routine.asm:2628 JSL UNKNOWN_C23E32
    case 0xC25A1C: cpu.execute_instruction<0x22>(0xC23D07, 4); return true;
    // src/battle/main_battle_routine.asm:2630 LDX CURRENT_ATTACKER
    case 0xC25A20: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2631 LDA a:battler::ally_or_enemy,X
    case 0xC25A23: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    case 0xC25A26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    // Overlapping static entry reached from 0xC25A26.
    case 0xC25A28: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2633 BNE @UNKNOWN185
    case 0xC25A29: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // src/battle/main_battle_routine.asm:2634 LDX CURRENT_ATTACKER
    case 0xC25A2B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2635 LDA a:battler::id,X
    case 0xC25A2E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    case 0xC25A31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC25A31.
    case 0xC25A33: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25A34: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25A36: cpu.execute_instruction<0xB0>(0x000032, 2); return true;
    // src/battle/main_battle_routine.asm:2639 LDA #$0000
    case 0xC25A38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2639 LDA #$0000
    // Overlapping static entry reached from 0xC25A38.
    case 0xC25A3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:2640 STA @LOCAL0A
    case 0xC25A3B: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2645 BRA @UNKNOWN184
    case 0xC25A3D: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/battle/main_battle_routine.asm:2647 LDX CURRENT_ATTACKER
    case 0xC25A3F: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2648 LDA a:battler::id,X
    case 0xC25A42: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2649 STA @VIRTUAL02
    case 0xC25A45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2651 LDA @LOCAL0A
    case 0xC25A47: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2652 CLC
    case 0xC25A49: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2653 ADC #.LOWORD(GAME_STATE)
    case 0xC25A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/main_battle_routine.asm:2653 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC25A4A.
    case 0xC25A4C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2654 TAX
    case 0xC25A4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2655 LDA a:game_state::party_members,X
    case 0xC25A4E: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    case 0xC25A51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    // Overlapping static entry reached from 0xC25A51.
    case 0xC25A53: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/main_battle_routine.asm:2661 CMP @VIRTUAL02
    case 0xC25A54: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2662 BNE @UNKNOWN183
    case 0xC25A56: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2664 LDA @LOCAL0A
    case 0xC25A58: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2668 JSL REDIRECT_C43573
    case 0xC25A5A: cpu.execute_instruction<0x22>(0xC1DBA9, 4); return true;
    // src/battle/main_battle_routine.asm:2669 BRA @UNKNOWN185
    case 0xC25A5E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2672 LDA @LOCAL0A
    case 0xC25A60: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2673 INC
    case 0xC25A62: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2674 STA @LOCAL0A
    case 0xC25A63: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2681 CMP #$0006
    case 0xC25A65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2681 CMP #$0006
    // Overlapping static entry reached from 0xC25A65.
    case 0xC25A67: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2685 BCC @UNKNOWN182
    case 0xC25A68: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/battle/main_battle_routine.asm:2688 LDX CURRENT_ATTACKER
    case 0xC25A6A: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2689 LDA a:battler::current_action,X
    case 0xC25A6D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A70: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A73: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2691 TAX
    case 0xC25A77: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2692 INX
    case 0xC25A78: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2693 INX
    case 0xC25A79: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2694 INX
    case 0xC25A7A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2695 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A7B: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    case 0xC25A7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    // Overlapping static entry reached from 0xC25A7F.
    case 0xC25A81: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2697 BEQ @UNKNOWN187
    case 0xC25A82: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    case 0xC25A84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    // Overlapping static entry reached from 0xC25A84.
    case 0xC25A86: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/main_battle_routine.asm:2699 LDX CURRENT_ATTACKER
    case 0xC25A87: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2700 CMP a:battler::pp_target,X
    case 0xC25A8A: cpu.execute_instruction<0xDD>(0x000019, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25A8D: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25A8F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x0038F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25A91.
    case 0xC25A93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25A96.
    case 0xC25A98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A99: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A9B: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2703 JMP @UNKNOWN215
    case 0xC25A9F: cpu.execute_instruction<0x4C>(0x005CD5, 3); return true;
    // src/battle/main_battle_routine.asm:2705 TAX
    case 0xC25AA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2706 LDA CURRENT_ATTACKER
    case 0xC25AA3: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2707 JSL UNKNOWN_C2BCB9
    case 0xC25AA6: cpu.execute_instruction<0x22>(0xC2BC64, 4); return true;
    // src/battle/main_battle_routine.asm:2709 LDX CURRENT_ATTACKER
    case 0xC25AAA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2710 LDA a:battler::ally_or_enemy,X
    case 0xC25AAD: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    case 0xC25AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    // Overlapping static entry reached from 0xC25AB0.
    case 0xC25AB2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2712 CMP #1
    case 0xC25AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2712 CMP #1
    // Overlapping static entry reached from 0xC25AB3.
    case 0xC25AB5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2713 BNE @UNKNOWN194
    case 0xC25AB6: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/battle/main_battle_routine.asm:2714 LDX CURRENT_ATTACKER
    case 0xC25AB8: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2715 LDA a:battler::current_action,X
    case 0xC25ABB: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2716 BEQ @UNKNOWN194
    case 0xC25ABE: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2718 TAX
    case 0xC25AC7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2719 INX
    case 0xC25AC8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2720 INX
    case 0xC25AC9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2721 LDA f:BATTLE_ACTION_TABLE,X ;battle_action::type
    case 0xC25ACA: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    case 0xC25ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    // Overlapping static entry reached from 0xC25ACE.
    case 0xC25AD0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    case 0xC25AD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC25AD1.
    case 0xC25AD3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2724 BEQ @UNKNOWN188
    case 0xC25AD4: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    case 0xC25AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    // Overlapping static entry reached from 0xC25AD6.
    case 0xC25AD8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2726 BEQ @UNKNOWN188
    case 0xC25AD9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    case 0xC25ADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25ADB.
    case 0xC25ADD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2728 BEQ @UNKNOWN189
    case 0xC25ADE: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    case 0xC25AE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    // Overlapping static entry reached from 0xC25AE0.
    case 0xC25AE2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2730 BEQ @UNKNOWN190
    case 0xC25AE3: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2731 BRA @UNKNOWN191
    case 0xC25AE5: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:2733 LDA #1
    case 0xC25AE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2733 LDA #1
    // Overlapping static entry reached from 0xC25AE7.
    case 0xC25AE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2734 JSL UNKNOWN_C2FEF9
    case 0xC25AEA: cpu.execute_instruction<0x22>(0xC2FE12, 4); return true;
    // src/battle/main_battle_routine.asm:2735 BRA @UNKNOWN191
    case 0xC25AEE: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2737 LDA #2
    case 0xC25AF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2737 LDA #2
    // Overlapping static entry reached from 0xC25AF0.
    case 0xC25AF2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2738 JSL UNKNOWN_C2FEF9
    case 0xC25AF3: cpu.execute_instruction<0x22>(0xC2FE12, 4); return true;
    // src/battle/main_battle_routine.asm:2739 BRA @UNKNOWN191
    case 0xC25AF7: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2741 LDA #3
    case 0xC25AF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2741 LDA #3
    // Overlapping static entry reached from 0xC25AF9.
    case 0xC25AFB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2742 JSL UNKNOWN_C2FEF9
    case 0xC25AFC: cpu.execute_instruction<0x22>(0xC2FE12, 4); return true;
    // src/battle/main_battle_routine.asm:2744 SEP #PROC_FLAGS::ACCUM8
    case 0xC25B00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2745 LDA #12
    case 0xC25B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00AE0C, 3); return true;
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    case 0xC25B04: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25B02.
    case 0xC25B05: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:2747 STA a:battler::unknown73,X
    case 0xC25B07: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/battle/main_battle_routine.asm:2748 LDX #0
    case 0xC25B0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2748 LDX #0
    // Overlapping static entry reached from 0xC25B0A.
    case 0xC25B0C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2749 STX @LOCAL07
    case 0xC25B0D: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2750 BRA @UNKNOWN193
    case 0xC25B0F: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2752 JSL WINDOW_TICK
    case 0xC25B11: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/main_battle_routine.asm:2753 LDX @LOCAL07
    case 0xC25B15: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2754 INX
    case 0xC25B17: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2755 STX @LOCAL07
    case 0xC25B18: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2757 CPX #12
    case 0xC25B1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:2757 CPX #12
    // Overlapping static entry reached from 0xC25B1A.
    case 0xC25B1C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2758 BCC @UNKNOWN192
    case 0xC25B1D: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/battle/main_battle_routine.asm:2760 LDY @LOCAL10
    case 0xC25B1F: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2761 BEQ @UNKNOWN196
    case 0xC25B21: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/main_battle_routine.asm:2762 LDX CURRENT_ATTACKER
    case 0xC25B23: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2763 REP #PROC_FLAGS::ACCUM8
    case 0xC25B26: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2764 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25B28: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    case 0xC25B2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    // Overlapping static entry reached from 0xC25B2B.
    case 0xC25B2D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    case 0xC25B2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25B2E.
    case 0xC25B30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2767 BNE @UNKNOWN195
    case 0xC25B31: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25B33.
    case 0xC25B35: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B36: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25B38.
    case 0xC25B3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B3B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B3D: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2770 LDX CURRENT_ATTACKER
    case 0xC25B41: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2771 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25B44: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    case 0xC25B47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    // Overlapping static entry reached from 0xC25B47.
    case 0xC25B49: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25B4A.
    case 0xC25B4C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2774 BNE @UNKNOWN196
    case 0xC25B4D: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000036, 2); else cpu.execute_instruction<0xA9>(0x000036, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25B4F.
    case 0xC25B51: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25B54.
    case 0xC25B56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B57: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B59: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2777 REP #PROC_FLAGS::ACCUM8
    case 0xC25B5D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25B5F.
    case 0xC25B61: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B62: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25B64.
    case 0xC25B66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B67: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2779 LDX CURRENT_ATTACKER
    case 0xC25B69: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2780 LDA a:battler::current_action,X
    case 0xC25B6C: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B6F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2782 INC
    case 0xC25B76: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2783 INC
    case 0xC25B77: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2784 INC
    case 0xC25B78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2785 INC
    case 0xC25B79: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2786 CLC
    case 0xC25B7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2787 ADC @VIRTUAL0A
    case 0xC25B7B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2788 STA @VIRTUAL0A
    case 0xC25B7D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25B7F.
    case 0xC25B81: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B82: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B84: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B85: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B89: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B91: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2791 JSL UNKNOWN_C1DD9F
    case 0xC25B93: cpu.execute_instruction<0x22>(0xC1DB7C, 4); return true;
    // src/battle/main_battle_routine.asm:2792 LDX CURRENT_ATTACKER
    case 0xC25B97: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2793 LDA a:battler::current_action,X
    case 0xC25B9A: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25B9D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25B9F: cpu.execute_instruction<0x4C>(0x005CD5, 3); return true;
    // src/battle/main_battle_routine.asm:2795 BRA @UNKNOWN199
    case 0xC25BA2: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2797 JSL WINDOW_TICK
    case 0xC25BA4: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/main_battle_routine.asm:2799 JSL UNKNOWN_C2EACF
    case 0xC25BA8: cpu.execute_instruction<0x22>(0xC2E9E8, 4); return true;
    // src/battle/main_battle_routine.asm:2800 CMP #0
    case 0xC25BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2800 CMP #0
    // Overlapping static entry reached from 0xC25BAC.
    case 0xC25BAE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2801 BNE @UNKNOWN198
    case 0xC25BAF: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/battle/main_battle_routine.asm:2802 LDY #0
    case 0xC25BB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2802 LDY #0
    // Overlapping static entry reached from 0xC25BB1.
    case 0xC25BB3: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2803 STY @LOCAL05
    case 0xC25BB4: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2804 JMP @UNKNOWN214
    case 0xC25BB6: cpu.execute_instruction<0x4C>(0x005CCB, 3); return true;
    // src/battle/main_battle_routine.asm:2806 TYA
    case 0xC25BB9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2807 JSL IS_CHAR_TARGETTED
    case 0xC25BBA: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/battle/main_battle_routine.asm:2808 CMP #0
    case 0xC25BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2808 CMP #0
    // Overlapping static entry reached from 0xC25BBE.
    case 0xC25BC0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25BC1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25BC3: cpu.execute_instruction<0x4C>(0x005CC6, 3); return true;
    // src/battle/main_battle_routine.asm:2810 LDY @LOCAL05
    case 0xC25BC6: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2811 TYA
    case 0xC25BC8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    case 0xC25BC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25BC9.
    case 0xC25BCB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2813 JSL MULT168
    case 0xC25BCC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/main_battle_routine.asm:2814 CLC
    case 0xC25BD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25BD1.
    case 0xC25BD3: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    case 0xC25BD4: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC25BD3.
    case 0xC25BD5: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/main_battle_routine.asm:2817 JSL FIX_TARGET_NAME
    case 0xC25BD7: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/main_battle_routine.asm:2818 LDX CURRENT_TARGET
    case 0xC25BDB: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:2819 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25BDE: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    case 0xC25BE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    // Overlapping static entry reached from 0xC25BE1.
    case 0xC25BE3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    case 0xC25BE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25BE4.
    case 0xC25BE6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2822 BNE @UNKNOWN204
    case 0xC25BE7: cpu.execute_instruction<0xD0>(0x00002E, 2); return true;
    // src/battle/main_battle_routine.asm:2824 LDX #$0000
    case 0xC25BE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2824 LDX #$0000
    // Overlapping static entry reached from 0xC25BE9.
    case 0xC25BEB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2825 STX @LOCAL10
    case 0xC25BEC: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2830 BRA @UNKNOWN203
    case 0xC25BEE: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:2835 LDX CURRENT_ATTACKER
    case 0xC25BF0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2836 CMP a:battler::current_action,X
    case 0xC25BF3: cpu.execute_instruction<0xDD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2837 BEQ @UNKNOWN204
    case 0xC25BF6: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2839 LDX @LOCAL10
    case 0xC25BF8: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2840 INX
    case 0xC25BFA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2841 STX @LOCAL10
    case 0xC25BFB: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2849 TXA
    case 0xC25BFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2850 ASL
    case 0xC25BFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2851 TAX
    case 0xC25BFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2852 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC25C00: cpu.execute_instruction<0xBF>(0xC474F0, 4); return true;
    // src/battle/main_battle_routine.asm:2859 BNE @UNKNOWN202
    case 0xC25C04: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x002E3A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25C06.
    case 0xC25C08: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C09: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25C0B.
    case 0xC25C0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C10: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2861 JMP @UNKNOWN213
    case 0xC25C14: cpu.execute_instruction<0x4C>(0x005CC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C17.
    case 0xC25C19: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C1C.
    case 0xC25C1E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2864 LDX CURRENT_ATTACKER
    case 0xC25C21: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2865 LDA a:battler::current_action,X
    case 0xC25C24: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2867 CLC
    case 0xC25C2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2868 ADC #8
    case 0xC25C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2868 ADC #8
    // Overlapping static entry reached from 0xC25C2F.
    case 0xC25C31: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:2869 CLC
    case 0xC25C32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2870 ADC @VIRTUAL0A
    case 0xC25C33: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2871 STA @VIRTUAL0A
    case 0xC25C35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25C37.
    case 0xC25C39: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C41: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C43.
    case 0xC25C45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C46: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C48.
    case 0xC25C4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C4B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C4F: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C51: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C53: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C55: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2875 BEQ @UNKNOWN213
    case 0xC25C57: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/battle/main_battle_routine.asm:2876 PHA
    case 0xC25C59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5C: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C61: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/battle/main_battle_routine.asm:2878 PLA
    case 0xC25C64: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2879 JSL UNKNOWN_C09279
    case 0xC25C65: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/main_battle_routine.asm:2880 JSL CHECK_DEAD_PLAYERS
    case 0xC25C69: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:2881 SEP #PROC_FLAGS::ACCUM8
    case 0xC25C6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2882 LDA #1
    case 0xC25C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    case 0xC25C71: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25C6F.
    case 0xC25C72: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25C72.
    case 0xC25C73: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/battle/main_battle_routine.asm:2884 REP #PROC_FLAGS::ACCUM8
    case 0xC25C74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2885 LDA #0
    case 0xC25C76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2885 LDA #0
    // Overlapping static entry reached from 0xC25C76.
    case 0xC25C78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2886 JSL COUNT_CHARS
    case 0xC25C79: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2887 CMP #0
    case 0xC25C7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2887 CMP #0
    // Overlapping static entry reached from 0xC25C7D.
    case 0xC25C7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2888 BEQ @UNKNOWN206
    case 0xC25C80: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2889 LDA #1
    case 0xC25C82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2889 LDA #1
    // Overlapping static entry reached from 0xC25C82.
    case 0xC25C84: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2890 JSL COUNT_CHARS
    case 0xC25C85: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:2891 CMP #0
    case 0xC25C89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2891 CMP #0
    // Overlapping static entry reached from 0xC25C89.
    case 0xC25C8B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2892 BNE @UNKNOWN207
    case 0xC25C8C: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2894 JSL UNKNOWN_C2437E
    case 0xC25C8E: cpu.execute_instruction<0x22>(0xC2423B, 4); return true;
    // src/battle/main_battle_routine.asm:2895 JMP @UNKNOWN225
    case 0xC25C92: cpu.execute_instruction<0x4C>(0x005E23, 3); return true;
    // src/battle/main_battle_routine.asm:2897 LDA SPECIAL_DEFEAT
    case 0xC25C95: cpu.execute_instruction<0xAD>(0x00ABE3, 3); return true;
    // src/battle/main_battle_routine.asm:2898 CMP #3
    case 0xC25C98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2898 CMP #3
    // Overlapping static entry reached from 0xC25C98.
    case 0xC25C9A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2899 BEQ @UNKNOWN208
    case 0xC25C9B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2900 CMP #2
    case 0xC25C9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2900 CMP #2
    // Overlapping static entry reached from 0xC25C9D.
    case 0xC25C9F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2901 BEQ @UNKNOWN209
    case 0xC25CA0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2902 CMP #1
    case 0xC25CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2902 CMP #1
    // Overlapping static entry reached from 0xC25CA2.
    case 0xC25CA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2903 BEQ @UNKNOWN210
    case 0xC25CA5: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2904 BRA @UNKNOWN212
    case 0xC25CA7: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:2906 STZ @LOCAL03
    case 0xC25CA9: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2907 JMP @UNKNOWN237
    case 0xC25CAB: cpu.execute_instruction<0x4C>(0x005FBF, 3); return true;
    // src/battle/main_battle_routine.asm:2909 JSL UNKNOWN_C2437E
    case 0xC25CAE: cpu.execute_instruction<0x22>(0xC2423B, 4); return true;
    // src/battle/main_battle_routine.asm:2910 JMP @ENEMIES_ARE_DEAD
    case 0xC25CB2: cpu.execute_instruction<0x4C>(0x005E5A, 3); return true;
    // src/battle/main_battle_routine.asm:2912 LDA #2
    case 0xC25CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2912 LDA #2
    // Overlapping static entry reached from 0xC25CB5.
    case 0xC25CB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:2913 STA @LOCAL03
    case 0xC25CB8: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2914 JMP @UNKNOWN237
    case 0xC25CBA: cpu.execute_instruction<0x4C>(0x005FBF, 3); return true;
    // src/battle/main_battle_routine.asm:2916 JSL WINDOW_TICK
    case 0xC25CBD: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/main_battle_routine.asm:2918 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC25CC1: cpu.execute_instruction<0xAD>(0x00AF65, 3); return true;
    // src/battle/main_battle_routine.asm:2919 BNE @UNKNOWN211
    case 0xC25CC4: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // src/battle/main_battle_routine.asm:2921 LDY @LOCAL05
    case 0xC25CC6: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2922 INY
    case 0xC25CC8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2923 STY @LOCAL05
    case 0xC25CC9: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    case 0xC25CCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25CCB.
    case 0xC25CCD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CCE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CD0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CD2: cpu.execute_instruction<0x4C>(0x005BB9, 3); return true;
    // src/battle/main_battle_routine.asm:2928 LDX CURRENT_ATTACKER
    case 0xC25CD5: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2929 LDA a:battler::ally_or_enemy,X
    case 0xC25CD8: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    case 0xC25CDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    // Overlapping static entry reached from 0xC25CDB.
    case 0xC25CDD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2931 BNE @UNKNOWN217
    case 0xC25CDE: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/main_battle_routine.asm:2932 JSL UNKNOWN_C2437E
    case 0xC25CE0: cpu.execute_instruction<0x22>(0xC2423B, 4); return true;
    // src/battle/main_battle_routine.asm:2933 LDA MIRROR_ENEMY
    case 0xC25CE4: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:2934 BEQ @UNKNOWN216
    case 0xC25CE7: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/main_battle_routine.asm:2935 LDX CURRENT_ATTACKER
    case 0xC25CE9: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2936 LDA a:battler::id,X
    case 0xC25CEC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    case 0xC25CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25CEF.
    case 0xC25CF1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2938 BNE @UNKNOWN216
    case 0xC25CF2: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:2939 LDX MIRROR_TURN_TIMER
    case 0xC25CF4: cpu.execute_instruction<0xAE>(0x00AC37, 3); return true;
    // src/battle/main_battle_routine.asm:2940 DEX
    case 0xC25CF7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2941 STX MIRROR_TURN_TIMER
    case 0xC25CF8: cpu.execute_instruction<0x8E>(0x00AC37, 3); return true;
    // src/battle/main_battle_routine.asm:2942 BNE @UNKNOWN216
    case 0xC25CFB: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/battle/main_battle_routine.asm:2943 STZ MIRROR_ENEMY
    case 0xC25CFD: cpu.execute_instruction<0x9C>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:2944 LDA CURRENT_ATTACKER
    case 0xC25D00: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D05: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D08: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D09: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D0B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2946 REP #PROC_FLAGS::ACCUM8
    case 0xC25D0D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D11: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D15: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x00ABE9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC25D17.
    case 0xC25D19: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D20: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D22: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2949 REP #PROC_FLAGS::ACCUM8
    case 0xC25D24: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D28: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D2C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2951 JSL COPY_MIRROR_DATA
    case 0xC25D2E: cpu.execute_instruction<0x22>(0xC2AED3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x003611, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D32.
    case 0xC25D34: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D34.
    case 0xC25D36: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D37.
    case 0xC25D39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D3C: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2954 JSL REDIRECT_C3E6F8
    case 0xC25D40: cpu.execute_instruction<0x22>(0xC1DBAF, 4); return true;
    // src/battle/main_battle_routine.asm:2956 JSL CHECK_DEAD_PLAYERS
    case 0xC25D44: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:2957 LDA CURRENT_ATTACKER
    case 0xC25D48: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2958 STA CURRENT_TARGET
    case 0xC25D4B: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/main_battle_routine.asm:2959 JSL FIX_TARGET_NAME
    case 0xC25D4E: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/main_battle_routine.asm:2960 LDX CURRENT_ATTACKER
    case 0xC25D52: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2961 LDA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25D55: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    case 0xC25D58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    // Overlapping static entry reached from 0xC25D58.
    case 0xC25D5A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    case 0xC25D5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25D5B.
    case 0xC25D5D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2964 BEQ @UNKNOWN218
    case 0xC25D5E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    case 0xC25D60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC25D60.
    case 0xC25D62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2966 BEQ @UNKNOWN219
    case 0xC25D63: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    case 0xC25D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC25D65.
    case 0xC25D67: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2968 BEQ @UNKNOWN220
    case 0xC25D68: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/main_battle_routine.asm:2969 BRA @UNKNOWN221
    case 0xC25D6A: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/battle/main_battle_routine.asm:2971 JSL RAND
    case 0xC25D6C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    case 0xC25D70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    // Overlapping static entry reached from 0xC25D70.
    case 0xC25D72: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2973 BNE @UNKNOWN221
    case 0xC25D73: cpu.execute_instruction<0xD0>(0x000051, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00342E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D75.
    case 0xC25D77: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D77.
    case 0xC25D79: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D7A.
    case 0xC25D7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7F: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2975 LDX CURRENT_ATTACKER
    case 0xC25D83: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2976 SEP #PROC_FLAGS::ACCUM8
    case 0xC25D86: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2977 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25D88: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2978 BRA @UNKNOWN221
    case 0xC25D8B: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/main_battle_routine.asm:2981 LDA #100
    case 0xC25D8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2981 LDA #100
    // Overlapping static entry reached from 0xC25D8D.
    case 0xC25D8F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2982 JSR RAND_LIMIT
    case 0xC25D90: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    case 0xC25D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    // Overlapping static entry reached from 0xC25D93.
    case 0xC25D95: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:2984 BCS @UNKNOWN221
    case 0xC25D96: cpu.execute_instruction<0xB0>(0x00002E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x0033D1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D98.
    case 0xC25D9A: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D9B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D9A.
    case 0xC25D9C: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D9D.
    case 0xC25D9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25DA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25DA2: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2986 LDX CURRENT_ATTACKER
    case 0xC25DA6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2987 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2988 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25DAB: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2989 BRA @UNKNOWN221
    case 0xC25DAE: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x0033E9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB0.
    case 0xC25DB2: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB2.
    case 0xC25DB4: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB5.
    case 0xC25DB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DBA: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:2993 LDX CURRENT_ATTACKER
    case 0xC25DBE: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2994 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2995 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25DC3: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2997 REP #PROC_FLAGS::ACCUM8
    case 0xC25DC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2998 LDA CURRENT_ATTACKER
    case 0xC25DC8: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/main_battle_routine.asm:2999 CLC
    case 0xC25DCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    case 0xC25DCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    // Overlapping static entry reached from 0xC25DCC.
    case 0xC25DCE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3001 TAX
    case 0xC25DCF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3002 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3003 LDA __BSS_START__,X
    case 0xC25DD2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3004 STA @LOCAL02
    case 0xC25DD5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:3005 REP #PROC_FLAGS::ACCUM8
    case 0xC25DD7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    case 0xC25DD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    // Overlapping static entry reached from 0xC25DD9.
    case 0xC25DDB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3007 BEQ @UNKNOWN222
    case 0xC25DDC: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:3008 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3009 LDA @LOCAL02
    case 0xC25DE0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:3010 DEC
    case 0xC25DE2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3011 STA __BSS_START__,X
    case 0xC25DE3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3012 REP #PROC_FLAGS::ACCUM8
    case 0xC25DE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    case 0xC25DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    // Overlapping static entry reached from 0xC25DE8.
    case 0xC25DEA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3014 BNE @UNKNOWN222
    case 0xC25DEB: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x003440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DED.
    case 0xC25DEF: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DEF.
    case 0xC25DF1: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DF2.
    case 0xC25DF4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF7: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25DFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25DFB.
    case 0xC25DFD: cpu.execute_instruction<0xA1>(0x0000A2, 2); return true;
    // src/battle/main_battle_routine.asm:3018 LDX #0
    case 0xC25DFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25DFD.
    case 0xC25DFF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25DFE.
    case 0xC25E00: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:3019 STX @LOCAL10
    case 0xC25E01: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3020 BRA @UNKNOWN224
    case 0xC25E03: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:3022 TAX
    case 0xC25E05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3023 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3024 STZ a:battler::use_alt_spritemap,X
    case 0xC25E08: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/main_battle_routine.asm:3025 CLC
    case 0xC25E0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3026 REP #PROC_FLAGS::ACCUM8
    case 0xC25E0C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    case 0xC25E0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25E0E.
    case 0xC25E10: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:3028 LDX @LOCAL10
    case 0xC25E11: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3029 INX
    case 0xC25E13: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3030 STX @LOCAL10
    case 0xC25E14: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    case 0xC25E16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25E16.
    case 0xC25E18: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3033 BCC @UNKNOWN223
    case 0xC25E19: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/main_battle_routine.asm:3034 JSL CHECK_DEAD_PLAYERS
    case 0xC25E1B: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:3035 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC25E1F: cpu.execute_instruction<0x22>(0xC1DB18, 4); return true;
    // src/battle/main_battle_routine.asm:3037 LDA #0
    case 0xC25E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3037 LDA #0
    // Overlapping static entry reached from 0xC25E23.
    case 0xC25E25: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3038 JSL COUNT_CHARS
    case 0xC25E26: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:3039 CMP #0
    case 0xC25E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3039 CMP #0
    // Overlapping static entry reached from 0xC25E2A.
    case 0xC25E2C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3040 BNE @ALLIES_ARE_ALIVE
    case 0xC25E2D: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/battle/main_battle_routine.asm:3041 LDA #1
    case 0xC25E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3041 LDA #1
    // Overlapping static entry reached from 0xC25E2F.
    case 0xC25E31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3042 STA @LOCAL03
    case 0xC25E32: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3043 JSL RESET_HPPP_ROLLING
    case 0xC25E34: cpu.execute_instruction<0x22>(0xC20E2B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0047C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E38.
    case 0xC25E3A: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E3B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E3A.
    case 0xC25E3C: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E3D.
    case 0xC25E3F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E42: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:3045 LDA #1
    case 0xC25E46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3045 LDA #1
    // Overlapping static entry reached from 0xC25E46.
    case 0xC25E48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3047 STA @LOCAL06
    case 0xC25E49: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:3052 LDA #1
    case 0xC25E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3052 LDA #1
    // Overlapping static entry reached from 0xC25E4B.
    case 0xC25E4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3053 JSL COUNT_CHARS
    case 0xC25E4E: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:3054 CMP #0
    case 0xC25E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3054 CMP #0
    // Overlapping static entry reached from 0xC25E52.
    case 0xC25E54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25E55: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25E57: cpu.execute_instruction<0x4C>(0x005FAD, 3); return true;
    // src/battle/main_battle_routine.asm:3057 STZ @LOCAL03
    case 0xC25E5A: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3058 JSL RESET_HPPP_ROLLING
    case 0xC25E5C: cpu.execute_instruction<0x22>(0xC20E2B, 4); return true;
    // src/battle/main_battle_routine.asm:3059 LDA #1
    case 0xC25E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3059 LDA #1
    // Overlapping static entry reached from 0xC25E60.
    case 0xC25E62: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:3060 STA LETTERBOX_EFFECT_ENDING
    case 0xC25E63: cpu.execute_instruction<0x8D>(0x00AF8B, 3); return true;
    // src/battle/main_battle_routine.asm:3061 STA ENABLE_BACKGROUND_DARKENING
    case 0xC25E66: cpu.execute_instruction<0x8D>(0x00AFA5, 3); return true;
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC25E69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006A, 2); else cpu.execute_instruction<0xA0>(0x009B6A, 3); return true;
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC25E69.
    case 0xC25E6B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3064 STY @LOCAL0A
    case 0xC25E6C: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3068 LDA BATTLE_MONEY_SCRATCH
    case 0xC25E6E: cpu.execute_instruction<0xAD>(0x00AB7A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25E71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25E73: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E75: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E77: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E79: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:3071 JSL DEPOSIT_INTO_ATM
    case 0xC25E7D: cpu.execute_instruction<0x22>(0xC226E9, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E81: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E83: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E85: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E87: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:3074 LDY @LOCAL0A
    case 0xC25E89: cpu.execute_instruction<0xA4>(0x000025, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E8B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E8E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E90: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E93: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3079 CLC
    case 0xC25E95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E98: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9E: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA9: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:3082 LDA #0
    case 0xC25EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3082 LDA #0
    // Overlapping static entry reached from 0xC25EAC.
    case 0xC25EAE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3083 JSL COUNT_CHARS
    case 0xC25EAF: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/main_battle_routine.asm:3084 DEC
    case 0xC25EB3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25EB4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25EB6: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EB8: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EBD: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3087 CLC
    case 0xC25EC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25ECB: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25ECD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ECF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED1: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED6: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/main_battle_routine.asm:3090 LDA #0
    case 0xC25ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3090 LDA #0
    // Overlapping static entry reached from 0xC25ED9.
    case 0xC25EDB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3091 JSL COUNT_CHARS
    case 0xC25EDC: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25EE0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25EE2: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:3093 JSL DIVISION32
    case 0xC25EE4: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EEA: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EEF: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/main_battle_routine.asm:3095 LDA CURRENT_BATTLE_GROUP
    case 0xC25EF2: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    case 0xC25EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    // Overlapping static entry reached from 0xC25EF5.
    case 0xC25EF7: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    case 0xC25EF8: cpu.execute_instruction<0x90>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    // Overlapping static entry reached from 0xC25EF7.
    case 0xC25EF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004780, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFA.
    case 0xC25EFC: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFC.
    case 0xC25EFE: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFF.
    case 0xC25F01: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25F02: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F04: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F06: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F08: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F0A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3100 JSL DISPLAY_TEXT_WAIT
    case 0xC25F0C: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:3101 BRA @SKIP_NOT_BOSS_BATTLE
    case 0xC25F10: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00473E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F12.
    case 0xC25F14: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F14.
    case 0xC25F16: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F17.
    case 0xC25F19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F1A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F1C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F1E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F20: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F22: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3105 JSL DISPLAY_TEXT_WAIT
    case 0xC25F24: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/main_battle_routine.asm:3107 LDA ITEM_DROPPED
    case 0xC25F28: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:3108 BEQ @UNKNOWN230
    case 0xC25F2B: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3109 SEP #PROC_FLAGS::ACCUM8
    case 0xC25F2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3110 LDA ITEM_DROPPED
    case 0xC25F2F: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/main_battle_routine.asm:3111 JSL REDIRECT_C1ACF8
    case 0xC25F32: cpu.execute_instruction<0x22>(0xC1DB59, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x004917, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F36.
    case 0xC25F38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000085, 2); else cpu.execute_instruction<0x49>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F39: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F38.
    case 0xC25F3A: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F3B.
    case 0xC25F3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F40: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25F44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AE, 2); else cpu.execute_instruction<0xA0>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25F44.
    case 0xC25F46: cpu.execute_instruction<0xA1>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    case 0xC25F47: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    // Overlapping static entry reached from 0xC25F46.
    case 0xC25F48: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    case 0xC25F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC25F48.
    case 0xC25F4A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC25F49.
    case 0xC25F4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3118 STA @VIRTUAL02
    case 0xC25F4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3119 BRA @UNKNOWN233
    case 0xC25F4E: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/main_battle_routine.asm:3121 LDA a:battler::consciousness,Y
    case 0xC25F50: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    case 0xC25F53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    // Overlapping static entry reached from 0xC25F53.
    case 0xC25F55: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    case 0xC25F56: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    case 0xC25F58: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    case 0xC25F5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    // Overlapping static entry reached from 0xC25F5B.
    case 0xC25F5D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3126 BNE @UNKNOWN232
    case 0xC25F5E: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:3127 LDA a:battler::npc_id,Y
    case 0xC25F60: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    case 0xC25F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    // Overlapping static entry reached from 0xC25F63.
    case 0xC25F65: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3129 BNE @UNKNOWN232
    case 0xC25F66: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:3130 LDA a:battler::afflictions,Y
    case 0xC25F68: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    case 0xC25F6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    // Overlapping static entry reached from 0xC25F6B.
    case 0xC25F6D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3132 TAX
    case 0xC25F6E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    case 0xC25F6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25F6F.
    case 0xC25F71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3134 BEQ @UNKNOWN232
    case 0xC25F72: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    case 0xC25F74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC25F74.
    case 0xC25F76: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3136 BEQ @UNKNOWN232
    case 0xC25F77: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F79: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F7E: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F81: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F83: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:3139 LDX #1
    case 0xC25F8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3139 LDX #1
    // Overlapping static entry reached from 0xC25F8B.
    case 0xC25F8D: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/battle/main_battle_routine.asm:3140 LDA a:battler::id,Y
    case 0xC25F8E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3141 JSL GAIN_EXP
    case 0xC25F91: cpu.execute_instruction<0x22>(0xC1D7E4, 4); return true;
    // src/battle/main_battle_routine.asm:3143 LDY @LOCAL10
    case 0xC25F95: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3144 TYA
    case 0xC25F97: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3145 CLC
    case 0xC25F98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    case 0xC25F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25F99.
    case 0xC25F9B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:3147 TAY
    case 0xC25F9C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3148 STY @LOCAL10
    case 0xC25F9D: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3149 INC @VIRTUAL02
    case 0xC25F9F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3151 LDA @VIRTUAL02
    case 0xC25FA1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    case 0xC25FA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25FA3.
    case 0xC25FA5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3153 BCC @UNKNOWN231
    case 0xC25FA6: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:3154 LDA #1
    case 0xC25FA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3154 LDA #1
    // Overlapping static entry reached from 0xC25FA8.
    case 0xC25FAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3156 STA @LOCAL06
    case 0xC25FAB: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:3162 LDA @LOCAL06
    case 0xC25FAD: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC25FAF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC25FB1: cpu.execute_instruction<0x4C>(0x005538, 3); return true;
    // src/battle/main_battle_routine.asm:3168 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC25FB4: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/battle/main_battle_routine.asm:3171 LDA @LOCAL06
    case 0xC25FB8: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC25FBA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC25FBC: cpu.execute_instruction<0x4C>(0x004F02, 3); return true;
    // src/battle/main_battle_routine.asm:3177 JSL RESET_HPPP_ROLLING
    case 0xC25FBF: cpu.execute_instruction<0x22>(0xC20E2B, 4); return true;
    // src/battle/main_battle_routine.asm:3179 JSL WINDOW_TICK
    case 0xC25FC3: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/main_battle_routine.asm:3180 JSL UNKNOWN_C2108C
    case 0xC25FC7: cpu.execute_instruction<0x22>(0xC20F28, 4); return true;
    // src/battle/main_battle_routine.asm:3181 CMP #0
    case 0xC25FCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3181 CMP #0
    // Overlapping static entry reached from 0xC25FCB.
    case 0xC25FCD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3182 BEQ @UNKNOWN238
    case 0xC25FCE: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/battle/main_battle_routine.asm:3183 LDA MIRROR_ENEMY
    case 0xC25FD0: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC25FD3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC25FD5: cpu.execute_instruction<0x4C>(0x006071, 3); return true;
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25FD8.
    case 0xC25FDA: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3187 STA @LOCAL0B
    case 0xC25FDB: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3187 STA @LOCAL0B
    // Overlapping static entry reached from 0xC25FDA.
    case 0xC25FDC: cpu.execute_instruction<0x27>(0x0000A2, 2); return true;
    // src/battle/main_battle_routine.asm:3188 LDX #0
    case 0xC25FDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3188 LDX #0
    // Overlapping static entry reached from 0xC25FDC.
    case 0xC25FDE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:3188 LDX #0
    // Overlapping static entry reached from 0xC25FDD.
    case 0xC25FDF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:3189 STX @LOCAL0C
    case 0xC25FE0: cpu.execute_instruction<0x86>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3195 JMP @UNKNOWN242
    case 0xC25FE2: cpu.execute_instruction<0x4C>(0x006067, 3); return true;
    // src/battle/main_battle_routine.asm:3197 TAX
    case 0xC25FE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3198 LDA a:battler::consciousness,X
    case 0xC25FE6: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    case 0xC25FE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    // Overlapping static entry reached from 0xC25FE9.
    case 0xC25FEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3200 BEQ @UNKNOWN241
    case 0xC25FEC: cpu.execute_instruction<0xF0>(0x00006C, 2); return true;
    // src/battle/main_battle_routine.asm:3202 LDA @LOCAL0B
    case 0xC25FEE: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3206 TAX
    case 0xC25FF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3207 LDA a:battler::ally_or_enemy,X
    case 0xC25FF1: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    case 0xC25FF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    // Overlapping static entry reached from 0xC25FF4.
    case 0xC25FF6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3209 BNE @UNKNOWN241
    case 0xC25FF7: cpu.execute_instruction<0xD0>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:3211 LDA @LOCAL0B
    case 0xC25FF9: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3215 TAX
    case 0xC25FFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3216 LDA a:battler::id,X
    case 0xC25FFC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    case 0xC25FFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25FFF.
    case 0xC26001: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3218 BNE @UNKNOWN241
    case 0xC26002: cpu.execute_instruction<0xD0>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:3219 STZ MIRROR_ENEMY
    case 0xC26004: cpu.execute_instruction<0x9C>(0x00ABE7, 3); return true;
    // src/battle/main_battle_routine.asm:3221 LDA @LOCAL0B
    case 0xC26007: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3225 CLC
    case 0xC26009: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    case 0xC2600A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC2600A.
    case 0xC2600C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3227 TAX
    case 0xC2600D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3229 STX @LOCAL0C
    case 0xC2600E: cpu.execute_instruction<0x86>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3233 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26010: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    case 0xC26013: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    // Overlapping static entry reached from 0xC26013.
    case 0xC26015: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3235 STA @VIRTUAL04
    case 0xC26016: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:3236 STA @LOCAL08
    case 0xC26018: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:3238 LDA @LOCAL0B
    case 0xC2601A: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26021: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26022: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26024: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:3243 REP #PROC_FLAGS::ACCUM8
    case 0xC26026: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26028: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC20C17.
    case 0xC2602B: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26030: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x00ABE9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC26030.
    case 0xC26032: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26033: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26035: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26036: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26038: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26039: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2603B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:3246 REP #PROC_FLAGS::ACCUM8
    case 0xC2603D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2603F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26041: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26043: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26045: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3248 JSL COPY_MIRROR_DATA
    case 0xC26047: cpu.execute_instruction<0x22>(0xC2AED3, 4); return true;
    // src/battle/main_battle_routine.asm:3249 LDA @VIRTUAL04
    case 0xC2604B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:3250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2604D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3252 LDX @LOCAL0C
    case 0xC2604F: cpu.execute_instruction<0xA6>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3256 STA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26051: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3257 JSL CHECK_DEAD_PLAYERS
    case 0xC26054: cpu.execute_instruction<0x22>(0xC2BAC3, 4); return true;
    // src/battle/main_battle_routine.asm:3258 BRA @UNKNOWN243
    case 0xC26058: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3262 LDA @LOCAL0B
    case 0xC2605A: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3266 CLC
    case 0xC2605C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    case 0xC2605D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2605D.
    case 0xC2605F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3269 STA @LOCAL0B
    case 0xC26060: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:3270 LDX @LOCAL0C
    case 0xC26062: cpu.execute_instruction<0xA6>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3271 INX
    case 0xC26064: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3272 STX @LOCAL0C
    case 0xC26065: cpu.execute_instruction<0x86>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    case 0xC26067: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26067.
    case 0xC26069: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606E: cpu.execute_instruction<0x4C>(0x005FE5, 3); return true;
    // src/battle/main_battle_routine.asm:3283 JSL RESET_POST_BATTLE_STATS
    case 0xC26071: cpu.execute_instruction<0x22>(0xC2BC07, 4); return true;
    // src/battle/main_battle_routine.asm:3284 SEP #PROC_FLAGS::ACCUM8
    case 0xC26075: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3285 STZ GAME_STATE+game_state::auto_fight_enable
    case 0xC26077: cpu.execute_instruction<0x9C>(0x009B62, 3); return true;
    // src/battle/main_battle_routine.asm:3286 REP #PROC_FLAGS::ACCUM8
    case 0xC2607A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3287 STZ BATTLE_MODE_FLAG
    case 0xC2607C: cpu.execute_instruction<0x9C>(0x00993B, 3); return true;
    // src/battle/main_battle_routine.asm:3288 LDA BATTLE_MODE
    case 0xC2607F: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26082: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26084: cpu.execute_instruction<0x4C>(0x0047B5, 3); return true;
    // src/battle/main_battle_routine.asm:3290 LDX #1
    case 0xC26087: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3290 LDX #1
    // Overlapping static entry reached from 0xC26087.
    case 0xC26089: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/main_battle_routine.asm:3291 TXA
    case 0xC2608A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3292 JSL FADE_OUT
    case 0xC2608B: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/battle/main_battle_routine.asm:3293 BRA @UNKNOWN246
    case 0xC2608F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3295 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26091: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/battle/main_battle_routine.asm:3296 JSL UNKNOWN_C2DB3F
    case 0xC26095: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/battle/main_battle_routine.asm:3298 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC26099: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    case 0xC2609C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    // Overlapping static entry reached from 0xC2609C.
    case 0xC2609E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3300 BNE @UNKNOWN245
    case 0xC2609F: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3301 JSL UNKNOWN_C20293
    case 0xC260A1: cpu.execute_instruction<0x22>(0xC2022E, 4); return true;
    // src/battle/main_battle_routine.asm:3302 JSL UNKNOWN_C08726
    case 0xC260A5: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/battle/main_battle_routine.asm:3303 JSL UNKNOWN_C1DD5F
    case 0xC260A9: cpu.execute_instruction<0x22>(0xC1DB3C, 4); return true;
    // src/battle/main_battle_routine.asm:3304 JSL UNKNOWN_C2E0E7
    case 0xC260AD: cpu.execute_instruction<0x22>(0xC2E03C, 4); return true;
    // src/battle/main_battle_routine.asm:3305 LDA @LOCAL03
    case 0xC260B1: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC260B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC260B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/menu_handler-jp.asm (source_named).
bool execute_battle_menu_handler_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/menu_handler-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23040: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23042: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23043: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23044: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23045: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC23045.
    case 0xC23047: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23048: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23049: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:18 STX @LOCAL09
    case 0xC2304A: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:18 STX @LOCAL09
    // Overlapping static entry reached from 0xC23047.
    case 0xC2304B: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:19 STA @LOCAL08
    case 0xC2304C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:19 STA @LOCAL08
    // Overlapping static entry reached from 0xC2304B.
    case 0xC2304D: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:20 LDA #0
    case 0xC2304E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:20 LDA #0
    // Overlapping static entry reached from 0xC2304D.
    case 0xC2304F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:20 LDA #0
    // Overlapping static entry reached from 0xC2304E.
    case 0xC23050: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:21 JSL UNKNOWN_C2FEF9
    case 0xC23051: cpu.execute_instruction<0x22>(0xC2FE12, 4); return true;
    // src/battle/menu_handler-jp.asm:22 LDA @LOCAL08
    case 0xC23055: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:23 DEC
    case 0xC23057: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23058: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23058.
    case 0xC2305A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC2305B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/menu_handler-jp.asm:25 CLC
    case 0xC2305F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23060: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/menu_handler-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23060.
    case 0xC23062: cpu.execute_instruction<0x9C>(0x000485, 3); return true;
    // src/battle/menu_handler-jp.asm:27 STA @VIRTUAL04
    case 0xC23063: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:28 STA @LOCAL07
    case 0xC23065: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:29 LDX @VIRTUAL04
    case 0xC23067: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:30 LDA a:char_struct::afflictions,X
    case 0xC23069: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/battle/menu_handler-jp.asm:31 AND #$00FF
    case 0xC2306C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2306C.
    case 0xC2306E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:32 CMP #STATUS_0::PARALYZED
    case 0xC2306F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:32 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2306F.
    case 0xC23071: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:33 BEQ @UNKNOWN0
    case 0xC23072: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/menu_handler-jp.asm:34 LDX @VIRTUAL04
    case 0xC23074: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:35 LDA a:char_struct::afflictions+2,X
    case 0xC23076: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/menu_handler-jp.asm:36 AND #$00FF
    case 0xC23079: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC23079.
    case 0xC2307B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:37 CMP #STATUS_2::IMMOBILIZED
    case 0xC2307C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:37 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC2307C.
    case 0xC2307E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:38 BNE @UNKNOWN1
    case 0xC2307F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:40 LDA #2
    case 0xC23081: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:40 LDA #2
    // Overlapping static entry reached from 0xC23081.
    case 0xC23083: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:41 STA @LOCAL06
    case 0xC23084: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:42 BRA @UNKNOWN4
    case 0xC23086: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/battle/menu_handler-jp.asm:44 LDX @VIRTUAL04
    case 0xC23088: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:45 LDA a:char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC2308A: cpu.execute_instruction<0xBD>(0x000030, 3); return true;
    // src/battle/menu_handler-jp.asm:46 AND #$00FF
    case 0xC2308D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC2308D.
    case 0xC2308F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:47 BEQ @UNKNOWN2
    case 0xC23090: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/menu_handler-jp.asm:48 DEC
    case 0xC23092: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:49 STA @VIRTUAL02
    case 0xC23093: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:50 LDA @VIRTUAL04
    case 0xC23095: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:51 CLC
    case 0xC23097: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:52 ADC @VIRTUAL02
    case 0xC23098: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:53 TAX
    case 0xC2309A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:54 LDA __BSS_START__ + char_struct::items,X
    case 0xC2309B: cpu.execute_instruction<0xBD>(0x000022, 3); return true;
    // src/battle/menu_handler-jp.asm:55 AND #$00FF
    case 0xC2309E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2309E.
    case 0xC230A0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:57 CMP #0
    case 0xC230A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:57 CMP #0
    // Overlapping static entry reached from 0xC230A1.
    case 0xC230A3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:58 BEQ @UNKNOWN3
    case 0xC230A4: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/menu_handler-jp.asm:58 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC2D52E.
    case 0xC230A5: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC230A5.
    case 0xC230A7: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:60 CLC
    case 0xC230AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:61 ADC #item::type
    case 0xC230AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:61 ADC #item::type
    // Overlapping static entry reached from 0xC230AF.
    case 0xC230B1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler-jp.asm:62 TAX
    case 0xC230B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:63 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC230B3: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/menu_handler-jp.asm:64 AND #$00FF
    case 0xC230B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC230B7.
    case 0xC230B9: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/menu_handler-jp.asm:65 AND #$0003
    case 0xC230BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:65 AND #$0003
    // Overlapping static entry reached from 0xC230BA.
    case 0xC230BC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:66 CMP #1
    case 0xC230BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:66 CMP #1
    // Overlapping static entry reached from 0xC230BD.
    case 0xC230BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:67 BNE @UNKNOWN3
    case 0xC230C0: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:68 LDA #1
    case 0xC230C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:68 LDA #1
    // Overlapping static entry reached from 0xC230C2.
    case 0xC230C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:69 STA @LOCAL06
    case 0xC230C5: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:70 BRA @UNKNOWN4
    case 0xC230C7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:72 STZ @LOCAL06
    case 0xC230C9: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:74 LDA GAME_STATE+game_state::auto_fight_enable
    case 0xC230CB: cpu.execute_instruction<0xAD>(0x009B62, 3); return true;
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    case 0xC230CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC23122.
    case 0xC230CF: cpu.execute_instruction<0xFF>(0x03D000, 4); return true;
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC230CE.
    case 0xC230D0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:76 BEQL @UNKNOWN43
    case 0xC230D1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:76 BEQL @UNKNOWN43
    case 0xC230D3: cpu.execute_instruction<0x4C>(0x0034A1, 3); return true;
    // src/battle/menu_handler-jp.asm:77 LDA @LOCAL07
    case 0xC230D6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:78 STA @VIRTUAL04
    case 0xC230D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:79 LDX @VIRTUAL04
    case 0xC230DA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:80 LDA a:char_struct::afflictions+4,X
    case 0xC230DC: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/menu_handler-jp.asm:81 AND #$00FF
    case 0xC230DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC230DF.
    case 0xC230E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:82 BNEL @UNKNOWN38
    case 0xC230E2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:82 BNEL @UNKNOWN38
    case 0xC230E4: cpu.execute_instruction<0x4C>(0x00344C, 3); return true;
    // src/battle/menu_handler-jp.asm:83 LDX @VIRTUAL04
    case 0xC230E7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:84 LDA a:char_struct::afflictions+3,X
    case 0xC230E9: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/menu_handler-jp.asm:85 AND #$00FF
    case 0xC230EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC230EC.
    case 0xC230EE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:86 CMP #STATUS_3::STRANGE
    case 0xC230EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:86 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC230EF.
    case 0xC230F1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:87 BEQL @UNKNOWN38
    case 0xC230F2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:87 BEQL @UNKNOWN38
    case 0xC230F4: cpu.execute_instruction<0x4C>(0x00344C, 3); return true;
    // src/battle/menu_handler-jp.asm:88 LDX @VIRTUAL04
    case 0xC230F7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:89 LDA a:char_struct::afflictions+1,X
    case 0xC230F9: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/menu_handler-jp.asm:90 AND #$00FF
    case 0xC230FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC230FC.
    case 0xC230FE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:91 CMP #STATUS_1::MUSHROOMIZED
    case 0xC230FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:91 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC230FF.
    case 0xC23101: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:92 BEQL @UNKNOWN38
    case 0xC23102: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:92 BEQL @UNKNOWN38
    case 0xC23104: cpu.execute_instruction<0x4C>(0x00344C, 3); return true;
    // src/battle/menu_handler-jp.asm:93 LDA @LOCAL08
    case 0xC23107: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:94 CMP #PARTY_MEMBER::NESS
    case 0xC23109: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:94 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC23109.
    case 0xC2310B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:95 BEQ @UNKNOWN9
    case 0xC2310C: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/menu_handler-jp.asm:96 LDA @LOCAL08
    case 0xC2310E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:97 CMP #PARTY_MEMBER::POO
    case 0xC23110: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:97 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23110.
    case 0xC23112: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:98 BNEL @UNKNOWN38
    case 0xC23113: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:98 BNEL @UNKNOWN38
    case 0xC23115: cpu.execute_instruction<0x4C>(0x00344C, 3); return true;
    // src/battle/menu_handler-jp.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC23118: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:101 LDA #1
    case 0xC2311A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler-jp.asm:102 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2311C: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:102 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC2311A.
    case 0xC2311D: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:103 LDA #26
    case 0xC2311F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x008D1A, 3); return true;
    // src/battle/menu_handler-jp.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23121: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2311F.
    case 0xC23122: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC23124: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:106 LDA #35
    case 0xC23126: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/battle/menu_handler-jp.asm:106 LDA #35
    // Overlapping static entry reached from 0xC23126.
    case 0xC23128: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:107 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23129: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:108 LDX #26
    case 0xC2312C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001A, 2); else cpu.execute_instruction<0xA2>(0x00001A, 3); return true;
    // src/battle/menu_handler-jp.asm:108 LDX #26
    // Overlapping static entry reached from 0xC2312C.
    case 0xC2312E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:109 LDA @LOCAL08
    case 0xC2312F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:110 JSL CHECK_IF_PSI_KNOWN
    case 0xC23131: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:111 CMP #0
    case 0xC23135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:111 CMP #0
    // Overlapping static entry reached from 0xC23135.
    case 0xC23137: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:112 BEQ @UNKNOWN15
    case 0xC23138: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/battle/menu_handler-jp.asm:113 LDX @VIRTUAL04
    case 0xC2313A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:114 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_OMEGA) + battle_action::pp_cost
    case 0xC2313C: cpu.execute_instruction<0xAF>(0xD58CC5, 4); return true;
    // src/battle/menu_handler-jp.asm:115 AND #$00FF
    case 0xC23140: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC23140.
    case 0xC23142: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:116 CMP a:char_struct::current_pp_target,X
    case 0xC23143: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:117 BGT @UNKNOWN15
    case 0xC23146: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:117 BGT @UNKNOWN15
    case 0xC23148: cpu.execute_instruction<0xB0>(0x000055, 2); return true;
    // src/battle/menu_handler-jp.asm:118 LDA #0
    case 0xC2314A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:118 LDA #0
    // Overlapping static entry reached from 0xC2314A.
    case 0xC2314C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:119 JSL COUNT_CHARS
    case 0xC2314D: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/menu_handler-jp.asm:120 CMP #2
    case 0xC23151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:120 CMP #2
    // Overlapping static entry reached from 0xC23151.
    case 0xC23153: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler-jp.asm:121 BCC @UNKNOWN15
    case 0xC23154: cpu.execute_instruction<0x90>(0x000049, 2); return true;
    // src/battle/menu_handler-jp.asm:122 LDA #0
    case 0xC23156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:122 LDA #0
    // Overlapping static entry reached from 0xC23156.
    case 0xC23158: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:123 STA @LOCAL05
    case 0xC23159: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler-jp.asm:124 BRA @UNKNOWN14
    case 0xC2315B: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/menu_handler-jp.asm:126 CLC
    case 0xC2315D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:127 ADC #.LOWORD(GAME_STATE)
    case 0xC2315E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/menu_handler-jp.asm:127 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2315E.
    case 0xC23160: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:128 TAX
    case 0xC23161: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:129 LDA a:game_state::party_members,X
    case 0xC23162: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/menu_handler-jp.asm:130 AND #$00FF
    case 0xC23165: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC23165.
    case 0xC23167: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler-jp.asm:131 TAX
    case 0xC23168: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:132 CPX #1
    case 0xC23169: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:132 CPX #1
    // Overlapping static entry reached from 0xC23169.
    case 0xC2316B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler-jp.asm:133 BCC @UNKNOWN13
    case 0xC2316C: cpu.execute_instruction<0x90>(0x00001D, 2); return true;
    // src/battle/menu_handler-jp.asm:134 CPX #4
    case 0xC2316E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:134 CPX #4
    // Overlapping static entry reached from 0xC2316E.
    case 0xC23170: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:135 BGT @UNKNOWN13
    case 0xC23171: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:135 BGT @UNKNOWN13
    case 0xC23173: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/menu_handler-jp.asm:136 TXA
    case 0xC23175: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:137 DEC
    case 0xC23176: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:138 LDY #.SIZEOF(char_struct)
    case 0xC23177: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/menu_handler-jp.asm:138 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23177.
    case 0xC23179: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:139 JSL MULT168
    case 0xC2317A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/menu_handler-jp.asm:140 TAX
    case 0xC2317E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:141 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC2317F: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // src/battle/menu_handler-jp.asm:142 LSR
    case 0xC23182: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:143 LSR
    case 0xC23183: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:144 CMP PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC23184: cpu.execute_instruction<0xDD>(0x009CC5, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/menu_handler-jp.asm:145 BLTEQ @UNKNOWN15
    case 0xC23187: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/menu_handler-jp.asm:145 BLTEQ @UNKNOWN15
    case 0xC23189: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:147 LDA @LOCAL05
    case 0xC2318B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/menu_handler-jp.asm:148 INC
    case 0xC2318D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:149 STA @LOCAL05
    case 0xC2318E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler-jp.asm:151 CMP #6
    case 0xC23190: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:151 CMP #6
    // Overlapping static entry reached from 0xC231E4.
    case 0xC23191: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:151 CMP #6
    // Overlapping static entry reached from 0xC23190.
    case 0xC23192: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler-jp.asm:152 BCC @UNKNOWN11
    case 0xC23193: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/battle/menu_handler-jp.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC23195: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:154 LDA #4
    case 0xC23197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/battle/menu_handler-jp.asm:155 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23199: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:155 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23197.
    case 0xC2319A: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:156 JMP @UNKNOWN21
    case 0xC2319C: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC2319F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:159 LDA #25
    case 0xC231A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x008D19, 3); return true;
    // src/battle/menu_handler-jp.asm:160 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231A3: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:160 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231A1.
    case 0xC231A4: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC231A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:162 LDA #34
    case 0xC231A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000022, 3); return true;
    // src/battle/menu_handler-jp.asm:162 LDA #34
    // Overlapping static entry reached from 0xC231A8.
    case 0xC231AA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:163 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231AB: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:164 LDX #25
    case 0xC231AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/battle/menu_handler-jp.asm:164 LDX #25
    // Overlapping static entry reached from 0xC231AE.
    case 0xC231B0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:165 LDA @LOCAL08
    case 0xC231B1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:166 JSL CHECK_IF_PSI_KNOWN
    case 0xC231B3: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:167 CMP #0
    case 0xC231B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:167 CMP #0
    // Overlapping static entry reached from 0xC231B7.
    case 0xC231B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:168 BEQ @UNKNOWN17
    case 0xC231BA: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/menu_handler-jp.asm:169 LDX @VIRTUAL04
    case 0xC231BC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:170 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_GAMMA) + battle_action::pp_cost
    case 0xC231BE: cpu.execute_instruction<0xAF>(0xD58CB9, 4); return true;
    // src/battle/menu_handler-jp.asm:171 AND #$00FF
    case 0xC231C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC231C2.
    case 0xC231C4: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:172 CMP a:char_struct::current_pp_target,X
    case 0xC231C5: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:173 BGT @UNKNOWN17
    case 0xC231C8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:173 BGT @UNKNOWN17
    case 0xC231CA: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/menu_handler-jp.asm:174 JSL AUTOLIFEUP
    case 0xC231CC: cpu.execute_instruction<0x22>(0xC475C5, 4); return true;
    // src/battle/menu_handler-jp.asm:174 JSL AUTOLIFEUP
    // Overlapping static entry reached from 0xC23221.
    case 0xC231CE: cpu.execute_instruction<0x75>(0x0000C4, 2); return true;
    // src/battle/menu_handler-jp.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC231D0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:176 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC231D2: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC231D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:178 AND #$00FF
    case 0xC231D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC231D7.
    case 0xC231D9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:179 BNEL @UNKNOWN21
    case 0xC231DA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:179 BNEL @UNKNOWN21
    case 0xC231DC: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC231DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:182 LDA #24
    case 0xC231E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/battle/menu_handler-jp.asm:183 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231E3: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:183 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231E1.
    case 0xC231E4: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC231E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:185 LDA #33
    case 0xC231E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/battle/menu_handler-jp.asm:185 LDA #33
    // Overlapping static entry reached from 0xC231E8.
    case 0xC231EA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:186 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231EB: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:187 LDX #24
    case 0xC231EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/battle/menu_handler-jp.asm:187 LDX #24
    // Overlapping static entry reached from 0xC231EE.
    case 0xC231F0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:188 LDA @LOCAL08
    case 0xC231F1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:189 JSL CHECK_IF_PSI_KNOWN
    case 0xC231F3: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:190 CMP #0
    case 0xC231F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:190 CMP #0
    // Overlapping static entry reached from 0xC231F7.
    case 0xC231F9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:191 BEQ @UNKNOWN19
    case 0xC231FA: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:192 LDX @VIRTUAL04
    case 0xC231FC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:193 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_BETA) + battle_action::pp_cost
    case 0xC231FE: cpu.execute_instruction<0xAF>(0xD58CAD, 4); return true;
    // src/battle/menu_handler-jp.asm:194 AND #$00FF
    case 0xC23202: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC23202.
    case 0xC23204: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:195 CMP a:char_struct::current_pp_target,X
    case 0xC23205: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:196 BGT @UNKNOWN19
    case 0xC23208: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:196 BGT @UNKNOWN19
    case 0xC2320A: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:197 JSL AUTOLIFEUP
    case 0xC2320C: cpu.execute_instruction<0x22>(0xC475C5, 4); return true;
    // src/battle/menu_handler-jp.asm:198 SEP #PROC_FLAGS::ACCUM8
    case 0xC23210: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:199 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23212: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:200 REP #PROC_FLAGS::ACCUM8
    case 0xC23215: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:201 AND #$00FF
    case 0xC23217: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:201 AND #$00FF
    // Overlapping static entry reached from 0xC23217.
    case 0xC23219: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:202 BNE @UNKNOWN21
    case 0xC2321A: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/battle/menu_handler-jp.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC2321C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:205 LDA #23
    case 0xC2321E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/battle/menu_handler-jp.asm:206 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23220: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:206 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2321E.
    case 0xC23221: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC23223: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:208 LDA #32
    case 0xC23225: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/battle/menu_handler-jp.asm:208 LDA #32
    // Overlapping static entry reached from 0xC23225.
    case 0xC23227: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:209 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23228: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:210 LDX #23
    case 0xC2322B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000017, 2); else cpu.execute_instruction<0xA2>(0x000017, 3); return true;
    // src/battle/menu_handler-jp.asm:210 LDX #23
    // Overlapping static entry reached from 0xC2322B.
    case 0xC2322D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:211 LDA @LOCAL08
    case 0xC2322E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:212 JSL CHECK_IF_PSI_KNOWN
    case 0xC23230: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:213 CMP #0
    case 0xC23234: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:213 CMP #0
    // Overlapping static entry reached from 0xC23234.
    case 0xC23236: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:214 BEQ @UNKNOWN22
    case 0xC23237: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/battle/menu_handler-jp.asm:215 LDX @VIRTUAL04
    case 0xC23239: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:216 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_ALPHA) + battle_action::pp_cost
    case 0xC2323B: cpu.execute_instruction<0xAF>(0xD58CA1, 4); return true;
    // src/battle/menu_handler-jp.asm:217 AND #$00FF
    case 0xC2323F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC2323F.
    case 0xC23241: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:218 CMP a:char_struct::current_pp_target,X
    case 0xC23242: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:219 BGT @UNKNOWN22
    case 0xC23245: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:219 BGT @UNKNOWN22
    case 0xC23247: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/battle/menu_handler-jp.asm:220 JSL AUTOLIFEUP
    case 0xC23249: cpu.execute_instruction<0x22>(0xC475C5, 4); return true;
    // src/battle/menu_handler-jp.asm:221 SEP #PROC_FLAGS::ACCUM8
    case 0xC2324D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:222 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2324F: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC23252: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:224 AND #$00FF
    case 0xC23254: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC23254.
    case 0xC23256: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:225 BEQ @UNKNOWN22
    case 0xC23257: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/menu_handler-jp.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC23259: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:228 LDA @LOCAL08
    case 0xC2325B: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC2325D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:230 STA BATTLE_MENU_SELECTION
    case 0xC2325F: cpu.execute_instruction<0x8D>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:231 REP #PROC_FLAGS::ACCUM8
    case 0xC23262: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:232 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23264: cpu.execute_instruction<0xAD>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:233 JMP @UNKNOWN113
    case 0xC23267: cpu.execute_instruction<0x4C>(0x003A4E, 3); return true;
    // src/battle/menu_handler-jp.asm:235 SEP #PROC_FLAGS::ACCUM8
    case 0xC2326A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:236 LDA #30
    case 0xC2326C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008D1E, 3); return true;
    // src/battle/menu_handler-jp.asm:237 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2326E: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:237 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2326C.
    case 0xC2326F: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:238 REP #PROC_FLAGS::ACCUM8
    case 0xC23271: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:239 LDA #39
    case 0xC23273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/battle/menu_handler-jp.asm:239 LDA #39
    // Overlapping static entry reached from 0xC23273.
    case 0xC23275: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:240 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23276: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:241 LDX #30
    case 0xC23279: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/battle/menu_handler-jp.asm:241 LDX #30
    // Overlapping static entry reached from 0xC23279.
    case 0xC2327B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:242 LDA @LOCAL08
    case 0xC2327C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:243 JSL CHECK_IF_PSI_KNOWN
    case 0xC2327E: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:244 CMP #0
    case 0xC23282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:244 CMP #0
    // Overlapping static entry reached from 0xC23282.
    case 0xC23284: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:245 BEQ @UNKNOWN24
    case 0xC23285: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:246 LDX @VIRTUAL04
    case 0xC23287: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:247 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_OMEGA) + battle_action::pp_cost
    case 0xC23289: cpu.execute_instruction<0xAF>(0xD58CF5, 4); return true;
    // src/battle/menu_handler-jp.asm:248 AND #$00FF
    case 0xC2328D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:248 AND #$00FF
    // Overlapping static entry reached from 0xC2328D.
    case 0xC2328F: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:249 CMP a:char_struct::current_pp_target,X
    case 0xC23290: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:250 BGT @UNKNOWN24
    case 0xC23293: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:250 BGT @UNKNOWN24
    case 0xC23295: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/menu_handler-jp.asm:251 LDX #1
    case 0xC23297: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:251 LDX #1
    // Overlapping static entry reached from 0xC23297.
    case 0xC23299: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:252 LDA #0
    case 0xC2329A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:252 LDA #0
    // Overlapping static entry reached from 0xC2329A.
    case 0xC2329C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:253 JSL AUTOHEALING
    case 0xC2329D: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:254 SEP #PROC_FLAGS::ACCUM8
    case 0xC232A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:255 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC232A3: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:256 REP #PROC_FLAGS::ACCUM8
    case 0xC232A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:257 AND #$00FF
    case 0xC232A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC232A8.
    case 0xC232AA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:258 BNE @UNKNOWN21
    case 0xC232AB: cpu.execute_instruction<0xD0>(0x0000AC, 2); return true;
    // src/battle/menu_handler-jp.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC232AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:261 LDA #29
    case 0xC232AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x008D1D, 3); return true;
    // src/battle/menu_handler-jp.asm:262 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232B1: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:262 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232AF.
    case 0xC232B2: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:263 REP #PROC_FLAGS::ACCUM8
    case 0xC232B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:264 LDA #38
    case 0xC232B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/battle/menu_handler-jp.asm:264 LDA #38
    // Overlapping static entry reached from 0xC232B6.
    case 0xC232B8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:265 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232B9: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:266 LDX #29
    case 0xC232BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001D, 2); else cpu.execute_instruction<0xA2>(0x00001D, 3); return true;
    // src/battle/menu_handler-jp.asm:266 LDX #29
    // Overlapping static entry reached from 0xC232BC.
    case 0xC232BE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:267 LDA @LOCAL08
    case 0xC232BF: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:268 JSL CHECK_IF_PSI_KNOWN
    case 0xC232C1: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:269 CMP #0
    case 0xC232C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:269 CMP #0
    // Overlapping static entry reached from 0xC232C5.
    case 0xC232C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:270 BEQ @UNKNOWN28
    case 0xC232C8: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/menu_handler-jp.asm:271 LDX @VIRTUAL04
    case 0xC232CA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:272 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_GAMMA) + battle_action::pp_cost
    case 0xC232CC: cpu.execute_instruction<0xAF>(0xD58CE9, 4); return true;
    // src/battle/menu_handler-jp.asm:273 AND #$00FF
    case 0xC232D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC232D0.
    case 0xC232D2: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:274 CMP a:char_struct::current_pp_target,X
    case 0xC232D3: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:275 BGT @UNKNOWN28
    case 0xC232D6: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:275 BGT @UNKNOWN28
    case 0xC232D8: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/battle/menu_handler-jp.asm:276 LDX #3
    case 0xC232DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:276 LDX #3
    // Overlapping static entry reached from 0xC232DA.
    case 0xC232DC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:277 LDA #0
    case 0xC232DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:277 LDA #0
    // Overlapping static entry reached from 0xC232DD.
    case 0xC232DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:278 JSL AUTOHEALING
    case 0xC232E0: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:279 SEP #PROC_FLAGS::ACCUM8
    case 0xC232E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:280 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC232E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:280 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC232E6.
    case 0xC232E8: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:281 STY @LOCAL04
    case 0xC232E9: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:282 STA __BSS_START__,Y
    case 0xC232EB: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC232EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:284 AND #$00FF
    case 0xC232F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC232F0.
    case 0xC232F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:285 BNEL @UNKNOWN21
    case 0xC232F3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:285 BNEL @UNKNOWN21
    case 0xC232F5: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:286 LDX #2
    case 0xC232F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:286 LDX #2
    // Overlapping static entry reached from 0xC232F8.
    case 0xC232FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:287 LDA #0
    case 0xC232FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:287 LDA #0
    // Overlapping static entry reached from 0xC232FB.
    case 0xC232FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:288 JSL AUTOHEALING
    case 0xC232FE: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:289 SEP #PROC_FLAGS::ACCUM8
    case 0xC23302: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:290 LDY @LOCAL04
    case 0xC23304: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:291 STA __BSS_START__,Y
    case 0xC23306: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC23309: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:293 AND #$00FF
    case 0xC2330B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:293 AND #$00FF
    // Overlapping static entry reached from 0xC2330B.
    case 0xC2330D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:294 BNEL @UNKNOWN21
    case 0xC2330E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:294 BNEL @UNKNOWN21
    case 0xC23310: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:295 LDX #1
    case 0xC23313: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:295 LDX #1
    // Overlapping static entry reached from 0xC23313.
    case 0xC23315: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:296 LDA #0
    case 0xC23316: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:296 LDA #0
    // Overlapping static entry reached from 0xC23316.
    case 0xC23318: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:297 JSL AUTOHEALING
    case 0xC23319: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:298 SEP #PROC_FLAGS::ACCUM8
    case 0xC2331D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:299 LDY @LOCAL04
    case 0xC2331F: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:300 STA __BSS_START__,Y
    case 0xC23321: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:301 REP #PROC_FLAGS::ACCUM8
    case 0xC23324: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:302 AND #$00FF
    case 0xC23326: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:302 AND #$00FF
    // Overlapping static entry reached from 0xC23326.
    case 0xC23328: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:303 BNEL @UNKNOWN21
    case 0xC23329: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:303 BNEL @UNKNOWN21
    case 0xC2332B: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC2332E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:306 LDA #28
    case 0xC23330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x008D1C, 3); return true;
    // src/battle/menu_handler-jp.asm:307 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23332: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:307 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC23330.
    case 0xC23333: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC23335: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:309 LDA #37
    case 0xC23337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000025, 3); return true;
    // src/battle/menu_handler-jp.asm:309 LDA #37
    // Overlapping static entry reached from 0xC23337.
    case 0xC23339: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:310 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2333A: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:311 LDX #28
    case 0xC2333D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00001C, 3); return true;
    // src/battle/menu_handler-jp.asm:311 LDX #28
    // Overlapping static entry reached from 0xC2333D.
    case 0xC2333F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:312 LDA @LOCAL08
    case 0xC23340: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:313 JSL CHECK_IF_PSI_KNOWN
    case 0xC23342: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:314 CMP #0
    case 0xC23346: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:314 CMP #0
    // Overlapping static entry reached from 0xC23346.
    case 0xC23348: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:315 BEQL @UNKNOWN34
    case 0xC23349: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:315 BEQL @UNKNOWN34
    case 0xC2334B: cpu.execute_instruction<0x4C>(0x0033CB, 3); return true;
    // src/battle/menu_handler-jp.asm:316 LDX @VIRTUAL04
    case 0xC2334E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:317 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_BETA) + battle_action::pp_cost
    case 0xC23350: cpu.execute_instruction<0xAF>(0xD58CDD, 4); return true;
    // src/battle/menu_handler-jp.asm:318 AND #$00FF
    case 0xC23354: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC23354.
    case 0xC23356: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:319 CMP a:char_struct::current_pp_target,X
    case 0xC23357: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:320 BGT @UNKNOWN34
    case 0xC2335A: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:320 BGT @UNKNOWN34
    case 0xC2335C: cpu.execute_instruction<0xB0>(0x00006D, 2); return true;
    // src/battle/menu_handler-jp.asm:321 LDX #5
    case 0xC2335E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:321 LDX #5
    // Overlapping static entry reached from 0xC2335E.
    case 0xC23360: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:322 LDA #0
    case 0xC23361: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:322 LDA #0
    // Overlapping static entry reached from 0xC23361.
    case 0xC23363: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:323 JSL AUTOHEALING
    case 0xC23364: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:324 SEP #PROC_FLAGS::ACCUM8
    case 0xC23368: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:325 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC2336A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:325 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC2336A.
    case 0xC2336C: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:326 STY @LOCAL09
    case 0xC2336D: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:327 STA __BSS_START__,Y
    case 0xC2336F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:328 REP #PROC_FLAGS::ACCUM8
    case 0xC23372: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:329 AND #$00FF
    case 0xC23374: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC23374.
    case 0xC23376: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:330 BNEL @UNKNOWN21
    case 0xC23377: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:330 BNEL @UNKNOWN21
    case 0xC23379: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:331 LDX #4
    case 0xC2337C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:331 LDX #4
    // Overlapping static entry reached from 0xC233D0.
    case 0xC2337D: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:331 LDX #4
    // Overlapping static entry reached from 0xC2337C.
    case 0xC2337E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:332 LDA #0
    case 0xC2337F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:332 LDA #0
    // Overlapping static entry reached from 0xC2337F.
    case 0xC23381: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:333 JSL AUTOHEALING
    case 0xC23382: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:334 SEP #PROC_FLAGS::ACCUM8
    case 0xC23386: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:335 LDY @LOCAL09
    case 0xC23388: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:336 STA __BSS_START__,Y
    case 0xC2338A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC2338D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:338 AND #$00FF
    case 0xC2338F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:338 AND #$00FF
    // Overlapping static entry reached from 0xC2338F.
    case 0xC23391: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:339 BNEL @UNKNOWN21
    case 0xC23392: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:339 BNEL @UNKNOWN21
    case 0xC23394: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:340 LDX #2
    case 0xC23397: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:340 LDX #2
    // Overlapping static entry reached from 0xC23397.
    case 0xC23399: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/menu_handler-jp.asm:341 TXA
    case 0xC2339A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:342 JSL AUTOHEALING
    case 0xC2339B: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2339F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:344 LDY @LOCAL09
    case 0xC233A1: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:345 STA __BSS_START__,Y
    case 0xC233A3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:346 REP #PROC_FLAGS::ACCUM8
    case 0xC233A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:347 AND #$00FF
    case 0xC233A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:347 AND #$00FF
    // Overlapping static entry reached from 0xC233A8.
    case 0xC233AA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:348 BNEL @UNKNOWN21
    case 0xC233AB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:348 BNEL @UNKNOWN21
    case 0xC233AD: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:349 LDX #1
    case 0xC233B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:349 LDX #1
    // Overlapping static entry reached from 0xC233B0.
    case 0xC233B2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:350 LDA #3
    case 0xC233B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:350 LDA #3
    // Overlapping static entry reached from 0xC233B3.
    case 0xC233B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:351 JSL AUTOHEALING
    case 0xC233B6: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:352 SEP #PROC_FLAGS::ACCUM8
    case 0xC233BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:353 LDY @LOCAL09
    case 0xC233BC: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:354 STA __BSS_START__,Y
    case 0xC233BE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC233C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:356 AND #$00FF
    case 0xC233C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:356 AND #$00FF
    // Overlapping static entry reached from 0xC233C3.
    case 0xC233C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:357 BNEL @UNKNOWN21
    case 0xC233C6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:357 BNEL @UNKNOWN21
    case 0xC233C8: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC233CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:360 LDA #27
    case 0xC233CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x008D1B, 3); return true;
    // src/battle/menu_handler-jp.asm:361 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC233CF: cpu.execute_instruction<0x8D>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:361 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC233CD.
    case 0xC233D0: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC233D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:363 LDA #36
    case 0xC233D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/battle/menu_handler-jp.asm:363 LDA #36
    // Overlapping static entry reached from 0xC233D4.
    case 0xC233D6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler-jp.asm:364 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC233D7: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:365 LDX #27
    case 0xC233DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/battle/menu_handler-jp.asm:365 LDX #27
    // Overlapping static entry reached from 0xC233DA.
    case 0xC233DC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler-jp.asm:366 LDA @LOCAL08
    case 0xC233DD: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:367 JSL CHECK_IF_PSI_KNOWN
    case 0xC233DF: cpu.execute_instruction<0x22>(0xC43C1C, 4); return true;
    // src/battle/menu_handler-jp.asm:368 CMP #0
    case 0xC233E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:368 CMP #0
    // Overlapping static entry reached from 0xC233E3.
    case 0xC233E5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:369 BEQ @UNKNOWN38
    case 0xC233E6: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/menu_handler-jp.asm:370 LDX @VIRTUAL04
    case 0xC233E8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:371 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_ALPHA) + battle_action::pp_cost
    case 0xC233EA: cpu.execute_instruction<0xAF>(0xD58CD1, 4); return true;
    // src/battle/menu_handler-jp.asm:372 AND #$00FF
    case 0xC233EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:372 AND #$00FF
    // Overlapping static entry reached from 0xC233EE.
    case 0xC233F0: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/menu_handler-jp.asm:373 CMP a:char_struct::current_pp_target,X
    case 0xC233F1: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:374 BGT @UNKNOWN38
    case 0xC233F4: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:374 BGT @UNKNOWN38
    case 0xC233F6: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/battle/menu_handler-jp.asm:375 LDX #7
    case 0xC233F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:375 LDX #7
    // Overlapping static entry reached from 0xC233F8.
    case 0xC233FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:376 LDA #0
    case 0xC233FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:376 LDA #0
    // Overlapping static entry reached from 0xC233FB.
    case 0xC233FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:377 JSL AUTOHEALING
    case 0xC233FE: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:378 SEP #PROC_FLAGS::ACCUM8
    case 0xC23402: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:379 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23404: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:379 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23404.
    case 0xC23406: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:380 STY @LOCAL04
    case 0xC23407: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:381 STA __BSS_START__,Y
    case 0xC23409: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:382 REP #PROC_FLAGS::ACCUM8
    case 0xC2340C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:383 AND #$00FF
    case 0xC2340E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:383 AND #$00FF
    // Overlapping static entry reached from 0xC2340E.
    case 0xC23410: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:384 BNEL @UNKNOWN21
    case 0xC23411: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:384 BNEL @UNKNOWN21
    case 0xC23413: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:385 LDX #6
    case 0xC23416: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:385 LDX #6
    // Overlapping static entry reached from 0xC23416.
    case 0xC23418: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:386 LDA #0
    case 0xC23419: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:386 LDA #0
    // Overlapping static entry reached from 0xC23419.
    case 0xC2341B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:387 JSL AUTOHEALING
    case 0xC2341C: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:388 SEP #PROC_FLAGS::ACCUM8
    case 0xC23420: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:389 LDY @LOCAL04
    case 0xC23422: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:390 STA __BSS_START__,Y
    case 0xC23424: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:391 REP #PROC_FLAGS::ACCUM8
    case 0xC23427: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:392 AND #$00FF
    case 0xC23429: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:392 AND #$00FF
    // Overlapping static entry reached from 0xC23429.
    case 0xC2342B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:393 BNEL @UNKNOWN21
    case 0xC2342C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:393 BNEL @UNKNOWN21
    case 0xC2342E: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:394 LDX #1
    case 0xC23431: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:394 LDX #1
    // Overlapping static entry reached from 0xC23431.
    case 0xC23433: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:395 LDA #2
    case 0xC23434: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:395 LDA #2
    // Overlapping static entry reached from 0xC23434.
    case 0xC23436: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:396 JSL AUTOHEALING
    case 0xC23437: cpu.execute_instruction<0x22>(0xC47532, 4); return true;
    // src/battle/menu_handler-jp.asm:397 SEP #PROC_FLAGS::ACCUM8
    case 0xC2343B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:398 LDY @LOCAL04
    case 0xC2343D: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:399 STA __BSS_START__,Y
    case 0xC2343F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:400 REP #PROC_FLAGS::ACCUM8
    case 0xC23442: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:401 AND #$00FF
    case 0xC23444: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:401 AND #$00FF
    // Overlapping static entry reached from 0xC23444.
    case 0xC23446: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:402 BNEL @UNKNOWN21
    case 0xC23447: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:402 BNEL @UNKNOWN21
    case 0xC23449: cpu.execute_instruction<0x4C>(0x003259, 3); return true;
    // src/battle/menu_handler-jp.asm:404 LDA @LOCAL06
    case 0xC2344C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:405 BEQ @UNKNOWN39
    case 0xC2344E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler-jp.asm:406 CMP #1
    case 0xC23450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:406 CMP #1
    // Overlapping static entry reached from 0xC23450.
    case 0xC23452: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:407 BEQ @UNKNOWN40
    case 0xC23453: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/menu_handler-jp.asm:408 CMP #2
    case 0xC23455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:408 CMP #2
    // Overlapping static entry reached from 0xC23455.
    case 0xC23457: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:409 BEQ @UNKNOWN41
    case 0xC23458: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:410 BRA @UNKNOWN42
    case 0xC2345A: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:412 LDA #4
    case 0xC2345C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:412 LDA #4
    // Overlapping static entry reached from 0xC2345C.
    case 0xC2345E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:413 STA @LOCAL03
    case 0xC2345F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:414 BRA @UNKNOWN42
    case 0xC23461: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/menu_handler-jp.asm:416 LDA #5
    case 0xC23463: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:416 LDA #5
    // Overlapping static entry reached from 0xC23463.
    case 0xC23465: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:417 STA @LOCAL03
    case 0xC23466: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:418 BRA @UNKNOWN42
    case 0xC23468: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:420 LDA #1
    case 0xC2346A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:420 LDA #1
    // Overlapping static entry reached from 0xC2346A.
    case 0xC2346C: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/menu_handler-jp.asm:421 JMP @UNKNOWN113
    case 0xC2346D: cpu.execute_instruction<0x4C>(0x003A4E, 3); return true;
    // src/battle/menu_handler-jp.asm:423 LDA @LOCAL08
    case 0xC23470: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC23472: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:425 STA BATTLE_MENU_SELECTION
    case 0xC23474: cpu.execute_instruction<0x8D>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:426 STZ BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23477: cpu.execute_instruction<0x9C>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC2347A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:428 LDA @LOCAL03
    case 0xC2347C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:429 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2347E: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:430 SEP #PROC_FLAGS::ACCUM8
    case 0xC23481: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:431 LDA #17
    case 0xC23483: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler-jp.asm:432 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23485: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:432 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23483.
    case 0xC23486: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:433 REP #PROC_FLAGS::ACCUM8
    case 0xC23488: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:434 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2348A: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/battle/menu_handler-jp.asm:435 CLC
    case 0xC2348D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:436 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2348E: cpu.execute_instruction<0x6D>(0x00AF2D, 3); return true;
    // src/battle/menu_handler-jp.asm:437 JSR RAND_LIMIT
    case 0xC23491: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/menu_handler-jp.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC23494: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:439 INC
    case 0xC23496: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:440 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23497: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:441 REP #PROC_FLAGS::ACCUM8
    case 0xC2349A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:442 LDA @LOCAL03
    case 0xC2349C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:443 JMP @UNKNOWN113
    case 0xC2349E: cpu.execute_instruction<0x4C>(0x003A4E, 3); return true;
    // src/battle/menu_handler-jp.asm:445 JSL UNKNOWN_EF0262
    case 0xC234A1: cpu.execute_instruction<0x22>(0xC13429, 4); return true;
    // src/battle/menu_handler-jp.asm:446 LDA @LOCAL08
    case 0xC234A5: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:447 CMP #PARTY_MEMBER::PAULA
    case 0xC234A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:447 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC234A7.
    case 0xC234A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:448 BEQ @UNKNOWN44
    case 0xC234AA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:449 LDA @LOCAL08
    case 0xC234AC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:450 CMP #PARTY_MEMBER::POO
    case 0xC234AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:450 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC234AE.
    case 0xC234B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:451 BNE @UNKNOWN45
    case 0xC234B1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:453 LDA #1
    case 0xC234B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:453 LDA #1
    // Overlapping static entry reached from 0xC234B3.
    case 0xC234B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:454 STA @LOCAL03
    case 0xC234B6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:455 BRA @UNKNOWN46
    case 0xC234B8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:457 STZ @LOCAL03
    case 0xC234BA: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:459 LDA @LOCAL09
    case 0xC234BC: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:460 BNE @UNKNOWN47
    case 0xC234BE: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:461 INC @LOCAL03
    case 0xC234C0: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00765F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C2.
    case 0xC234C4: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C4.
    case 0xC234C6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C6.
    case 0xC234C8: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C7.
    case 0xC234C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234CA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:464 LDA @LOCAL03
    case 0xC234CC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:465 CLC
    case 0xC234CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:466 ADC @VIRTUAL06
    case 0xC234CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:467 STA @VIRTUAL06
    case 0xC234D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:468 LDA [@VIRTUAL06]
    case 0xC234D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:469 AND #$00FF
    case 0xC234D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:469 AND #$00FF
    // Overlapping static entry reached from 0xC234D5.
    case 0xC234D7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:470 JSL REDIRECT_CREATE_WINDOW
    case 0xC234D8: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/battle/menu_handler-jp.asm:471 LDA @LOCAL08
    case 0xC234DC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:472 DEC
    case 0xC234DE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:473 LDY #.SIZEOF(char_struct)
    case 0xC234DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/menu_handler-jp.asm:473 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC234DF.
    case 0xC234E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:474 JSL MULT168
    case 0xC234E2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/menu_handler-jp.asm:475 CLC
    case 0xC234E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:476 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC234E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/menu_handler-jp.asm:476 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC234E7.
    case 0xC234E9: cpu.execute_instruction<0x9C>(0x000A85, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234F0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234F2: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/battle/menu_handler-jp.asm:478 REP #PROC_FLAGS::ACCUM8
    case 0xC234F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234F6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234FA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:480 LDX #4
    case 0xC234FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:480 LDX #4
    // Overlapping static entry reached from 0xC234FE.
    case 0xC23500: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/battle/menu_handler-jp.asm:481 LDA [@VIRTUAL06]
    case 0xC23501: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:482 AND #$00FF
    case 0xC23503: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:482 AND #$00FF
    // Overlapping static entry reached from 0xC23503.
    case 0xC23505: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:483 JSL SET_WINDOW_TITLE
    case 0xC23506: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/battle/menu_handler-jp.asm:484 LDA @LOCAL06
    case 0xC2350A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:485 BEQ @UNKNOWN48
    case 0xC2350C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler-jp.asm:486 CMP #1
    case 0xC2350E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:486 CMP #1
    // Overlapping static entry reached from 0xC2350E.
    case 0xC23510: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:487 BEQ @UNKNOWN49
    case 0xC23511: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/menu_handler-jp.asm:488 CMP #2
    case 0xC23513: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:488 CMP #2
    // Overlapping static entry reached from 0xC23513.
    case 0xC23515: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:489 BEQ @UNKNOWN50
    case 0xC23516: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/menu_handler-jp.asm:490 BRA @UNKNOWN51
    case 0xC23518: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0074B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351A.
    case 0xC2351C: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351C.
    case 0xC2351E: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351F.
    case 0xC23521: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC23522: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23524.
    case 0xC23526: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23527: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23529: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23529.
    case 0xC2352B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2352C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:494 LDY #0
    case 0xC2352E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:494 LDY #0
    // Overlapping static entry reached from 0xC2352E.
    case 0xC23530: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler-jp.asm:495 TYX
    case 0xC23531: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:496 LDA #1
    case 0xC23532: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:496 LDA #1
    // Overlapping static entry reached from 0xC23532.
    case 0xC23534: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:497 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23535: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:498 BRA @UNKNOWN51
    case 0xC23539: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2353B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0074D5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2353B.
    case 0xC2353D: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2353E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2353D.
    case 0xC2353F: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23540.
    case 0xC23542: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23543: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23545.
    case 0xC23547: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23548: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2354A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2354A.
    case 0xC2354C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2354D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:502 LDY #0
    case 0xC2354F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:502 LDY #0
    // Overlapping static entry reached from 0xC2354F.
    case 0xC23551: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler-jp.asm:503 TYX
    case 0xC23552: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:504 LDA #1
    case 0xC23553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:504 LDA #1
    // Overlapping static entry reached from 0xC23553.
    case 0xC23555: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:505 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23556: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:506 BRA @UNKNOWN51
    case 0xC2355A: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2355C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x0074E9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2355C.
    case 0xC2355E: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2355F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2355E.
    case 0xC23560: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23561.
    case 0xC23563: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23564: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23566: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23566.
    case 0xC23568: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23569: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2356B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2356B.
    case 0xC2356D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2356E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:510 LDY #0
    case 0xC23570: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:510 LDY #0
    // Overlapping static entry reached from 0xC23570.
    case 0xC23572: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler-jp.asm:511 TYX
    case 0xC23573: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:512 LDA #1
    case 0xC23574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:512 LDA #1
    // Overlapping static entry reached from 0xC23574.
    case 0xC23576: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:513 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23577: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:515 LDA @LOCAL06
    case 0xC2357B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:516 CMP #2
    case 0xC2357D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:516 CMP #2
    // Overlapping static entry reached from 0xC2357D.
    case 0xC2357F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:517 BEQ @UNKNOWN53
    case 0xC23580: cpu.execute_instruction<0xF0>(0x000068, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0074B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23582.
    case 0xC23584: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23585: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23584.
    case 0xC23586: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23587: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23586.
    case 0xC23588: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23587.
    case 0xC23589: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2358A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2358C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2358E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23590: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23592: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23594.
    case 0xC23596: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23597: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23599.
    case 0xC2359B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2359C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/menu_handler-jp.asm:522 LDA #5
    case 0xC2359E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:522 LDA #5
    // Overlapping static entry reached from 0xC2359E.
    case 0xC235A0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/menu_handler-jp.asm:523 CLC
    case 0xC235A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:524 ADC @VIRTUAL06
    case 0xC235A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:525 STA @VIRTUAL06
    case 0xC235A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:526 STA @LOCAL00
    case 0xC235A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler-jp.asm:527 LDA @VIRTUAL06+2
    case 0xC235A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:528 STA @LOCAL00+2
    case 0xC235AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235AC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235B0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235B2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:530 LDY #0
    case 0xC235B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:530 LDY #0
    // Overlapping static entry reached from 0xC235B4.
    case 0xC235B6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:531 LDX #5
    case 0xC235B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:531 LDX #5
    // Overlapping static entry reached from 0xC235B7.
    case 0xC235B9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:532 LDA #2
    case 0xC235BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:532 LDA #2
    // Overlapping static entry reached from 0xC235BA.
    case 0xC235BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:533 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC235BD: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:534 LDA #20
    case 0xC235C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/menu_handler-jp.asm:534 LDA #20
    // Overlapping static entry reached from 0xC235C1.
    case 0xC235C3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C4: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C6: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C8: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235CA: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:536 CLC
    case 0xC235CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:537 ADC @VIRTUAL06
    case 0xC235CD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:538 STA @VIRTUAL06
    case 0xC235CF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:539 STA @LOCAL00
    case 0xC235D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler-jp.asm:540 LDA @VIRTUAL06+2
    case 0xC235D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:541 STA @LOCAL00+2
    case 0xC235D5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235D7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235D9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235DB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235DD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:543 LDY #1
    case 0xC235DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:543 LDY #1
    // Overlapping static entry reached from 0xC235DF.
    case 0xC235E1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:544 LDX #5
    case 0xC235E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:544 LDX #5
    // Overlapping static entry reached from 0xC235E2.
    case 0xC235E4: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/menu_handler-jp.asm:545 TXA
    case 0xC235E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:546 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC235E6: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:548 LDA @LOCAL09
    case 0xC235EA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:549 BNEL @UNKNOWN59
    case 0xC235EC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:549 BNEL @UNKNOWN59
    case 0xC235EE: cpu.execute_instruction<0x4C>(0x00366A, 3); return true;
    // src/battle/menu_handler-jp.asm:550 LDA @LOCAL03
    case 0xC235F1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:551 CMP #2
    case 0xC235F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:551 CMP #2
    // Overlapping static entry reached from 0xC235F3.
    case 0xC235F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:552 BNE @UNKNOWN55
    case 0xC235F6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/menu_handler-jp.asm:553 LDX #15
    case 0xC235F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000F, 2); else cpu.execute_instruction<0xA2>(0x00000F, 3); return true;
    // src/battle/menu_handler-jp.asm:553 LDX #15
    // Overlapping static entry reached from 0xC235F8.
    case 0xC235FA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/menu_handler-jp.asm:554 BRA @UNKNOWN56
    case 0xC235FB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/menu_handler-jp.asm:556 LDX #10
    case 0xC235FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:556 LDX #10
    // Overlapping static entry reached from 0xC235FD.
    case 0xC235FF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/menu_handler-jp.asm:558 STX @LOCAL09
    case 0xC23600: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23602: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0074B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23602.
    case 0xC23604: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23605: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23604.
    case 0xC23606: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23606.
    case 0xC23608: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23607.
    case 0xC23609: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2360A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2360C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2360E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23610: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23612: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23614: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23614.
    case 0xC23616: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23617: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23619: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23619.
    case 0xC2361B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2361C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/menu_handler-jp.asm:562 LDA #10
    case 0xC2361E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:562 LDA #10
    // Overlapping static entry reached from 0xC2361E.
    case 0xC23620: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/menu_handler-jp.asm:563 CLC
    case 0xC23621: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:564 ADC @VIRTUAL06
    case 0xC23622: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:565 STA @VIRTUAL06
    case 0xC23624: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:566 STA @LOCAL00
    case 0xC23626: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler-jp.asm:567 LDA @VIRTUAL06+2
    case 0xC23628: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:568 STA @LOCAL00+2
    case 0xC2362A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2362C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2362E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23630: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23632: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:570 LDY #0
    case 0xC23634: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:570 LDY #0
    // Overlapping static entry reached from 0xC23634.
    case 0xC23636: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/menu_handler-jp.asm:571 LDX @LOCAL09
    case 0xC23637: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:572 LDA #3
    case 0xC23639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:572 LDA #3
    // Overlapping static entry reached from 0xC23639.
    case 0xC2363B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:573 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2363C: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:574 LDA #40
    case 0xC23640: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/battle/menu_handler-jp.asm:574 LDA #40
    // Overlapping static entry reached from 0xC23640.
    case 0xC23642: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23643: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23645: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23647: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23649: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:576 CLC
    case 0xC2364B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:577 ADC @VIRTUAL06
    case 0xC2364C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:578 STA @VIRTUAL06
    case 0xC2364E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:579 STA @LOCAL00
    case 0xC23650: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler-jp.asm:580 LDA @VIRTUAL06+2
    case 0xC23652: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler-jp.asm:581 STA @LOCAL00+2
    case 0xC23654: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23656: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23658: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2365A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2365C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:583 LDY #1
    case 0xC2365E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:583 LDY #1
    // Overlapping static entry reached from 0xC2365E.
    case 0xC23660: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/menu_handler-jp.asm:584 LDX @LOCAL09
    case 0xC23661: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:585 LDA #6
    case 0xC23663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:585 LDA #6
    // Overlapping static entry reached from 0xC23663.
    case 0xC23665: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:586 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23666: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:588 LDA @LOCAL08
    case 0xC2366A: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:589 CMP #PARTY_MEMBER::JEFF
    case 0xC2366C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:589 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC2366C.
    case 0xC2366E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:590 BNE @UNKNOWN60
    case 0xC2366F: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x0074DA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23671.
    case 0xC23673: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23674: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23673.
    case 0xC23675: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23676.
    case 0xC23678: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23679: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2367B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2367B.
    case 0xC2367D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2367E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23680.
    case 0xC23682: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23683: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:593 LDY #1
    case 0xC23685: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:593 LDY #1
    // Overlapping static entry reached from 0xC23685.
    case 0xC23687: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:594 LDX #0
    case 0xC23688: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:594 LDX #0
    // Overlapping static entry reached from 0xC23688.
    case 0xC2368A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:595 LDA #4
    case 0xC2368B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:595 LDA #4
    // Overlapping static entry reached from 0xC2368B.
    case 0xC2368D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:596 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2368E: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:597 BRA @UNKNOWN61
    case 0xC23692: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/battle/menu_handler-jp.asm:599 LDA @LOCAL07
    case 0xC23694: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:600 STA @VIRTUAL04
    case 0xC23696: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:601 LDX @VIRTUAL04
    case 0xC23698: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:602 LDA a:char_struct::afflictions+4,X
    case 0xC2369A: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/menu_handler-jp.asm:603 AND #$00FF
    case 0xC2369D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:603 AND #$00FF
    // Overlapping static entry reached from 0xC2369D.
    case 0xC2369F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:604 BNE @UNKNOWN61
    case 0xC236A0: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x0074C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A2.
    case 0xC236A4: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A4.
    case 0xC236A6: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A7.
    case 0xC236A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236AC.
    case 0xC236AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236AF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236B1.
    case 0xC236B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236B4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:607 LDY #1
    case 0xC236B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:607 LDY #1
    // Overlapping static entry reached from 0xC236B6.
    case 0xC236B8: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:608 LDX #0
    case 0xC236B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:608 LDX #0
    // Overlapping static entry reached from 0xC236B9.
    case 0xC236BB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:609 LDA #4
    case 0xC236BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:609 LDA #4
    // Overlapping static entry reached from 0xC236BC.
    case 0xC236BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:610 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236BF: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:612 LDA @LOCAL08
    case 0xC236C3: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:613 CMP #PARTY_MEMBER::PAULA
    case 0xC236C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:613 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC236C5.
    case 0xC236C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:614 BNE @UNKNOWN62
    case 0xC236C8: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0074D0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CA.
    case 0xC236CC: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CC.
    case 0xC236CE: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CF.
    case 0xC236D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236D4.
    case 0xC236D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236D9.
    case 0xC236DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236DC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:617 LDY #0
    case 0xC236DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:617 LDY #0
    // Overlapping static entry reached from 0xC236DE.
    case 0xC236E0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:618 LDX #10
    case 0xC236E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:618 LDX #10
    // Overlapping static entry reached from 0xC236E1.
    case 0xC236E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:619 LDA #7
    case 0xC236E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:619 LDA #7
    // Overlapping static entry reached from 0xC236E4.
    case 0xC236E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:620 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236E7: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:622 LDA @LOCAL08
    case 0xC236EB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:623 CMP #PARTY_MEMBER::POO
    case 0xC236ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:623 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC236ED.
    case 0xC236EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:624 BNE @UNKNOWN63
    case 0xC236F0: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0074E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F2.
    case 0xC236F4: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F4.
    case 0xC236F6: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F7.
    case 0xC236F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236FC.
    case 0xC236FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236FF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23701: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23701.
    case 0xC23703: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23704: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:627 LDY #0
    case 0xC23706: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:627 LDY #0
    // Overlapping static entry reached from 0xC23706.
    case 0xC23708: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler-jp.asm:628 LDX #10
    case 0xC23709: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:628 LDX #10
    // Overlapping static entry reached from 0xC23709.
    case 0xC2370B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:629 LDA #7
    case 0xC2370C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:629 LDA #7
    // Overlapping static entry reached from 0xC2370C.
    case 0xC2370E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2370F: cpu.execute_instruction<0x22>(0xC1DBB5, 4); return true;
    // src/battle/menu_handler-jp.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    // Overlapping static entry reached from 0xC23740.
    case 0xC23712: cpu.execute_instruction<0xC1>(0x0000A6, 2); return true;
    // src/battle/menu_handler-jp.asm:632 LDX @LOCAL03
    case 0xC23713: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:632 LDX @LOCAL03
    // Overlapping static entry reached from 0xC23712.
    case 0xC23714: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:633 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23715: cpu.execute_instruction<0xBF>(0xC4765F, 4); return true;
    // src/battle/menu_handler-jp.asm:634 AND #$00FF
    case 0xC23719: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:634 AND #$00FF
    // Overlapping static entry reached from 0xC23719.
    case 0xC2371B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:635 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC2371C: cpu.execute_instruction<0x22>(0xC1DB2A, 4); return true;
    // src/battle/menu_handler-jp.asm:636 JSL REDIRECT_PRINT_MENU_ITEMS
    case 0xC23720: cpu.execute_instruction<0x22>(0xC1DBE8, 4); return true;
    // src/battle/menu_handler-jp.asm:637 LDA #1
    case 0xC23724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:637 LDA #1
    // Overlapping static entry reached from 0xC23724.
    case 0xC23726: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:638 JSL REDIRECT_SELECTION_MENU
    case 0xC23727: cpu.execute_instruction<0x22>(0xC1DBEE, 4); return true;
    // src/battle/menu_handler-jp.asm:639 CMP #0
    case 0xC2372B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:639 CMP #0
    // Overlapping static entry reached from 0xC2372B.
    case 0xC2372D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:640 BNEL @UNKNOWN74
    case 0xC2372E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:640 BNEL @UNKNOWN74
    case 0xC23730: cpu.execute_instruction<0x4C>(0x0037C3, 3); return true;
    // src/battle/menu_handler-jp.asm:641 LDA DEBUG
    case 0xC23733: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/battle/menu_handler-jp.asm:642 BEQ @UNKNOWN67
    case 0xC23736: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/menu_handler-jp.asm:643 LDA PAD_STATE
    case 0xC23738: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler-jp.asm:644 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2373B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x003000, 3); return true;
    // src/battle/menu_handler-jp.asm:644 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373B.
    case 0xC2373D: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2373E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373D.
    case 0xC2373F: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373E.
    case 0xC23740: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:646 BNE @UNKNOWN66
    case 0xC23741: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/menu_handler-jp.asm:646 BNE @UNKNOWN66
    // Overlapping static entry reached from 0xC23740.
    case 0xC23742: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:647 JSL RESUME_MUSIC
    case 0xC23743: cpu.execute_instruction<0x22>(0xC13435, 4); return true;
    // src/battle/menu_handler-jp.asm:648 LDA #$FFFF
    case 0xC23747: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/menu_handler-jp.asm:648 LDA #$FFFF
    // Overlapping static entry reached from 0xC23747.
    case 0xC23749: cpu.execute_instruction<0xFF>(0x3A4E4C, 4); return true;
    // src/battle/menu_handler-jp.asm:649 JMP @UNKNOWN113
    case 0xC2374A: cpu.execute_instruction<0x4C>(0x003A4E, 3); return true;
    // src/battle/menu_handler-jp.asm:651 LDA PAD_STATE
    case 0xC2374D: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler-jp.asm:652 AND #PAD::R_BUTTON
    case 0xC23750: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/battle/menu_handler-jp.asm:652 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC23750.
    case 0xC23752: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:653 BEQ @UNKNOWN67
    case 0xC23753: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/menu_handler-jp.asm:654 JSL UNKNOWN_E14DE8
    case 0xC23755: cpu.execute_instruction<0x22>(0xE1423E, 4); return true;
    // src/battle/menu_handler-jp.asm:655 BRA @UNKNOWN63
    case 0xC23759: cpu.execute_instruction<0x80>(0x0000B8, 2); return true;
    // src/battle/menu_handler-jp.asm:657 LDA BATTLE_MODE
    case 0xC2375B: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/battle/menu_handler-jp.asm:658 BNE @UNKNOWN73
    case 0xC2375E: cpu.execute_instruction<0xD0>(0x000059, 2); return true;
    // src/battle/menu_handler-jp.asm:659 LDA PAD_STATE
    case 0xC23760: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler-jp.asm:660 AND #PAD::L_BUTTON
    case 0xC23763: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/battle/menu_handler-jp.asm:660 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC23763.
    case 0xC23765: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:661 BEQ @UNKNOWN72
    case 0xC23766: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/battle/menu_handler-jp.asm:662 JSL DEBUG_SET_CHAR_LEVEL
    case 0xC23768: cpu.execute_instruction<0x22>(0xC142D9, 4); return true;
    // src/battle/menu_handler-jp.asm:663 LDY #0
    case 0xC2376C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:663 LDY #0
    // Overlapping static entry reached from 0xC2376C.
    case 0xC2376E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/menu_handler-jp.asm:664 STY @LOCAL09
    case 0xC2376F: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:665 BRA @UNKNOWN71
    case 0xC23771: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/battle/menu_handler-jp.asm:667 TYA
    case 0xC23773: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:668 CLC
    case 0xC23774: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:669 ADC #.LOWORD(GAME_STATE)
    case 0xC23775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/menu_handler-jp.asm:669 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC23775.
    case 0xC23777: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:670 TAX
    case 0xC23778: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:671 LDA a:game_state::party_members,X
    case 0xC23779: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/menu_handler-jp.asm:672 AND #$00FF
    case 0xC2377C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:672 AND #$00FF
    // Overlapping static entry reached from 0xC2377C.
    case 0xC2377E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:673 STA @LOCAL07
    case 0xC2377F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:674 BEQ @UNKNOWN70
    case 0xC23781: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:675 CMP #4
    case 0xC23783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:675 CMP #4
    // Overlapping static entry reached from 0xC23783.
    case 0xC23785: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:676 BGT @UNKNOWN70
    case 0xC23786: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:676 BGT @UNKNOWN70
    case 0xC23788: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/menu_handler-jp.asm:677 TYA
    case 0xC2378A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:678 LDY #.SIZEOF(battler)
    case 0xC2378B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/menu_handler-jp.asm:678 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2378B.
    case 0xC2378D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:679 JSL MULT168
    case 0xC2378E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/menu_handler-jp.asm:680 CLC
    case 0xC23792: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:681 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC23793: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/menu_handler-jp.asm:681 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC23793.
    case 0xC23795: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/menu_handler-jp.asm:682 TAX
    case 0xC23796: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:683 LDA @LOCAL07
    case 0xC23797: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:684 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC23799: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/battle/menu_handler-jp.asm:686 LDY @LOCAL09
    case 0xC2379D: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:687 INY
    case 0xC2379F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:688 STY @LOCAL09
    case 0xC237A0: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:690 CPY #6
    case 0xC237A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:690 CPY #6
    // Overlapping static entry reached from 0xC237A2.
    case 0xC237A4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler-jp.asm:691 BCC @UNKNOWN68
    case 0xC237A5: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/battle/menu_handler-jp.asm:692 JMP @UNKNOWN63
    case 0xC237A7: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:694 LDA PAD_STATE
    case 0xC237AA: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler-jp.asm:695 AND #PAD::SELECT_BUTTON
    case 0xC237AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/battle/menu_handler-jp.asm:695 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC237AD.
    case 0xC237AF: cpu.execute_instruction<0x20>(0x0007F0, 3); return true;
    // src/battle/menu_handler-jp.asm:696 BEQ @UNKNOWN73
    case 0xC237B0: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:697 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC237B2: cpu.execute_instruction<0x22>(0xC14344, 4); return true;
    // src/battle/menu_handler-jp.asm:698 JMP @UNKNOWN63
    case 0xC237B6: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:700 JSL RESUME_MUSIC
    case 0xC237B9: cpu.execute_instruction<0x22>(0xC13435, 4); return true;
    // src/battle/menu_handler-jp.asm:701 LDA #0
    case 0xC237BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:701 LDA #0
    // Overlapping static entry reached from 0xC237BD.
    case 0xC237BF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/menu_handler-jp.asm:702 JMP @UNKNOWN113
    case 0xC237C0: cpu.execute_instruction<0x4C>(0x003A4E, 3); return true;
    // src/battle/menu_handler-jp.asm:704 SEP #PROC_FLAGS::ACCUM8
    case 0xC237C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:705 STZ BATTLE_ITEM_USED
    case 0xC237C5: cpu.execute_instruction<0x9C>(0x00AB7E, 3); return true;
    // src/battle/menu_handler-jp.asm:706 REP #PROC_FLAGS::ACCUM8
    case 0xC237C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:707 CMP #1
    case 0xC237CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:707 CMP #1
    // Overlapping static entry reached from 0xC237CA.
    case 0xC237CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:708 BEQ @UNKNOWN81
    case 0xC237CD: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/battle/menu_handler-jp.asm:709 CMP #2
    case 0xC237CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:709 CMP #2
    // Overlapping static entry reached from 0xC237CF.
    case 0xC237D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:710 BEQL @UNKNOWN88
    case 0xC237D2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:710 BEQL @UNKNOWN88
    case 0xC237D4: cpu.execute_instruction<0x4C>(0x003863, 3); return true;
    // src/battle/menu_handler-jp.asm:711 CMP #3
    case 0xC237D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:711 CMP #3
    // Overlapping static entry reached from 0xC237D7.
    case 0xC237D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:712 BEQL @UNKNOWN90
    case 0xC237DA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:712 BEQL @UNKNOWN90
    case 0xC237DC: cpu.execute_instruction<0x4C>(0x003897, 3); return true;
    // src/battle/menu_handler-jp.asm:713 CMP #4
    case 0xC237DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:713 CMP #4
    // Overlapping static entry reached from 0xC237DF.
    case 0xC237E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:714 BEQL @UNKNOWN91
    case 0xC237E2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:714 BEQL @UNKNOWN91
    case 0xC237E4: cpu.execute_instruction<0x4C>(0x0038AC, 3); return true;
    // src/battle/menu_handler-jp.asm:715 CMP #5
    case 0xC237E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:715 CMP #5
    // Overlapping static entry reached from 0xC237E7.
    case 0xC237E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:716 BEQL @UNKNOWN95
    case 0xC237EA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:716 BEQL @UNKNOWN95
    case 0xC237EC: cpu.execute_instruction<0x4C>(0x00390D, 3); return true;
    // src/battle/menu_handler-jp.asm:717 CMP #6
    case 0xC237EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:717 CMP #6
    // Overlapping static entry reached from 0xC237EF.
    case 0xC237F1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:718 BEQL @UNKNOWN96
    case 0xC237F2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:718 BEQL @UNKNOWN96
    case 0xC237F4: cpu.execute_instruction<0x4C>(0x003921, 3); return true;
    // src/battle/menu_handler-jp.asm:719 CMP #7
    case 0xC237F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:719 CMP #7
    // Overlapping static entry reached from 0xC237F7.
    case 0xC237F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:720 BEQL @UNKNOWN97
    case 0xC237FA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:720 BEQL @UNKNOWN97
    case 0xC237FC: cpu.execute_instruction<0x4C>(0x003942, 3); return true;
    // src/battle/menu_handler-jp.asm:721 JMP @UNKNOWN112
    case 0xC237FF: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:723 LDA @LOCAL06
    case 0xC23802: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:724 BEQ @UNKNOWN82
    case 0xC23804: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler-jp.asm:725 CMP #1
    case 0xC23806: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:725 CMP #1
    // Overlapping static entry reached from 0xC23806.
    case 0xC23808: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:726 BEQ @UNKNOWN83
    case 0xC23809: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:727 CMP #2
    case 0xC2380B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:727 CMP #2
    // Overlapping static entry reached from 0xC2380B.
    case 0xC2380D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:728 BEQ @UNKNOWN84
    case 0xC2380E: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/menu_handler-jp.asm:729 BRA @UNKNOWN85
    case 0xC23810: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/menu_handler-jp.asm:731 LDA #BATTLE_ACTIONS::BASH
    case 0xC23812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:731 LDA #BATTLE_ACTIONS::BASH
    // Overlapping static entry reached from 0xC23812.
    case 0xC23814: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:732 STA @VIRTUAL02
    case 0xC23815: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:733 STA @LOCAL04
    case 0xC23817: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:734 BRA @UNKNOWN85
    case 0xC23819: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:736 LDA #BATTLE_ACTIONS::SHOOT
    case 0xC2381B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:736 LDA #BATTLE_ACTIONS::SHOOT
    // Overlapping static entry reached from 0xC2381B.
    case 0xC2381D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:737 STA @VIRTUAL02
    case 0xC2381E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:738 STA @LOCAL04
    case 0xC23820: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:739 BRA @UNKNOWN85
    case 0xC23822: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:741 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC23824: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:741 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC23824.
    case 0xC23826: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:742 STA @VIRTUAL02
    case 0xC23827: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:743 STA @LOCAL04
    case 0xC23829: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:745 LDA @LOCAL04
    case 0xC2382B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:746 STA @VIRTUAL02
    case 0xC2382D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:747 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2382F: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:748 SEP #PROC_FLAGS::ACCUM8
    case 0xC23832: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:749 LDA #17
    case 0xC23834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler-jp.asm:750 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23836: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:750 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23834.
    case 0xC23837: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:751 REP #PROC_FLAGS::ACCUM8
    case 0xC23839: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:752 LDA @LOCAL06
    case 0xC2383B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:753 CMP #2
    case 0xC2383D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:753 CMP #2
    // Overlapping static entry reached from 0xC2383D.
    case 0xC2383F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:754 BEQL @UNKNOWN112
    case 0xC23840: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:754 BEQL @UNKNOWN112
    case 0xC23842: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:755 LDY @VIRTUAL02
    case 0xC23845: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:756 LDX #1
    case 0xC23847: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:756 LDX #1
    // Overlapping static entry reached from 0xC23847.
    case 0xC23849: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:757 LDA #0
    case 0xC2384A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:757 LDA #0
    // Overlapping static entry reached from 0xC2384A.
    case 0xC2384C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:758 JSL REDIRECT_C1242E
    case 0xC2384D: cpu.execute_instruction<0x22>(0xC1DBFA, 4); return true;
    // src/battle/menu_handler-jp.asm:759 SEP #PROC_FLAGS::ACCUM8
    case 0xC23851: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23853: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:761 REP #PROC_FLAGS::ACCUM8
    case 0xC23856: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:762 AND #$00FF
    case 0xC23858: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:762 AND #$00FF
    // Overlapping static entry reached from 0xC23858.
    case 0xC2385A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:763 BEQL @UNKNOWN63
    case 0xC2385B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:763 BEQL @UNKNOWN63
    case 0xC2385D: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:764 JMP @UNKNOWN112
    case 0xC23860: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:766 LDA @LOCAL08
    case 0xC23863: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:767 SEP #PROC_FLAGS::ACCUM8
    case 0xC23865: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:768 STA BATTLE_MENU_SELECTION
    case 0xC23867: cpu.execute_instruction<0x8D>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:769 REP #PROC_FLAGS::ACCUM8
    case 0xC2386A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:770 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC2386C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:770 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC2386C.
    case 0xC2386E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:771 JSL REDIRECT_C1CFC6
    case 0xC2386F: cpu.execute_instruction<0x22>(0xC1DBF4, 4); return true;
    // src/battle/menu_handler-jp.asm:772 TAX
    case 0xC23873: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:773 BEQL @UNKNOWN63
    case 0xC23874: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:773 BEQL @UNKNOWN63
    case 0xC23876: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:774 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23879: cpu.execute_instruction<0xAD>(0x00AB80, 3); return true;
    // src/battle/menu_handler-jp.asm:775 AND #$00FF
    case 0xC2387C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:775 AND #$00FF
    // Overlapping static entry reached from 0xC2387C.
    case 0xC2387E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler-jp.asm:776 TAX
    case 0xC2387F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:777 LDA @LOCAL08
    case 0xC23880: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:778 JSL GET_CHARACTER_ITEM
    case 0xC23882: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/battle/menu_handler-jp.asm:779 SEP #PROC_FLAGS::ACCUM8
    case 0xC23886: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:780 STA BATTLE_ITEM_USED
    case 0xC23888: cpu.execute_instruction<0x8D>(0x00AB7E, 3); return true;
    // src/battle/menu_handler-jp.asm:781 REP #PROC_FLAGS::ACCUM8
    case 0xC2388B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:782 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2388D: cpu.execute_instruction<0xAD>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:783 STA @VIRTUAL02
    case 0xC23890: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:784 STA @LOCAL04
    case 0xC23892: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:785 JMP @UNKNOWN112
    case 0xC23894: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:787 SEP #PROC_FLAGS::ACCUM8
    case 0xC23897: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:788 LDA #1
    case 0xC23899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler-jp.asm:789 STA GAME_STATE+game_state::auto_fight_enable
    case 0xC2389B: cpu.execute_instruction<0x8D>(0x009B62, 3); return true;
    // src/battle/menu_handler-jp.asm:789 STA GAME_STATE+game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC23899.
    case 0xC2389C: cpu.execute_instruction<0x62>(0x00229B, 3); return true;
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    case 0xC2389E: cpu.execute_instruction<0x22>(0xC20201, 4); return true;
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    // Overlapping static entry reached from 0xC2389C.
    case 0xC2389F: cpu.execute_instruction<0x01>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    // Overlapping static entry reached from 0xC2389F.
    case 0xC238A1: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC238A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC238A1.
    case 0xC238A3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC238A2.
    case 0xC238A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:793 STA @VIRTUAL02
    case 0xC238A5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:794 STA @LOCAL04
    case 0xC238A7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:795 JMP @UNKNOWN112
    case 0xC238A9: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:797 LDA @LOCAL08
    case 0xC238AC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:798 CMP #PARTY_MEMBER::JEFF
    case 0xC238AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler-jp.asm:798 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC238AE.
    case 0xC238B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler-jp.asm:799 BNE @UNKNOWN93
    case 0xC238B1: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/battle/menu_handler-jp.asm:800 LDA #BATTLE_ACTIONS::SPY
    case 0xC238B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:800 LDA #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC238B3.
    case 0xC238B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:801 STA @VIRTUAL02
    case 0xC238B6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:802 STA @LOCAL04
    case 0xC238B8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:803 LDA @VIRTUAL02
    case 0xC238BA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:804 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC238BC: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:805 SEP #PROC_FLAGS::ACCUM8
    case 0xC238BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:806 LDA #17
    case 0xC238C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler-jp.asm:807 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC238C3: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:807 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC238C1.
    case 0xC238C4: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:808 LDY @VIRTUAL02
    case 0xC238C6: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:809 LDX #1
    case 0xC238C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:809 LDX #1
    // Overlapping static entry reached from 0xC238C8.
    case 0xC238CA: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler-jp.asm:810 REP #PROC_FLAGS::ACCUM8
    case 0xC238CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:811 LDA #0
    case 0xC238CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:811 LDA #0
    // Overlapping static entry reached from 0xC238CD.
    case 0xC238CF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:812 JSL REDIRECT_C1242E
    case 0xC238D0: cpu.execute_instruction<0x22>(0xC1DBFA, 4); return true;
    // src/battle/menu_handler-jp.asm:813 SEP #PROC_FLAGS::ACCUM8
    case 0xC238D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:814 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC238D6: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:815 REP #PROC_FLAGS::ACCUM8
    case 0xC238D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:816 AND #$00FF
    case 0xC238DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:816 AND #$00FF
    // Overlapping static entry reached from 0xC238DB.
    case 0xC238DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:817 BEQL @UNKNOWN63
    case 0xC238DE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:817 BEQL @UNKNOWN63
    case 0xC238E0: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:818 JMP @UNKNOWN112
    case 0xC238E3: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:820 LDA @LOCAL08
    case 0xC238E6: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:821 SEP #PROC_FLAGS::ACCUM8
    case 0xC238E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:822 STA BATTLE_MENU_SELECTION
    case 0xC238EA: cpu.execute_instruction<0x8D>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:823 REP #PROC_FLAGS::ACCUM8
    case 0xC238ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:824 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC238EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00AB7F, 3); return true;
    // src/battle/menu_handler-jp.asm:824 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC238EF.
    case 0xC238F1: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:825 JSL REDIRECT_BATTLE_PSI_MENU
    case 0xC238F2: cpu.execute_instruction<0x22>(0xC1DC00, 4); return true;
    // src/battle/menu_handler-jp.asm:826 TAX
    case 0xC238F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:827 BEQL @UNKNOWN63
    case 0xC238F7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:827 BEQL @UNKNOWN63
    case 0xC238F9: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:828 SEP #PROC_FLAGS::ACCUM8
    case 0xC238FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:829 STZ BATTLE_ITEM_USED
    case 0xC238FE: cpu.execute_instruction<0x9C>(0x00AB7E, 3); return true;
    // src/battle/menu_handler-jp.asm:830 REP #PROC_FLAGS::ACCUM8
    case 0xC23901: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:831 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23903: cpu.execute_instruction<0xAD>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:832 STA @VIRTUAL02
    case 0xC23906: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:833 STA @LOCAL04
    case 0xC23908: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:834 JMP @UNKNOWN112
    case 0xC2390A: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:836 LDA #BATTLE_ACTIONS::GUARD
    case 0xC2390D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/menu_handler-jp.asm:836 LDA #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC2390D.
    case 0xC2390F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:837 STA @VIRTUAL02
    case 0xC23910: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:838 STA @LOCAL04
    case 0xC23912: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:839 LDA @VIRTUAL02
    case 0xC23914: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:840 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23916: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:841 SEP #PROC_FLAGS::ACCUM8
    case 0xC23919: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:842 STZ BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2391B: cpu.execute_instruction<0x9C>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:843 JMP @UNKNOWN112
    case 0xC2391E: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:845 SEP #PROC_FLAGS::ACCUM8
    case 0xC23921: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:846 LDA #1
    case 0xC23923: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler-jp.asm:847 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23925: cpu.execute_instruction<0x8D>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:847 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23923.
    case 0xC23926: cpu.execute_instruction<0x83>(0x0000AB, 2); return true;
    // src/battle/menu_handler-jp.asm:848 REP #PROC_FLAGS::ACCUM8
    case 0xC23928: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:849 LDA @LOCAL08
    case 0xC2392A: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:850 SEP #PROC_FLAGS::ACCUM8
    case 0xC2392C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:851 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2392E: cpu.execute_instruction<0x8D>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:852 REP #PROC_FLAGS::ACCUM8
    case 0xC23931: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:853 LDA #BATTLE_ACTIONS::RUN_AWAY
    case 0xC23933: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000117, 3); return true;
    // src/battle/menu_handler-jp.asm:853 LDA #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC23933.
    case 0xC23935: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:854 STA @VIRTUAL02
    case 0xC23936: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:854 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23935.
    case 0xC23937: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:855 STA @LOCAL04
    case 0xC23938: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:856 LDA @VIRTUAL02
    case 0xC2393A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2393C: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:858 JMP @UNKNOWN112
    case 0xC2393F: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:860 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC23942: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000083, 2); else cpu.execute_instruction<0xA2>(0x00AB83, 3); return true;
    // src/battle/menu_handler-jp.asm:860 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23942.
    case 0xC23944: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:861 STX @LOCAL09
    case 0xC23945: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:862 SEP #PROC_FLAGS::ACCUM8
    case 0xC23947: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:863 LDA #1
    case 0xC23949: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/menu_handler-jp.asm:864 STA __BSS_START__,X
    case 0xC2394B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:864 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23949.
    case 0xC2394C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:865 REP #PROC_FLAGS::ACCUM8
    case 0xC2394E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:866 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23950: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x00AB84, 3); return true;
    // src/battle/menu_handler-jp.asm:866 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23950.
    case 0xC23952: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/menu_handler-jp.asm:867 STA @VIRTUAL04
    case 0xC23953: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:868 LDA @LOCAL08
    case 0xC23955: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:869 SEP #PROC_FLAGS::ACCUM8
    case 0xC23957: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:870 LDX @VIRTUAL04
    case 0xC23959: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:871 STA __BSS_START__,X
    case 0xC2395B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:872 REP #PROC_FLAGS::ACCUM8
    case 0xC2395E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:873 LDA @LOCAL08
    case 0xC23960: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler-jp.asm:874 CMP #PARTY_MEMBER::PAULA
    case 0xC23962: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler-jp.asm:874 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23962.
    case 0xC23964: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:875 BEQ @UNKNOWN99
    case 0xC23965: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/menu_handler-jp.asm:876 CMP #PARTY_MEMBER::POO
    case 0xC23967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:876 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23967.
    case 0xC23969: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:877 BEQL @UNKNOWN111
    case 0xC2396A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:877 BEQL @UNKNOWN111
    case 0xC2396C: cpu.execute_instruction<0x4C>(0x003A03, 3); return true;
    // src/battle/menu_handler-jp.asm:878 JMP @UNKNOWN112
    case 0xC2396F: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler-jp.asm:880 LDA GIYGAS_PHASE
    case 0xC23972: cpu.execute_instruction<0xAD>(0x00AB7C, 3); return true;
    // src/battle/menu_handler-jp.asm:881 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC23975: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler-jp.asm:881 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC23975.
    case 0xC23977: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:882 BEQ @UNKNOWN100
    case 0xC23978: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/menu_handler-jp.asm:883 CMP #GIYGAS_PHASES::PRAYER_1_USED
    case 0xC2397A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/menu_handler-jp.asm:883 CMP #GIYGAS_PHASES::PRAYER_1_USED
    // Overlapping static entry reached from 0xC2397A.
    case 0xC2397C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:884 BEQ @UNKNOWN101
    case 0xC2397D: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/battle/menu_handler-jp.asm:885 CMP #GIYGAS_PHASES::PRAYER_2_USED
    case 0xC2397F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/menu_handler-jp.asm:885 CMP #GIYGAS_PHASES::PRAYER_2_USED
    // Overlapping static entry reached from 0xC2397F.
    case 0xC23981: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:886 BEQ @UNKNOWN102
    case 0xC23982: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/menu_handler-jp.asm:887 CMP #GIYGAS_PHASES::PRAYER_3_USED
    case 0xC23984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:887 CMP #GIYGAS_PHASES::PRAYER_3_USED
    // Overlapping static entry reached from 0xC23984.
    case 0xC23986: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:888 BEQ @UNKNOWN103
    case 0xC23987: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/menu_handler-jp.asm:889 CMP #GIYGAS_PHASES::PRAYER_4_USED
    case 0xC23989: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/menu_handler-jp.asm:889 CMP #GIYGAS_PHASES::PRAYER_4_USED
    // Overlapping static entry reached from 0xC23989.
    case 0xC2398B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:890 BEQ @UNKNOWN104
    case 0xC2398C: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/menu_handler-jp.asm:891 CMP #GIYGAS_PHASES::PRAYER_5_USED
    case 0xC2398E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/battle/menu_handler-jp.asm:891 CMP #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC2398E.
    case 0xC23990: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:892 BEQ @UNKNOWN105
    case 0xC23991: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/battle/menu_handler-jp.asm:893 CMP #GIYGAS_PHASES::PRAYER_6_USED
    case 0xC23993: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/battle/menu_handler-jp.asm:893 CMP #GIYGAS_PHASES::PRAYER_6_USED
    // Overlapping static entry reached from 0xC23993.
    case 0xC23995: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:894 BEQ @UNKNOWN106
    case 0xC23996: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/battle/menu_handler-jp.asm:895 CMP #GIYGAS_PHASES::PRAYER_7_USED
    case 0xC23998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/battle/menu_handler-jp.asm:895 CMP #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC23998.
    case 0xC2399A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:896 BEQ @UNKNOWN107
    case 0xC2399B: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/menu_handler-jp.asm:897 CMP #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC2399D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/battle/menu_handler-jp.asm:897 CMP #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC2399D.
    case 0xC2399F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler-jp.asm:898 BEQ @UNKNOWN108
    case 0xC239A0: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/menu_handler-jp.asm:899 BRA @UNKNOWN109
    case 0xC239A2: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/menu_handler-jp.asm:901 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC239A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000123, 3); return true;
    // src/battle/menu_handler-jp.asm:901 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC239A4.
    case 0xC239A6: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:902 STA @VIRTUAL02
    case 0xC239A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:902 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239A6.
    case 0xC239A8: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:903 STA @LOCAL04
    case 0xC239A9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:904 BRA @UNKNOWN110
    case 0xC239AB: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/battle/menu_handler-jp.asm:906 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC239AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000124, 3); return true;
    // src/battle/menu_handler-jp.asm:906 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC239AD.
    case 0xC239AF: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:907 STA @VIRTUAL02
    case 0xC239B0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:907 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239AF.
    case 0xC239B1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:908 STA @LOCAL04
    case 0xC239B2: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:909 BRA @UNKNOWN110
    case 0xC239B4: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/menu_handler-jp.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC239B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000125, 3); return true;
    // src/battle/menu_handler-jp.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC239B6.
    case 0xC239B8: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:912 STA @VIRTUAL02
    case 0xC239B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:912 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239B8.
    case 0xC239BA: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:913 STA @LOCAL04
    case 0xC239BB: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:914 BRA @UNKNOWN110
    case 0xC239BD: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/battle/menu_handler-jp.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC239BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000126, 3); return true;
    // src/battle/menu_handler-jp.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC239BF.
    case 0xC239C1: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:917 STA @VIRTUAL02
    case 0xC239C2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:917 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239C1.
    case 0xC239C3: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:918 STA @LOCAL04
    case 0xC239C4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:919 BRA @UNKNOWN110
    case 0xC239C6: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/menu_handler-jp.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC239C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000127, 3); return true;
    // src/battle/menu_handler-jp.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC239C8.
    case 0xC239CA: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:922 STA @VIRTUAL02
    case 0xC239CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:922 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239CA.
    case 0xC239CC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:923 STA @LOCAL04
    case 0xC239CD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:924 BRA @UNKNOWN110
    case 0xC239CF: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/battle/menu_handler-jp.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC239D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000128, 3); return true;
    // src/battle/menu_handler-jp.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC239D1.
    case 0xC239D3: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:927 STA @VIRTUAL02
    case 0xC239D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:927 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239D3.
    case 0xC239D5: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:928 STA @LOCAL04
    case 0xC239D6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:929 BRA @UNKNOWN110
    case 0xC239D8: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC239DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x000129, 3); return true;
    // src/battle/menu_handler-jp.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC239DA.
    case 0xC239DC: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:932 STA @VIRTUAL02
    case 0xC239DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:932 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239DC.
    case 0xC239DE: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:933 STA @LOCAL04
    case 0xC239DF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:934 BRA @UNKNOWN110
    case 0xC239E1: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/menu_handler-jp.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC239E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00012A, 3); return true;
    // src/battle/menu_handler-jp.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC239E3.
    case 0xC239E5: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:937 STA @VIRTUAL02
    case 0xC239E6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:937 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239E5.
    case 0xC239E7: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:938 STA @LOCAL04
    case 0xC239E8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:939 BRA @UNKNOWN110
    case 0xC239EA: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/menu_handler-jp.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC239EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00012B, 3); return true;
    // src/battle/menu_handler-jp.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC239EC.
    case 0xC239EE: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:942 STA @VIRTUAL02
    case 0xC239EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:942 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239EE.
    case 0xC239F0: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:943 STA @LOCAL04
    case 0xC239F1: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:944 BRA @UNKNOWN110
    case 0xC239F3: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/menu_handler-jp.asm:946 LDA #BATTLE_ACTIONS::PRAY
    case 0xC239F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler-jp.asm:946 LDA #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC239F5.
    case 0xC239F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:947 STA @VIRTUAL02
    case 0xC239F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:948 STA @LOCAL04
    case 0xC239FA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:950 LDA @VIRTUAL02
    case 0xC239FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:951 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239FE: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:952 BRA @UNKNOWN112
    case 0xC23A01: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/menu_handler-jp.asm:954 LDA #BATTLE_ACTIONS::MIRROR
    case 0xC23A03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000118, 3); return true;
    // src/battle/menu_handler-jp.asm:954 LDA #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC23A03.
    case 0xC23A05: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:955 STA @VIRTUAL02
    case 0xC23A06: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:955 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23A05.
    case 0xC23A07: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler-jp.asm:956 STA @LOCAL04
    case 0xC23A08: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:957 LDA @VIRTUAL02
    case 0xC23A0A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:958 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A0C: cpu.execute_instruction<0x8D>(0x00AB81, 3); return true;
    // src/battle/menu_handler-jp.asm:959 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:960 LDA #17
    case 0xC23A11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00A611, 3); return true;
    // src/battle/menu_handler-jp.asm:961 LDX @LOCAL09
    case 0xC23A13: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/menu_handler-jp.asm:961 LDX @LOCAL09
    // Overlapping static entry reached from 0xC23A11.
    case 0xC23A14: cpu.execute_instruction<0x26>(0x00009D, 2); return true;
    // src/battle/menu_handler-jp.asm:962 STA __BSS_START__,X
    case 0xC23A15: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:962 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23A14.
    case 0xC23A16: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler-jp.asm:963 LDY @VIRTUAL02
    case 0xC23A18: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler-jp.asm:964 LDX #1
    case 0xC23A1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler-jp.asm:964 LDX #1
    // Overlapping static entry reached from 0xC23A1A.
    case 0xC23A1C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler-jp.asm:965 REP #PROC_FLAGS::ACCUM8
    case 0xC23A1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:966 LDA #0
    case 0xC23A1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:966 LDA #0
    // Overlapping static entry reached from 0xC23A1F.
    case 0xC23A21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:967 JSL REDIRECT_C1242E
    case 0xC23A22: cpu.execute_instruction<0x22>(0xC1DBFA, 4); return true;
    // src/battle/menu_handler-jp.asm:968 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:969 LDX @VIRTUAL04
    case 0xC23A28: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler-jp.asm:970 STA __BSS_START__,X
    case 0xC23A2A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler-jp.asm:971 REP #PROC_FLAGS::ACCUM8
    case 0xC23A2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:972 AND #$00FF
    case 0xC23A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:972 AND #$00FF
    // Overlapping static entry reached from 0xC23A2F.
    case 0xC23A31: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:973 BEQL @UNKNOWN63
    case 0xC23A32: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:973 BEQL @UNKNOWN63
    case 0xC23A34: cpu.execute_instruction<0x4C>(0x003713, 3); return true;
    // src/battle/menu_handler-jp.asm:975 LDX @LOCAL03
    case 0xC23A37: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/menu_handler-jp.asm:976 REP #PROC_FLAGS::ACCUM8
    case 0xC23A39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler-jp.asm:977 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23A3B: cpu.execute_instruction<0xBF>(0xC4765F, 4); return true;
    // src/battle/menu_handler-jp.asm:978 AND #$00FF
    case 0xC23A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler-jp.asm:978 AND #$00FF
    // Overlapping static entry reached from 0xC23A3F.
    case 0xC23A41: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler-jp.asm:979 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23A42: cpu.execute_instruction<0x22>(0xC1DB2A, 4); return true;
    // src/battle/menu_handler-jp.asm:980 JSL RESUME_MUSIC
    case 0xC23A46: cpu.execute_instruction<0x22>(0xC13435, 4); return true;
    // src/battle/menu_handler-jp.asm:981 LDA @LOCAL04
    case 0xC23A4A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/menu_handler-jp.asm:982 STA @VIRTUAL02
    case 0xC23A4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/menu_handler-jp.asm:984 END_C_FUNCTION
    case 0xC23A4E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/menu_handler-jp.asm:984 END_C_FUNCTION
    case 0xC23A4F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/miss_calc.asm (source_named).
bool execute_battle_miss_calc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/miss_calc.asm:3 BEGIN_C_FUNCTION
    case 0xC2829E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC282A3.
    case 0xC282A5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:11 TAY
    case 0xC282A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:12 STY @MISS_MESSAGE
    case 0xC282A9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/battle/miss_calc.asm:13 LDX CURRENT_ATTACKER
    case 0xC282AB: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:14 LDA __BSS_START__+14,X
    case 0xC282AE: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/miss_calc.asm:15 AND #$00FF
    case 0xC282B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC282B1.
    case 0xC282B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC282B4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC282B6: cpu.execute_instruction<0x4C>(0x008343, 3); return true;
    // src/battle/miss_calc.asm:17 LDX CURRENT_ATTACKER
    case 0xC282B9: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:18 LDA __BSS_START__+15,X
    case 0xC282BC: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/miss_calc.asm:19 AND #$00FF
    case 0xC282BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC282BF.
    case 0xC282C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC282C2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC282C4: cpu.execute_instruction<0x4C>(0x008343, 3); return true;
    // src/battle/miss_calc.asm:21 LDX CURRENT_ATTACKER
    case 0xC282C7: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:22 LDA __BSS_START__+16,X
    case 0xC282CA: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/miss_calc.asm:23 AND #$00FF
    case 0xC282CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC282CD.
    case 0xC282CF: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    case 0xC282D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC282D0.
    case 0xC282D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/miss_calc.asm:25 JSL MULT168
    case 0xC282D3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/miss_calc.asm:26 TAX
    case 0xC282D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:27 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC282D8: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/battle/miss_calc.asm:28 AND #$00FF
    case 0xC282DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC282DB.
    case 0xC282DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/miss_calc.asm:29 BEQ @UNKNOWN2
    case 0xC282DE: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/miss_calc.asm:30 DEC
    case 0xC282E0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:31 STA @VIRTUAL02
    case 0xC282E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:32 TXA
    case 0xC282E3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:33 CLC
    case 0xC282E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC282E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC282E5.
    case 0xC282E7: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/miss_calc.asm:35 CLC
    case 0xC282E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    case 0xC282E9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC282E7.
    case 0xC282EA: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:37 TAX
    case 0xC282EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:38 LDA __BSS_START__,X
    case 0xC282EC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:39 AND #$00FF
    case 0xC282EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC282EF.
    case 0xC282F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:41 CLC
    case 0xC282FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    case 0xC282FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC282FB.
    case 0xC282FD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:43 TAX
    case 0xC282FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC282FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:45 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC28301: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/miss_calc.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC28305: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:47 SEC
    case 0xC28307: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:48 AND #$00FF
    case 0xC28308: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC28308.
    case 0xC2830A: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/miss_calc.asm:49 SBC #$0080
    case 0xC2830B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/miss_calc.asm:49 SBC #$0080
    // Overlapping static entry reached from 0xC2830B.
    case 0xC2830D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/miss_calc.asm:50 EOR #$FF80
    case 0xC2830E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/miss_calc.asm:50 EOR #$FF80
    // Overlapping static entry reached from 0xC2830E.
    case 0xC28310: cpu.execute_instruction<0xFF>(0x1286AA, 4); return true;
    // src/battle/miss_calc.asm:51 TAX
    case 0xC28311: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:52 STX @MISS_CHANCE
    case 0xC28312: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:53 BRA @UNKNOWN3
    case 0xC28314: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/miss_calc.asm:55 LDX #1
    case 0xC28316: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/miss_calc.asm:55 LDX #1
    // Overlapping static entry reached from 0xC28316.
    case 0xC28318: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/miss_calc.asm:56 STX @MISS_CHANCE
    case 0xC28319: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:58 LDX CURRENT_ATTACKER
    case 0xC2831B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:59 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2831E: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/miss_calc.asm:60 AND #$00FF
    case 0xC28321: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC28321.
    case 0xC28323: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    case 0xC28324: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC28324.
    case 0xC28326: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/miss_calc.asm:62 BEQ @UNKNOWN4
    case 0xC28327: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/miss_calc.asm:63 LDX CURRENT_ATTACKER
    case 0xC28329: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:64 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2832C: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/miss_calc.asm:65 AND #$00FF
    case 0xC2832F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC2832F.
    case 0xC28331: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    case 0xC28332: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC28332.
    case 0xC28334: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/miss_calc.asm:67 BNE @UNKNOWN6
    case 0xC28335: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/miss_calc.asm:69 LDX @MISS_CHANCE
    case 0xC28337: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:70 TXA
    case 0xC28339: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:71 CLC
    case 0xC2833A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    case 0xC2833B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    // Overlapping static entry reached from 0xC2833B.
    case 0xC2833D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:73 TAX
    case 0xC2833E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:74 STX @MISS_CHANCE
    case 0xC2833F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:75 BRA @UNKNOWN6
    case 0xC28341: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/miss_calc.asm:77 LDX CURRENT_ATTACKER
    case 0xC28343: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/miss_calc.asm:78 LDA __BSS_START__,X
    case 0xC28346: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    case 0xC28349: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC28349.
    case 0xC2834B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/miss_calc.asm:80 JSL MULT168
    case 0xC2834C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/miss_calc.asm:81 CLC
    case 0xC28350: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    case 0xC28351: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x000033, 3); return true;
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    // Overlapping static entry reached from 0xC28351.
    case 0xC28353: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:83 TAX
    case 0xC28354: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:84 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC28355: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/miss_calc.asm:85 AND #$00FF
    case 0xC28359: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC28359.
    case 0xC2835B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:86 TAX
    case 0xC2835C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:87 STX @MISS_CHANCE
    case 0xC2835D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:89 LDX @MISS_CHANCE
    case 0xC2835F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:90 BEQ @UNKNOWN9
    case 0xC28361: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/miss_calc.asm:91 LDA #16
    case 0xC28363: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/miss_calc.asm:91 LDA #16
    // Overlapping static entry reached from 0xC28363.
    case 0xC28365: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:92 JSR RAND_LIMIT
    case 0xC28366: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/miss_calc.asm:93 STA @VIRTUAL02
    case 0xC28369: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:94 LDX @MISS_CHANCE
    case 0xC2836B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:95 TXA
    case 0xC2836D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:96 DEC
    case 0xC2836E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:97 CMP @VIRTUAL02
    case 0xC2836F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:98 BCC @UNKNOWN9
    case 0xC28371: cpu.execute_instruction<0x90>(0x000027, 2); return true;
    // src/battle/miss_calc.asm:99 LDY @MISS_MESSAGE
    case 0xC28373: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/battle/miss_calc.asm:100 BEQ @UNKNOWN7
    case 0xC28375: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC28377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x002E2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC28377.
    case 0xC28379: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC2837C.
    case 0xC2837E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC28381: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/miss_calc.asm:102 BRA @UNKNOWN8
    case 0xC28385: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC28387: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x002E1F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC28387.
    case 0xC28389: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC2838C.
    case 0xC2838E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC28391: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/miss_calc.asm:106 LDA #1
    case 0xC28395: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/miss_calc.asm:106 LDA #1
    // Overlapping static entry reached from 0xC28395.
    case 0xC28397: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/miss_calc.asm:107 BRA @UNKNOWN10
    case 0xC28398: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/miss_calc.asm:109 LDA #0
    case 0xC2839A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:109 LDA #0
    // Overlapping static entry reached from 0xC2839A.
    case 0xC2839C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC2839D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC2839E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
