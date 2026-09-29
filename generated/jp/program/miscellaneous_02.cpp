// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/misc/party_remove_char-jp.asm (source_named).
bool execute_miscellaneous_party_remove_char_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/party_remove_char-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC228B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228B5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228B6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228B7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC228B8.
    case 0xC228BA: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228BB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/party_remove_char-jp.asm:8 END_STACK_VARS
    case 0xC228BC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:9 TAX
    case 0xC228BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:10 STX @LOCAL01
    case 0xC228BE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/party_remove_char-jp.asm:11 LDA #0
    case 0xC228C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/party_remove_char-jp.asm:11 LDA #0
    // Overlapping static entry reached from 0xC228C0.
    case 0xC228C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/party_remove_char-jp.asm:12 STA @LOCAL00
    case 0xC228C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:13 BRA @UNKNOWN7
    case 0xC228C5: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/misc/party_remove_char-jp.asm:15 LDX @LOCAL01
    case 0xC228C7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/party_remove_char-jp.asm:16 STX @VIRTUAL02
    case 0xC228C9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/party_remove_char-jp.asm:17 LDA @LOCAL00
    case 0xC228CB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:18 CLC
    case 0xC228CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:19 ADC #.LOWORD(GAME_STATE)
    case 0xC228CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_remove_char-jp.asm:19 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC228CE.
    case 0xC228D0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:20 TAX
    case 0xC228D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:21 LDA a:game_state::party_members,X
    case 0xC228D2: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/party_remove_char-jp.asm:22 AND #$00FF
    case 0xC228D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_remove_char-jp.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC228D5.
    case 0xC228D7: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/party_remove_char-jp.asm:23 CMP @VIRTUAL02
    case 0xC228D8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/party_remove_char-jp.asm:24 BNE @UNKNOWN6
    case 0xC228DA: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/misc/party_remove_char-jp.asm:25 BRA @UNKNOWN2
    case 0xC228DC: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/misc/party_remove_char-jp.asm:27 LDA @LOCAL00
    case 0xC228DE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:28 CLC
    case 0xC228E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:29 ADC #.LOWORD(GAME_STATE)
    case 0xC228E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_remove_char-jp.asm:29 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC228E1.
    case 0xC228E3: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:30 PHA
    case 0xC228E4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:31 LDA @LOCAL00
    case 0xC228E5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:32 TAX
    case 0xC228E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC228E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_remove_char-jp.asm:34 LDA GAME_STATE + game_state::party_members + 1,X
    case 0xC228EA: cpu.execute_instruction<0xBD>(0x009B21, 3); return true;
    // src/misc/party_remove_char-jp.asm:35 PLX
    case 0xC228ED: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:36 STA a:game_state::party_members,X
    case 0xC228EE: cpu.execute_instruction<0x9D>(0x000077, 3); return true;
    // src/misc/party_remove_char-jp.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC228F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_remove_char-jp.asm:38 LDA @LOCAL00
    case 0xC228F3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:39 INC
    case 0xC228F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:40 STA @LOCAL00
    case 0xC228F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:42 LDA @LOCAL00
    case 0xC228F8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:43 STA @VIRTUAL02
    case 0xC228FA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/party_remove_char-jp.asm:44 LDA #6
    case 0xC228FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/misc/party_remove_char-jp.asm:44 LDA #6
    // Overlapping static entry reached from 0xC228FC.
    case 0xC228FE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_remove_char-jp.asm:45 CLC
    case 0xC228FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:46 SBC @VIRTUAL02
    case 0xC22900: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/party_remove_char-jp.asm:47 BRANCHGTS @UNKNOWN1
    case 0xC22902: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/party_remove_char-jp.asm:47 BRANCHGTS @UNKNOWN1
    case 0xC22904: cpu.execute_instruction<0x10>(0x0000D8, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/party_remove_char-jp.asm:47 BRANCHGTS @UNKNOWN1
    case 0xC22906: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/party_remove_char-jp.asm:47 BRANCHGTS @UNKNOWN1
    case 0xC22908: cpu.execute_instruction<0x30>(0x0000D4, 2); return true;
    // src/misc/party_remove_char-jp.asm:48 LDA @LOCAL00
    case 0xC2290A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:49 DEC
    case 0xC2290C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:50 CLC
    case 0xC2290D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    case 0xC2290E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/party_remove_char-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2290E.
    case 0xC22910: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:52 TAX
    case 0xC22911: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC22912: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/party_remove_char-jp.asm:54 STZ a:game_state::party_members,X
    case 0xC22914: cpu.execute_instruction<0x9E>(0x000077, 3); return true;
    // src/misc/party_remove_char-jp.asm:55 LDX @LOCAL01
    case 0xC22917: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/party_remove_char-jp.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC22919: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/party_remove_char-jp.asm:57 TXA
    case 0xC2291B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:58 JSL UNKNOWN_C03903
    case 0xC2291C: cpu.execute_instruction<0x22>(0xC03B37, 4); return true;
    // src/misc/party_remove_char-jp.asm:59 LDX @LOCAL01
    case 0xC22920: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/party_remove_char-jp.asm:60 CPX #4
    case 0xC22922: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/misc/party_remove_char-jp.asm:60 CPX #4
    // Overlapping static entry reached from 0xC22922.
    case 0xC22924: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/misc/party_remove_char-jp.asm:61 BGT @UNKNOWN9
    case 0xC22925: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/misc/party_remove_char-jp.asm:61 BGT @UNKNOWN9
    case 0xC22927: cpu.execute_instruction<0xB0>(0x000026, 2); return true;
    // src/misc/party_remove_char-jp.asm:62 JSL UNKNOWN_C216DB
    case 0xC22929: cpu.execute_instruction<0x22>(0xC21583, 4); return true;
    // src/misc/party_remove_char-jp.asm:63 JSL UNKNOWN_C3EBCA
    case 0xC2292D: cpu.execute_instruction<0x22>(0xC3E790, 4); return true;
    // src/misc/party_remove_char-jp.asm:64 BRA @UNKNOWN9
    case 0xC22931: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/misc/party_remove_char-jp.asm:66 LDA @LOCAL00
    case 0xC22933: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:67 INC
    case 0xC22935: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:68 STA @LOCAL00
    case 0xC22936: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/party_remove_char-jp.asm:70 STA @VIRTUAL02
    case 0xC22938: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/party_remove_char-jp.asm:71 LDA GAME_STATE+game_state::party_count
    case 0xC2293A: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/misc/party_remove_char-jp.asm:72 AND #$00FF
    case 0xC2293D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/party_remove_char-jp.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC2293D.
    case 0xC2293F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/party_remove_char-jp.asm:73 CLC
    case 0xC22940: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/party_remove_char-jp.asm:74 SBC @VIRTUAL02
    case 0xC22941: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/misc/party_remove_char-jp.asm:75 JUMPGTS @UNKNOWN0
    case 0xC22943: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/misc/party_remove_char-jp.asm:75 JUMPGTS @UNKNOWN0
    case 0xC22945: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/misc/party_remove_char-jp.asm:75 JUMPGTS @UNKNOWN0
    case 0xC22947: cpu.execute_instruction<0x4C>(0x0028C7, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/misc/party_remove_char-jp.asm:75 JUMPGTS @UNKNOWN0
    case 0xC2294A: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/misc/party_remove_char-jp.asm:75 JUMPGTS @UNKNOWN0
    case 0xC2294C: cpu.execute_instruction<0x4C>(0x0028C7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/party_remove_char-jp.asm:77 END_C_FUNCTION
    case 0xC2294F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/party_remove_char-jp.asm:77 END_C_FUNCTION
    case 0xC22950: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_defense.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_defense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC217D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC217DE.
    case 0xC217E0: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:10 END_STACK_VARS
    case 0xC217E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:11 TAX
    case 0xC217E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:12 DEC
    case 0xC217E4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:13 STA @VIRTUAL02
    case 0xC217E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:14 STA @LOCAL03
    case 0xC217E7: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:15 LDA @VIRTUAL02
    case 0xC217E9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC217EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC217EB.
    case 0xC217ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:17 JSL MULT168
    case 0xC217EE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:18 TAX
    case 0xC217F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:19 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC217F3: cpu.execute_instruction<0xBD>(0x009C9B, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:20 AND #$00FF
    case 0xC217F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC217F6.
    case 0xC217F8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:21 TAY
    case 0xC217F9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:22 STY @LOCAL02
    case 0xC217FA: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:23 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC217FC: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:24 AND #$00FF
    case 0xC217FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC217FF.
    case 0xC21801: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:25 TAX
    case 0xC21802: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:26 BEQ @UNKNOWN1
    case 0xC21803: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:27 LDA #0
    case 0xC21805: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:27 LDA #0
    // Overlapping static entry reached from 0xC21805.
    case 0xC21807: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:28 STA @LOCAL01
    case 0xC21808: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:29 LDA @VIRTUAL02
    case 0xC2180A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:30 CMP #PARTY_MEMBER::POO - 1
    case 0xC2180C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:30 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC2180C.
    case 0xC2180E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:31 BNE @UNKNOWN0
    case 0xC2180F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:32 LDA #1
    case 0xC21811: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:32 LDA #1
    // Overlapping static entry reached from 0xC21811.
    case 0xC21813: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:33 STA @LOCAL01
    case 0xC21814: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:35 LDA @LOCAL01
    case 0xC21816: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:36 PHA
    case 0xC21818: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:37 TXA
    case 0xC21819: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:38 DEC
    case 0xC2181A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:40 STA @VIRTUAL04
    case 0xC2181B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:44 LDA @VIRTUAL02
    case 0xC2181D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:45 LDY #.SIZEOF(char_struct)
    case 0xC2181F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:45 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2181F.
    case 0xC21821: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:46 JSL MULT168
    case 0xC21822: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:47 CLC
    case 0xC21826: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:48 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC21827: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:48 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC21827.
    case 0xC21829: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:50 CLC
    case 0xC2182A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:51 ADC @VIRTUAL04
    case 0xC2182B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:51 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21829.
    case 0xC2182C: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:58 TAX
    case 0xC2182D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:59 LDA __BSS_START__,X
    case 0xC2182E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:60 AND #$00FF
    case 0xC21831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC21831.
    case 0xC21833: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21834: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21836: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21837: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21839: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2183A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2183B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:62 PLY
    case 0xC2183C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:63 STY @VIRTUAL02
    case 0xC2183D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:64 CLC
    case 0xC2183F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:65 ADC @VIRTUAL02
    case 0xC21840: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:66 CLC
    case 0xC21842: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:67 ADC #item::params + item_parameters::strength
    case 0xC21843: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:67 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21843.
    case 0xC21845: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:68 TAX
    case 0xC21846: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC21847: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:70 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21849: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC2184D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:72 SEC
    case 0xC2184F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:73 AND #$00FF
    case 0xC21850: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC21850.
    case 0xC21852: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:74 SBC #$0080
    case 0xC21853: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:74 SBC #$0080
    // Overlapping static entry reached from 0xC21853.
    case 0xC21855: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:75 EOR #$FF80
    case 0xC21856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:75 EOR #$FF80
    // Overlapping static entry reached from 0xC21856.
    case 0xC21858: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:76 STA @VIRTUAL04
    case 0xC21859: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:77 LDY @LOCAL02
    case 0xC2185B: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:77 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21858.
    case 0xC2185C: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:78 TYA
    case 0xC2185D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:79 CLC
    case 0xC2185E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:80 ADC @VIRTUAL04
    case 0xC2185F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:81 TAY
    case 0xC21861: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:82 STY @LOCAL02
    case 0xC21862: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:84 LDA @LOCAL03
    case 0xC21864: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:85 STA @VIRTUAL02
    case 0xC21866: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:86 LDY #.SIZEOF(char_struct)
    case 0xC21868: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:86 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21868.
    case 0xC2186A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:87 JSL MULT168
    case 0xC2186B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:88 TAX
    case 0xC2186F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:89 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC21870: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:90 AND #$00FF
    case 0xC21873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC21873.
    case 0xC21875: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:91 TAX
    case 0xC21876: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:92 BEQ @UNKNOWN3
    case 0xC21877: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:93 LDA #0
    case 0xC21879: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:93 LDA #0
    // Overlapping static entry reached from 0xC21879.
    case 0xC2187B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:94 STA @LOCAL01
    case 0xC2187C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:95 LDA @VIRTUAL02
    case 0xC2187E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:96 CMP #PARTY_MEMBER::POO - 1
    case 0xC21880: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:96 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC21880.
    case 0xC21882: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:97 BNE @UNKNOWN2
    case 0xC21883: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:98 LDA #1
    case 0xC21885: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:98 LDA #1
    // Overlapping static entry reached from 0xC21885.
    case 0xC21887: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:99 STA @LOCAL01
    case 0xC21888: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:101 LDA @LOCAL01
    case 0xC2188A: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:102 PHA
    case 0xC2188C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:103 TXA
    case 0xC2188D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:104 DEC
    case 0xC2188E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:106 STA @VIRTUAL04
    case 0xC2188F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:110 LDA @VIRTUAL02
    case 0xC21891: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:111 LDY #.SIZEOF(char_struct)
    case 0xC21893: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:111 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21893.
    case 0xC21895: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:112 JSL MULT168
    case 0xC21896: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:113 CLC
    case 0xC2189A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC2189B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:114 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC2189B.
    case 0xC2189D: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:116 CLC
    case 0xC2189E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:117 ADC @VIRTUAL04
    case 0xC2189F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:117 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC2189D.
    case 0xC218A0: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:124 TAX
    case 0xC218A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:125 LDA __BSS_START__,X
    case 0xC218A2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:126 AND #$00FF
    case 0xC218A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC218A5.
    case 0xC218A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218A8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218AB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC218AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:128 PLY
    case 0xC218B0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:129 STY @VIRTUAL02
    case 0xC218B1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:130 CLC
    case 0xC218B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:131 ADC @VIRTUAL02
    case 0xC218B4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:132 CLC
    case 0xC218B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:133 ADC #item::params + item_parameters::strength
    case 0xC218B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:133 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC218B7.
    case 0xC218B9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:134 TAX
    case 0xC218BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC218BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:136 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC218BD: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC218C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:138 SEC
    case 0xC218C3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:139 AND #$00FF
    case 0xC218C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:139 AND #$00FF
    // Overlapping static entry reached from 0xC218C4.
    case 0xC218C6: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:140 SBC #$0080
    case 0xC218C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:140 SBC #$0080
    // Overlapping static entry reached from 0xC218C7.
    case 0xC218C9: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:141 EOR #$FF80
    case 0xC218CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:141 EOR #$FF80
    // Overlapping static entry reached from 0xC218CA.
    case 0xC218CC: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:142 STA @VIRTUAL04
    case 0xC218CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:143 LDY @LOCAL02
    case 0xC218CF: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:143 LDY @LOCAL02
    // Overlapping static entry reached from 0xC218CC.
    case 0xC218D0: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:144 TYA
    case 0xC218D1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:145 CLC
    case 0xC218D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:146 ADC @VIRTUAL04
    case 0xC218D3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:147 TAY
    case 0xC218D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:148 STY @LOCAL02
    case 0xC218D6: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:150 LDA @LOCAL03
    case 0xC218D8: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:151 STA @VIRTUAL02
    case 0xC218DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:152 LDY #.SIZEOF(char_struct)
    case 0xC218DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:152 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC218DC.
    case 0xC218DE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:153 JSL MULT168
    case 0xC218DF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:154 TAX
    case 0xC218E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:155 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC218E4: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:156 AND #$00FF
    case 0xC218E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:156 AND #$00FF
    // Overlapping static entry reached from 0xC218E7.
    case 0xC218E9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:157 TAX
    case 0xC218EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:158 BEQ @UNKNOWN5
    case 0xC218EB: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:159 LDA #0
    case 0xC218ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:159 LDA #0
    // Overlapping static entry reached from 0xC218ED.
    case 0xC218EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:160 STA @LOCAL01
    case 0xC218F0: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:161 LDA @VIRTUAL02
    case 0xC218F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:162 CMP #PARTY_MEMBER::POO - 1
    case 0xC218F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:162 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC218F4.
    case 0xC218F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:163 BNE @UNKNOWN4
    case 0xC218F7: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:164 LDA #1
    case 0xC218F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:164 LDA #1
    // Overlapping static entry reached from 0xC218F9.
    case 0xC218FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:165 STA @LOCAL01
    case 0xC218FC: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:167 LDA @LOCAL01
    case 0xC218FE: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:168 PHA
    case 0xC21900: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:169 TXA
    case 0xC21901: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:170 DEC
    case 0xC21902: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:172 STA @VIRTUAL04
    case 0xC21903: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:176 LDA @VIRTUAL02
    case 0xC21905: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:177 LDY #.SIZEOF(char_struct)
    case 0xC21907: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:177 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21907.
    case 0xC21909: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:178 JSL MULT168
    case 0xC2190A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:179 CLC
    case 0xC2190E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:180 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC2190F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:180 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC2190F.
    case 0xC21911: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:182 CLC
    case 0xC21912: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:183 ADC @VIRTUAL04
    case 0xC21913: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:183 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21911.
    case 0xC21914: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:190 TAX
    case 0xC21915: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:191 LDA __BSS_START__,X
    case 0xC21916: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:192 AND #$00FF
    case 0xC21919: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC21919.
    case 0xC2191B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2191C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2191E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2191F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21921: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21922: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:193 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21923: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:194 PLY
    case 0xC21924: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:195 STY @VIRTUAL02
    case 0xC21925: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:196 CLC
    case 0xC21927: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:197 ADC @VIRTUAL02
    case 0xC21928: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:198 CLC
    case 0xC2192A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:199 ADC #item::params + item_parameters::strength
    case 0xC2192B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:199 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC2192B.
    case 0xC2192D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:200 TAX
    case 0xC2192E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC2192F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:202 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21931: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:203 REP #PROC_FLAGS::ACCUM8
    case 0xC21935: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:204 SEC
    case 0xC21937: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:205 AND #$00FF
    case 0xC21938: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC21938.
    case 0xC2193A: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:206 SBC #$0080
    case 0xC2193B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:206 SBC #$0080
    // Overlapping static entry reached from 0xC2193B.
    case 0xC2193D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:207 EOR #$FF80
    case 0xC2193E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:207 EOR #$FF80
    // Overlapping static entry reached from 0xC2193E.
    case 0xC21940: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:208 STA @VIRTUAL04
    case 0xC21941: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:209 LDY @LOCAL02
    case 0xC21943: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:209 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21940.
    case 0xC21944: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:210 TYA
    case 0xC21945: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:211 CLC
    case 0xC21946: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:212 ADC @VIRTUAL04
    case 0xC21947: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:213 TAY
    case 0xC21949: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:214 STY @LOCAL02
    case 0xC2194A: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:216 LDY @LOCAL02
    case 0xC2194C: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:217 STY @VIRTUAL04
    case 0xC2194E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:218 LDA #0
    case 0xC21950: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:218 LDA #0
    // Overlapping static entry reached from 0xC21950.
    case 0xC21952: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:219 CLC
    case 0xC21953: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:220 SBC @VIRTUAL04
    case 0xC21954: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21956: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC21958: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC2195A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:221 BRANCHLTEQS @UNKNOWN8
    case 0xC2195C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:222 LDA #0
    case 0xC2195E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:222 LDA #0
    // Overlapping static entry reached from 0xC2195E.
    case 0xC21960: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:223 BRA @UNKNOWN12
    case 0xC21961: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:225 TYA
    case 0xC21963: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:226 CLC
    case 0xC21964: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:227 SBC #$00FF
    case 0xC21965: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:227 SBC #$00FF
    // Overlapping static entry reached from 0xC21965.
    case 0xC21967: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC21968: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC2196A: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC2196C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:228 BRANCHLTEQS @UNKNOWN11
    case 0xC2196E: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:229 LDA #$00FF
    case 0xC21970: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:229 LDA #$00FF
    // Overlapping static entry reached from 0xC21970.
    case 0xC21972: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:230 BRA @UNKNOWN12
    case 0xC21973: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:232 TYA
    case 0xC21975: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:233 REP #PROC_FLAGS::ACCUM8
    case 0xC21976: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:234 AND #$00FF
    case 0xC21978: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC21978.
    case 0xC2197A: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC2197B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:237 STA @LOCAL00
    case 0xC2197D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:238 REP #PROC_FLAGS::ACCUM8
    case 0xC2197F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:239 LDA @LOCAL03
    case 0xC21981: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:240 STA @VIRTUAL02
    case 0xC21983: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:241 LDY #.SIZEOF(char_struct)
    case 0xC21985: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_defense.asm:241 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21985.
    case 0xC21987: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:242 JSL MULT168
    case 0xC21988: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_defense.asm:243 TAX
    case 0xC2198C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_defense.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC2198D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:245 LDA @LOCAL00
    case 0xC2198F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_defense.asm:246 STA PARTY_CHARACTERS+char_struct::defense,X
    case 0xC21991: cpu.execute_instruction<0x9D>(0x009C94, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:247 END_C_FUNCTION
    case 0xC21994: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_defense.asm:247 END_C_FUNCTION
    case 0xC21995: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_guts.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_guts_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21A48: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A4A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A4B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A4C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC21A4D.
    case 0xC21A4F: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A50: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:12 END_STACK_VARS
    case 0xC21A51: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:18 TAX
    case 0xC21A52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:19 DEC
    case 0xC21A53: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:20 STA @VIRTUAL02
    case 0xC21A54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC21A56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21A56.
    case 0xC21A58: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:26 JSL MULT168
    case 0xC21A59: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:27 TAX
    case 0xC21A5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:28 LDA PARTY_CHARACTERS+char_struct::base_guts,X
    case 0xC21A5E: cpu.execute_instruction<0xBD>(0x009C9D, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:29 AND #$00FF
    case 0xC21A61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC21A61.
    case 0xC21A63: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:30 TAY
    case 0xC21A64: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:31 STY @LOCAL02
    case 0xC21A65: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21A67: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:33 AND #$00FF
    case 0xC21A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC21A6A.
    case 0xC21A6C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:34 BEQ @UNKNOWN0
    case 0xC21A6D: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:35 DEC
    case 0xC21A6F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:36 STA @TMP
    case 0xC21A70: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:37 TXA
    case 0xC21A72: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:38 CLC
    case 0xC21A73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21A74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21A74.
    case 0xC21A76: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:40 CLC
    case 0xC21A77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:41 ADC @TMP
    case 0xC21A78: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC21A76.
    case 0xC21A79: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:42 TAX
    case 0xC21A7A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:43 LDA __BSS_START__,X
    case 0xC21A7B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:44 AND #$00FF
    case 0xC21A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC21A7E.
    case 0xC21A80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A81: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A84: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21A88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:46 CLC
    case 0xC21A89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:47 ADC #item::params + item_parameters::ep
    case 0xC21A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21A8A.
    case 0xC21A8C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:48 TAX
    case 0xC21A8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC21A8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21A90: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC21A94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:52 SEC
    case 0xC21A96: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:53 AND #$00FF
    case 0xC21A97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC21A97.
    case 0xC21A99: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:54 SBC #$0080
    case 0xC21A9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC21A9A.
    case 0xC21A9C: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:55 EOR #$FF80
    case 0xC21A9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC21A9D.
    case 0xC21A9F: cpu.execute_instruction<0xFF>(0x980485, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:56 STA @VIRTUAL04
    case 0xC21AA0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:60 TYA
    case 0xC21AA2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:61 CLC
    case 0xC21AA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:62 ADC @VIRTUAL04
    case 0xC21AA4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:63 TAY
    case 0xC21AA6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:64 STY @LOCAL02
    case 0xC21AA7: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:67 LDA @VIRTUAL02
    case 0xC21AA9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC21AAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21AAB.
    case 0xC21AAD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:73 JSL MULT168
    case 0xC21AAE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:74 TAX
    case 0xC21AB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:75 LDA PARTY_CHARACTERS+char_struct::boosted_guts,X
    case 0xC21AB3: cpu.execute_instruction<0xBD>(0x009CD6, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:76 AND #$00FF
    case 0xC21AB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21AB6.
    case 0xC21AB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:77 STA @VIRTUAL04
    case 0xC21AB9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:78 LDY @LOCAL02
    case 0xC21ABB: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:79 TYA
    case 0xC21ABD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:80 CLC
    case 0xC21ABE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:81 ADC @VIRTUAL04
    case 0xC21ABF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:82 STA @LOCAL01
    case 0xC21AC1: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:83 STA @VIRTUAL04
    case 0xC21AC3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:84 LDA #0
    case 0xC21AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:84 LDA #0
    // Overlapping static entry reached from 0xC21AC5.
    case 0xC21AC7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:85 CLC
    case 0xC21AC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:86 SBC @VIRTUAL04
    case 0xC21AC9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21ACB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21ACD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21ACF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21AD1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:88 LDX #0
    case 0xC21AD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:88 LDX #0
    // Overlapping static entry reached from 0xC21AD3.
    case 0xC21AD5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:89 BRA @UNKNOWN4
    case 0xC21AD6: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:91 LDA @LOCAL01
    case 0xC21AD8: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC21ADA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:93 AND #$00FF
    case 0xC21ADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC21ADC.
    case 0xC21ADE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:94 TAX
    case 0xC21ADF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:96 TXA
    case 0xC21AE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC21AE1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:98 STA @LOCAL00
    case 0xC21AE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC21AE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:100 LDA @VIRTUAL02
    case 0xC21AE7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC21AE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_guts.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21AE9.
    case 0xC21AEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:102 JSL MULT168
    case 0xC21AEC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_guts.asm:103 TAX
    case 0xC21AF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_guts.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC21AF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:105 LDA @LOCAL00
    case 0xC21AF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_guts.asm:106 STA PARTY_CHARACTERS+char_struct::guts,X
    case 0xC21AF5: cpu.execute_instruction<0x9D>(0x009C96, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:107 END_C_FUNCTION
    case 0xC21AF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_guts.asm:107 END_C_FUNCTION
    case 0xC21AF9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_iq.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_iq_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_iq.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C12: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:6 DEC
    case 0xC21C14: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:7 LDY #.SIZEOF(char_struct)
    case 0xC21C15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:7 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C15.
    case 0xC21C17: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:8 JSL MULT168
    case 0xC21C18: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_iq.asm:9 TAX
    case 0xC21C1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_iq.asm:11 LDA PARTY_CHARACTERS+char_struct::base_iq,X
    case 0xC21C1F: cpu.execute_instruction<0xBD>(0x009CA0, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:12 CLC
    case 0xC21C22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_iq.asm:13 ADC PARTY_CHARACTERS+char_struct::boosted_iq,X
    case 0xC21C23: cpu.execute_instruction<0x7D>(0x009CD8, 3); return true;
    // src/misc/recalc_character_postmath_iq.asm:14 STA PARTY_CHARACTERS+char_struct::iq,X
    case 0xC21C26: cpu.execute_instruction<0x9D>(0x009C99, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_iq.asm:15 END_C_FUNCTION
    case 0xC21C29: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_luck.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_luck_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21AFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21AFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21AFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21AFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21AFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC21AFF.
    case 0xC21B01: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21B02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:12 END_STACK_VARS
    case 0xC21B03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:18 TAX
    case 0xC21B04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:19 DEC
    case 0xC21B05: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:20 STA @VIRTUAL02
    case 0xC21B06: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC21B08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21B08.
    case 0xC21B0A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:26 JSL MULT168
    case 0xC21B0B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:27 TAX
    case 0xC21B0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:28 LDA PARTY_CHARACTERS+char_struct::base_luck,X
    case 0xC21B10: cpu.execute_instruction<0xBD>(0x009C9E, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:29 AND #$00FF
    case 0xC21B13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC21B13.
    case 0xC21B15: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:30 TAY
    case 0xC21B16: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:31 STY @LOCAL02
    case 0xC21B17: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC21B19: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:33 AND #$00FF
    case 0xC21B1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC21B1C.
    case 0xC21B1E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:34 BEQ @UNKNOWN0
    case 0xC21B1F: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:35 DEC
    case 0xC21B21: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:36 STA @TMP
    case 0xC21B22: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:37 TXA
    case 0xC21B24: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:38 CLC
    case 0xC21B25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21B26.
    case 0xC21B28: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:40 CLC
    case 0xC21B29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:41 ADC @TMP
    case 0xC21B2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC21B28.
    case 0xC21B2B: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:42 TAX
    case 0xC21B2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:43 LDA __BSS_START__,X
    case 0xC21B2D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:44 AND #$00FF
    case 0xC21B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC21B30.
    case 0xC21B32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B33: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B36: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:46 CLC
    case 0xC21B3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:47 ADC #item::params + item_parameters::ep
    case 0xC21B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21B3C.
    case 0xC21B3E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:48 TAX
    case 0xC21B3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC21B40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21B42: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC21B46: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:52 SEC
    case 0xC21B48: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:53 AND #$00FF
    case 0xC21B49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC21B49.
    case 0xC21B4B: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:54 SBC #$0080
    case 0xC21B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC21B4C.
    case 0xC21B4E: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:55 EOR #$FF80
    case 0xC21B4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC21B4F.
    case 0xC21B51: cpu.execute_instruction<0xFF>(0x980485, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:56 STA @VIRTUAL04
    case 0xC21B52: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:60 TYA
    case 0xC21B54: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:61 CLC
    case 0xC21B55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:62 ADC @VIRTUAL04
    case 0xC21B56: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:63 TAY
    case 0xC21B58: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:64 STY @LOCAL02
    case 0xC21B59: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:67 LDA @VIRTUAL02
    case 0xC21B5B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC21B5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21B5D.
    case 0xC21B5F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:73 JSL MULT168
    case 0xC21B60: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:74 TAX
    case 0xC21B64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:75 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21B65: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:76 AND #$00FF
    case 0xC21B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21B68.
    case 0xC21B6A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:77 BEQ @UNKNOWN1
    case 0xC21B6B: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:78 DEC
    case 0xC21B6D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:79 STA @TMP
    case 0xC21B6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:80 TXA
    case 0xC21B70: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:81 CLC
    case 0xC21B71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:82 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:82 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21B72.
    case 0xC21B74: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:83 CLC
    case 0xC21B75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:84 ADC @TMP
    case 0xC21B76: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:84 ADC @TMP
    // Overlapping static entry reached from 0xC21B74.
    case 0xC21B77: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:85 TAX
    case 0xC21B78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:86 LDA __BSS_START__,X
    case 0xC21B79: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:87 AND #$00FF
    case 0xC21B7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC21B7C.
    case 0xC21B7E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B7F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B82: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21B86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:89 CLC
    case 0xC21B87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:90 ADC #item::params + item_parameters::ep
    case 0xC21B88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:90 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21B88.
    case 0xC21B8A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:91 TAX
    case 0xC21B8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC21B8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:93 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21B8E: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC21B92: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:95 SEC
    case 0xC21B94: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:96 AND #$00FF
    case 0xC21B95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC21B95.
    case 0xC21B97: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:97 SBC #$0080
    case 0xC21B98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:97 SBC #$0080
    // Overlapping static entry reached from 0xC21B98.
    case 0xC21B9A: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:98 EOR #$FF80
    case 0xC21B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:98 EOR #$FF80
    // Overlapping static entry reached from 0xC21B9B.
    case 0xC21B9D: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:99 STA @VIRTUAL04
    case 0xC21B9E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:100 LDY @LOCAL02
    case 0xC21BA0: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:100 LDY @LOCAL02
    // Overlapping static entry reached from 0xC21B9D.
    case 0xC21BA1: cpu.execute_instruction<0x11>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:101 TYA
    case 0xC21BA2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:102 CLC
    case 0xC21BA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:103 ADC @VIRTUAL04
    case 0xC21BA4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:104 TAY
    case 0xC21BA6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:105 STY @LOCAL02
    case 0xC21BA7: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:108 LDA @VIRTUAL02
    case 0xC21BA9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:113 LDY #.SIZEOF(char_struct)
    case 0xC21BAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:113 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21BAB.
    case 0xC21BAD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:114 JSL MULT168
    case 0xC21BAE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:115 TAX
    case 0xC21BB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:116 LDA PARTY_CHARACTERS+char_struct::boosted_luck,X
    case 0xC21BB3: cpu.execute_instruction<0xBD>(0x009CD9, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:117 AND #$00FF
    case 0xC21BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC21BB6.
    case 0xC21BB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:118 STA @VIRTUAL04
    case 0xC21BB9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:119 LDY @LOCAL02
    case 0xC21BBB: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:120 TYA
    case 0xC21BBD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:121 CLC
    case 0xC21BBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:122 ADC @VIRTUAL04
    case 0xC21BBF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:123 STA @LOCAL01
    case 0xC21BC1: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:124 STA @VIRTUAL04
    case 0xC21BC3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:125 LDA #0
    case 0xC21BC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:125 LDA #0
    // Overlapping static entry reached from 0xC21BC5.
    case 0xC21BC7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:126 CLC
    case 0xC21BC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:127 SBC @VIRTUAL04
    case 0xC21BC9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21BCB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21BCD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21BCF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:128 BRANCHLTEQS @UNKNOWN4
    case 0xC21BD1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:129 LDX #0
    case 0xC21BD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:129 LDX #0
    // Overlapping static entry reached from 0xC21BD3.
    case 0xC21BD5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:130 BRA @UNKNOWN5
    case 0xC21BD6: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:132 LDA @LOCAL01
    case 0xC21BD8: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC21BDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:134 AND #$00FF
    case 0xC21BDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC21BDC.
    case 0xC21BDE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:135 TAX
    case 0xC21BDF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:137 TXA
    case 0xC21BE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC21BE1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:139 STA @LOCAL00
    case 0xC21BE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC21BE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:141 LDA @VIRTUAL02
    case 0xC21BE7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:142 LDY #.SIZEOF(char_struct)
    case 0xC21BE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_luck.asm:142 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21BE9.
    case 0xC21BEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:143 JSL MULT168
    case 0xC21BEC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_luck.asm:144 TAX
    case 0xC21BF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_luck.asm:145 SEP #PROC_FLAGS::ACCUM8
    case 0xC21BF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:146 LDA @LOCAL00
    case 0xC21BF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_luck.asm:147 STA PARTY_CHARACTERS+char_struct::luck,X
    case 0xC21BF5: cpu.execute_instruction<0x9D>(0x009C97, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:148 END_C_FUNCTION
    case 0xC21BF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_luck.asm:148 END_C_FUNCTION
    case 0xC21BF9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_offense.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_offense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21706: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC21708: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC21709: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2170A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2170B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2170B.
    case 0xC2170D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2170E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:11 END_STACK_VARS
    case 0xC2170F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:12 TAX
    case 0xC21710: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:13 DEC
    case 0xC21711: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:14 STA @VIRTUAL02
    case 0xC21712: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:15 STA @LOCAL04
    case 0xC21714: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:16 LDA @VIRTUAL02
    case 0xC21716: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:17 LDY #.SIZEOF(char_struct)
    case 0xC21718: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21718.
    case 0xC2171A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:18 JSL MULT168
    case 0xC2171B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:19 TAX
    case 0xC2171F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:20 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC21720: cpu.execute_instruction<0xBD>(0x009C9A, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:21 AND #$00FF
    case 0xC21723: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC21723.
    case 0xC21725: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:22 TAY
    case 0xC21726: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:23 STY @LOCAL03
    case 0xC21727: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:24 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21729: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:25 AND #$00FF
    case 0xC2172C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2172C.
    case 0xC2172E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:26 STA @LOCAL02
    case 0xC2172F: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:27 BEQ @UNKNOWN1
    case 0xC21731: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:28 LDX #0
    case 0xC21733: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:28 LDX #0
    // Overlapping static entry reached from 0xC21733.
    case 0xC21735: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:29 STX @LOCAL01
    case 0xC21736: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:30 LDA @VIRTUAL02
    case 0xC21738: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:31 CMP #PARTY_MEMBER::POO - 1
    case 0xC2173A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:31 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC2173A.
    case 0xC2173C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:32 BNE @UNKNOWN0
    case 0xC2173D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:33 LDX #1
    case 0xC2173F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:33 LDX #1
    // Overlapping static entry reached from 0xC2173F.
    case 0xC21741: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:34 STX @LOCAL01
    case 0xC21742: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:36 LDA @LOCAL02
    case 0xC21744: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:37 DEC
    case 0xC21746: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:39 STA @VIRTUAL04
    case 0xC21747: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:43 LDA @VIRTUAL02
    case 0xC21749: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:44 LDY #.SIZEOF(char_struct)
    case 0xC2174B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:44 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2174B.
    case 0xC2174D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:45 JSL MULT168
    case 0xC2174E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:46 CLC
    case 0xC21752: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC21753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC21753.
    case 0xC21755: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:49 CLC
    case 0xC21756: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:50 ADC @VIRTUAL04
    case 0xC21757: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:50 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21755.
    case 0xC21758: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:57 TAX
    case 0xC21759: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:58 LDA __BSS_START__,X
    case 0xC2175A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:59 AND #$00FF
    case 0xC2175D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC2175D.
    case 0xC2175F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21760: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21762: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21763: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21765: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21766: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21767: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:61 LDX @LOCAL01
    case 0xC21768: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:62 STX @VIRTUAL02
    case 0xC2176A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:63 CLC
    case 0xC2176C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:64 ADC @VIRTUAL02
    case 0xC2176D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:65 CLC
    case 0xC2176F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:66 ADC #item::params + item_parameters::strength
    case 0xC21770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:66 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21770.
    case 0xC21772: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:67 TAX
    case 0xC21773: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC21774: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:69 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21776: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC2177A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:71 SEC
    case 0xC2177C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:72 AND #$00FF
    case 0xC2177D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC2177D.
    case 0xC2177F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:73 SBC #$0080
    case 0xC21780: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:73 SBC #$0080
    // Overlapping static entry reached from 0xC21780.
    case 0xC21782: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:74 EOR #$FF80
    case 0xC21783: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:74 EOR #$FF80
    // Overlapping static entry reached from 0xC21783.
    case 0xC21785: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:75 STA @VIRTUAL04
    case 0xC21786: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:76 LDY @LOCAL03
    case 0xC21788: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:76 LDY @LOCAL03
    // Overlapping static entry reached from 0xC21785.
    case 0xC21789: cpu.execute_instruction<0x13>(0x000098, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:77 TYA
    case 0xC2178A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:78 CLC
    case 0xC2178B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:79 ADC @VIRTUAL04
    case 0xC2178C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:80 TAY
    case 0xC2178E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:82 STY @VIRTUAL04
    case 0xC2178F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:83 LDA #0
    case 0xC21791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:83 LDA #0
    // Overlapping static entry reached from 0xC21791.
    case 0xC21793: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:84 CLC
    case 0xC21794: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:85 SBC @VIRTUAL04
    case 0xC21795: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC21797: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC21799: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC2179B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:86 BRANCHLTEQS @UNKNOWN4
    case 0xC2179D: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:87 LDX #0
    case 0xC2179F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:87 LDX #0
    // Overlapping static entry reached from 0xC2179F.
    case 0xC217A1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:88 BRA @UNKNOWN8
    case 0xC217A2: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:90 TYA
    case 0xC217A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:91 CLC
    case 0xC217A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:92 SBC #$00FF
    case 0xC217A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:92 SBC #$00FF
    // Overlapping static entry reached from 0xC217A6.
    case 0xC217A8: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC217A9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC217AB: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC217AD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:93 BRANCHLTEQS @UNKNOWN7
    case 0xC217AF: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:94 LDX #$00FF
    case 0xC217B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:94 LDX #$00FF
    // Overlapping static entry reached from 0xC217B1.
    case 0xC217B3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:95 BRA @UNKNOWN8
    case 0xC217B4: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:97 TYA
    case 0xC217B6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC217B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:99 AND #$00FF
    case 0xC217B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC217B9.
    case 0xC217BB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:100 TAX
    case 0xC217BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:102 TXA
    case 0xC217BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC217BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:104 STA @LOCAL00
    case 0xC217C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC217C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:106 LDA @LOCAL04
    case 0xC217C4: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:107 STA @VIRTUAL02
    case 0xC217C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:108 LDY #.SIZEOF(char_struct)
    case 0xC217C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_offense.asm:108 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC217C8.
    case 0xC217CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:109 JSL MULT168
    case 0xC217CB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_offense.asm:110 TAX
    case 0xC217CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_offense.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC217D0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:112 LDA @LOCAL00
    case 0xC217D2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_offense.asm:113 STA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC217D4: cpu.execute_instruction<0x9D>(0x009C93, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:114 END_C_FUNCTION
    case 0xC217D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_offense.asm:114 END_C_FUNCTION
    case 0xC217D8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_speed.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21996: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21998: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC21999: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC2199A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC2199B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2199B.
    case 0xC2199D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC2199E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:12 END_STACK_VARS
    case 0xC2199F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:18 TAX
    case 0xC219A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:19 DEC
    case 0xC219A1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:20 STA @VIRTUAL02
    case 0xC219A2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC219A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC219A4.
    case 0xC219A6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:26 JSL MULT168
    case 0xC219A7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:27 TAX
    case 0xC219AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:28 LDA PARTY_CHARACTERS+char_struct::base_speed,X
    case 0xC219AC: cpu.execute_instruction<0xBD>(0x009C9C, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:29 AND #$00FF
    case 0xC219AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC219AF.
    case 0xC219B1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:30 TAY
    case 0xC219B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:31 STY @LOCAL02
    case 0xC219B3: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:32 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC219B5: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:33 AND #$00FF
    case 0xC219B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC219B8.
    case 0xC219BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:34 BEQ @UNKNOWN0
    case 0xC219BB: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:35 DEC
    case 0xC219BD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:36 STA @TMP
    case 0xC219BE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:37 TXA
    case 0xC219C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:38 CLC
    case 0xC219C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC219C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:39 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC219C2.
    case 0xC219C4: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:40 CLC
    case 0xC219C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:41 ADC @TMP
    case 0xC219C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:41 ADC @TMP
    // Overlapping static entry reached from 0xC219C4.
    case 0xC219C7: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:42 TAX
    case 0xC219C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:43 LDA __BSS_START__,X
    case 0xC219C9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:44 AND #$00FF
    case 0xC219CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC219CC.
    case 0xC219CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219CF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219D2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC219D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:46 CLC
    case 0xC219D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:47 ADC #item::params + item_parameters::ep
    case 0xC219D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:47 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC219D8.
    case 0xC219DA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:48 TAX
    case 0xC219DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC219DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:50 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC219DE: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC219E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:52 SEC
    case 0xC219E4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:53 AND #$00FF
    case 0xC219E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC219E5.
    case 0xC219E7: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:54 SBC #$0080
    case 0xC219E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:54 SBC #$0080
    // Overlapping static entry reached from 0xC219E8.
    case 0xC219EA: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:55 EOR #$FF80
    case 0xC219EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:55 EOR #$FF80
    // Overlapping static entry reached from 0xC219EB.
    case 0xC219ED: cpu.execute_instruction<0xFF>(0x980485, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:56 STA @VIRTUAL04
    case 0xC219EE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:60 TYA
    case 0xC219F0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:61 CLC
    case 0xC219F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:62 ADC @VIRTUAL04
    case 0xC219F2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:63 TAY
    case 0xC219F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:64 STY @LOCAL02
    case 0xC219F5: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:67 LDA @VIRTUAL02
    case 0xC219F7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:72 LDY #.SIZEOF(char_struct)
    case 0xC219F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:72 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC219F9.
    case 0xC219FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:73 JSL MULT168
    case 0xC219FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:74 TAX
    case 0xC21A00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:75 LDA PARTY_CHARACTERS+char_struct::boosted_speed,X
    case 0xC21A01: cpu.execute_instruction<0xBD>(0x009CD5, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:76 AND #$00FF
    case 0xC21A04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC21A04.
    case 0xC21A06: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:77 STA @VIRTUAL04
    case 0xC21A07: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:78 LDY @LOCAL02
    case 0xC21A09: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:79 TYA
    case 0xC21A0B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:80 CLC
    case 0xC21A0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:81 ADC @VIRTUAL04
    case 0xC21A0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:82 STA @LOCAL01
    case 0xC21A0F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:83 STA @VIRTUAL04
    case 0xC21A11: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:84 LDA #0
    case 0xC21A13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:84 LDA #0
    // Overlapping static entry reached from 0xC21A13.
    case 0xC21A15: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:85 CLC
    case 0xC21A16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:86 SBC @VIRTUAL04
    case 0xC21A17: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21A19: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21A1B: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21A1D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:87 BRANCHLTEQS @UNKNOWN3
    case 0xC21A1F: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:88 LDX #0
    case 0xC21A21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:88 LDX #0
    // Overlapping static entry reached from 0xC21A21.
    case 0xC21A23: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:89 BRA @UNKNOWN4
    case 0xC21A24: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:91 LDA @LOCAL01
    case 0xC21A26: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC21A28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:93 AND #$00FF
    case 0xC21A2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC21A2A.
    case 0xC21A2C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:94 TAX
    case 0xC21A2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:96 TXA
    case 0xC21A2E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC21A2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:98 STA @LOCAL00
    case 0xC21A31: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC21A33: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:100 LDA @VIRTUAL02
    case 0xC21A35: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC21A37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_speed.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21A37.
    case 0xC21A39: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:102 JSL MULT168
    case 0xC21A3A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_speed.asm:103 TAX
    case 0xC21A3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_speed.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC21A3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:105 LDA @LOCAL00
    case 0xC21A41: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/recalc_character_postmath_speed.asm:106 STA PARTY_CHARACTERS+char_struct::speed,X
    case 0xC21A43: cpu.execute_instruction<0x9D>(0x009C95, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:107 END_C_FUNCTION
    case 0xC21A46: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_speed.asm:107 END_C_FUNCTION
    case 0xC21A47: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recalc_character_postmath_vitality.asm (source_named).
bool execute_miscellaneous_recalc_character_postmath_vitality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recalc_character_postmath_vitality.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21BFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:6 DEC
    case 0xC21BFC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:7 LDY #.SIZEOF(char_struct)
    case 0xC21BFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:7 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21BFD.
    case 0xC21BFF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:8 JSL MULT168
    case 0xC21C00: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/recalc_character_postmath_vitality.asm:9 TAX
    case 0xC21C04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/recalc_character_postmath_vitality.asm:11 LDA PARTY_CHARACTERS+char_struct::base_vitality,X
    case 0xC21C07: cpu.execute_instruction<0xBD>(0x009C9F, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:12 CLC
    case 0xC21C0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recalc_character_postmath_vitality.asm:13 ADC PARTY_CHARACTERS+char_struct::boosted_vitality,X
    case 0xC21C0B: cpu.execute_instruction<0x7D>(0x009CD7, 3); return true;
    // src/misc/recalc_character_postmath_vitality.asm:14 STA PARTY_CHARACTERS+char_struct::vitality,X
    case 0xC21C0E: cpu.execute_instruction<0x9D>(0x009C98, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/recalc_character_postmath_vitality.asm:15 END_C_FUNCTION
    case 0xC21C11: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recover_hp_amtpercent.asm (source_named).
bool execute_miscellaneous_recover_hp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recover_hp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC19014: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19016: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19017: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19018: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19019: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC19019.
    case 0xC1901B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC1901C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recover_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC1901D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:12 STY @LOCAL02
    case 0xC1901E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC1901B.
    case 0xC1901F: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC19020: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC1901F.
    case 0xC19021: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    case 0xC19022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC19021.
    case 0xC19023: cpu.execute_instruction<0xFF>(0x3CD000, 4); return true;
    // src/misc/recover_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC19022.
    case 0xC19024: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC19025: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:16 LDA #0
    case 0xC19027: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC19027.
    case 0xC19029: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC1902A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:18 STA @LOCAL01
    case 0xC1902C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC1902E: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC19030: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC19032: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:23 STX @LOCAL00
    case 0xC19034: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC19036: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC19038: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:27 CLC
    case 0xC1903A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    case 0xC1903B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1903B.
    case 0xC1903D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:29 TAX
    case 0xC1903E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:30 LDA a:game_state::party_members,X
    case 0xC1903F: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:35 AND #$00FF
    case 0xC19042: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC19042.
    case 0xC19044: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC19045: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:37 JSL UNKNOWN_C3EC8B
    case 0xC19047: cpu.execute_instruction<0x22>(0xC3E851, 4); return true;
    // src/misc/recover_hp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC1904B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC1904D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:40 STA @LOCAL01
    case 0xC1904F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19051: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:43 AND #$00FF
    case 0xC19054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_hp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC19054.
    case 0xC19056: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:44 PHA
    case 0xC19057: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC19058: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:46 PLY
    case 0xC1905A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recover_hp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC1905B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC1905D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC1905F: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC19061: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC19063: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC19065: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_hp_amtpercent.asm:54 JSL UNKNOWN_C3EC8B
    case 0xC19067: cpu.execute_instruction<0x22>(0xC3E851, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recover_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1906B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/recover_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1906C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/recover_pp_amtpercent.asm (source_named).
bool execute_miscellaneous_recover_pp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/recover_pp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC190C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190C9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC190CB.
    case 0xC190CD: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/recover_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC190CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:12 STY @LOCAL02
    case 0xC190D0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC190CD.
    case 0xC190D1: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC190D2: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC190D1.
    case 0xC190D3: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    case 0xC190D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC190D3.
    case 0xC190D5: cpu.execute_instruction<0xFF>(0x3CD000, 4); return true;
    // src/misc/recover_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC190D4.
    case 0xC190D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC190D7: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:16 LDA #0
    case 0xC190D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC190D9.
    case 0xC190DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC190DC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:18 STA @LOCAL01
    case 0xC190DE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC190E0: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC190E2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC190E4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:23 STX @LOCAL00
    case 0xC190E6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC190E8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC190EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:27 CLC
    case 0xC190EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    case 0xC190ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC190ED.
    case 0xC190EF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:29 TAX
    case 0xC190F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:30 LDA a:game_state::party_members,X
    case 0xC190F1: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:35 AND #$00FF
    case 0xC190F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC190F4.
    case 0xC190F6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC190F7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:37 JSL UNKNOWN_C3ED98
    case 0xC190F9: cpu.execute_instruction<0x22>(0xC3E95E, 4); return true;
    // src/misc/recover_pp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC190FD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC190FF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:40 STA @LOCAL01
    case 0xC19101: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19103: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:43 AND #$00FF
    case 0xC19106: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/recover_pp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC19106.
    case 0xC19108: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:44 PHA
    case 0xC19109: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC1910A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:46 PLY
    case 0xC1910C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/recover_pp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC1910D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC1910F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC19111: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC19113: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC19115: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC19117: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/recover_pp_amtpercent.asm:54 JSL UNKNOWN_C3ED98
    case 0xC19119: cpu.execute_instruction<0x22>(0xC3E95E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/recover_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1911D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/recover_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC1911E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reduce_hp_amtpercent.asm (source_named).
bool execute_miscellaneous_reduce_hp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC18FBB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FBF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18FC0.
    case 0xC18FC2: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FC3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:11 END_STACK_VARS
    case 0xC18FC4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:12 STY @LOCAL02
    case 0xC18FC5: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC18FC2.
    case 0xC18FC6: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC18FC7: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18FC6.
    case 0xC18FC8: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    case 0xC18FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18FC8.
    case 0xC18FCA: cpu.execute_instruction<0xFF>(0x3CD000, 4); return true;
    // src/misc/reduce_hp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC18FC9.
    case 0xC18FCB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC18FCC: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:16 LDA #0
    case 0xC18FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC18FCE.
    case 0xC18FD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC18FD1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:18 STA @LOCAL01
    case 0xC18FD3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC18FD5: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC18FD7: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC18FD9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:23 STX @LOCAL00
    case 0xC18FDB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC18FDD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC18FDF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:27 CLC
    case 0xC18FE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    case 0xC18FE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC18FE2.
    case 0xC18FE4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:29 TAX
    case 0xC18FE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:30 LDA a:game_state::party_members,X
    case 0xC18FE6: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:35 AND #$00FF
    case 0xC18FE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18FE9.
    case 0xC18FEB: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC18FEC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:37 JSL UNKNOWN_C3EC1F
    case 0xC18FEE: cpu.execute_instruction<0x22>(0xC3E7E5, 4); return true;
    // src/misc/reduce_hp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC18FF2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC18FF4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:40 STA @LOCAL01
    case 0xC18FF6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18FF8: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:43 AND #$00FF
    case 0xC18FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_hp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC18FFB.
    case 0xC18FFD: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:44 PHA
    case 0xC18FFE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC18FFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:46 PLY
    case 0xC19001: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/reduce_hp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC19002: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC19004: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC19006: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC19008: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC1900A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC1900C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_hp_amtpercent.asm:54 JSL UNKNOWN_C3EC1F
    case 0xC1900E: cpu.execute_instruction<0x22>(0xC3E7E5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC19012: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reduce_hp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC19013: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reduce_pp_amtpercent.asm (source_named).
bool execute_miscellaneous_reduce_pp_amtpercent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:3 BEGIN_C_FUNCTION
    case 0xC1906D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC1906F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19070: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19071: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19072: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC19072.
    case 0xC19074: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19075: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:11 END_STACK_VARS
    case 0xC19076: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:12 STY @LOCAL02
    case 0xC19077: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC19074.
    case 0xC19078: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:13 STX @VIRTUAL04
    case 0xC19079: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC19078.
    case 0xC1907A: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    case 0xC1907B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC1907A.
    case 0xC1907C: cpu.execute_instruction<0xFF>(0x3CD000, 4); return true;
    // src/misc/reduce_pp_amtpercent.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC1907B.
    case 0xC1907D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:15 BNE @UNKNOWN2
    case 0xC1907E: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:16 LDA #0
    case 0xC19080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:16 LDA #0
    // Overlapping static entry reached from 0xC19080.
    case 0xC19082: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:17 STA @VIRTUAL02
    case 0xC19083: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:18 STA @LOCAL01
    case 0xC19085: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:19 BRA @UNKNOWN1
    case 0xC19087: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:21 LDY @LOCAL02
    case 0xC19089: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:22 LDX @VIRTUAL04
    case 0xC1908B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:23 STX @LOCAL00
    case 0xC1908D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:24 LDA @LOCAL01
    case 0xC1908F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:25 STA @VIRTUAL02
    case 0xC19091: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:27 CLC
    case 0xC19093: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    case 0xC19094: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:28 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC19094.
    case 0xC19096: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:29 TAX
    case 0xC19097: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:30 LDA a:game_state::party_members,X
    case 0xC19098: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:35 AND #$00FF
    case 0xC1909B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1909B.
    case 0xC1909D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:36 LDX @LOCAL00
    case 0xC1909E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:37 JSL UNKNOWN_C3ED2C
    case 0xC190A0: cpu.execute_instruction<0x22>(0xC3E8F2, 4); return true;
    // src/misc/reduce_pp_amtpercent.asm:38 INC @VIRTUAL02
    case 0xC190A4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:39 LDA @VIRTUAL02
    case 0xC190A6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:40 STA @LOCAL01
    case 0xC190A8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC190AA: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:43 AND #$00FF
    case 0xC190AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reduce_pp_amtpercent.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC190AD.
    case 0xC190AF: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:44 PHA
    case 0xC190B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:45 LDA @VIRTUAL02
    case 0xC190B1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:46 PLY
    case 0xC190B3: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/reduce_pp_amtpercent.asm:47 STY @VIRTUAL02
    case 0xC190B4: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:48 CMP @VIRTUAL02
    case 0xC190B6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:49 BCC @UNKNOWN0
    case 0xC190B8: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:50 BRA @UNKNOWN3
    case 0xC190BA: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:52 LDY @LOCAL02
    case 0xC190BC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:53 LDX @VIRTUAL04
    case 0xC190BE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/reduce_pp_amtpercent.asm:54 JSL UNKNOWN_C3ED2C
    case 0xC190C0: cpu.execute_instruction<0x22>(0xC3E8F2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC190C4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reduce_pp_amtpercent.asm:56 END_C_FUNCTION
    case 0xC190C5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/remove_item_from_inventory.asm (source_named).
bool execute_miscellaneous_remove_item_from_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/remove_item_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC18CCE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC18CD3.
    case 0xC18CD5: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/remove_item_from_inventory.asm:12 END_STACK_VARS
    case 0xC18CD7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:13 TXY
    case 0xC18CD8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:14 STY @LOCAL03
    case 0xC18CD9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:15 TAX
    case 0xC18CDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:16 DEC
    case 0xC18CDC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:17 STA @VIRTUAL02
    case 0xC18CDD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC18CDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18CDF.
    case 0xC18CE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:19 JSL MULT168
    case 0xC18CE2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:20 TAX
    case 0xC18CE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC18CE7: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:22 AND #$00FF
    case 0xC18CEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC18CEA.
    case 0xC18CEC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:23 STA @VIRTUAL04
    case 0xC18CED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:24 LDY @LOCAL03
    case 0xC18CEF: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:25 TYA
    case 0xC18CF1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:26 CMP @VIRTUAL04
    case 0xC18CF2: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:27 BNE @UNKNOWN0
    case 0xC18CF4: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:28 LDX #0
    case 0xC18CF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:28 LDX #0
    // Overlapping static entry reached from 0xC18CF6.
    case 0xC18CF8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:29 LDA @VIRTUAL02
    case 0xC18CF9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:30 INC
    case 0xC18CFB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:31 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC18CFC: cpu.execute_instruction<0x22>(0xC4357B, 4); return true;
    // src/misc/remove_item_from_inventory.asm:32 BRA @UNKNOWN3
    case 0xC18D00: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/misc/remove_item_from_inventory.asm:34 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC18D02: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/misc/remove_item_from_inventory.asm:35 AND #$00FF
    case 0xC18D05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC18D05.
    case 0xC18D07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:36 STA @VIRTUAL04
    case 0xC18D08: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:37 TYA
    case 0xC18D0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:38 CMP @VIRTUAL04
    case 0xC18D0B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:39 BNE @UNKNOWN1
    case 0xC18D0D: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:40 LDX #0
    case 0xC18D0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:40 LDX #0
    // Overlapping static entry reached from 0xC18D0F.
    case 0xC18D11: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:41 LDA @VIRTUAL02
    case 0xC18D12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:42 INC
    case 0xC18D14: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:43 JSL CHANGE_EQUIPPED_BODY
    case 0xC18D15: cpu.execute_instruction<0x22>(0xC435C8, 4); return true;
    // src/misc/remove_item_from_inventory.asm:44 BRA @UNKNOWN3
    case 0xC18D19: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/misc/remove_item_from_inventory.asm:46 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC18D1B: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:47 AND #$00FF
    case 0xC18D1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18D1E.
    case 0xC18D20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:48 STA @VIRTUAL04
    case 0xC18D21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:49 TYA
    case 0xC18D23: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:50 CMP @VIRTUAL04
    case 0xC18D24: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:51 BNE @UNKNOWN2
    case 0xC18D26: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:52 LDX #0
    case 0xC18D28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:52 LDX #0
    // Overlapping static entry reached from 0xC18D28.
    case 0xC18D2A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:53 LDA @VIRTUAL02
    case 0xC18D2B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:54 INC
    case 0xC18D2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:55 JSL CHANGE_EQUIPPED_ARMS
    case 0xC18D2E: cpu.execute_instruction<0x22>(0xC43613, 4); return true;
    // src/misc/remove_item_from_inventory.asm:56 BRA @UNKNOWN3
    case 0xC18D32: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/misc/remove_item_from_inventory.asm:58 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC18D34: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/misc/remove_item_from_inventory.asm:59 AND #$00FF
    case 0xC18D37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC18D37.
    case 0xC18D39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:60 STA @VIRTUAL04
    case 0xC18D3A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:61 TYA
    case 0xC18D3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:62 CMP @VIRTUAL04
    case 0xC18D3D: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:63 BNE @UNKNOWN3
    case 0xC18D3F: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:64 LDX #0
    case 0xC18D41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:64 LDX #0
    // Overlapping static entry reached from 0xC18D41.
    case 0xC18D43: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:65 LDA @VIRTUAL02
    case 0xC18D44: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:66 INC
    case 0xC18D46: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:67 JSL CHANGE_EQUIPPED_OTHER
    case 0xC18D47: cpu.execute_instruction<0x22>(0xC4365E, 4); return true;
    // src/misc/remove_item_from_inventory.asm:69 LDA @VIRTUAL02
    case 0xC18D4B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:70 LDY #.SIZEOF(char_struct)
    case 0xC18D4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:70 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D4D.
    case 0xC18D4F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:71 JSL MULT168
    case 0xC18D50: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:72 CLC
    case 0xC18D54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:73 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC18D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x009CAF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:73 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC18D55.
    case 0xC18D57: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:74 TAX
    case 0xC18D58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D59: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:75 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC18D57.
    case 0xC18D5A: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/misc/remove_item_from_inventory.asm:76 LDA __BSS_START__,X
    case 0xC18D5B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:76 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC18D5A.
    case 0xC18D5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:77 STA @LOCAL02
    case 0xC18D5E: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC18D60: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:79 AND #$00FF
    case 0xC18D62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC18D62.
    case 0xC18D64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:80 STA @VIRTUAL04
    case 0xC18D65: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:81 LDY @LOCAL03
    case 0xC18D67: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:82 TYA
    case 0xC18D69: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:83 CMP @VIRTUAL04
    case 0xC18D6A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:84 BCS @UNKNOWN4
    case 0xC18D6C: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D6E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:86 LDA @LOCAL02
    case 0xC18D70: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:87 DEC
    case 0xC18D72: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:88 STA __BSS_START__,X
    case 0xC18D73: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC18D76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:91 LDA @VIRTUAL02
    case 0xC18D78: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:92 LDY #.SIZEOF(char_struct)
    case 0xC18D7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:92 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18D7A.
    case 0xC18D7C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:93 JSL MULT168
    case 0xC18D7D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:94 CLC
    case 0xC18D81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:95 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC18D82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/misc/remove_item_from_inventory.asm:95 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC18D82.
    case 0xC18D84: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:96 TAX
    case 0xC18D85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D86: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:97 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC18D84.
    case 0xC18D87: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/misc/remove_item_from_inventory.asm:98 LDA __BSS_START__,X
    case 0xC18D88: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:98 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC18D87.
    case 0xC18D8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:99 STA @LOCAL02
    case 0xC18D8B: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC18D8D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:101 AND #$00FF
    case 0xC18D8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC18D8F.
    case 0xC18D91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:102 STA @VIRTUAL04
    case 0xC18D92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:103 LDY @LOCAL03
    case 0xC18D94: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:104 TYA
    case 0xC18D96: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:105 CMP @VIRTUAL04
    case 0xC18D97: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:106 BCS @UNKNOWN5
    case 0xC18D99: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC18D9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:108 LDA @LOCAL02
    case 0xC18D9D: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:109 DEC
    case 0xC18D9F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:110 STA __BSS_START__,X
    case 0xC18DA0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC18DA3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:113 LDA @VIRTUAL02
    case 0xC18DA5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:114 LDY #.SIZEOF(char_struct)
    case 0xC18DA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:114 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18DA7.
    case 0xC18DA9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:115 JSL MULT168
    case 0xC18DAA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:116 CLC
    case 0xC18DAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:117 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC18DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:117 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC18DAF.
    case 0xC18DB1: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:118 TAX
    case 0xC18DB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:119 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:119 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC18DB1.
    case 0xC18DB4: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/misc/remove_item_from_inventory.asm:120 LDA __BSS_START__,X
    case 0xC18DB5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:120 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC18DB4.
    case 0xC18DB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:121 STA @LOCAL02
    case 0xC18DB8: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC18DBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:123 AND #$00FF
    case 0xC18DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC18DBC.
    case 0xC18DBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:124 STA @VIRTUAL04
    case 0xC18DBF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:125 LDY @LOCAL03
    case 0xC18DC1: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:126 TYA
    case 0xC18DC3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:127 CMP @VIRTUAL04
    case 0xC18DC4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:128 BCS @UNKNOWN6
    case 0xC18DC6: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:129 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DC8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:130 LDA @LOCAL02
    case 0xC18DCA: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:131 DEC
    case 0xC18DCC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:132 STA __BSS_START__,X
    case 0xC18DCD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC18DD0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:135 LDA @VIRTUAL02
    case 0xC18DD2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:136 LDY #.SIZEOF(char_struct)
    case 0xC18DD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:136 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18DD4.
    case 0xC18DD6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:137 JSL MULT168
    case 0xC18DD7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:138 CLC
    case 0xC18DDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:139 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC18DDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/misc/remove_item_from_inventory.asm:139 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC18DDC.
    case 0xC18DDE: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:140 TAX
    case 0xC18DDF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DE0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:141 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC18DDE.
    case 0xC18DE1: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/misc/remove_item_from_inventory.asm:142 LDA __BSS_START__,X
    case 0xC18DE2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:142 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC18DE1.
    case 0xC18DE4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:143 STA @LOCAL02
    case 0xC18DE5: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC18DE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:145 AND #$00FF
    case 0xC18DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC18DE9.
    case 0xC18DEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/remove_item_from_inventory.asm:146 STA @VIRTUAL04
    case 0xC18DEC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:147 LDY @LOCAL03
    case 0xC18DEE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:148 TYA
    case 0xC18DF0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:149 CMP @VIRTUAL04
    case 0xC18DF1: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:150 BCS @UNKNOWN7
    case 0xC18DF3: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC18DF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:152 LDA @LOCAL02
    case 0xC18DF7: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/misc/remove_item_from_inventory.asm:153 DEC
    case 0xC18DF9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:154 STA __BSS_START__,X
    case 0xC18DFA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC18DFD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:157 TYA
    case 0xC18DFF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:158 DEC
    case 0xC18E00: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:159 STA @VIRTUAL04
    case 0xC18E01: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:160 LDA @VIRTUAL02
    case 0xC18E03: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:161 LDY #.SIZEOF(char_struct)
    case 0xC18E05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:161 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18E05.
    case 0xC18E07: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:162 JSL MULT168
    case 0xC18E08: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:162 JSL MULT168
    // Overlapping static entry reached from 0xC18E84.
    case 0xC18E0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/misc/remove_item_from_inventory.asm:163 CLC
    case 0xC18E0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18E0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18E0B.
    case 0xC18E0E: cpu.execute_instruction<0xA1>(0x00009C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:164 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18E0D.
    case 0xC18E0F: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/remove_item_from_inventory.asm:165 CLC
    case 0xC18E10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:166 ADC @VIRTUAL04
    case 0xC18E11: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:166 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC18E0F.
    case 0xC18E12: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:167 TAX
    case 0xC18E13: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:169 LDA __BSS_START__,X
    case 0xC18E16: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:170 STA @VIRTUAL00
    case 0xC18E19: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:171 BRA @UNKNOWN9
    case 0xC18E1B: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/misc/remove_item_from_inventory.asm:173 TYA
    case 0xC18E1D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:174 DEC
    case 0xC18E1E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:175 STA @VIRTUAL04
    case 0xC18E1F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:176 LDX @LOCAL01
    case 0xC18E21: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/misc/remove_item_from_inventory.asm:177 TXA
    case 0xC18E23: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:178 CLC
    case 0xC18E24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:179 ADC @VIRTUAL04
    case 0xC18E25: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:180 TAX
    case 0xC18E27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E28: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:182 LDA @LOCAL00
    case 0xC18E2A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/remove_item_from_inventory.asm:183 STA __BSS_START__,X
    case 0xC18E2C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:184 INY
    case 0xC18E2F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:185 STY @LOCAL03
    case 0xC18E30: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:187 LDY @LOCAL03
    case 0xC18E32: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:188 CPY #14
    case 0xC18E34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000E, 2); else cpu.execute_instruction<0xC0>(0x00000E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:188 CPY #14
    // Overlapping static entry reached from 0xC18E34.
    case 0xC18E36: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:189 BCS @UNKNOWN10
    case 0xC18E37: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/misc/remove_item_from_inventory.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC18E39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:191 LDA @VIRTUAL02
    case 0xC18E3B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:192 LDY #.SIZEOF(char_struct)
    case 0xC18E3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:192 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18E3D.
    case 0xC18E3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:193 JSL MULT168
    case 0xC18E40: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:194 CLC
    case 0xC18E44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:195 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18E45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:195 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18E45.
    case 0xC18E47: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/misc/remove_item_from_inventory.asm:196 TAX
    case 0xC18E48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:197 STX @LOCAL01
    case 0xC18E49: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/misc/remove_item_from_inventory.asm:197 STX @LOCAL01
    // Overlapping static entry reached from 0xC18E47.
    case 0xC18E4A: cpu.execute_instruction<0x0F>(0x8412A4, 4); return true;
    // src/misc/remove_item_from_inventory.asm:198 LDY @LOCAL03
    case 0xC18E4B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:199 STY @VIRTUAL04
    case 0xC18E4D: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:199 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC18E4A.
    case 0xC18E4E: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:200 TXA
    case 0xC18E4F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:201 CLC
    case 0xC18E50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:202 ADC @VIRTUAL04
    case 0xC18E51: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:203 TAX
    case 0xC18E53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:205 LDA __BSS_START__,X
    case 0xC18E56: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:206 STA @LOCAL00
    case 0xC18E59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/remove_item_from_inventory.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC18E5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:208 AND #$00FF
    case 0xC18E5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:208 AND #$00FF
    // Overlapping static entry reached from 0xC18E5D.
    case 0xC18E5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:209 BNE @UNKNOWN8
    case 0xC18E60: cpu.execute_instruction<0xD0>(0x0000BB, 2); return true;
    // src/misc/remove_item_from_inventory.asm:211 REP #PROC_FLAGS::ACCUM8
    case 0xC18E62: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:212 TYA
    case 0xC18E64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:213 DEC
    case 0xC18E65: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:214 STA @VIRTUAL04
    case 0xC18E66: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:215 LDA @VIRTUAL02
    case 0xC18E68: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC18E6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/remove_item_from_inventory.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18E6A.
    case 0xC18E6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:217 JSL MULT168
    case 0xC18E6D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/remove_item_from_inventory.asm:218 CLC
    case 0xC18E71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:219 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/remove_item_from_inventory.asm:219 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18E72.
    case 0xC18E74: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/remove_item_from_inventory.asm:220 CLC
    case 0xC18E75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:221 ADC @VIRTUAL04
    case 0xC18E76: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/misc/remove_item_from_inventory.asm:221 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC18E74.
    case 0xC18E77: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:222 TAX
    case 0xC18E78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:223 SEP #PROC_FLAGS::ACCUM8
    case 0xC18E79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:224 LDA #0
    case 0xC18E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/misc/remove_item_from_inventory.asm:225 STA __BSS_START__,X
    case 0xC18E7D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/remove_item_from_inventory.asm:225 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC18E7B.
    case 0xC18E7E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:226 REP #PROC_FLAGS::ACCUM8
    case 0xC18E80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18E82.
    case 0xC18E84: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18E85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18E84.
    case 0xC18E86: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18E87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18E86.
    case 0xC18E88: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC18E87.
    case 0xC18E89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:227 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC18E8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:228 LDA @VIRTUAL00
    case 0xC18E8C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:229 AND #$00FF
    case 0xC18E8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC18E8E.
    case 0xC18E90: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E91: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E94: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18E98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:231 STA @LOCAL03
    case 0xC18E99: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:232 CLC
    case 0xC18E9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:233 ADC #item::type
    case 0xC18E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/misc/remove_item_from_inventory.asm:233 ADC #item::type
    // Overlapping static entry reached from 0xC18E9C.
    case 0xC18E9E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18E9F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18EA1: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18EA3: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/misc/remove_item_from_inventory.asm:234 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18EA5: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/misc/remove_item_from_inventory.asm:235 CLC
    case 0xC18EA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:236 ADC @VIRTUAL0A
    case 0xC18EA8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:237 STA @VIRTUAL0A
    case 0xC18EAA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:238 LDA [@VIRTUAL0A]
    case 0xC18EAC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/misc/remove_item_from_inventory.asm:239 AND #$00FF
    case 0xC18EAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC18EAE.
    case 0xC18EB0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/remove_item_from_inventory.asm:240 CMP #ITEM_TYPE::TEDDY_BEAR
    case 0xC18EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/remove_item_from_inventory.asm:240 CMP #ITEM_TYPE::TEDDY_BEAR
    // Overlapping static entry reached from 0xC18EB1.
    case 0xC18EB3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:241 BNE @UNKNOWN11
    case 0xC18EB4: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/misc/remove_item_from_inventory.asm:242 LDA @LOCAL03
    case 0xC18EB6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/misc/remove_item_from_inventory.asm:243 CLC
    case 0xC18EB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:244 ADC #item::params + item_parameters::strength
    case 0xC18EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/misc/remove_item_from_inventory.asm:244 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC18EB9.
    case 0xC18EBB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/remove_item_from_inventory.asm:245 CLC
    case 0xC18EBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:246 ADC @VIRTUAL06
    case 0xC18EBD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:247 STA @VIRTUAL06
    case 0xC18EBF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC18EC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:249 LDA [@VIRTUAL06]
    case 0xC18EC3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/misc/remove_item_from_inventory.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC18EC5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:251 SEC
    case 0xC18EC7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:252 AND #$00FF
    case 0xC18EC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC18EC8.
    case 0xC18ECA: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/misc/remove_item_from_inventory.asm:253 SBC #$0080
    case 0xC18ECB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/misc/remove_item_from_inventory.asm:253 SBC #$0080
    // Overlapping static entry reached from 0xC18ECB.
    case 0xC18ECD: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/misc/remove_item_from_inventory.asm:254 EOR #$FF80
    case 0xC18ECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/misc/remove_item_from_inventory.asm:254 EOR #$FF80
    // Overlapping static entry reached from 0xC18ECE.
    case 0xC18ED0: cpu.execute_instruction<0xFF>(0x28B322, 4); return true;
    // src/misc/remove_item_from_inventory.asm:255 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC18ED1: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/misc/remove_item_from_inventory.asm:255 JSL REMOVE_CHAR_FROM_PARTY
    // Overlapping static entry reached from 0xC18ED0.
    case 0xC18ED4: cpu.execute_instruction<0xC2>(0x000022, 2); return true;
    // src/misc/remove_item_from_inventory.asm:256 JSL UNKNOWN_C216DB
    case 0xC18ED5: cpu.execute_instruction<0x22>(0xC21583, 4); return true;
    // src/misc/remove_item_from_inventory.asm:256 JSL UNKNOWN_C216DB
    // Overlapping static entry reached from 0xC18ED4.
    case 0xC18ED6: cpu.execute_instruction<0x83>(0x000015, 2); return true;
    // src/misc/remove_item_from_inventory.asm:256 JSL UNKNOWN_C216DB
    // Overlapping static entry reached from 0xC18ED6.
    case 0xC18ED8: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/misc/remove_item_from_inventory.asm:258 LDA @VIRTUAL00
    case 0xC18ED9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:258 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC18ED8.
    case 0xC18EDA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/remove_item_from_inventory.asm:259 AND #$00FF
    case 0xC18EDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:259 AND #$00FF
    // Overlapping static entry reached from 0xC18EDB.
    case 0xC18EDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EDE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EE1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/misc/remove_item_from_inventory.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC18EE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:261 CLC
    case 0xC18EE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:262 ADC #item::flags
    case 0xC18EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/misc/remove_item_from_inventory.asm:262 ADC #item::flags
    // Overlapping static entry reached from 0xC18EE7.
    case 0xC18EE9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/remove_item_from_inventory.asm:263 TAX
    case 0xC18EEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/remove_item_from_inventory.asm:264 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC18EEB: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/misc/remove_item_from_inventory.asm:265 AND #$00FF
    case 0xC18EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/remove_item_from_inventory.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC18EEF.
    case 0xC18EF1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/misc/remove_item_from_inventory.asm:266 AND #ITEM_FLAGS::TRANSFORM
    case 0xC18EF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/misc/remove_item_from_inventory.asm:266 AND #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC18EF2.
    case 0xC18EF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/remove_item_from_inventory.asm:267 BEQ @UNKNOWN12
    case 0xC18EF5: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/remove_item_from_inventory.asm:268 SEP #PROC_FLAGS::ACCUM8
    case 0xC18EF7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/remove_item_from_inventory.asm:269 LDA @VIRTUAL00
    case 0xC18EF9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/misc/remove_item_from_inventory.asm:270 JSL UNKNOWN_C3EB1C
    case 0xC18EFB: cpu.execute_instruction<0x22>(0xC3E6DC, 4); return true;
    // src/misc/remove_item_from_inventory.asm:272 LDA @VIRTUAL02
    case 0xC18EFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/remove_item_from_inventory.asm:273 INC
    case 0xC18F01: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/remove_item_from_inventory.asm:274 END_C_FUNCTION
    case 0xC18F02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/remove_item_from_inventory.asm:274 END_C_FUNCTION
    case 0xC18F03: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/remove_item_from_inventory_redirect.asm (source_named).
bool execute_miscellaneous_remove_item_from_inventory_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/remove_item_from_inventory_redirect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DBA3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/remove_item_from_inventory_redirect.asm:4 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1DBA5: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // src/misc/remove_item_from_inventory_redirect.asm:5 RTL
    case 0xC1DBA8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reset_char_level_one.asm (source_named).
bool execute_miscellaneous_reset_char_level_one_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reset_char_level_one.asm:3 BEGIN_C_FUNCTION
    case 0xC1D6CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D6D0.
    case 0xC1D6D2: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6D3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/reset_char_level_one.asm:10 END_STACK_VARS
    case 0xC1D6D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:11 STY @VIRTUAL04
    case 0xC1D6D5: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/misc/reset_char_level_one.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1D6D2.
    case 0xC1D6D6: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/misc/reset_char_level_one.asm:12 STX @VIRTUAL02
    case 0xC1D6D7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1D6D6.
    case 0xC1D6D8: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/reset_char_level_one.asm:13 TAX
    case 0xC1D6D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:14 DEX
    case 0xC1D6DA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:15 TXA
    case 0xC1D6DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC1D6DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/reset_char_level_one.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D6DC.
    case 0xC1D6DE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:17 JSL MULT168
    case 0xC1D6DF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/reset_char_level_one.asm:18 TAY
    case 0xC1D6E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D6E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:20 LDA #STARTING_LEVEL
    case 0xC1D6E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/misc/reset_char_level_one.asm:21 STA PARTY_CHARACTERS+char_struct::level,Y
    case 0xC1D6E8: cpu.execute_instruction<0x99>(0x009C83, 3); return true;
    // src/misc/reset_char_level_one.asm:21 STA PARTY_CHARACTERS+char_struct::level,Y
    // Overlapping static entry reached from 0xC1D6E6.
    case 0xC1D6E9: cpu.execute_instruction<0x83>(0x00009C, 2); return true;
    // src/misc/reset_char_level_one.asm:22 LDA #STARTING_STATS
    case 0xC1D6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x009902, 3); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    case 0xC1D6ED: cpu.execute_instruction<0x99>(0x009C9A, 3); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    // Overlapping static entry reached from 0xC1D6EB.
    case 0xC1D6EE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:23 STA PARTY_CHARACTERS+char_struct::base_offense,Y
    // Overlapping static entry reached from 0xC1D6EE.
    case 0xC1D6EF: cpu.execute_instruction<0x9C>(0x009B99, 3); return true;
    // src/misc/reset_char_level_one.asm:24 STA PARTY_CHARACTERS+char_struct::base_defense,Y
    case 0xC1D6F0: cpu.execute_instruction<0x99>(0x009C9B, 3); return true;
    // src/misc/reset_char_level_one.asm:24 STA PARTY_CHARACTERS+char_struct::base_defense,Y
    // Overlapping static entry reached from 0xC1D6EF.
    case 0xC1D6F2: cpu.execute_instruction<0x9C>(0x009C99, 3); return true;
    // src/misc/reset_char_level_one.asm:25 STA PARTY_CHARACTERS+char_struct::base_speed,Y
    case 0xC1D6F3: cpu.execute_instruction<0x99>(0x009C9C, 3); return true;
    // src/misc/reset_char_level_one.asm:25 STA PARTY_CHARACTERS+char_struct::base_speed,Y
    // Overlapping static entry reached from 0xC1D6F2.
    case 0xC1D6F5: cpu.execute_instruction<0x9C>(0x009D99, 3); return true;
    // src/misc/reset_char_level_one.asm:26 STA PARTY_CHARACTERS+char_struct::base_guts,Y
    case 0xC1D6F6: cpu.execute_instruction<0x99>(0x009C9D, 3); return true;
    // src/misc/reset_char_level_one.asm:26 STA PARTY_CHARACTERS+char_struct::base_guts,Y
    // Overlapping static entry reached from 0xC1D6F5.
    case 0xC1D6F8: cpu.execute_instruction<0x9C>(0x009E99, 3); return true;
    // src/misc/reset_char_level_one.asm:27 STA PARTY_CHARACTERS+char_struct::base_luck,Y
    case 0xC1D6F9: cpu.execute_instruction<0x99>(0x009C9E, 3); return true;
    // src/misc/reset_char_level_one.asm:27 STA PARTY_CHARACTERS+char_struct::base_luck,Y
    // Overlapping static entry reached from 0xC1D6F8.
    case 0xC1D6FB: cpu.execute_instruction<0x9C>(0x009F99, 3); return true;
    // src/misc/reset_char_level_one.asm:28 STA PARTY_CHARACTERS+char_struct::base_vitality,Y
    case 0xC1D6FC: cpu.execute_instruction<0x99>(0x009C9F, 3); return true;
    // src/misc/reset_char_level_one.asm:28 STA PARTY_CHARACTERS+char_struct::base_vitality,Y
    // Overlapping static entry reached from 0xC1D6FB.
    case 0xC1D6FE: cpu.execute_instruction<0x9C>(0x00A099, 3); return true;
    // src/misc/reset_char_level_one.asm:29 STA PARTY_CHARACTERS+char_struct::base_iq,Y
    case 0xC1D6FF: cpu.execute_instruction<0x99>(0x009CA0, 3); return true;
    // src/misc/reset_char_level_one.asm:29 STA PARTY_CHARACTERS+char_struct::base_iq,Y
    // Overlapping static entry reached from 0xC1D6FE.
    case 0xC1D701: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/misc/reset_char_level_one.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1D702: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:31 LDA #STARTING_HP
    case 0xC1D704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/misc/reset_char_level_one.asm:31 LDA #STARTING_HP
    // Overlapping static entry reached from 0xC1D704.
    case 0xC1D706: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/misc/reset_char_level_one.asm:32 STA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC1D707: cpu.execute_instruction<0x99>(0x009C88, 3); return true;
    // src/misc/reset_char_level_one.asm:33 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1D70A: cpu.execute_instruction<0x99>(0x009CC5, 3); return true;
    // src/misc/reset_char_level_one.asm:34 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1D70D: cpu.execute_instruction<0x99>(0x009CC3, 3); return true;
    // src/misc/reset_char_level_one.asm:35 CPX #2
    case 0xC1D710: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/misc/reset_char_level_one.asm:35 CPX #2
    // Overlapping static entry reached from 0xC1D710.
    case 0xC1D712: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/reset_char_level_one.asm:36 BEQ @UNKNOWN0
    case 0xC1D713: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/reset_char_level_one.asm:37 LDA #STARTING_PP
    case 0xC1D715: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/reset_char_level_one.asm:37 LDA #STARTING_PP
    // Overlapping static entry reached from 0xC1D715.
    case 0xC1D717: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_char_level_one.asm:38 STA @LOCAL01
    case 0xC1D718: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:39 BRA @UNKNOWN1
    case 0xC1D71A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/reset_char_level_one.asm:41 LDA #STARTING_PP_JEFF
    case 0xC1D71C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reset_char_level_one.asm:41 LDA #STARTING_PP_JEFF
    // Overlapping static entry reached from 0xC1D71C.
    case 0xC1D71E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_char_level_one.asm:42 STA @LOCAL01
    case 0xC1D71F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:44 TXA
    case 0xC1D721: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:45 LDY #.SIZEOF(char_struct)
    case 0xC1D722: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/reset_char_level_one.asm:45 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D722.
    case 0xC1D724: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:46 JSL MULT168
    case 0xC1D725: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/reset_char_level_one.asm:47 TAY
    case 0xC1D729: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:48 LDA @LOCAL01
    case 0xC1D72A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:49 STA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC1D72C: cpu.execute_instruction<0x99>(0x009C8A, 3); return true;
    // src/misc/reset_char_level_one.asm:50 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1D72F: cpu.execute_instruction<0x99>(0x009CCB, 3); return true;
    // src/misc/reset_char_level_one.asm:51 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1D732: cpu.execute_instruction<0x99>(0x009CC9, 3); return true;
    // src/misc/reset_char_level_one.asm:52 TXY
    case 0xC1D735: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:53 INY
    case 0xC1D736: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:54 STY @LOCAL00
    case 0xC1D737: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:55 TYA
    case 0xC1D739: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:56 JSL RECALC_CHARACTER_POSTMATH_OFFENSE
    case 0xC1D73A: cpu.execute_instruction<0x22>(0xC21706, 4); return true;
    // src/misc/reset_char_level_one.asm:57 LDY @LOCAL00
    case 0xC1D73E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1D740: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:59 TYA
    case 0xC1D742: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:60 JSL RECALC_CHARACTER_POSTMATH_DEFENSE
    case 0xC1D743: cpu.execute_instruction<0x22>(0xC217D9, 4); return true;
    // src/misc/reset_char_level_one.asm:61 LDY @LOCAL00
    case 0xC1D747: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC1D749: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:63 TYA
    case 0xC1D74B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:64 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC1D74C: cpu.execute_instruction<0x22>(0xC21996, 4); return true;
    // src/misc/reset_char_level_one.asm:65 LDY @LOCAL00
    case 0xC1D750: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1D752: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:67 TYA
    case 0xC1D754: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:68 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC1D755: cpu.execute_instruction<0x22>(0xC21A48, 4); return true;
    // src/misc/reset_char_level_one.asm:69 LDY @LOCAL00
    case 0xC1D759: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1D75B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:71 TYA
    case 0xC1D75D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:72 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1D75E: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/misc/reset_char_level_one.asm:73 LDY @LOCAL00
    case 0xC1D762: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC1D764: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:75 TYA
    case 0xC1D766: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:76 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1D767: cpu.execute_instruction<0x22>(0xC21BFA, 4); return true;
    // src/misc/reset_char_level_one.asm:77 LDY @LOCAL00
    case 0xC1D76B: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC1D76D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:79 TYA
    case 0xC1D76F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:80 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC1D770: cpu.execute_instruction<0x22>(0xC21C12, 4); return true;
    // src/misc/reset_char_level_one.asm:81 BRA @UNKNOWN3
    case 0xC1D774: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/misc/reset_char_level_one.asm:83 LDX #0
    case 0xC1D776: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/misc/reset_char_level_one.asm:83 LDX #0
    // Overlapping static entry reached from 0xC1D776.
    case 0xC1D778: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/misc/reset_char_level_one.asm:84 LDY @LOCAL00
    case 0xC1D779: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:85 TYA
    case 0xC1D77B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:86 JSR LEVEL_UP_CHAR
    case 0xC1D77C: cpu.execute_instruction<0x20>(0x00CEF2, 3); return true;
    // src/misc/reset_char_level_one.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1D77F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/reset_char_level_one.asm:89 LDA @VIRTUAL02
    case 0xC1D781: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:90 DEC
    case 0xC1D783: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:91 STA @VIRTUAL02
    case 0xC1D784: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:92 BNE @UNKNOWN2
    case 0xC1D786: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/misc/reset_char_level_one.asm:93 LDA @VIRTUAL04
    case 0xC1D788: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/misc/reset_char_level_one.asm:94 BEQ @UNKNOWN4
    case 0xC1D78A: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/misc/reset_char_level_one.asm:95 LDY @LOCAL00
    case 0xC1D78C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:96 TYX
    case 0xC1D78E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:97 DEX
    case 0xC1D78F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:98 STX @LOCAL01
    case 0xC1D790: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:99 TXA
    case 0xC1D792: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:100 LDY #.SIZEOF(char_struct)
    case 0xC1D793: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/reset_char_level_one.asm:100 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D793.
    case 0xC1D795: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_char_level_one.asm:101 JSL MULT168
    case 0xC1D796: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/reset_char_level_one.asm:102 STA @LOCAL00
    case 0xC1D79A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D79C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D79C.
    case 0xC1D79E: cpu.execute_instruction<0x9E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D79F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1D7A1.
    case 0xC1D7A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/reset_char_level_one.asm:103 LOADPTR EXP_TABLE, @VIRTUAL0A
    case 0xC1D7A4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/misc/reset_char_level_one.asm:104 LDA @LOCAL00
    case 0xC1D7A6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:105 TAX
    case 0xC1D7A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:106 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC1D7A9: cpu.execute_instruction<0xBD>(0x009C83, 3); return true;
    // src/misc/reset_char_level_one.asm:107 AND #$00FF
    case 0xC1D7AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_char_level_one.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC1D7AC.
    case 0xC1D7AE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/misc/reset_char_level_one.asm:108 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D7AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/misc/reset_char_level_one.asm:108 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1D7B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:109 STA @VIRTUAL02
    case 0xC1D7B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:110 LDY #(MAX_LEVEL+1) * 4
    case 0xC1D7B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000090, 2); else cpu.execute_instruction<0xA0>(0x000190, 3); return true;
    // src/misc/reset_char_level_one.asm:110 LDY #(MAX_LEVEL+1) * 4
    // Overlapping static entry reached from 0xC1D7B3.
    case 0xC1D7B5: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // src/misc/reset_char_level_one.asm:111 LDX @LOCAL01
    case 0xC1D7B6: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/misc/reset_char_level_one.asm:111 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1D7B5.
    case 0xC1D7B7: cpu.execute_instruction<0x10>(0x00008A, 2); return true;
    // src/misc/reset_char_level_one.asm:112 TXA
    case 0xC1D7B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:113 JSL MULT16
    case 0xC1D7B9: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/misc/reset_char_level_one.asm:114 CLC
    case 0xC1D7BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:115 ADC @VIRTUAL02
    case 0xC1D7BE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/reset_char_level_one.asm:116 CLC
    case 0xC1D7C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:117 ADC @VIRTUAL0A
    case 0xC1D7C1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/misc/reset_char_level_one.asm:118 STA @VIRTUAL0A
    case 0xC1D7C3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D7C5.
    case 0xC1D7C7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7C8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7CA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7CB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/misc/reset_char_level_one.asm:119 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1D7CF: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/misc/reset_char_level_one.asm:120 LDA @LOCAL00
    case 0xC1D7D1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_char_level_one.asm:121 CLC
    case 0xC1D7D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_char_level_one.asm:122 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC1D7D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x009C84, 3); return true;
    // src/misc/reset_char_level_one.asm:122 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC1D7D4.
    case 0xC1D7D6: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/misc/reset_char_level_one.asm:123 TAY
    case 0xC1D7D7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D7D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC1D7D6.
    case 0xC1D7D9: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D7DA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC1D7D9.
    case 0xC1D7DB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D7DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/misc/reset_char_level_one.asm:124 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1D7DF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reset_char_level_one.asm:126 END_C_FUNCTION
    case 0xC1D7E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/reset_char_level_one.asm:126 END_C_FUNCTION
    case 0xC1D7E3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/reset_hppp_rolling.asm (source_named).
bool execute_miscellaneous_reset_hppp_rolling_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/reset_hppp_rolling.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20E2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20E2D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20E2E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20E2F.
    case 0xC20E31: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/reset_hppp_rolling.asm:6 END_STACK_VARS
    case 0xC20E32: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:7 LDA #0
    case 0xC20E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:7 LDA #0
    // Overlapping static entry reached from 0xC20E33.
    case 0xC20E35: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_hppp_rolling.asm:8 STA @VIRTUAL02
    case 0xC20E36: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:9 BRA @UNKNOWN4
    case 0xC20E38: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/misc/reset_hppp_rolling.asm:12 LDA @VIRTUAL02
    case 0xC20E3A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:13 CLC
    case 0xC20E3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:14 ADC #.LOWORD(GAME_STATE)
    case 0xC20E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/reset_hppp_rolling.asm:14 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC20E3D.
    case 0xC20E3F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:15 TAX
    case 0xC20E40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:16 LDA a:game_state::party_members,X
    case 0xC20E41: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/misc/reset_hppp_rolling.asm:21 AND #$00FF
    case 0xC20E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC20E44.
    case 0xC20E46: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/reset_hppp_rolling.asm:22 DEC
    case 0xC20E47: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:23 LDY #.SIZEOF(char_struct)
    case 0xC20E48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/reset_hppp_rolling.asm:23 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC20E48.
    case 0xC20E4A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/reset_hppp_rolling.asm:24 JSL MULT168
    case 0xC20E4B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/reset_hppp_rolling.asm:25 CLC
    case 0xC20E4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC20E50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/misc/reset_hppp_rolling.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC20E50.
    case 0xC20E52: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/misc/reset_hppp_rolling.asm:27 TAY
    case 0xC20E53: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:28 LDA a:char_struct::afflictions,Y
    case 0xC20E54: cpu.execute_instruction<0xB9>(0x00000D, 3); return true;
    // src/misc/reset_hppp_rolling.asm:28 LDA a:char_struct::afflictions,Y
    // Overlapping static entry reached from 0xC20E52.
    case 0xC20E55: cpu.execute_instruction<0x0D>(0x002900, 3); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    case 0xC20E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC20E55.
    case 0xC20E58: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/misc/reset_hppp_rolling.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC20E57.
    case 0xC20E59: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/misc/reset_hppp_rolling.asm:30 CMP #1
    case 0xC20E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/reset_hppp_rolling.asm:30 CMP #1
    // Overlapping static entry reached from 0xC20E5A.
    case 0xC20E5C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/reset_hppp_rolling.asm:31 BEQ @UNKNOWN1
    case 0xC20E5D: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:32 LDA a:char_struct::current_hp,Y
    case 0xC20E5F: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/misc/reset_hppp_rolling.asm:33 BNE @UNKNOWN1
    case 0xC20E62: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/misc/reset_hppp_rolling.asm:34 LDA #1
    case 0xC20E64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/reset_hppp_rolling.asm:34 LDA #1
    // Overlapping static entry reached from 0xC20E64.
    case 0xC20E66: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/misc/reset_hppp_rolling.asm:35 STA a:char_struct::current_hp_target,Y
    case 0xC20E67: cpu.execute_instruction<0x99>(0x000046, 3); return true;
    // src/misc/reset_hppp_rolling.asm:37 LDA a:char_struct::current_hp_fraction,Y
    case 0xC20E6A: cpu.execute_instruction<0xB9>(0x000042, 3); return true;
    // src/misc/reset_hppp_rolling.asm:38 BEQ @UNKNOWN2
    case 0xC20E6D: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:39 LDA a:char_struct::current_hp,Y
    case 0xC20E6F: cpu.execute_instruction<0xB9>(0x000044, 3); return true;
    // src/misc/reset_hppp_rolling.asm:40 STA @LOCAL00
    case 0xC20E72: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:41 TYA
    case 0xC20E74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:42 CLC
    case 0xC20E75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:43 ADC #char_struct::current_hp_target
    case 0xC20E76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/misc/reset_hppp_rolling.asm:43 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC20E76.
    case 0xC20E78: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/reset_hppp_rolling.asm:44 TAX
    case 0xC20E79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:45 LDA __BSS_START__,X
    case 0xC20E7A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:46 STA @VIRTUAL04
    case 0xC20E7D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:47 LDA @LOCAL00
    case 0xC20E7F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:48 CMP @VIRTUAL04
    case 0xC20E81: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:49 BLTEQ @UNKNOWN2
    case 0xC20E83: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:49 BLTEQ @UNKNOWN2
    case 0xC20E85: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/reset_hppp_rolling.asm:50 STA __BSS_START__,X
    case 0xC20E87: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:52 LDA a:char_struct::current_pp_fraction,Y
    case 0xC20E8A: cpu.execute_instruction<0xB9>(0x000048, 3); return true;
    // src/misc/reset_hppp_rolling.asm:53 BEQ @UNKNOWN3
    case 0xC20E8D: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/misc/reset_hppp_rolling.asm:54 LDA a:char_struct::current_pp,Y
    case 0xC20E8F: cpu.execute_instruction<0xB9>(0x00004A, 3); return true;
    // src/misc/reset_hppp_rolling.asm:55 STA @LOCAL00
    case 0xC20E92: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:56 TYA
    case 0xC20E94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:57 CLC
    case 0xC20E95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:58 ADC #char_struct::current_pp_target
    case 0xC20E96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00004C, 3); return true;
    // src/misc/reset_hppp_rolling.asm:58 ADC #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC20E96.
    case 0xC20E98: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/misc/reset_hppp_rolling.asm:59 TAX
    case 0xC20E99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:60 LDA __BSS_START__,X
    case 0xC20E9A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:61 STA @VIRTUAL04
    case 0xC20E9D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:62 LDA @LOCAL00
    case 0xC20E9F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/reset_hppp_rolling.asm:63 CMP @VIRTUAL04
    case 0xC20EA1: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:64 BLTEQ @UNKNOWN3
    case 0xC20EA3: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:64 BLTEQ @UNKNOWN3
    case 0xC20EA5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/misc/reset_hppp_rolling.asm:65 STA __BSS_START__,X
    case 0xC20EA7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/reset_hppp_rolling.asm:67 INC @VIRTUAL02
    case 0xC20EAA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:69 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20EAC: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/reset_hppp_rolling.asm:70 AND #$00FF
    case 0xC20EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/reset_hppp_rolling.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC20EAF.
    case 0xC20EB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/reset_hppp_rolling.asm:71 STA @VIRTUAL04
    case 0xC20EB2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/misc/reset_hppp_rolling.asm:72 LDA @VIRTUAL02
    case 0xC20EB4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/reset_hppp_rolling.asm:73 CMP @VIRTUAL04
    case 0xC20EB6: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC20EB8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC20EBA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/misc/reset_hppp_rolling.asm:74 BCCL @UNKNOWN0
    case 0xC20EBC: cpu.execute_instruction<0x4C>(0x000E3A, 3); return true;
    // src/misc/reset_hppp_rolling.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC20EBF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/reset_hppp_rolling.asm:76 LDA #1
    case 0xC20EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/misc/reset_hppp_rolling.asm:77 STA FASTEST_HPPP_METER_SPEED
    case 0xC20EC3: cpu.execute_instruction<0x8D>(0x00994A, 3); return true;
    // src/misc/reset_hppp_rolling.asm:77 STA FASTEST_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC20EC1.
    case 0xC20EC4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/misc/reset_hppp_rolling.asm:77 STA FASTEST_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC20EC4.
    case 0xC20EC5: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/misc/reset_hppp_rolling.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC20EC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/reset_hppp_rolling.asm:79 END_C_FUNCTION
    case 0xC20EC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/reset_hppp_rolling.asm:79 END_C_FUNCTION
    case 0xC20EC9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/save_game.asm (source_named).
bool execute_miscellaneous_save_game_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/save_game.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22951: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/save_game.asm:4 LDA CURRENT_SAVE_SLOT
    case 0xC22953: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/misc/save_game.asm:5 AND #$00FF
    case 0xC22956: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/save_game.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC22956.
    case 0xC22958: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/misc/save_game.asm:6 DEC
    case 0xC22959: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/save_game.asm:7 JSL SAVE_GAME_SLOT
    case 0xC2295A: cpu.execute_instruction<0x22>(0xC0F962, 4); return true;
    // src/misc/save_game.asm:8 RTL
    case 0xC2295E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/set_teleport_box_destination.asm (source_named).
bool execute_miscellaneous_set_teleport_box_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/set_teleport_box_destination.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC23018: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/set_teleport_box_destination.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC2301A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/misc/set_teleport_box_destination.asm:5 STA GAME_STATE + game_state::unknownC3
    case 0xC2301C: cpu.execute_instruction<0x8D>(0x009B69, 3); return true;
    // src/misc/set_teleport_box_destination.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC2301F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/misc/set_teleport_box_destination.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC23021: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/misc/set_teleport_box_destination.asm:8 STA RESPAWN_X
    case 0xC23024: cpu.execute_instruction<0x8D>(0x009FA5, 3); return true;
    // src/misc/set_teleport_box_destination.asm:9 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC23027: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/misc/set_teleport_box_destination.asm:10 STA RESPAWN_Y
    case 0xC2302A: cpu.execute_instruction<0x8D>(0x009FA7, 3); return true;
    // src/misc/set_teleport_box_destination.asm:11 RTL
    case 0xC2302D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/take_item_from_character.asm (source_named).
bool execute_miscellaneous_take_item_from_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/take_item_from_character.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18F56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC18F5B.
    case 0xC18F5D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/take_item_from_character.asm:10 END_STACK_VARS
    case 0xC18F5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:11 STX @VIRTUAL04
    case 0xC18F60: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18F5D.
    case 0xC18F61: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    case 0xC18F62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18F61.
    case 0xC18F63: cpu.execute_instruction<0xFF>(0x4DD000, 4); return true;
    // src/misc/take_item_from_character.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC18F62.
    case 0xC18F64: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/take_item_from_character.asm:13 BNE @UNKNOWN3
    case 0xC18F65: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/misc/take_item_from_character.asm:14 LDA #0
    case 0xC18F67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18F67.
    case 0xC18F69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/take_item_from_character.asm:15 STA @VIRTUAL02
    case 0xC18F6A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:16 STA @LOCAL01
    case 0xC18F6C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:17 BRA @UNKNOWN2
    case 0xC18F6E: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/misc/take_item_from_character.asm:19 LDA @LOCAL01
    case 0xC18F70: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:20 STA @VIRTUAL02
    case 0xC18F72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:21 CLC
    case 0xC18F74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC18F75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/misc/take_item_from_character.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC18F75.
    case 0xC18F77: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:24 CLC
    case 0xC18F78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:25 ADC #game_state::party_members
    case 0xC18F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/misc/take_item_from_character.asm:25 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC18F79.
    case 0xC18F7B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/misc/take_item_from_character.asm:29 TAY
    case 0xC18F7C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:30 STY @LOCAL00
    case 0xC18F7D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/misc/take_item_from_character.asm:31 LDX @VIRTUAL04
    case 0xC18F7F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:32 LDA __BSS_START__,Y
    case 0xC18F81: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:33 AND #$00FF
    case 0xC18F84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC18F84.
    case 0xC18F86: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/misc/take_item_from_character.asm:34 JSR TAKE_ITEM_FROM_SPECIFIC_CHARACTER
    case 0xC18F87: cpu.execute_instruction<0x20>(0x008F04, 3); return true;
    // src/misc/take_item_from_character.asm:35 CMP #0
    case 0xC18F8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:35 CMP #0
    // Overlapping static entry reached from 0xC18F8A.
    case 0xC18F8C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/take_item_from_character.asm:36 BEQ @UNKNOWN1
    case 0xC18F8D: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/misc/take_item_from_character.asm:37 LDY @LOCAL00
    case 0xC18F8F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/misc/take_item_from_character.asm:38 LDA __BSS_START__,Y
    case 0xC18F91: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:39 AND #$00FF
    case 0xC18F94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18F94.
    case 0xC18F96: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/take_item_from_character.asm:40 BRA @UNKNOWN4
    case 0xC18F97: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/misc/take_item_from_character.asm:42 INC @VIRTUAL02
    case 0xC18F99: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:43 LDA @VIRTUAL02
    case 0xC18F9B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:44 STA @LOCAL01
    case 0xC18F9D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/take_item_from_character.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC18F9F: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/misc/take_item_from_character.asm:47 AND #$00FF
    case 0xC18FA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_character.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC18FA2.
    case 0xC18FA4: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/misc/take_item_from_character.asm:48 PHA
    case 0xC18FA5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:49 LDA @VIRTUAL02
    case 0xC18FA6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:50 PLY
    case 0xC18FA8: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/misc/take_item_from_character.asm:51 STY @VIRTUAL02
    case 0xC18FA9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:52 CMP @VIRTUAL02
    case 0xC18FAB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/misc/take_item_from_character.asm:53 BCC @UNKNOWN0
    case 0xC18FAD: cpu.execute_instruction<0x90>(0x0000C1, 2); return true;
    // src/misc/take_item_from_character.asm:54 LDA #0
    case 0xC18FAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_character.asm:54 LDA #0
    // Overlapping static entry reached from 0xC18FAF.
    case 0xC18FB1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/take_item_from_character.asm:55 BRA @UNKNOWN4
    case 0xC18FB2: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/misc/take_item_from_character.asm:57 LDX @VIRTUAL04
    case 0xC18FB4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/misc/take_item_from_character.asm:58 JSR TAKE_ITEM_FROM_SPECIFIC_CHARACTER
    case 0xC18FB6: cpu.execute_instruction<0x20>(0x008F04, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/take_item_from_character.asm:60 END_C_FUNCTION
    case 0xC18FB9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/take_item_from_character.asm:60 END_C_FUNCTION
    case 0xC18FBA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/take_item_from_specific_character.asm (source_named).
bool execute_miscellaneous_take_item_from_specific_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/take_item_from_specific_character.asm:3 BEGIN_C_FUNCTION
    case 0xC18F04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F06: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18F09.
    case 0xC18F0B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/misc/take_item_from_specific_character.asm:9 END_STACK_VARS
    case 0xC18F0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:10 STX @VIRTUAL04
    case 0xC18F0E: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/misc/take_item_from_specific_character.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC18F0B.
    case 0xC18F0F: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:11 TAX
    case 0xC18F10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:12 DEC
    case 0xC18F11: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:13 STA @LOCAL00
    case 0xC18F12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:14 LDA #0
    case 0xC18F14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18F14.
    case 0xC18F16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/take_item_from_specific_character.asm:15 STA @VIRTUAL02
    case 0xC18F17: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:16 BRA @UNKNOWN2
    case 0xC18F19: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/misc/take_item_from_specific_character.asm:18 LDA @LOCAL00
    case 0xC18F1B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC18F1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/misc/take_item_from_specific_character.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC18F1D.
    case 0xC18F1F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/take_item_from_specific_character.asm:20 JSL MULT168
    case 0xC18F20: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/misc/take_item_from_specific_character.asm:21 CLC
    case 0xC18F24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC18F25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/misc/take_item_from_specific_character.asm:22 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC18F25.
    case 0xC18F27: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/misc/take_item_from_specific_character.asm:23 CLC
    case 0xC18F28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:24 ADC @VIRTUAL02
    case 0xC18F29: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:24 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC18F27.
    case 0xC18F2A: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:25 TAX
    case 0xC18F2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:26 LDA __BSS_START__,X
    case 0xC18F2C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:27 AND #$00FF
    case 0xC18F2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/misc/take_item_from_specific_character.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC18F2F.
    case 0xC18F31: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/misc/take_item_from_specific_character.asm:28 CMP @VIRTUAL04
    case 0xC18F32: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/misc/take_item_from_specific_character.asm:29 BNE @UNKNOWN1
    case 0xC18F34: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/misc/take_item_from_specific_character.asm:30 LDX @VIRTUAL02
    case 0xC18F36: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:31 INX
    case 0xC18F38: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:32 LDA @LOCAL00
    case 0xC18F39: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/take_item_from_specific_character.asm:33 INC
    case 0xC18F3B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:34 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC18F3C: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // src/misc/take_item_from_specific_character.asm:35 BRA @UNKNOWN5
    case 0xC18F3F: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/take_item_from_specific_character.asm:37 INC @VIRTUAL02
    case 0xC18F41: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/misc/take_item_from_specific_character.asm:39 LDA #.SIZEOF(char_struct::items)
    case 0xC18F43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/misc/take_item_from_specific_character.asm:39 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC18F43.
    case 0xC18F45: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/misc/take_item_from_specific_character.asm:40 CLC
    case 0xC18F46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/take_item_from_specific_character.asm:41 SBC @VIRTUAL02
    case 0xC18F47: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18F49: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18F4B: cpu.execute_instruction<0x10>(0x0000CE, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18F4D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/misc/take_item_from_specific_character.asm:42 BRANCHGTS @UNKNOWN0
    case 0xC18F4F: cpu.execute_instruction<0x30>(0x0000CA, 2); return true;
    // src/misc/take_item_from_specific_character.asm:43 LDA #0
    case 0xC18F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/take_item_from_specific_character.asm:43 LDA #0
    // Overlapping static entry reached from 0xC18F51.
    case 0xC18F53: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/take_item_from_specific_character.asm:45 END_C_FUNCTION
    case 0xC18F54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/take_item_from_specific_character.asm:45 END_C_FUNCTION
    case 0xC18F55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_freezeobjects.asm (source_named).
bool execute_miscellaneous_teleport_freezeobjects_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_freezeobjects.asm:3 BEGIN_C_FUNCTION
    case 0xC0EA08: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA0A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA0B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA0C.
    case 0xC0EA0E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_freezeobjects.asm:6 END_STACK_VARS
    case 0xC0EA0F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:7 LDA #0
    case 0xC0EA10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0EA10.
    case 0xC0EA12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/misc/teleport_freezeobjects.asm:8 STA @LOCAL00
    case 0xC0EA13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:9 BRA @UNKNOWN1
    case 0xC0EA15: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/misc/teleport_freezeobjects.asm:11 ASL
    case 0xC0EA17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:12 CLC
    case 0xC0EA18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0EA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/misc/teleport_freezeobjects.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0EA19.
    case 0xC0EA1B: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/teleport_freezeobjects.asm:14 TAX
    case 0xC0EA1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:15 LDA __BSS_START__,X
    case 0xC0EA1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:16 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:16 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA20.
    case 0xC0EA22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    case 0xC0EA23: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA22.
    case 0xC0EA24: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/teleport_freezeobjects.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA22.
    case 0xC0EA25: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/misc/teleport_freezeobjects.asm:18 LDA @LOCAL00
    case 0xC0EA26: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:19 INC
    case 0xC0EA28: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects.asm:20 STA @LOCAL00
    case 0xC0EA29: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects.asm:22 CMP #23
    case 0xC0EA2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/misc/teleport_freezeobjects.asm:22 CMP #23
    // Overlapping static entry reached from 0xC0EA2B.
    case 0xC0EA2D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/teleport_freezeobjects.asm:23 BCC @UNKNOWN0
    case 0xC0EA2E: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_freezeobjects.asm:24 END_C_FUNCTION
    case 0xC0EA30: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/teleport_freezeobjects.asm:24 END_C_FUNCTION
    case 0xC0EA31: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_freezeobjects2.asm (source_named).
bool execute_miscellaneous_teleport_freezeobjects2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_freezeobjects2.asm:3 BEGIN_C_FUNCTION
    case 0xC0EA32: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA34: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA36.
    case 0xC0EA38: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:6 END_STACK_VARS
    case 0xC0EA39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:7 LDY #0
    case 0xC0EA3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:7 LDY #0
    // Overlapping static entry reached from 0xC0EA3A.
    case 0xC0EA3C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:8 BRA @UNKNOWN2
    case 0xC0EA3D: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:10 TYA
    case 0xC0EA3F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:11 ASL
    case 0xC0EA40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:12 CLC
    case 0xC0EA41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC0EA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:13 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC0EA42.
    case 0xC0EA44: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:14 TAX
    case 0xC0EA45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:15 LDA __BSS_START__,X
    case 0xC0EA46: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:16 STA @LOCAL00
    case 0xC0EA49: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:17 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:17 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA4B.
    case 0xC0EA4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C9, 2); else cpu.execute_instruction<0xC0>(0x0000C9, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA4D.
    case 0xC0EA4F: cpu.execute_instruction<0x00>(0x0000C0, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:18 CMP #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA4E.
    case 0xC0EA50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x0008F0, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:19 BEQ @UNKNOWN1
    case 0xC0EA51: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:19 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0EA50.
    case 0xC0EA52: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:20 LDA @LOCAL00
    case 0xC0EA53: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:21 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0EA55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:21 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0EA55.
    case 0xC0EA57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    case 0xC0EA58: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA57.
    case 0xC0EA59: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0EA57.
    case 0xC0EA5A: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:24 INY
    case 0xC0EA5B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/misc/teleport_freezeobjects2.asm:26 CPY #23
    case 0xC0EA5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000017, 2); else cpu.execute_instruction<0xC0>(0x000017, 3); return true;
    // src/misc/teleport_freezeobjects2.asm:26 CPY #23
    // Overlapping static entry reached from 0xC0EA5C.
    case 0xC0EA5E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/misc/teleport_freezeobjects2.asm:27 BCC @UNKNOWN0
    case 0xC0EA5F: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_freezeobjects2.asm:28 END_C_FUNCTION
    case 0xC0EA61: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/misc/teleport_freezeobjects2.asm:28 END_C_FUNCTION
    case 0xC0EA62: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/teleport_mainloop.asm (source_named).
bool execute_miscellaneous_teleport_mainloop_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/misc/teleport_mainloop.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EA63: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA65: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA66: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EA67.
    case 0xC0EA69: cpu.execute_instruction<0xFF>(0xA5225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/misc/teleport_mainloop.asm:7 END_STACK_VARS
    case 0xC0EA6A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    case 0xC0EA6B: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC0EA69.
    case 0xC0EA6D: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/misc/teleport_mainloop.asm:8 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC0EA6D.
    case 0xC0EA6E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x004C22, 3); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EA6F: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EA6E.
    case 0xC0EA70: cpu.execute_instruction<0x4C>(0x00C087, 3); return true;
    // src/misc/teleport_mainloop.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EA6E.
    case 0xC0EA71: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/misc/teleport_mainloop.asm:10 JSR TELEPORT_FREEZEOBJECTS
    case 0xC0EA73: cpu.execute_instruction<0x20>(0x00EA08, 3); return true;
    // src/misc/teleport_mainloop.asm:11 LDA #1
    case 0xC0EA76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:11 LDA #1
    // Overlapping static entry reached from 0xC0EA76.
    case 0xC0EA78: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/misc/teleport_mainloop.asm:12 STA UNREAD_7E5DBA
    case 0xC0EA79: cpu.execute_instruction<0x8D>(0x006140, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EA7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EA7C.
    case 0xC0EA7E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EA7F: cpu.execute_instruction<0x8D>(0x00A147, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EA82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EA82.
    case 0xC0EA84: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/teleport_mainloop.asm:13 MOVE_INT_CONSTANT 0, PSI_TELEPORT_SPEED
    case 0xC0EA85: cpu.execute_instruction<0x8D>(0x00A149, 3); return true;
    // src/misc/teleport_mainloop.asm:14 STZ PSI_TELEPORT_STATE
    case 0xC0EA88: cpu.execute_instruction<0x9C>(0x00A145, 3); return true;
    // src/misc/teleport_mainloop.asm:15 JSL UNKNOWN_C07C5B
    case 0xC0EA8B: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/misc/teleport_mainloop.asm:16 JSR UNKNOWN_C0DE46
    case 0xC0EA8F: cpu.execute_instruction<0x20>(0x00DE0B, 3); return true;
    // src/misc/teleport_mainloop.asm:17 LDA PSI_TELEPORT_STYLE
    case 0xC0EA92: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/misc/teleport_mainloop.asm:18 CMP #TELEPORT_STYLE::PSI_ALPHA
    case 0xC0EA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:18 CMP #TELEPORT_STYLE::PSI_ALPHA
    // Overlapping static entry reached from 0xC0EA95.
    case 0xC0EA97: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:19 BEQ @STYLE_1_OR_5
    case 0xC0EA98: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/misc/teleport_mainloop.asm:20 CMP #TELEPORT_STYLE::UNKNOWN
    case 0xC0EA9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/misc/teleport_mainloop.asm:20 CMP #TELEPORT_STYLE::UNKNOWN
    // Overlapping static entry reached from 0xC0EA9A.
    case 0xC0EA9C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:21 BEQ @STYLE_1_OR_5
    case 0xC0EA9D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/misc/teleport_mainloop.asm:22 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0EA9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/teleport_mainloop.asm:22 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0EA9F.
    case 0xC0EAA1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:23 BEQ @STYLE_2
    case 0xC0EAA2: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/misc/teleport_mainloop.asm:24 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0EAA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/teleport_mainloop.asm:24 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0EAA4.
    case 0xC0EAA6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:25 BEQ @STYLE_3
    case 0xC0EAA7: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/misc/teleport_mainloop.asm:26 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0EAA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/misc/teleport_mainloop.asm:26 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0EAA9.
    case 0xC0EAAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:27 BEQ @STYLE_4
    case 0xC0EAAC: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/misc/teleport_mainloop.asm:28 BRA @STYLE_OTHER
    case 0xC0EAAE: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00E254, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAB0.
    case 0xC0EAB2: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAB2.
    case 0xC0EAB4: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    // Overlapping static entry reached from 0xC0EAB5.
    case 0xC0EAB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:30 LOADPTR UNKNOWN_C0E28F, @LOCAL00
    case 0xC0EAB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00E386, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EABA.
    case 0xC0EABC: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EABD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EABC.
    case 0xC0EABE: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EABE.
    case 0xC0EAC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EABF.
    case 0xC0EAC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAC2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:31 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAC0.
    case 0xC0EAC3: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    case 0xC0EAC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EAC3.
    case 0xC0EAC5: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EAC4.
    case 0xC0EAC6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:33 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EAC7: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/misc/teleport_mainloop.asm:34 BRA @STYLE_OTHER
    case 0xC0EACB: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x00E4DB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EACD.
    case 0xC0EACF: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAD0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EACF.
    case 0xC0EAD1: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EAD2.
    case 0xC0EAD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:36 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAD5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00E386, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAD7.
    case 0xC0EAD9: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EADA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAD9.
    case 0xC0EADB: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EADB.
    case 0xC0EADD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EADC.
    case 0xC0EADE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EADF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:37 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EADD.
    case 0xC0EAE0: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    case 0xC0EAE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    // Overlapping static entry reached from 0xC0EAE0.
    case 0xC0EAE2: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:38 LDA #23
    // Overlapping static entry reached from 0xC0EAE1.
    case 0xC0EAE3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:39 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EAE4: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/misc/teleport_mainloop.asm:40 BRA @STYLE_OTHER
    case 0xC0EAE8: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/misc/teleport_mainloop.asm:42 LDA #1
    case 0xC0EAEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0EAEA.
    case 0xC0EAEC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/misc/teleport_mainloop.asm:43 STA PSI_TELEPORT_STATE
    case 0xC0EAED: cpu.execute_instruction<0x8D>(0x00A145, 3); return true;
    // src/misc/teleport_mainloop.asm:44 BRA @STYLE_OTHER
    case 0xC0EAF0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x00E4DB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EAF2.
    case 0xC0EAF4: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EAF4.
    case 0xC0EAF6: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    // Overlapping static entry reached from 0xC0EAF7.
    case 0xC0EAF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:46 LOADPTR UNKNOWN_C0E516, @LOCAL00
    case 0xC0EAFA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00E386, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAFC.
    case 0xC0EAFE: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EAFF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EAFE.
    case 0xC0EB00: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB00.
    case 0xC0EB02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB01.
    case 0xC0EB03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0EB04: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:47 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0EB02.
    case 0xC0EB05: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    case 0xC0EB06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    // Overlapping static entry reached from 0xC0EB05.
    case 0xC0EB07: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:48 LDA #23
    // Overlapping static entry reached from 0xC0EB06.
    case 0xC0EB08: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:49 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EB09: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/misc/teleport_mainloop.asm:51 LDA PSI_TELEPORT_STYLE
    case 0xC0EB0D: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/misc/teleport_mainloop.asm:52 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0EB10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/misc/teleport_mainloop.asm:52 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0EB10.
    case 0xC0EB12: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:53 BEQ @UNKNOWN6
    case 0xC0EB13: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/misc/teleport_mainloop.asm:54 LDA #MUSIC::TELEPORT_OUT
    case 0xC0EB15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/misc/teleport_mainloop.asm:54 LDA #MUSIC::TELEPORT_OUT
    // Overlapping static entry reached from 0xC0EB15.
    case 0xC0EB17: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:55 JSL CHANGE_MUSIC
    case 0xC0EB18: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/misc/teleport_mainloop.asm:56 BRA @UNKNOWN6
    case 0xC0EB1C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/misc/teleport_mainloop.asm:58 JSL OAM_CLEAR
    case 0xC0EB1E: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/misc/teleport_mainloop.asm:59 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0EB22: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/misc/teleport_mainloop.asm:60 JSR TELEPORT_FREEZEOBJECTS2
    case 0xC0EB26: cpu.execute_instruction<0x20>(0x00EA32, 3); return true;
    // src/misc/teleport_mainloop.asm:61 JSL UPDATE_SCREEN
    case 0xC0EB29: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/misc/teleport_mainloop.asm:62 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EB2D: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/misc/teleport_mainloop.asm:64 LDA PSI_TELEPORT_STATE
    case 0xC0EB31: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/misc/teleport_mainloop.asm:65 BEQ @UNKNOWN5
    case 0xC0EB34: cpu.execute_instruction<0xF0>(0x0000E8, 2); return true;
    // src/misc/teleport_mainloop.asm:66 LDA PSI_TELEPORT_STATE
    case 0xC0EB36: cpu.execute_instruction<0xAD>(0x00A145, 3); return true;
    // src/misc/teleport_mainloop.asm:67 CMP #1
    case 0xC0EB39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/misc/teleport_mainloop.asm:67 CMP #1
    // Overlapping static entry reached from 0xC0EB39.
    case 0xC0EB3B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:68 BEQ @UNKNOWN7
    case 0xC0EB3C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/misc/teleport_mainloop.asm:69 CMP #2
    case 0xC0EB3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/misc/teleport_mainloop.asm:69 CMP #2
    // Overlapping static entry reached from 0xC0EB3E.
    case 0xC0EB40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/misc/teleport_mainloop.asm:70 BEQ @UNKNOWN8
    case 0xC0EB41: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/misc/teleport_mainloop.asm:71 BRA @UNKNOWN9
    case 0xC0EB43: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/misc/teleport_mainloop.asm:73 JSR UNKNOWN_C0E815
    case 0xC0EB45: cpu.execute_instruction<0x20>(0x00E7DA, 3); return true;
    // src/misc/teleport_mainloop.asm:74 JSL UNKNOWN_C0DD79
    case 0xC0EB48: cpu.execute_instruction<0x22>(0xC0DD41, 4); return true;
    // src/misc/teleport_mainloop.asm:75 JSR UNKNOWN_C0E897
    case 0xC0EB4C: cpu.execute_instruction<0x20>(0x00E85C, 3); return true;
    // src/misc/teleport_mainloop.asm:76 LDA PSI_TELEPORT_STYLE
    case 0xC0EB4F: cpu.execute_instruction<0xAD>(0x00A143, 3); return true;
    // src/misc/teleport_mainloop.asm:77 CMP #TELEPORT_STYLE::UNKNOWN
    case 0xC0EB52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/misc/teleport_mainloop.asm:77 CMP #TELEPORT_STYLE::UNKNOWN
    // Overlapping static entry reached from 0xC0EB52.
    case 0xC0EB54: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/misc/teleport_mainloop.asm:78 BNE @UNKNOWN9
    case 0xC0EB55: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00F99A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    // Overlapping static entry reached from 0xC0EB57.
    case 0xC0EB59: cpu.execute_instruction<0xF9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x0000C6, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    // Overlapping static entry reached from 0xC0EB5C.
    case 0xC0EB5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:79 LOADPTR MSG_EVT_MASTER_TLPT, @LOCAL00
    case 0xC0EB5F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/misc/teleport_mainloop.asm:80 JSL UNKNOWN_C46881
    case 0xC0EB61: cpu.execute_instruction<0x22>(0xC44603, 4); return true;
    // src/misc/teleport_mainloop.asm:81 BRA @UNKNOWN9
    case 0xC0EB65: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/misc/teleport_mainloop.asm:83 JSR UNKNOWN_C0E9BA
    case 0xC0EB67: cpu.execute_instruction<0x20>(0x00E984, 3); return true;
    // src/misc/teleport_mainloop.asm:84 LDA #10
    case 0xC0EB6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/misc/teleport_mainloop.asm:84 LDA #10
    // Overlapping static entry reached from 0xC0EB6A.
    case 0xC0EB6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:85 JSL UNKNOWN_C0DD2C
    case 0xC0EB6D: cpu.execute_instruction<0x22>(0xC0DCF4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x005425, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    // Overlapping static entry reached from 0xC0EB71.
    case 0xC0EB73: cpu.execute_instruction<0x54>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EB74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    // Overlapping static entry reached from 0xC0EB76.
    case 0xC0EB78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:87 LOADPTR UNKNOWN_C05200, @LOCAL00
    case 0xC0EB79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EB7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x004FEE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EB7B.
    case 0xC0EB7D: cpu.execute_instruction<0x4F>(0xA91285, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EB7E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EB7D.
    case 0xC0EB81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EB80.
    case 0xC0EB82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    case 0xC0EB83: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/misc/teleport_mainloop.asm:88 LOADPTR UNKNOWN_C04D78, @LOCAL01
    // Overlapping static entry reached from 0xC0EB81.
    case 0xC0EB84: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/misc/teleport_mainloop.asm:89 LDA #23
    case 0xC0EB85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/misc/teleport_mainloop.asm:89 LDA #23
    // Overlapping static entry reached from 0xC0EB84.
    case 0xC0EB86: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/misc/teleport_mainloop.asm:89 LDA #23
    // Overlapping static entry reached from 0xC0EB85.
    case 0xC0EB87: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/misc/teleport_mainloop.asm:90 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EB88: cpu.execute_instruction<0x22>(0xC42E83, 4); return true;
    // src/misc/teleport_mainloop.asm:91 JSR UNKNOWN_C0DE7C
    case 0xC0EB8C: cpu.execute_instruction<0x20>(0x00DE41, 3); return true;
    // src/misc/teleport_mainloop.asm:92 JSL UNKNOWN_C09451
    case 0xC0EB8F: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/misc/teleport_mainloop.asm:93 STZ UNREAD_7E5DBA
    case 0xC0EB93: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EB96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EB96.
    case 0xC0EB98: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EB99: cpu.execute_instruction<0x8D>(0x00A147, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EB9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0EB9C.
    case 0xC0EB9E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/misc/teleport_mainloop.asm:94 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED
    case 0xC0EB9F: cpu.execute_instruction<0x8D>(0x00A149, 3); return true;
    // src/misc/teleport_mainloop.asm:95 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC0EBA2: cpu.execute_instruction<0x9C>(0x0060DE, 3); return true;
    // src/misc/teleport_mainloop.asm:96 STZ PSI_TELEPORT_DESTINATION
    case 0xC0EBA5: cpu.execute_instruction<0x9C>(0x00A141, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/misc/teleport_mainloop.asm:97 END_C_FUNCTION
    case 0xC0EBA8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/misc/teleport_mainloop.asm:97 END_C_FUNCTION
    case 0xC0EBA9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
