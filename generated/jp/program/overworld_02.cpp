// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/overworld/inflict_sunstroke_check.asm (source_named).
bool execute_overworld_inflict_sunstroke_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20000: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20002: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20003: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20004.
    case 0xC20006: cpu.execute_instruction<0xFF>(0x1EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20007: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC20008: cpu.execute_instruction<0xAD>(0x00611E, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20077.
    case 0xC20009: cpu.execute_instruction<0x1E>(0x00F061, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20006.
    case 0xC2000A: cpu.execute_instruction<0x61>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    // Overlapping static entry reached from 0xC2000A.
    case 0xC2000C: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000D: cpu.execute_instruction<0x4C>(0x0000B5, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    // Overlapping static entry reached from 0xC2000C.
    case 0xC2000E: cpu.execute_instruction<0xB5>(0x000000, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:10 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC20010: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:11 AND #$000C
    case 0xC20013: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:11 AND #$000C
    // Overlapping static entry reached from 0xC20013.
    case 0xC20015: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:12 CMP #4
    case 0xC20016: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:12 CMP #4
    // Overlapping static entry reached from 0xC20016.
    case 0xC20018: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:13 BNEL @UNKNOWN11
    case 0xC20019: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:13 BNEL @UNKNOWN11
    case 0xC2001B: cpu.execute_instruction<0x4C>(0x0000B5, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:14 LDX #0
    case 0xC2001E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC2001E.
    case 0xC20020: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:15 STX @LOCAL01
    case 0xC20021: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:16 JMP @UNKNOWN10
    case 0xC20023: cpu.execute_instruction<0x4C>(0x0000AB, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20026: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:19 TXA
    case 0xC20028: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:20 CLC
    case 0xC20029: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:21 ADC #.LOWORD(GAME_STATE)
    case 0xC2002A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:21 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2002A.
    case 0xC2002C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:22 TAY
    case 0xC2002D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:23 LDA __BSS_START__ + game_state::unknown96,Y
    case 0xC2002E: cpu.execute_instruction<0xB9>(0x000093, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:24 AND #$00FF
    case 0xC20031: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC20031.
    case 0xC20033: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:25 BEQL @UNKNOWN11
    case 0xC20034: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:25 BEQL @UNKNOWN11
    case 0xC20036: cpu.execute_instruction<0x4C>(0x0000B5, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:26 AND #$00FF
    case 0xC20039: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC20039.
    case 0xC2003B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:27 CLC
    case 0xC2003C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:28 SBC #4
    case 0xC2003D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:28 SBC #4
    // Overlapping static entry reached from 0xC2003D.
    case 0xC2003F: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20040: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20042: cpu.execute_instruction<0x10>(0x000071, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20044: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:29 BRANCHGTS @UNKNOWN11
    case 0xC20046: cpu.execute_instruction<0x30>(0x00006D, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:30 LDA __BSS_START__+game_state::player_controlled_party_members,Y
    case 0xC20048: cpu.execute_instruction<0xB9>(0x000099, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:31 AND #$00FF
    case 0xC2004B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2004B.
    case 0xC2004D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:32 ASL
    case 0xC2004E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:33 TAX
    case 0xC2004F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:34 LDY CHOSEN_FOUR_PTRS,X
    case 0xC20050: cpu.execute_instruction<0xBC>(0x00514E, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:35 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC20053: cpu.execute_instruction<0x8C>(0x00514C, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:36 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC20056: cpu.execute_instruction<0xB9>(0x00000D, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:37 AND #$00FF
    case 0xC20059: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC20059.
    case 0xC2005B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:38 TAY
    case 0xC2005C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:39 BEQ @UNKNOWN6
    case 0xC2005D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:40 CPY #STATUS_0::COLD
    case 0xC2005F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:40 CPY #STATUS_0::COLD
    // Overlapping static entry reached from 0xC2005F.
    case 0xC20061: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:41 BNE @UNKNOWN9
    case 0xC20062: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:43 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC20064: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:44 LDA a:char_struct::guts,X
    case 0xC20067: cpu.execute_instruction<0xBD>(0x000017, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:45 AND #$00FF
    case 0xC2006A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC2006A.
    case 0xC2006C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:46 STA @VIRTUAL02
    case 0xC2006D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:47 LDA #30
    case 0xC2006F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:47 LDA #30
    // Overlapping static entry reached from 0xC2006F.
    case 0xC20071: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:48 SEC
    case 0xC20072: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:49 SBC @VIRTUAL02
    case 0xC20073: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:50 CMP #$8000
    case 0xC20075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:50 CMP #$8000
    // Overlapping static entry reached from 0xC20075.
    case 0xC20077: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:51 BLTEQ @UNKNOWN7
    case 0xC20078: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:51 BLTEQ @UNKNOWN7
    case 0xC2007A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:52 LDA #1
    case 0xC2007C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:52 LDA #1
    // Overlapping static entry reached from 0xC2007C.
    case 0xC2007E: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:54 LDY #100
    case 0xC2007F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:54 LDY #100
    // Overlapping static entry reached from 0xC2007F.
    case 0xC20081: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:55 XBA
    case 0xC20082: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:56 AND #$FF00
    case 0xC20083: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:56 AND #$FF00
    // Overlapping static entry reached from 0xC20083.
    case 0xC20085: cpu.execute_instruction<0xFF>(0x913D22, 4); return true;
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20086: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC20085.
    case 0xC20089: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    case 0xC2008A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    // Overlapping static entry reached from 0xC20089.
    case 0xC2008B: cpu.execute_instruction<0x0E>(0x008B22, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:59 JSL RAND
    case 0xC2008C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/overworld/inflict_sunstroke_check.asm:59 JSL RAND
    // Overlapping static entry reached from 0xC2008B.
    case 0xC2008E: cpu.execute_instruction<0x8E>(0x00A8C0, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:60 TAY
    case 0xC20090: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:61 LDA @LOCAL00
    case 0xC20091: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:62 STA @VIRTUAL02
    case 0xC20093: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:63 TYA
    case 0xC20095: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:64 CMP @VIRTUAL02
    case 0xC20096: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:65 BGT @UNKNOWN9
    case 0xC20098: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:65 BGT @UNKNOWN9
    case 0xC2009A: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2009C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20482.
    case 0xC2009D: cpu.execute_instruction<0x20>(0x0006A9, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:67 LDA #STATUS_0::SUNSTROKE
    case 0xC2009E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00AE06, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC200A0: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC2009E.
    case 0xC200A1: cpu.execute_instruction<0x4C>(0x009D51, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:69 STA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC200A3: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:71 LDX @LOCAL01
    case 0xC200A6: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:72 INX
    case 0xC200A8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:73 STX @LOCAL01
    case 0xC200A9: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:75 CPX #6
    case 0xC200AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:75 CPX #6
    // Overlapping static entry reached from 0xC200AB.
    case 0xC200AD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200AE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200B0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:76 BCCL @UNKNOWN2
    case 0xC200B2: cpu.execute_instruction<0x4C>(0x000026, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC200B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:79 END_C_FUNCTION
    case 0xC200B7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:79 END_C_FUNCTION
    case 0xC200B8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/init_entity.asm (source_named).
bool execute_overworld_init_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/init_entity.asm:5 PHA
    case 0xC092D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:6 STZ NEW_ENTITY_POS_Z
    case 0xC092D5: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/overworld/init_entity.asm:7 STZ NEW_ENTITY_VAR0
    case 0xC092D8: cpu.execute_instruction<0x9C>(0x000A2E, 3); return true;
    // src/overworld/init_entity.asm:8 STZ NEW_ENTITY_VAR1
    case 0xC092DB: cpu.execute_instruction<0x9C>(0x000A30, 3); return true;
    // src/overworld/init_entity.asm:9 STZ NEW_ENTITY_VAR2
    case 0xC092DE: cpu.execute_instruction<0x9C>(0x000A32, 3); return true;
    // src/overworld/init_entity.asm:10 STZ NEW_ENTITY_VAR3
    case 0xC092E1: cpu.execute_instruction<0x9C>(0x000A34, 3); return true;
    // src/overworld/init_entity.asm:11 STZ NEW_ENTITY_VAR4
    case 0xC092E4: cpu.execute_instruction<0x9C>(0x000A36, 3); return true;
    // src/overworld/init_entity.asm:12 STZ NEW_ENTITY_VAR5
    case 0xC092E7: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/overworld/init_entity.asm:13 STZ NEW_ENTITY_VAR6
    case 0xC092EA: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/overworld/init_entity.asm:14 STZ NEW_ENTITY_VAR7
    case 0xC092ED: cpu.execute_instruction<0x9C>(0x000A3C, 3); return true;
    // src/overworld/init_entity.asm:15 STZ NEW_ENTITY_PRIORITY
    case 0xC092F0: cpu.execute_instruction<0x9C>(0x000A40, 3); return true;
    // src/overworld/init_entity.asm:16 LDA #$0000
    case 0xC092F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/init_entity.asm:16 LDA #$0000
    // Overlapping static entry reached from 0xC092F3.
    case 0xC092F5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/init_entity.asm:17 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC092F6: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/overworld/init_entity.asm:18 LDA #$001E
    case 0xC092F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/overworld/init_entity.asm:18 LDA #$001E
    // Overlapping static entry reached from 0xC092F9.
    case 0xC092FB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/init_entity.asm:19 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC092FC: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/overworld/init_entity.asm:20 PLA
    case 0xC092FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:24 PHA
    case 0xC09300: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:25 PHY
    case 0xC09301: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:26 PHX
    case 0xC09302: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:27 LDA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09303: cpu.execute_instruction<0xAD>(0x000A42, 3); return true;
    // src/overworld/init_entity.asm:28 ASL
    case 0xC09306: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:29 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09307: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/overworld/init_entity.asm:30 LDA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0930A: cpu.execute_instruction<0xAD>(0x000A44, 3); return true;
    // src/overworld/init_entity.asm:31 ASL
    case 0xC0930D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:32 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0930E: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    case 0xC09311: cpu.execute_instruction<0x20>(0x009BE1, 3); return true;
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    // Overlapping static entry reached from 0xC09374.
    case 0xC09313: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:34 BCC @UNKNOWN0
    case 0xC09314: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/overworld/init_entity.asm:35 PLA
    case 0xC09316: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:36 PLA
    case 0xC09317: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:37 PLA
    case 0xC09318: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:38 LDA #$0000
    case 0xC09319: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/init_entity.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC09319.
    case 0xC0931B: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/overworld/init_entity.asm:39 RTL
    case 0xC0931C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:41 JSR UNKNOWN_C09D03
    case 0xC0931D: cpu.execute_instruction<0x20>(0x009CE2, 3); return true;
    // src/overworld/init_entity.asm:42 TYA
    case 0xC09320: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:43 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09321: cpu.execute_instruction<0x9D>(0x000AD0, 3); return true;
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    case 0xC09324: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    // Overlapping static entry reached from 0xC09324.
    case 0xC09326: cpu.execute_instruction<0xFF>(0x125099, 4); return true;
    // src/overworld/init_entity.asm:45 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09327: cpu.execute_instruction<0x99>(0x001250, 3); return true;
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    case 0xC0932A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x009FA7, 3); return true;
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    // Overlapping static entry reached from 0xC0932A.
    case 0xC0932C: cpu.execute_instruction<0x9F>(0x12149D, 4); return true;
    // src/overworld/init_entity.asm:47 STA ENTITY_MOVE_CALLBACK,X
    case 0xC0932D: cpu.execute_instruction<0x9D>(0x001214, 3); return true;
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    case 0xC09330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00A002, 3); return true;
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    // Overlapping static entry reached from 0xC09330.
    case 0xC09332: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009D, 2); else cpu.execute_instruction<0xA0>(0x009C9D, 3); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    case 0xC09333: cpu.execute_instruction<0x9D>(0x00119C, 3); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09332.
    case 0xC09334: cpu.execute_instruction<0x9C>(0x00A911, 3); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09332.
    case 0xC09335: cpu.execute_instruction<0x11>(0x0000A9, 2); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    case 0xC09336: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00A383, 3); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09335.
    case 0xC09337: cpu.execute_instruction<0x83>(0x0000A3, 2); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09336.
    case 0xC09338: cpu.execute_instruction<0xA3>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    case 0xC09339: cpu.execute_instruction<0x9D>(0x0011D8, 3); return true;
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    // Overlapping static entry reached from 0xC09338.
    case 0xC0933A: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    // Overlapping static entry reached from 0xC0933A.
    case 0xC0933B: cpu.execute_instruction<0x11>(0x0000AD, 2); return true;
    // src/overworld/init_entity.asm:52 LDA NEW_ENTITY_VAR0
    case 0xC0933C: cpu.execute_instruction<0xAD>(0x000A2E, 3); return true;
    // src/overworld/init_entity.asm:52 LDA NEW_ENTITY_VAR0
    // Overlapping static entry reached from 0xC0933B.
    case 0xC0933D: cpu.execute_instruction<0x2E>(0x009D0A, 3); return true;
    // src/overworld/init_entity.asm:53 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0933F: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // src/overworld/init_entity.asm:53 STA ENTITY_SCRIPT_VAR0_TABLE,X
    // Overlapping static entry reached from 0xC0933D.
    case 0xC09340: cpu.execute_instruction<0x54>(0x00AD0E, 3); return true;
    // src/overworld/init_entity.asm:54 LDA NEW_ENTITY_VAR1
    case 0xC09342: cpu.execute_instruction<0xAD>(0x000A30, 3); return true;
    // src/overworld/init_entity.asm:54 LDA NEW_ENTITY_VAR1
    // Overlapping static entry reached from 0xC09340.
    case 0xC09343: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/overworld/init_entity.asm:55 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC09345: cpu.execute_instruction<0x9D>(0x000E90, 3); return true;
    // src/overworld/init_entity.asm:56 LDA NEW_ENTITY_VAR2
    case 0xC09348: cpu.execute_instruction<0xAD>(0x000A32, 3); return true;
    // src/overworld/init_entity.asm:57 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0934B: cpu.execute_instruction<0x9D>(0x000ECC, 3); return true;
    // src/overworld/init_entity.asm:58 LDA NEW_ENTITY_VAR3
    case 0xC0934E: cpu.execute_instruction<0xAD>(0x000A34, 3); return true;
    // src/overworld/init_entity.asm:58 LDA NEW_ENTITY_VAR3
    // Overlapping static entry reached from 0xC09343.
    case 0xC0934F: cpu.execute_instruction<0x34>(0x00000A, 2); return true;
    // src/overworld/init_entity.asm:59 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC09351: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/overworld/init_entity.asm:60 LDA NEW_ENTITY_VAR4
    case 0xC09354: cpu.execute_instruction<0xAD>(0x000A36, 3); return true;
    // src/overworld/init_entity.asm:61 STA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC09357: cpu.execute_instruction<0x9D>(0x000F44, 3); return true;
    // src/overworld/init_entity.asm:62 LDA NEW_ENTITY_VAR5
    case 0xC0935A: cpu.execute_instruction<0xAD>(0x000A38, 3); return true;
    // src/overworld/init_entity.asm:63 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0935D: cpu.execute_instruction<0x9D>(0x000F80, 3); return true;
    // src/overworld/init_entity.asm:64 LDA NEW_ENTITY_VAR6
    case 0xC09360: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/overworld/init_entity.asm:65 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC09363: cpu.execute_instruction<0x9D>(0x000FBC, 3); return true;
    // src/overworld/init_entity.asm:66 LDA NEW_ENTITY_VAR7
    case 0xC09366: cpu.execute_instruction<0xAD>(0x000A3C, 3); return true;
    // src/overworld/init_entity.asm:67 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC09369: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // src/overworld/init_entity.asm:68 LDA NEW_ENTITY_PRIORITY
    case 0xC0936C: cpu.execute_instruction<0xAD>(0x000A40, 3); return true;
    // src/overworld/init_entity.asm:69 STA ENTITY_DRAW_PRIORITY,X
    case 0xC0936F: cpu.execute_instruction<0x9D>(0x001034, 3); return true;
    // src/overworld/init_entity.asm:70 LDA #$8000
    case 0xC09372: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/init_entity.asm:70 LDA #$8000
    // Overlapping static entry reached from 0xC09372.
    case 0xC09374: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:71 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09375: cpu.execute_instruction<0x9D>(0x000C38, 3); return true;
    // src/overworld/init_entity.asm:72 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09378: cpu.execute_instruction<0x9D>(0x000C74, 3); return true;
    // src/overworld/init_entity.asm:73 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0937B: cpu.execute_instruction<0x9D>(0x000CB0, 3); return true;
    // src/overworld/init_entity.asm:74 PLA
    case 0xC0937E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:75 STA ENTITY_ABS_X_TABLE,X
    case 0xC0937F: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/overworld/init_entity.asm:76 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC09382: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/overworld/init_entity.asm:77 PLA
    case 0xC09385: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:78 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09386: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/overworld/init_entity.asm:79 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC09389: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/overworld/init_entity.asm:80 LDA NEW_ENTITY_POS_Z
    case 0xC0938C: cpu.execute_instruction<0xAD>(0x000A3E, 3); return true;
    // src/overworld/init_entity.asm:81 STA ENTITY_ABS_Z_TABLE,X
    case 0xC0938F: cpu.execute_instruction<0x9D>(0x000BFC, 3); return true;
    // src/overworld/init_entity.asm:82 JSR UNKNOWN_C09C57
    case 0xC09392: cpu.execute_instruction<0x20>(0x009C36, 3); return true;
    // src/overworld/init_entity.asm:83 PLA
    case 0xC09395: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:84 BRA @UNKNOWN1
    case 0xC09396: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/overworld/init_entity.asm:85 PHA
    case 0xC09398: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:86 JSR UNKNOWN_C09C99
    case 0xC09399: cpu.execute_instruction<0x20>(0x009C78, 3); return true;
    // src/overworld/init_entity.asm:87 JSR UNKNOWN_C09D03
    case 0xC0939C: cpu.execute_instruction<0x20>(0x009CE2, 3); return true;
    // src/overworld/init_entity.asm:88 TYA
    case 0xC0939F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:89 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC093A0: cpu.execute_instruction<0x9D>(0x000AD0, 3); return true;
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    case 0xC093A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    // Overlapping static entry reached from 0xC093A3.
    case 0xC093A5: cpu.execute_instruction<0xFF>(0x125099, 4); return true;
    // src/overworld/init_entity.asm:91 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC093A6: cpu.execute_instruction<0x99>(0x001250, 3); return true;
    // src/overworld/init_entity.asm:92 PLA
    case 0xC093A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:94 STA ENTITY_SCRIPT_TABLE,X
    case 0xC093AA: cpu.execute_instruction<0x9D>(0x000A58, 3); return true;
    // src/overworld/init_entity.asm:95 PHX
    case 0xC093AD: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:96 ASL
    case 0xC093AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:97 ADC ENTITY_SCRIPT_TABLE,X
    case 0xC093AF: cpu.execute_instruction<0x7D>(0x000A58, 3); return true;
    // src/overworld/init_entity.asm:98 TXY
    case 0xC093B2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:99 TAX
    case 0xC093B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:100 LDA f:EVENT_SCRIPT_POINTERS+2,X
    case 0xC093B4: cpu.execute_instruction<0xBF>(0xC40031, 4); return true;
    // src/overworld/init_entity.asm:101 TAY
    case 0xC093B8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:102 LDA f:EVENT_SCRIPT_POINTERS,X
    case 0xC093B9: cpu.execute_instruction<0xBF>(0xC4002F, 4); return true;
    // src/overworld/init_entity.asm:103 PLX
    case 0xC093BD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:104 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC093BE: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // src/overworld/init_entity.asm:105 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC093C1: cpu.execute_instruction<0xDE>(0x0010E8, 3); return true;
    // src/overworld/init_entity.asm:106 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC093C4: cpu.execute_instruction<0x9E>(0x000DA0, 3); return true;
    // src/overworld/init_entity.asm:107 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC093C7: cpu.execute_instruction<0x9E>(0x000CEC, 3); return true;
    // src/overworld/init_entity.asm:108 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC093CA: cpu.execute_instruction<0x9E>(0x000DDC, 3); return true;
    // src/overworld/init_entity.asm:109 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC093CD: cpu.execute_instruction<0x9E>(0x000D28, 3); return true;
    // src/overworld/init_entity.asm:110 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC093D0: cpu.execute_instruction<0x9E>(0x000E18, 3); return true;
    // src/overworld/init_entity.asm:111 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC093D3: cpu.execute_instruction<0x9E>(0x000D64, 3); return true;
    // src/overworld/init_entity.asm:112 BRA UNKNOWN_C092F5_UNKNOWN4
    case 0xC093D6: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/overworld/init_entity.asm:114 PHA
    case 0xC093D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:115 TXA
    case 0xC093D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:116 ASL
    case 0xC093DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:117 TAX
    case 0xC093DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:118 PLA
    case 0xC093DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:119 JSL INIT_ENTITY_UNKNOWN2
    case 0xC093DD: cpu.execute_instruction<0x22>(0xC093E2, 4); return true;
    // src/overworld/init_entity.asm:120 RTL
    case 0xC093E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:122 PHY
    case 0xC093E2: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:123 PHA
    case 0xC093E3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:124 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC093E4: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/overworld/init_entity.asm:125 BPL @DONT_LOOP
    case 0xC093E7: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // src/overworld/init_entity.asm:127 BRA @LOOP
    case 0xC093E9: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/overworld/init_entity.asm:129 JSR UNKNOWN_C09C99
    case 0xC093EB: cpu.execute_instruction<0x20>(0x009C78, 3); return true;
    // src/overworld/init_entity.asm:130 JSR UNKNOWN_C09D03
    case 0xC093EE: cpu.execute_instruction<0x20>(0x009CE2, 3); return true;
    // src/overworld/init_entity.asm:131 TYA
    case 0xC093F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:132 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC093F2: cpu.execute_instruction<0x9D>(0x000AD0, 3); return true;
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    case 0xC093F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    // Overlapping static entry reached from 0xC093F5.
    case 0xC093F7: cpu.execute_instruction<0xFF>(0x125099, 4); return true;
    // src/overworld/init_entity.asm:134 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC093F8: cpu.execute_instruction<0x99>(0x001250, 3); return true;
    // src/overworld/init_entity.asm:135 PLA
    case 0xC093FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:136 PLY
    case 0xC093FC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:138 PHY
    case 0xC093FD: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:139 PHA
    case 0xC093FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:140 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC093FF: cpu.execute_instruction<0x20>(0x009D80, 3); return true;
    // src/overworld/init_entity.asm:141 TXY
    case 0xC09402: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:142 LDX ENTITY_SCRIPT_INDEX_TABLE,Y
    case 0xC09403: cpu.execute_instruction<0xBE>(0x000AD0, 3); return true;
    // src/overworld/init_entity.asm:143 PLA
    case 0xC09406: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:144 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC09407: cpu.execute_instruction<0x9D>(0x0013F4, 3); return true;
    // src/overworld/init_entity.asm:145 PLA
    case 0xC0940A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:146 AND #$00FF
    case 0xC0940B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/init_entity.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC0940B.
    case 0xC0940D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:147 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC0940E: cpu.execute_instruction<0x9D>(0x001480, 3); return true;
    // src/overworld/init_entity.asm:148 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09411: cpu.execute_instruction<0x9E>(0x001368, 3); return true;
    // src/overworld/init_entity.asm:149 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09414: cpu.execute_instruction<0x9E>(0x0012DC, 3); return true;
    // src/overworld/init_entity.asm:150 TYA
    case 0xC09417: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:151 LSR
    case 0xC09418: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:152 CLC
    case 0xC09419: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:154 RTL
    case 0xC0941A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize.asm (source_named).
bool execute_overworld_initialize_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0004B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC0004F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0004F.
    case 0xC00051: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize.asm:6 END_STACK_VARS
    case 0xC00052: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00053: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00053.
    case 0xC00055: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00056: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00058: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00058.
    case 0xC0005A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0005B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/initialize.asm:8 JSL OVERWORLD_SETUP_VRAM
    case 0xC0005D: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/overworld/initialize.asm:9 LDA #0
    case 0xC00061: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/initialize.asm:9 LDA #0
    // Overlapping static entry reached from 0xC00061.
    case 0xC00063: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/overworld/initialize.asm:10 STA [@VIRTUAL06]
    case 0xC00064: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00066: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00068: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC0006E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC0006E.
    case 0xC00070: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // include/macros.asm:1155 TYX
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00071: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00072: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00074: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    case 0xC00076: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC00074.
    case 0xC00077: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/initialize.asm:11 COPY_TO_VRAM1P @VIRTUAL06, $0000, $0000, 3
    // Overlapping static entry reached from 0xC00077.
    case 0xC00079: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00FFA9, 3); return true;
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    case 0xC0007A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC00079.
    case 0xC0007B: cpu.execute_instruction<0xFF>(0xF68DFF, 4); return true;
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0007A.
    case 0xC0007C: cpu.execute_instruction<0xFF>(0x46F68D, 4); return true;
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    case 0xC0007D: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    // Overlapping static entry reached from 0xC0007B.
    case 0xC0007F: cpu.execute_instruction<0x46>(0x00008D, 2); return true;
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    case 0xC00080: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC0007F.
    case 0xC00081: cpu.execute_instruction<0xF4>(0x002B46, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize.asm:16 END_C_FUNCTION
    case 0xC00083: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize.asm:16 END_C_FUNCTION
    case 0xC00084: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_item_transformation.asm (source_named).
bool execute_overworld_initialize_item_transformation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46535: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46537: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46538: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC46539: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4653A.
    case 0xC4653C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC4653E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:9 TAX
    case 0xC4653F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:10 STX @LOCAL01
    case 0xC46540: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:11 TXA
    case 0xC46542: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:12 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC46543: cpu.execute_instruction<0x22>(0xC46518, 4); return true;
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    case 0xC46547: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    // Overlapping static entry reached from 0xC46547.
    case 0xC46549: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/initialize_item_transformation.asm:14 BNE @UNKNOWN0
    case 0xC4654A: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC4654C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:16 LDA #60
    case 0xC4654E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x008D3C, 3); return true;
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC46550: cpu.execute_instruction<0x8D>(0x00A132, 3); return true;
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC4654E.
    case 0xC46551: cpu.execute_instruction<0x32>(0x0000A1, 2); return true;
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC46553: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    case 0xC46555: cpu.execute_instruction<0xEE>(0x00A130, 3); return true;
    // src/overworld/initialize_item_transformation.asm:21 LDX @LOCAL01
    case 0xC46558: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:22 TXA
    case 0xC4655A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4655B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4655C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:24 CLC
    case 0xC4655D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC4655E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x00A120, 3); return true;
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC4655E.
    case 0xC46560: cpu.execute_instruction<0xA1>(0x0000A8, 2); return true;
    // src/overworld/initialize_item_transformation.asm:26 TAY
    case 0xC46561: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:27 STY @LOCAL00
    case 0xC46562: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46564: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00F41B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46564.
    case 0xC46566: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46567: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC46569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46569.
    case 0xC4656B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4656C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/initialize_item_transformation.asm:29 TXA
    case 0xC4656E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC4656F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46571: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46572: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC46573: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/initialize_item_transformation.asm:31 TAX
    case 0xC46575: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:32 STX @LOCAL01
    case 0xC46576: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:33 TXA
    case 0xC46578: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:34 INC
    case 0xC46579: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:35 PHA
    case 0xC4657A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4657F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC46581: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:37 PLA
    case 0xC46583: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:38 CLC
    case 0xC46584: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:39 ADC @VIRTUAL0A
    case 0xC46585: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:40 STA @VIRTUAL0A
    case 0xC46587: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC46589: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:42 LDA [@VIRTUAL0A]
    case 0xC4658B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:43 STA a:loaded_timed_item_transformation::sfx,Y
    case 0xC4658D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/initialize_item_transformation.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC46590: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:45 TXA
    case 0xC46592: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:46 INC
    case 0xC46593: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:47 INC
    case 0xC46594: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46595: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46597: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46599: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4659B: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:49 CLC
    case 0xC4659D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:50 ADC @VIRTUAL0A
    case 0xC4659E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:51 STA @VIRTUAL0A
    case 0xC465A0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC465A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:53 LDA [@VIRTUAL0A]
    case 0xC465A4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:54 STA @VIRTUAL00
    case 0xC465A6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:55 STA a:loaded_timed_item_transformation::sfx_frequency,Y
    case 0xC465A8: cpu.execute_instruction<0x99>(0x000001, 3); return true;
    // src/overworld/initialize_item_transformation.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC465AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    case 0xC465AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    // Overlapping static entry reached from 0xC465AD.
    case 0xC465AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/initialize_item_transformation.asm:58 JSL RAND_MOD
    case 0xC465B0: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/overworld/initialize_item_transformation.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC465B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:60 PHA
    case 0xC465B6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:61 LDA @VIRTUAL00
    case 0xC465B7: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:62 SEP #PROC_FLAGS::INDEX8
    case 0xC465B9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:63 PLX
    case 0xC465BB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:64 STX @VIRTUAL00
    case 0xC465BC: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:65 CLC
    case 0xC465BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:66 ADC @VIRTUAL00
    case 0xC465BF: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:67 DEC
    case 0xC465C1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC465C2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:69 LDY @LOCAL00
    case 0xC465C4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_item_transformation.asm:70 STA a:loaded_timed_item_transformation::sfx_countdown,Y
    case 0xC465C6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/initialize_item_transformation.asm:71 LDX @LOCAL01
    case 0xC465C9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC465CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:73 TXA
    case 0xC465CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:74 INC
    case 0xC465CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:75 INC
    case 0xC465CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:76 INC
    case 0xC465D0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:77 INC
    case 0xC465D1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:78 CLC
    case 0xC465D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:79 ADC @VIRTUAL06
    case 0xC465D3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:80 STA @VIRTUAL06
    case 0xC465D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC465D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:82 LDA [@VIRTUAL06]
    case 0xC465D9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:83 STA a:loaded_timed_item_transformation::transformation_countdown,Y
    case 0xC465DB: cpu.execute_instruction<0x99>(0x000003, 3); return true;
    // src/overworld/initialize_item_transformation.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC465DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC465E0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC465E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_map.asm (source_named).
bool execute_overworld_initialize_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC019C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC019CD.
    case 0xC019CF: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019D0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019D1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    case 0xC019D2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC019CF.
    case 0xC019D3: cpu.execute_instruction<0x0E>(0x000486, 3); return true;
    // src/overworld/initialize_map.asm:11 STX @VIRTUAL04
    case 0xC019D4: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:12 STA @VIRTUAL02
    case 0xC019D6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:13 LDX @VIRTUAL04
    case 0xC019D8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:14 LDA @VIRTUAL02
    case 0xC019DA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:15 JSL UNKNOWN_C068F4
    case 0xC019DC: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/overworld/initialize_map.asm:16 LDX @VIRTUAL04
    case 0xC019E0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:17 LDA @VIRTUAL02
    case 0xC019E2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:18 JSL LOAD_MAP_AT_POSITION
    case 0xC019E4: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/overworld/initialize_map.asm:19 LDY @LOCAL00
    case 0xC019E8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_map.asm:20 LDX @VIRTUAL04
    case 0xC019EA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:21 LDA @VIRTUAL02
    case 0xC019EC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:22 JSL UNKNOWN_C03FA9
    case 0xC019EE: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/overworld/initialize_map.asm:23 JSL UNKNOWN_C069AF
    case 0xC019F2: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019F7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_map_palette_fade.asm (source_named).
bool execute_overworld_initialize_map_palette_fade_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46852: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC4682F.
    case 0xC46853: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46854: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46855: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46856: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46857: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC46857.
    case 0xC46859: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4685A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4685B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    case 0xC4685C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC46859.
    case 0xC4685D: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4685E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4685D.
    case 0xC4685F: cpu.execute_instruction<0x00>(0x000078, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4685E.
    case 0xC46860: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46861: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC46863.
    case 0xC46865: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46866: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:14 STZ @LOCAL03
    case 0xC46868: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:15 JMP @UNKNOWN1
    case 0xC4686A: cpu.execute_instruction<0x4C>(0x00690E, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:17 LDA @LOCAL03
    case 0xC4686D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:18 ASL
    case 0xC4686F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:19 STA @VIRTUAL02
    case 0xC46870: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:20 CLC
    case 0xC46872: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC46873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000240, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC46873.
    case 0xC46875: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:22 STA @LOCAL02
    case 0xC46876: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:23 LDA (@LOCAL02)
    case 0xC46878: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:24 STA @LOCAL01
    case 0xC4687A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:25 LDA [@VIRTUAL06]
    case 0xC4687C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:26 STA @VIRTUAL04
    case 0xC4687E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:27 LDY @LOCAL04
    case 0xC46880: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:28 LDA @VIRTUAL04
    case 0xC46882: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    case 0xC46884: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    // Overlapping static entry reached from 0xC46884.
    case 0xC46886: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:30 TAX
    case 0xC46887: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:31 LDA @LOCAL01
    case 0xC46888: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    case 0xC4688A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    // Overlapping static entry reached from 0xC4688A.
    case 0xC4688C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:33 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4688D: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:34 LDX @VIRTUAL02
    case 0xC46890: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:35 STA BUFFER + $7900,X
    case 0xC46892: cpu.execute_instruction<0x9F>(0x7F7900, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:36 LDY @LOCAL04
    case 0xC46896: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:37 LDA @VIRTUAL04
    case 0xC46898: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    case 0xC4689A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC4689A.
    case 0xC4689C: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:39 LSR
    case 0xC4689D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:40 LSR
    case 0xC4689E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:41 LSR
    case 0xC4689F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:42 LSR
    case 0xC468A0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:43 LSR
    case 0xC468A1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:44 TAX
    case 0xC468A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:45 LDA @LOCAL01
    case 0xC468A3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    case 0xC468A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC468A5.
    case 0xC468A7: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:47 LSR
    case 0xC468A8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:48 LSR
    case 0xC468A9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:49 LSR
    case 0xC468AA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:50 LSR
    case 0xC468AB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:51 LSR
    case 0xC468AC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:52 JSR GET_COLOUR_FADE_SLOPE
    case 0xC468AD: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:53 LDX @VIRTUAL02
    case 0xC468B0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:54 STA BUFFER + $7A00,X
    case 0xC468B2: cpu.execute_instruction<0x9F>(0x7F7A00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:55 LDY @LOCAL04
    case 0xC468B6: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:56 STY @LOCAL00
    case 0xC468B8: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    case 0xC468BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    // Overlapping static entry reached from 0xC468BA.
    case 0xC468BC: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    case 0xC468BD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC468BC.
    case 0xC468BE: cpu.execute_instruction<0x04>(0x000029, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    case 0xC468BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468BE.
    case 0xC468C0: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468BF.
    case 0xC468C1: cpu.execute_instruction<0x7C>(0x003D22, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:60 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC468C2: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:61 TAX
    case 0xC468C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    case 0xC468C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    // Overlapping static entry reached from 0xC468C7.
    case 0xC468C9: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    case 0xC468CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    // Overlapping static entry reached from 0xC468C9.
    case 0xC468CB: cpu.execute_instruction<0x10>(0x000029, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    case 0xC468CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468CB.
    case 0xC468CD: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468CC.
    case 0xC468CE: cpu.execute_instruction<0x7C>(0x003D22, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:65 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC468CF: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:66 LDY @LOCAL00
    case 0xC468D3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:67 JSR GET_COLOUR_FADE_SLOPE
    case 0xC468D5: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:68 LDX @VIRTUAL02
    case 0xC468D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:69 STA BUFFER + $7B00,X
    case 0xC468DA: cpu.execute_instruction<0x9F>(0x7F7B00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:70 LDA (@LOCAL02)
    case 0xC468DE: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    case 0xC468E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    // Overlapping static entry reached from 0xC468E0.
    case 0xC468E2: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:72 XBA
    case 0xC468E3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    case 0xC468E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    // Overlapping static entry reached from 0xC468E4.
    case 0xC468E6: cpu.execute_instruction<0xFF>(0x9F02A6, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:74 LDX @VIRTUAL02
    case 0xC468E7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    case 0xC468E9: cpu.execute_instruction<0x9F>(0x7F7C00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    // Overlapping static entry reached from 0xC468E6.
    case 0xC468EA: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:76 LDA (@LOCAL02)
    case 0xC468ED: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    case 0xC468EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC468EF.
    case 0xC468F1: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:78 ASL
    case 0xC468F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:79 ASL
    case 0xC468F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:80 ASL
    case 0xC468F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    case 0xC468F5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC468CB.
    case 0xC468F6: cpu.execute_instruction<0x02>(0x00009F, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:82 STA BUFFER + $7D00,X
    case 0xC468F7: cpu.execute_instruction<0x9F>(0x7F7D00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:83 LDA (@LOCAL02)
    case 0xC468FB: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    case 0xC468FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468FD.
    case 0xC468FF: cpu.execute_instruction<0x7C>(0x004A4A, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:85 LSR
    case 0xC46900: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:86 LSR
    case 0xC46901: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:87 LDX @VIRTUAL02
    case 0xC46902: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:88 STA BUFFER + $7E00,X
    case 0xC46904: cpu.execute_instruction<0x9F>(0x7F7E00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:89 INC @VIRTUAL06
    case 0xC46908: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:90 INC @VIRTUAL06
    case 0xC4690A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:91 INC @LOCAL03
    case 0xC4690C: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:93 LDA @LOCAL03
    case 0xC4690E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    case 0xC46910: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC46910.
    case 0xC46912: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46913: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46915: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46917: cpu.execute_instruction<0x4C>(0x00686D, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC43FFF.
    case 0xC46918: cpu.execute_instruction<0x6D>(0x002B68, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC4691A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC4691B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_misc_object_data.asm (source_named).
bool execute_overworld_initialize_misc_object_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_misc_object_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01A7F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    case 0xC01A81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    // Overlapping static entry reached from 0xC01A81.
    case 0xC01A83: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:6 BRA @UNKNOWN1
    case 0xC01A84: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:8 TYA
    case 0xC01A86: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:9 ASL
    case 0xC01A87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:10 TAX
    case 0xC01A88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:11 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC01A89: cpu.execute_instruction<0x9E>(0x002F30, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC01A8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC01A8C.
    case 0xC01A8E: cpu.execute_instruction<0xFF>(0x2C9C9D, 4); return true;
    // src/overworld/initialize_misc_object_data.asm:13 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC01A8F: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:14 STA ENTITY_NPC_IDS,X
    case 0xC01A92: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:15 INY
    case 0xC01A95: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    case 0xC01A96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC01A96.
    case 0xC01A98: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:18 BCC @UNKNOWN0
    case 0xC01A99: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_misc_object_data.asm:19 END_C_FUNCTION
    case 0xC01A9B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_your_sanctuary_display.asm (source_named).
bool execute_overworld_initialize_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B0A9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B0AD.
    case 0xC4B0AF: cpu.execute_instruction<0xFF>(0x8C9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0B0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4B0B1: cpu.execute_instruction<0x9C>(0x00B68C, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4B0AF.
    case 0xC4B0B3: cpu.execute_instruction<0xB6>(0x00009C, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B0B4: cpu.execute_instruction<0x9C>(0x00B68E, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4B0B3.
    case 0xC4B0B5: cpu.execute_instruction<0x8E>(0x009CB6, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B0B7: cpu.execute_instruction<0x9C>(0x00B690, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4B0B5.
    case 0xC4B0B8: cpu.execute_instruction<0x90>(0x0000B6, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC4B0BA: cpu.execute_instruction<0x9C>(0x0047F8, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:11 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC4B0BD: cpu.execute_instruction<0x9C>(0x0047FA, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    case 0xC4B0C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4B0C0.
    case 0xC4B0C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:13 STA @LOCAL00
    case 0xC4B0C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:14 BRA @UNKNOWN1
    case 0xC4B0C5: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:16 ASL
    case 0xC4B0C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:17 TAX
    case 0xC4B0C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:18 STZ LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4B0C9: cpu.execute_instruction<0x9E>(0x00B692, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:19 LDA @LOCAL00
    case 0xC4B0CC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:20 INC
    case 0xC4B0CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:21 STA @LOCAL00
    case 0xC4B0CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    case 0xC4B0D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    // Overlapping static entry reached from 0xC4B0D1.
    case 0xC4B0D3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:24 BCC @UNKNOWN0
    case 0xC4B0D4: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:26 LDA #$10
    case 0xC4B0D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008D10, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    case 0xC4B0DA: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0D8.
    case 0xC4B0DB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0DB.
    case 0xC4B0DC: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC4B0DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4B0DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4B0E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/is_valid_item_transformation.asm (source_named).
bool execute_overworld_is_valid_item_transformation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/is_valid_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46518: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    case 0xC4651A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    // Overlapping static entry reached from 0xC4651A.
    case 0xC4651C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4651D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC4651E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/is_valid_item_transformation.asm:9 TAX
    case 0xC4651F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/is_valid_item_transformation.asm:10 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::transformation_countdown,X
    case 0xC46520: cpu.execute_instruction<0xBD>(0x00A123, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    case 0xC46523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC46523.
    case 0xC46525: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:12 BNE @UNKNOWN0
    case 0xC46526: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:13 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::sfx_frequency,X
    case 0xC46528: cpu.execute_instruction<0xBD>(0x00A121, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    case 0xC4652B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4652B.
    case 0xC4652D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:15 BEQ @UNKNOWN1
    case 0xC4652E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    case 0xC46530: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    // Overlapping static entry reached from 0xC46530.
    case 0xC46532: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:19 TYA
    case 0xC46533: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:20 END_C_FUNCTION
    case 0xC46534: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_collision_column.asm (source_named).
bool execute_overworld_load_collision_column_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_collision_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00D90: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D92: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D93: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D94: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00D95.
    case 0xC00D97: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D98: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D99: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    case 0xC00D9A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC00D97.
    case 0xC00D9B: cpu.execute_instruction<0x12>(0x00004A, 2); return true;
    // src/overworld/load_collision_column.asm:11 LSR
    case 0xC00D9C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:12 LSR
    case 0xC00D9D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:13 AND #$000F
    case 0xC00D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_collision_column.asm:13 AND #$000F
    // Overlapping static entry reached from 0xC00D9E.
    case 0xC00DA0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:14 ASL
    case 0xC00DA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:15 CLC
    case 0xC00DA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00DA3.
    case 0xC00DA5: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    case 0xC00DA6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC00DA5.
    case 0xC00DA7: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/load_collision_column.asm:18 LDA @LOCAL02
    case 0xC00DA8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:19 AND #$003F
    case 0xC00DAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/overworld/load_collision_column.asm:19 AND #$003F
    // Overlapping static entry reached from 0xC00DAA.
    case 0xC00DAC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_collision_column.asm:20 CLC
    case 0xC00DAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    case 0xC00DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00E000, 3); return true;
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    // Overlapping static entry reached from 0xC00DAE.
    case 0xC00DB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AA, 2); else cpu.execute_instruction<0xE0>(0x0086AA, 3); return true;
    // src/overworld/load_collision_column.asm:22 TAX
    case 0xC00DB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    case 0xC00DB2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    // Overlapping static entry reached from 0xC00DB0.
    case 0xC00DB3: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    case 0xC00DB4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    // Overlapping static entry reached from 0xC00DB3.
    case 0xC00DB5: cpu.execute_instruction<0x12>(0x000029, 2); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    case 0xC00DB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DB5.
    case 0xC00DB7: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DB6.
    case 0xC00DB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:26 STA @VIRTUAL04
    case 0xC00DB9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_collision_column.asm:27 LDY #0
    case 0xC00DBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:27 LDY #0
    // Overlapping static entry reached from 0xC00DBB.
    case 0xC00DBD: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_collision_column.asm:28 STY @LOCAL00
    case 0xC00DBE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:29 BRA @UNKNOWN1
    case 0xC00DC0: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/overworld/load_collision_column.asm:31 LDX @VIRTUAL02
    case 0xC00DC2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:32 LDA __BSS_START__,X
    case 0xC00DC4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:33 ASL
    case 0xC00DC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:34 TAX
    case 0xC00DC8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:35 LDA f:TILE_COLLISION_BUFFER,X
    case 0xC00DC9: cpu.execute_instruction<0xBF>(0x7FF800, 4); return true;
    // src/overworld/load_collision_column.asm:36 STA @LOCAL02
    case 0xC00DCD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:37 LDA @VIRTUAL02
    case 0xC00DCF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:38 CLC
    case 0xC00DD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:39 ADC #32
    case 0xC00DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/overworld/load_collision_column.asm:39 ADC #32
    // Overlapping static entry reached from 0xC00DD2.
    case 0xC00DD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:40 STA @VIRTUAL02
    case 0xC00DD5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DD7.
    case 0xC00DD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DDA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DDC.
    case 0xC00DDE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DDF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_collision_column.asm:42 LDA @LOCAL02
    case 0xC00DE1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:43 CLC
    case 0xC00DE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:44 ADC @VIRTUAL04
    case 0xC00DE4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/load_collision_column.asm:45 CLC
    case 0xC00DE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:46 ADC @VIRTUAL06
    case 0xC00DE7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:47 STA @VIRTUAL06
    case 0xC00DE9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:48 STA @VIRTUAL0A
    case 0xC00DEB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    case 0xC00DED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC00E67.
    case 0xC00DEE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:50 STA @VIRTUAL0A+2
    case 0xC00DEF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_collision_column.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC00DF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_collision_column.asm:52 LDA [@VIRTUAL0A]
    case 0xC00DF3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:53 LDX @LOCAL01
    case 0xC00DF5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:54 STA __BSS_START__,X
    case 0xC00DF7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:55 LDY #4
    case 0xC00DFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/load_collision_column.asm:55 LDY #4
    // Overlapping static entry reached from 0xC00DFA.
    case 0xC00DFC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:56 LDA [@VIRTUAL06],Y
    case 0xC00DFD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:57 STA __BSS_START__+64,X
    case 0xC00DFF: cpu.execute_instruction<0x9D>(0x000040, 3); return true;
    // src/overworld/load_collision_column.asm:58 LDY #8
    case 0xC00E02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/load_collision_column.asm:58 LDY #8
    // Overlapping static entry reached from 0xC00E02.
    case 0xC00E04: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:59 LDA [@VIRTUAL06],Y
    case 0xC00E05: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:60 STA __BSS_START__+128,X
    case 0xC00E07: cpu.execute_instruction<0x9D>(0x000080, 3); return true;
    // src/overworld/load_collision_column.asm:61 LDY #12
    case 0xC00E0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/overworld/load_collision_column.asm:61 LDY #12
    // Overlapping static entry reached from 0xC00E0A.
    case 0xC00E0C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:62 LDA [@VIRTUAL06],Y
    case 0xC00E0D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:63 STA __BSS_START__+192,X
    case 0xC00E0F: cpu.execute_instruction<0x9D>(0x0000C0, 3); return true;
    // src/overworld/load_collision_column.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC00E12: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_collision_column.asm:65 TXA
    case 0xC00E14: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:66 CLC
    case 0xC00E15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:67 ADC #256
    case 0xC00E16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/load_collision_column.asm:67 ADC #256
    // Overlapping static entry reached from 0xC00E16.
    case 0xC00E18: cpu.execute_instruction<0x01>(0x0000AA, 2); return true;
    // src/overworld/load_collision_column.asm:68 TAX
    case 0xC00E19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:69 STX @LOCAL01
    case 0xC00E1A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:70 LDY @LOCAL00
    case 0xC00E1C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:71 INY
    case 0xC00E1E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:72 STY @LOCAL00
    case 0xC00E1F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:74 CPY #16
    case 0xC00E21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/overworld/load_collision_column.asm:74 CPY #16
    // Overlapping static entry reached from 0xC00E21.
    case 0xC00E23: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_collision_column.asm:75 BCC @UNKNOWN0
    case 0xC00E24: cpu.execute_instruction<0x90>(0x00009C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E26: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E27: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_collision_row.asm (source_named).
bool execute_overworld_load_collision_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_collision_row.asm:3 BEGIN_C_FUNCTION
    case 0xC00D05: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D07: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D08: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D09: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00D0A.
    case 0xC00D0C: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D0D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00D0E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:10 TXA
    case 0xC00D0F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:11 STA @LOCAL02
    case 0xC00D10: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:12 LSR
    case 0xC00D12: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:13 LSR
    case 0xC00D13: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:14 AND #$000F
    case 0xC00D14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_collision_row.asm:14 AND #$000F
    // Overlapping static entry reached from 0xC00D14.
    case 0xC00D16: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:15 ASL
    case 0xC00D17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:16 ASL
    case 0xC00D18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:17 ASL
    case 0xC00D19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:18 ASL
    case 0xC00D1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:19 ASL
    case 0xC00D1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:20 CLC
    case 0xC00D1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:21 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00D1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_collision_row.asm:21 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00D1D.
    case 0xC00D1F: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_collision_row.asm:22 STA @VIRTUAL02
    case 0xC00D20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:22 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC00D1F.
    case 0xC00D21: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/load_collision_row.asm:23 LDA @LOCAL02
    case 0xC00D22: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:24 AND #$003F
    case 0xC00D24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/overworld/load_collision_row.asm:24 AND #$003F
    // Overlapping static entry reached from 0xC00D24.
    case 0xC00D26: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:25 ASL
    case 0xC00D27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:26 ASL
    case 0xC00D28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:27 ASL
    case 0xC00D29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:28 ASL
    case 0xC00D2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:29 ASL
    case 0xC00D2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:30 ASL
    case 0xC00D2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:31 CLC
    case 0xC00D2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:32 ADC #.LOWORD(LOADED_COLLISION_TILES)
    case 0xC00D2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00E000, 3); return true;
    // src/overworld/load_collision_row.asm:32 ADC #.LOWORD(LOADED_COLLISION_TILES)
    // Overlapping static entry reached from 0xC00D2E.
    case 0xC00D30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AA, 2); else cpu.execute_instruction<0xE0>(0x0086AA, 3); return true;
    // src/overworld/load_collision_row.asm:33 TAX
    case 0xC00D31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:34 STX @LOCAL01
    case 0xC00D32: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:34 STX @LOCAL01
    // Overlapping static entry reached from 0xC00D30.
    case 0xC00D33: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/overworld/load_collision_row.asm:35 LDA @LOCAL02
    case 0xC00D34: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:35 LDA @LOCAL02
    // Overlapping static entry reached from 0xC00D33.
    case 0xC00D35: cpu.execute_instruction<0x12>(0x000029, 2); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    case 0xC00D36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    // Overlapping static entry reached from 0xC00D35.
    case 0xC00D37: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    // Overlapping static entry reached from 0xC00D36.
    case 0xC00D38: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:37 ASL
    case 0xC00D39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:38 ASL
    case 0xC00D3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:39 STA @VIRTUAL04
    case 0xC00D3B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_collision_row.asm:40 LDY #0
    case 0xC00D3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:40 LDY #0
    // Overlapping static entry reached from 0xC00D3D.
    case 0xC00D3F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_collision_row.asm:41 STY @LOCAL00
    case 0xC00D40: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:42 BRA @UNKNOWN1
    case 0xC00D42: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/overworld/load_collision_row.asm:44 LDX @VIRTUAL02
    case 0xC00D44: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:45 LDA __BSS_START__,X
    case 0xC00D46: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:46 ASL
    case 0xC00D49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:47 TAX
    case 0xC00D4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:48 LDA f:TILE_COLLISION_BUFFER,X
    case 0xC00D4B: cpu.execute_instruction<0xBF>(0x7FF800, 4); return true;
    // src/overworld/load_collision_row.asm:49 STA @LOCAL02
    case 0xC00D4F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:50 INC @VIRTUAL02
    case 0xC00D51: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:51 INC @VIRTUAL02
    case 0xC00D53: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00D55.
    case 0xC00D57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D58: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00D5A.
    case 0xC00D5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D5D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_collision_row.asm:53 LDA @LOCAL02
    case 0xC00D5F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:54 CLC
    case 0xC00D61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:55 ADC @VIRTUAL04
    case 0xC00D62: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/load_collision_row.asm:56 CLC
    case 0xC00D64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:57 ADC @VIRTUAL06
    case 0xC00D65: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:58 STA @VIRTUAL06
    case 0xC00D67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:59 STA @VIRTUAL0A
    case 0xC00D69: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:60 LDA @VIRTUAL06+2
    case 0xC00D6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_collision_row.asm:61 STA @VIRTUAL0A+2
    case 0xC00D6D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_collision_row.asm:62 LDA [@VIRTUAL0A]
    case 0xC00D6F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:63 LDX @LOCAL01
    case 0xC00D71: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:64 STA __BSS_START__,X
    case 0xC00D73: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:65 LDY #2
    case 0xC00D76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_collision_row.asm:65 LDY #2
    // Overlapping static entry reached from 0xC00D76.
    case 0xC00D78: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_row.asm:66 LDA [@VIRTUAL06],Y
    case 0xC00D79: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:67 STA __BSS_START__+2,X
    case 0xC00D7B: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/overworld/load_collision_row.asm:68 INX
    case 0xC00D7E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:69 INX
    case 0xC00D7F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:70 INX
    case 0xC00D80: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:71 INX
    case 0xC00D81: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:72 STX @LOCAL01
    case 0xC00D82: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:73 LDY @LOCAL00
    case 0xC00D84: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:74 INY
    case 0xC00D86: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:75 STY @LOCAL00
    case 0xC00D87: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:77 CPY #16
    case 0xC00D89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/overworld/load_collision_row.asm:77 CPY #16
    // Overlapping static entry reached from 0xC00D89.
    case 0xC00D8B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_collision_row.asm:78 BCC @UNKNOWN0
    case 0xC00D8C: cpu.execute_instruction<0x90>(0x0000B6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_collision_row.asm:79 END_C_FUNCTION
    case 0xC00D8E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_collision_row.asm:79 END_C_FUNCTION
    case 0xC00D8F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_dad_phone.asm (source_named).
bool execute_overworld_load_dad_phone_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_dad_phone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DC8E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC90: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC91: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC92.
    case 0xC0DC94: cpu.execute_instruction<0xFF>(0x22AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC95: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    case 0xC0DC96: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    // Overlapping static entry reached from 0xC0DC94.
    case 0xC0DC98: cpu.execute_instruction<0x8C>(0x00FFC9, 3); return true;
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    case 0xC0DC99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DC99.
    case 0xC0DC9B: cpu.execute_instruction<0xFF>(0xAD37D0, 4); return true;
    // src/overworld/load_dad_phone.asm:9 BNE @UNKNOWN0
    case 0xC0DC9C: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC0DC9E: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC9B.
    case 0xC0DC9F: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC9F.
    case 0xC0DCA0: cpu.execute_instruction<0x99>(0x0032D0, 3); return true;
    // src/overworld/load_dad_phone.asm:11 BNE @UNKNOWN0
    case 0xC0DCA1: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/overworld/load_dad_phone.asm:12 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DCA3: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/overworld/load_dad_phone.asm:13 BNE @UNKNOWN0
    case 0xC0DCA6: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/overworld/load_dad_phone.asm:14 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DCA8: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/overworld/load_dad_phone.asm:15 BNE @UNKNOWN0
    case 0xC0DCAB: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/overworld/load_dad_phone.asm:16 LDA DAD_PHONE_QUEUED
    case 0xC0DCAD: cpu.execute_instruction<0xAD>(0x00A05C, 3); return true;
    // src/overworld/load_dad_phone.asm:17 BNE @UNKNOWN0
    case 0xC0DCB0: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    case 0xC0DCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000307, 3); return true;
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    // Overlapping static entry reached from 0xC0DCB2.
    case 0xC0DCB4: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    case 0xC0DCB5: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCB4.
    case 0xC0DCB6: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCB6.
    case 0xC0DCB8: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/overworld/load_dad_phone.asm:20 CMP #0
    case 0xC0DCB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/load_dad_phone.asm:20 CMP #0
    // Overlapping static entry reached from 0xC0DCB8.
    case 0xC0DCBA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/load_dad_phone.asm:20 CMP #0
    // Overlapping static entry reached from 0xC0DCB9.
    case 0xC0DCBB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_dad_phone.asm:21 BNE @UNKNOWN0
    case 0xC0DCBC: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00319E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCBE.
    case 0xC0DCC0: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCC0.
    case 0xC0DCC2: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCC3.
    case 0xC0DCC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_dad_phone.asm:23 LDA #10
    case 0xC0DCC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/load_dad_phone.asm:23 LDA #10
    // Overlapping static entry reached from 0xC0DCC8.
    case 0xC0DCCA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    case 0xC0DCCB: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    // Overlapping static entry reached from 0xC0DCB6.
    case 0xC0DCCC: cpu.execute_instruction<0x11>(0x000067, 2); return true;
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    // Overlapping static entry reached from 0xC0DCCC.
    case 0xC0DCCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0001A9, 3); return true;
    // src/overworld/load_dad_phone.asm:25 LDA #1
    case 0xC0DCCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_dad_phone.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0DCCE.
    case 0xC0DCD0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/load_dad_phone.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0DCCF.
    case 0xC0DCD1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_dad_phone.asm:26 STA DAD_PHONE_QUEUED
    case 0xC0DCD2: cpu.execute_instruction<0x8D>(0x00A05C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DCD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DCD6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_at_position.asm (source_named).
bool execute_overworld_load_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0140C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC0140E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC0140F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01410: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC01411.
    case 0xC01413: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01414: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01415: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    case 0xC01416: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC01413.
    case 0xC01417: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    case 0xC01418: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC01417.
    case 0xC01419: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    case 0xC0141A: cpu.execute_instruction<0x22>(0xC021A2, 4); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC01419.
    case 0xC0141B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000021, 2); else cpu.execute_instruction<0xA2>(0x00C021, 3); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC0141B.
    case 0xC0141D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0014A5, 3); return true;
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    case 0xC0141E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    // Overlapping static entry reached from 0xC0141D.
    case 0xC0141F: cpu.execute_instruction<0x14>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    case 0xC01420: cpu.execute_instruction<0x8D>(0x004706, 3); return true;
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC0141F.
    case 0xC01421: cpu.execute_instruction<0x06>(0x000047, 2); return true;
    // src/overworld/load_map_at_position.asm:18 STA SCREEN_X_PIXELS_COPY
    case 0xC01423: cpu.execute_instruction<0x8D>(0x004702, 3); return true;
    // src/overworld/load_map_at_position.asm:19 LDX @LOCAL04
    case 0xC01426: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:20 STX SCREEN_Y_PIXELS
    case 0xC01428: cpu.execute_instruction<0x8E>(0x004708, 3); return true;
    // src/overworld/load_map_at_position.asm:21 STX SCREEN_Y_PIXELS_COPY
    case 0xC0142B: cpu.execute_instruction<0x8E>(0x004704, 3); return true;
    // src/overworld/load_map_at_position.asm:22 LSR
    case 0xC0142E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:23 LSR
    case 0xC0142F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:24 LSR
    case 0xC01430: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC01431: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:26 TXA
    case 0xC01433: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:27 LSR
    case 0xC01434: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:28 LSR
    case 0xC01435: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:29 LSR
    case 0xC01436: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:30 TAY
    case 0xC01437: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:31 STY @LOCAL02
    case 0xC01438: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:32 TYA
    case 0xC0143A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:33 LSR
    case 0xC0143B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:34 LSR
    case 0xC0143C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:35 LSR
    case 0xC0143D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:36 LSR
    case 0xC0143E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:37 TAX
    case 0xC0143F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:38 LDA @VIRTUAL02
    case 0xC01440: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:39 LSR
    case 0xC01442: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:40 LSR
    case 0xC01443: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:41 LSR
    case 0xC01444: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:42 LSR
    case 0xC01445: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:43 LSR
    case 0xC01446: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:44 JSR LOAD_MAP_AT_SECTOR
    case 0xC01447: cpu.execute_instruction<0x20>(0x0008D3, 3); return true;
    // src/overworld/load_map_at_position.asm:45 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC0144A: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_position.asm:46 BNE @UNKNOWN0
    case 0xC0144D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:47 JSL OVERWORLD_SETUP_VRAM
    case 0xC0144F: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/overworld/load_map_at_position.asm:49 LDA @VIRTUAL02
    case 0xC01453: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:50 SEC
    case 0xC01455: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:51 SBC #16
    case 0xC01456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/load_map_at_position.asm:51 SBC #16
    // Overlapping static entry reached from 0xC01456.
    case 0xC01458: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:52 STA @LOCAL01
    case 0xC01459: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:53 LDY @LOCAL02
    case 0xC0145B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:54 TYA
    case 0xC0145D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:55 SEC
    case 0xC0145E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:56 SBC #14
    case 0xC0145F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/load_map_at_position.asm:56 SBC #14
    // Overlapping static entry reached from 0xC0145F.
    case 0xC01461: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:57 STA @LOCAL03
    case 0xC01462: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:58 LDA @VIRTUAL02
    case 0xC01464: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:59 SEC
    case 0xC01466: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:60 SBC #32
    case 0xC01467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/load_map_at_position.asm:60 SBC #32
    // Overlapping static entry reached from 0xC01467.
    case 0xC01469: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:61 STA @VIRTUAL04
    case 0xC0146A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:62 TYA
    case 0xC0146C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:63 SEC
    case 0xC0146D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:64 SBC #32
    case 0xC0146E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/load_map_at_position.asm:64 SBC #32
    // Overlapping static entry reached from 0xC0146E.
    case 0xC01470: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:65 STA @VIRTUAL02
    case 0xC01471: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:66 STA @LOCAL00
    case 0xC01473: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:67 LDX #0
    case 0xC01475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:67 LDX #0
    // Overlapping static entry reached from 0xC01475.
    case 0xC01477: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/load_map_at_position.asm:68 BRA @UNKNOWN2
    case 0xC01478: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/load_map_at_position.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0147A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:71 LDA #$00FF
    case 0xC0147C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    case 0xC0147E: cpu.execute_instruction<0x9D>(0x004746, 3); return true;
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC0147C.
    case 0xC0147F: cpu.execute_instruction<0x46>(0x000047, 2); return true;
    // src/overworld/load_map_at_position.asm:73 STA LOADED_COLUMNS_X,X
    case 0xC01481: cpu.execute_instruction<0x9D>(0x004736, 3); return true;
    // src/overworld/load_map_at_position.asm:74 STA LOADED_ROWS_Y,X
    case 0xC01484: cpu.execute_instruction<0x9D>(0x004726, 3); return true;
    // src/overworld/load_map_at_position.asm:75 STA LOADED_ROWS_X,X
    case 0xC01487: cpu.execute_instruction<0x9D>(0x004716, 3); return true;
    // src/overworld/load_map_at_position.asm:76 INX
    case 0xC0148A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:78 CPX #16
    case 0xC0148B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/load_map_at_position.asm:78 CPX #16
    // Overlapping static entry reached from 0xC0148B.
    case 0xC0148D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:79 BCC @UNKNOWN1
    case 0xC0148E: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/load_map_at_position.asm:80 LDY #0
    case 0xC01490: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:80 LDY #0
    // Overlapping static entry reached from 0xC01490.
    case 0xC01492: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_map_at_position.asm:81 STY @LOCAL02
    case 0xC01493: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:82 BRA @UNKNOWN4
    case 0xC01495: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC01497: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:85 LDA @LOCAL00
    case 0xC01499: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:86 STA @VIRTUAL02
    case 0xC0149B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:87 STY @VIRTUAL02
    case 0xC0149D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:88 CLC
    case 0xC0149F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:89 ADC @VIRTUAL02
    case 0xC014A0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:90 TAX
    case 0xC014A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:91 LDA @VIRTUAL04
    case 0xC014A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:92 JSR LOAD_MAP_ROW
    case 0xC014A5: cpu.execute_instruction<0x20>(0x000AD7, 3); return true;
    // src/overworld/load_map_at_position.asm:93 LDY @LOCAL02
    case 0xC014A8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:94 INY
    case 0xC014AA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:95 STY @LOCAL02
    case 0xC014AB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:97 CPY #60
    case 0xC014AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/load_map_at_position.asm:97 CPY #60
    // Overlapping static entry reached from 0xC014AD.
    case 0xC014AF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:98 BCC @UNKNOWN3
    case 0xC014B0: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/load_map_at_position.asm:99 LDY #0
    case 0xC014B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:99 LDY #0
    // Overlapping static entry reached from 0xC014B2.
    case 0xC014B4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_map_at_position.asm:100 STY @LOCAL02
    case 0xC014B5: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:101 BRA @UNKNOWN6
    case 0xC014B7: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC014B9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:104 LDA @LOCAL00
    case 0xC014BB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:105 STA @VIRTUAL02
    case 0xC014BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:106 STY @VIRTUAL02
    case 0xC014BF: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:107 CLC
    case 0xC014C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:108 ADC @VIRTUAL02
    case 0xC014C2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:109 TAX
    case 0xC014C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:110 LDA @VIRTUAL04
    case 0xC014C5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:111 JSR LOAD_COLLISION_ROW
    case 0xC014C7: cpu.execute_instruction<0x20>(0x000D05, 3); return true;
    // src/overworld/load_map_at_position.asm:112 LDY @LOCAL02
    case 0xC014CA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:113 INY
    case 0xC014CC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:114 STY @LOCAL02
    case 0xC014CD: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:116 CPY #60
    case 0xC014CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/load_map_at_position.asm:116 CPY #60
    // Overlapping static entry reached from 0xC014CF.
    case 0xC014D1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:117 BCC @UNKNOWN5
    case 0xC014D2: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/load_map_at_position.asm:119 REP #PROC_FLAGS::ACCUM8
    case 0xC014D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:120 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC014D6: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    case 0xC014D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC014D9.
    case 0xC014DB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:122 BNE @UNKNOWN7
    case 0xC014DC: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/overworld/load_map_at_position.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC014DE: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_position.asm:124 BNE @UNKNOWN8
    case 0xC014E1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/load_map_at_position.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC014E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:126 LDA #$17
    case 0xC014E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    case 0xC014E7: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014E5.
    case 0xC014E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014E8.
    case 0xC014E9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC014EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:130 LDA NPC_SPAWNS_ENABLED
    case 0xC014EC: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/overworld/load_map_at_position.asm:131 BEQ @UNKNOWN9
    case 0xC014EF: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_position.asm:132 LDA #1
    case 0xC014F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_map_at_position.asm:132 LDA #1
    // Overlapping static entry reached from 0xC014F1.
    case 0xC014F3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:133 STA NPC_SPAWNS_ENABLED
    case 0xC014F4: cpu.execute_instruction<0x8D>(0x004DDE, 3); return true;
    // src/overworld/load_map_at_position.asm:135 LDA SCREEN_X_PIXELS
    case 0xC014F7: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/overworld/load_map_at_position.asm:136 SEC
    case 0xC014FA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:137 SBC #128
    case 0xC014FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/overworld/load_map_at_position.asm:137 SBC #128
    // Overlapping static entry reached from 0xC014FB.
    case 0xC014FD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:138 STA BG2_X_POS
    case 0xC014FE: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/load_map_at_position.asm:139 STA BG1_X_POS
    case 0xC01501: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/load_map_at_position.asm:140 LDA SCREEN_Y_PIXELS
    case 0xC01504: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/overworld/load_map_at_position.asm:141 SEC
    case 0xC01507: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:142 SBC #112
    case 0xC01508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/overworld/load_map_at_position.asm:142 SBC #112
    // Overlapping static entry reached from 0xC01508.
    case 0xC0150A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:143 STA BG2_Y_POS
    case 0xC0150B: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/load_map_at_position.asm:144 STA BG1_Y_POS
    case 0xC0150E: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    case 0xC01511: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01511.
    case 0xC01513: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/overworld/load_map_at_position.asm:146 STY @LOCAL02
    case 0xC01514: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    case 0xC01516: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC01513.
    case 0xC01517: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:149 TYA
    case 0xC01518: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:150 CLC
    case 0xC01519: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:151 ADC @LOCAL03
    case 0xC0151A: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:152 STA @VIRTUAL02
    case 0xC0151C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:153 LDX @VIRTUAL02
    case 0xC0151E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:154 LDA @LOCAL01
    case 0xC01520: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:155 JSR UNKNOWN_C00E16
    case 0xC01522: cpu.execute_instruction<0x20>(0x000E28, 3); return true;
    // src/overworld/load_map_at_position.asm:156 LDX @VIRTUAL02
    case 0xC01525: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:157 LDA @LOCAL01
    case 0xC01527: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:158 JSL UNKNOWN_C0255C
    case 0xC01529: cpu.execute_instruction<0x22>(0xC0256A, 4); return true;
    // src/overworld/load_map_at_position.asm:159 LDY @LOCAL02
    case 0xC0152D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:160 INY
    case 0xC0152F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:161 STY @LOCAL02
    case 0xC01530: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:163 CPY #31
    case 0xC01532: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/overworld/load_map_at_position.asm:163 CPY #31
    // Overlapping static entry reached from 0xC01532.
    case 0xC01534: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:164 BNE @UNKNOWN10
    case 0xC01535: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    case 0xC01537: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F8, 2); else cpu.execute_instruction<0xA0>(0x00FFF8, 3); return true;
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    // Overlapping static entry reached from 0xC01537.
    case 0xC01539: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/overworld/load_map_at_position.asm:166 STY @LOCAL02
    case 0xC0153A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    case 0xC0153C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC01539.
    case 0xC0153D: cpu.execute_instruction<0x14>(0x000098, 2); return true;
    // src/overworld/load_map_at_position.asm:169 TYA
    case 0xC0153E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:170 CLC
    case 0xC0153F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:171 ADC @LOCAL03
    case 0xC01540: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:172 TAX
    case 0xC01542: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:173 LDA @LOCAL01
    case 0xC01543: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:174 SEC
    case 0xC01545: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:175 SBC #8
    case 0xC01546: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/load_map_at_position.asm:175 SBC #8
    // Overlapping static entry reached from 0xC01546.
    case 0xC01548: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_position.asm:176 JSL SPAWN_HORIZONTAL
    case 0xC01549: cpu.execute_instruction<0x22>(0xC02A7B, 4); return true;
    // src/overworld/load_map_at_position.asm:177 LDY @LOCAL02
    case 0xC0154D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:178 INY
    case 0xC0154F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:179 STY @LOCAL02
    case 0xC01550: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:181 CPY #40
    case 0xC01552: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000028, 2); else cpu.execute_instruction<0xC0>(0x000028, 3); return true;
    // src/overworld/load_map_at_position.asm:181 CPY #40
    // Overlapping static entry reached from 0xC01552.
    case 0xC01554: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:182 BNE @UNKNOWN12
    case 0xC01555: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/overworld/load_map_at_position.asm:183 LDA NPC_SPAWNS_ENABLED
    case 0xC01557: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/overworld/load_map_at_position.asm:184 BEQ @UNKNOWN14
    case 0xC0155A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    case 0xC0155C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0155C.
    case 0xC0155E: cpu.execute_instruction<0xFF>(0x4DDE8D, 4); return true;
    // src/overworld/load_map_at_position.asm:186 STA NPC_SPAWNS_ENABLED
    case 0xC0155F: cpu.execute_instruction<0x8D>(0x004DDE, 3); return true;
    // src/overworld/load_map_at_position.asm:188 LDA @LOCAL01
    case 0xC01562: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:189 STA SCREEN_LEFT_X
    case 0xC01564: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/overworld/load_map_at_position.asm:190 LDA @LOCAL03
    case 0xC01567: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:191 STA SCREEN_TOP_Y
    case 0xC01569: cpu.execute_instruction<0x8D>(0x0046FC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC0156C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC0156D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_at_sector.asm (source_named).
bool execute_overworld_load_map_at_sector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_sector.asm:4 BEGIN_C_FUNCTION
    case 0xC008D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC008D8.
    case 0xC008DA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    case 0xC008DD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xC008DA.
    case 0xC008DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:15 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008DF: cpu.execute_instruction<0xAD>(0x004710, 3); return true;
    // src/overworld/load_map_at_sector.asm:16 ORA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008E2: cpu.execute_instruction<0x0D>(0x004712, 3); return true;
    // src/overworld/load_map_at_sector.asm:17 BEQ @UNKNOWN0
    case 0xC008E5: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/load_map_at_sector.asm:18 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008E7: cpu.execute_instruction<0xAD>(0x004710, 3); return true;
    // src/overworld/load_map_at_sector.asm:19 LSR
    case 0xC008EA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:20 LSR
    case 0xC008EB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:21 LSR
    case 0xC008EC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:22 LSR
    case 0xC008ED: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:23 LSR
    case 0xC008EE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:24 STA @LOCAL04
    case 0xC008EF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:25 LDA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008F1: cpu.execute_instruction<0xAD>(0x004712, 3); return true;
    // src/overworld/load_map_at_sector.asm:26 LSR
    case 0xC008F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:27 LSR
    case 0xC008F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:28 LSR
    case 0xC008F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:29 LSR
    case 0xC008F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:30 TAX
    case 0xC008F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:32 LDA @LOCAL04
    case 0xC008F9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:33 STA @VIRTUAL02
    case 0xC008FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:34 TXA
    case 0xC008FD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:35 ASL
    case 0xC008FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:36 ASL
    case 0xC008FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:37 ASL
    case 0xC00900: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:38 ASL
    case 0xC00901: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:39 ASL
    case 0xC00902: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:40 CLC
    case 0xC00903: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:41 ADC @VIRTUAL02
    case 0xC00904: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:42 TAX
    case 0xC00906: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:43 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00907: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    case 0xC0090B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC0090B.
    case 0xC0090D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_sector.asm:45 STA @LOCAL04
    case 0xC0090E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    case 0xC00910: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    // Overlapping static entry reached from 0xC00910.
    case 0xC00912: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_sector.asm:47 STA @LOCAL03
    case 0xC00913: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:48 LDA @LOCAL04
    case 0xC00915: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:49 LSR
    case 0xC00917: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:50 LSR
    case 0xC00918: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:51 LSR
    case 0xC00919: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:52 STA @VIRTUAL04
    case 0xC0091A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:53 ASL
    case 0xC0091C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:54 TAX
    case 0xC0091D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:55 LDA f:TILESET_TABLE,X
    case 0xC0091E: cpu.execute_instruction<0xBF>(0xEF621D, 4); return true;
    // src/overworld/load_map_at_sector.asm:56 TAY
    case 0xC00922: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:57 STY @LOCAL02
    case 0xC00923: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:58 TYA
    case 0xC00925: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:59 ASL
    case 0xC00926: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:60 ASL
    case 0xC00927: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:61 STA @VIRTUAL02
    case 0xC00928: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0092A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0062AD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0092A.
    case 0xC0092C: cpu.execute_instruction<0x62>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0092D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0092F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0092F.
    case 0xC00931: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC00932: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_at_sector.asm:63 LDA @VIRTUAL02
    case 0xC00934: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:64 CLC
    case 0xC00936: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:65 ADC @VIRTUAL0A
    case 0xC00937: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:66 STA @VIRTUAL0A
    case 0xC00939: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0093B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0093B.
    case 0xC0093D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0093E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00940: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00941: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00943: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00945: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00947: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00949: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0094B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0094D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC0094F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC0094F.
    case 0xC00951: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00952: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00954: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC00954.
    case 0xC00956: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00957: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_sector.asm:70 JSL DECOMP
    case 0xC00959: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/overworld/load_map_at_sector.asm:71 LDY @LOCAL02
    case 0xC0095D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:72 TYA
    case 0xC0095F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:73 JSR LOAD_TILE_COLLISION
    case 0xC00960: cpu.execute_instruction<0x20>(0x00063A, 3); return true;
    // src/overworld/load_map_at_sector.asm:74 LDY @LOCAL02
    case 0xC00963: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:75 TYA
    case 0xC00965: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:76 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    case 0xC00966: cpu.execute_instruction<0x22>(0xC00702, 4); return true;
    // src/overworld/load_map_at_sector.asm:77 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC0096A: cpu.execute_instruction<0x22>(0xC005F7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0096E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0096E.
    case 0xC00970: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00971: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00973: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC00973.
    case 0xC00975: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00976: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    case 0xC00978: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC00978.
    case 0xC0097A: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0097B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0097A.
    case 0xC0097C: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0097B.
    case 0xC0097D: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    case 0xC0097E: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0097D.
    case 0xC0097F: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0097F.
    case 0xC00981: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    case 0xC00982: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00981.
    case 0xC00983: cpu.execute_instruction<0x04>(0x0000CD, 2); return true;
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    case 0xC00984: cpu.execute_instruction<0xCD>(0x0046F4, 3); return true;
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00983.
    case 0xC00985: cpu.execute_instruction<0xF4>(0x00F046, 3); return true;
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    case 0xC00987: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC00985.
    case 0xC00988: cpu.execute_instruction<0x75>(0x0000A4, 2); return true;
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    case 0xC00989: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    // Overlapping static entry reached from 0xC00988.
    case 0xC0098A: cpu.execute_instruction<0x16>(0x00008C, 2); return true;
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    case 0xC0098B: cpu.execute_instruction<0x8C>(0x0046F8, 3); return true;
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0098A.
    case 0xC0098C: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0098C.
    case 0xC0098D: cpu.execute_instruction<0x46>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC0098E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00625D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0098D.
    case 0xC0098F: cpu.execute_instruction<0x5D>(0x008562, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0098E.
    case 0xC00990: cpu.execute_instruction<0x62>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00991: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0098F.
    case 0xC00992: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00993: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00993.
    case 0xC00995: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00996: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_at_sector.asm:88 LDA @VIRTUAL02
    case 0xC00998: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:89 CLC
    case 0xC0099A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:90 ADC @VIRTUAL0A
    case 0xC0099B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:91 STA @VIRTUAL0A
    case 0xC0099D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0099F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0099F.
    case 0xC009A1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC009A2: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC009A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC009A5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC009A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC009A9: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009AB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009B3.
    case 0xC009B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009B6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009B8.
    case 0xC009BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009BB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_sector.asm:95 JSL DECOMP
    case 0xC009BD: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/overworld/load_map_at_sector.asm:97 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009C1: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    case 0xC009C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC009C4.
    case 0xC009C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_sector.asm:99 BNE @UNKNOWN1
    case 0xC009C7: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/overworld/load_map_at_sector.asm:100 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC009C9: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_sector.asm:101 BNE @UNKNOWN2
    case 0xC009CC: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CE.
    case 0xC009D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009D3.
    case 0xC009D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009D8.
    case 0xC009DA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009DB.
    case 0xC009DD: cpu.execute_instruction<0x70>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009DD.
    case 0xC009DF: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009E0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009E1: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009DF.
    case 0xC009E2: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009E2.
    case 0xC009E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x001780, 3); return true;
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    case 0xC009E5: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC009E4.
    case 0xC009E6: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E6.
    case 0xC009E8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E7.
    case 0xC009E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009EC.
    case 0xC009EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009F1.
    case 0xC009F3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009F4.
    case 0xC009F6: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009FA: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/overworld/load_map_at_sector.asm:109 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009FE: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    case 0xC00A01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC00A01.
    case 0xC00A03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_sector.asm:111 BNE @UNKNOWN3
    case 0xC00A04: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/overworld/load_map_at_sector.asm:112 LDX @LOCAL03
    case 0xC00A06: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:113 LDA @VIRTUAL04
    case 0xC00A08: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:114 JSL LOAD_MAP_PAL
    case 0xC00A0A: cpu.execute_instruction<0x22>(0xC007C6, 4); return true;
    // src/overworld/load_map_at_sector.asm:115 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC00A0E: cpu.execute_instruction<0x22>(0xC00490, 4); return true;
    // src/overworld/load_map_at_sector.asm:116 JSL LOAD_SPECIAL_SPRITE_PALETTE
    case 0xC00A12: cpu.execute_instruction<0x22>(0xC00788, 4); return true;
    // src/overworld/load_map_at_sector.asm:117 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A16: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_sector.asm:118 BNE @UNKNOWN4
    case 0xC00A19: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:119 JSL LOAD_OVERLAY_SPRITES
    case 0xC00A1B: cpu.execute_instruction<0x22>(0xC486D8, 4); return true;
    // src/overworld/load_map_at_sector.asm:120 JSR LOAD_TILESET_ANIM
    case 0xC00A1F: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/overworld/load_map_at_sector.asm:121 JSR LOAD_PALETTE_ANIM
    case 0xC00A22: cpu.execute_instruction<0x20>(0x00023F, 3); return true;
    // src/overworld/load_map_at_sector.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A25: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_sector.asm:124 BNE @UNKNOWN7
    case 0xC00A28: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:125 LDA DEBUG
    case 0xC00A2A: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/overworld/load_map_at_sector.asm:126 BEQ @UNKNOWN5
    case 0xC00A2D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:127 JSL UNKNOWN_EFD9F3
    case 0xC00A2F: cpu.execute_instruction<0x22>(0xEFC30D, 4); return true;
    // src/overworld/load_map_at_sector.asm:128 BRA @UNKNOWN6
    case 0xC00A33: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:130 JSL UNKNOWN_C47F87
    case 0xC00A35: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    case 0xC00A39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00A39.
    case 0xC00A3B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:133 JSL UNKNOWN_C0856B
    case 0xC00A3C: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC00A40.
    case 0xC00A42: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A43: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A45: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A46: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A48: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A49: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A4B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/load_map_at_sector.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC00A4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    case 0xC00A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    // Overlapping static entry reached from 0xC00A4F.
    case 0xC00A51: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:139 CLC
    case 0xC00A52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:140 ADC @VIRTUAL06
    case 0xC00A53: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:141 STA @VIRTUAL06
    case 0xC00A55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:142 STA @LOCAL00
    case 0xC00A57: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_sector.asm:143 LDA @VIRTUAL06+2
    case 0xC00A59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_map_at_sector.asm:144 STA @LOCAL00+2
    case 0xC00A5B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    case 0xC00A5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0001C0, 3); return true;
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    // Overlapping static entry reached from 0xC00A5D.
    case 0xC00A5F: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC00A60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0047FC, 3); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A5F.
    case 0xC00A61: cpu.execute_instruction<0xFC>(0x002247, 3); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A60.
    case 0xC00A62: cpu.execute_instruction<0x47>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    case 0xC00A63: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    // Overlapping static entry reached from 0xC00A62.
    case 0xC00A64: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    // Overlapping static entry reached from 0xC00A64.
    case 0xC00A66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00FCAD, 3); return true;
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A67: cpu.execute_instruction<0xAD>(0x0049FC, 3); return true;
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    // Overlapping static entry reached from 0xC00A66.
    case 0xC00A68: cpu.execute_instruction<0xFC>(0x00F049, 3); return true;
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    // Overlapping static entry reached from 0xC00A66.
    case 0xC00A69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000F0, 2); else cpu.execute_instruction<0x49>(0x0019F0, 3); return true;
    // src/overworld/load_map_at_sector.asm:149 BEQ @UNKNOWN8
    case 0xC00A6A: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/overworld/load_map_at_sector.asm:149 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xC00A69.
    case 0xC00A6B: cpu.execute_instruction<0x19>(0x004322, 3); return true;
    // src/overworld/load_map_at_sector.asm:150 JSL UNKNOWN_C496F9
    case 0xC00A6C: cpu.execute_instruction<0x22>(0xC46D43, 4); return true;
    // src/overworld/load_map_at_sector.asm:150 JSL UNKNOWN_C496F9
    // Overlapping static entry reached from 0xC00A6B.
    case 0xC00A6E: cpu.execute_instruction<0x6D>(0x00E2C4, 3); return true;
    // src/overworld/load_map_at_sector.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:151 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC00A6E.
    case 0xC00A71: cpu.execute_instruction<0x20>(0x00FFA9, 3); return true;
    // src/overworld/load_map_at_sector.asm:152 LDA #$00FF
    case 0xC00A72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    case 0xC00A74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    // Overlapping static entry reached from 0xC00A72.
    case 0xC00A75: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    case 0xC00A76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC00A76.
    case 0xC00A78: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_sector.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC00A79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    case 0xC00A7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC00A7B.
    case 0xC00A7D: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:157 JSL MEMSET16
    case 0xC00A7E: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/load_map_at_sector.asm:158 STZ WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A82: cpu.execute_instruction<0x9C>(0x0049FC, 3); return true;
    // src/overworld/load_map_at_sector.asm:160 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A85: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_at_sector.asm:161 BEQ @UNKNOWN9
    case 0xC00A88: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:162 JSL UNKNOWN_C496F9
    case 0xC00A8A: cpu.execute_instruction<0x22>(0xC46D43, 4); return true;
    // src/overworld/load_map_at_sector.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/load_map_at_sector.asm:164 STZ_BADOPT @LOCAL00
    case 0xC00A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:164 STZ_BADOPT @LOCAL00
    case 0xC00A92: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:164 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC00A90.
    case 0xC00A93: cpu.execute_instruction<0x0E>(0x00E0A2, 3); return true;
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    case 0xC00A94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC00A94.
    case 0xC00A96: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    case 0xC00A97: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC00A96.
    case 0xC00A98: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC00A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC00A99.
    case 0xC00A9B: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:168 JSL MEMSET16
    case 0xC00A9C: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    case 0xC00AA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    // Overlapping static entry reached from 0xC00AA0.
    case 0xC00AA2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:171 JSL UNKNOWN_C0856B
    case 0xC00AA3: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/load_map_at_sector.asm:172 LDA @VIRTUAL04
    case 0xC00AA7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:173 STA LOADED_MAP_TILE_COMBO
    case 0xC00AA9: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/load_map_at_sector.asm:174 LDA @LOCAL03
    case 0xC00AAC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:175 STA LOADED_MAP_PALETTE
    case 0xC00AAE: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00AB1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00AB2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_block_event_changes.asm (source_named).
bool execute_overworld_load_map_block_event_changes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_block_event_changes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00702: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00704: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00705: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00706: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00707: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00707.
    case 0xC00709: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC0070A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC0070B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    case 0xC0070C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC00709.
    case 0xC0070D: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC0070E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0070D.
    case 0xC0070F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0070E.
    case 0xC00710: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00711: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00713: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00713.
    case 0xC00715: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00716: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:11 LDA @LOCAL01
    case 0xC00718: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:12 ASL
    case 0xC0071A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:13 TAX
    case 0xC0071B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:14 LDA f:EVENT_CONTROL_PTR_TABLE,X
    case 0xC0071C: cpu.execute_instruction<0xBF>(0xD01598, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:15 CLC
    case 0xC00720: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:16 ADC @VIRTUAL06
    case 0xC00721: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:17 STA @VIRTUAL06
    case 0xC00723: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:19 LDA [@VIRTUAL06] ;map_tile_event::event_flag
    case 0xC00725: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:20 BEQ @UNKNOWN5
    case 0xC00727: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    case 0xC00729: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC00729.
    case 0xC0072B: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    case 0xC0072C: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0072B.
    case 0xC0072F: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    case 0xC00730: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    // Overlapping static entry reached from 0xC0072F.
    case 0xC00731: cpu.execute_instruction<0x0E>(0x0002A0, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    case 0xC00732: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00732.
    case 0xC00734: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:25 LDA [@VIRTUAL06],Y
    case 0xC00735: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:26 TAY
    case 0xC00737: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:27 STY @LOCAL01
    case 0xC00738: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    case 0xC0073A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    // Overlapping static entry reached from 0xC0073A.
    case 0xC0073C: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:29 LDA [@VIRTUAL06]
    case 0xC0073D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    case 0xC0073F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    // Overlapping static entry reached from 0xC0073F.
    case 0xC00741: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:31 BCC @UNKNOWN1
    case 0xC00742: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    case 0xC00744: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    // Overlapping static entry reached from 0xC00744.
    case 0xC00746: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:34 STX @VIRTUAL02
    case 0xC00747: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:35 LDA @LOCAL00
    case 0xC00749: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:36 CMP @VIRTUAL02
    case 0xC0074B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:37 BNE @UNKNOWN4
    case 0xC0074D: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    case 0xC0074F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC0074F.
    case 0xC00751: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:39 CLC
    case 0xC00752: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:40 ADC @VIRTUAL06
    case 0xC00753: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:41 STA @VIRTUAL06
    case 0xC00755: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:42 BRA @UNKNOWN3
    case 0xC00757: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    case 0xC00759: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00759.
    case 0xC0075B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:45 LDA [@VIRTUAL06],Y
    case 0xC0075C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:46 TAX
    case 0xC0075E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:47 LDA [@VIRTUAL06]
    case 0xC0075F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:48 JSR REPLACE_BLOCK
    case 0xC00761: cpu.execute_instruction<0x20>(0x00068E, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    case 0xC00764: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC00764.
    case 0xC00766: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:50 CLC
    case 0xC00767: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:51 ADC @VIRTUAL06
    case 0xC00768: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:52 STA @VIRTUAL06
    case 0xC0076A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:53 LDY @LOCAL01
    case 0xC0076C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:54 DEY
    case 0xC0076E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:55 STY @LOCAL01
    case 0xC0076F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    case 0xC00771: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    // Overlapping static entry reached from 0xC00771.
    case 0xC00773: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:58 BNE @UNKNOWN2
    case 0xC00774: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:59 BRA @UNKNOWN0
    case 0xC00776: cpu.execute_instruction<0x80>(0x0000AD, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:61 TYA
    case 0xC00778: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00779: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0077A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:64 CLC
    case 0xC0077F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:65 ADC @VIRTUAL06
    case 0xC00780: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:66 STA @VIRTUAL06
    case 0xC00782: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:67 BRA @UNKNOWN0
    case 0xC00784: cpu.execute_instruction<0x80>(0x00009F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00786: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00787: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_column.asm (source_named).
bool execute_overworld_load_map_column_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00BEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00BF3.
    case 0xC00BF5: cpu.execute_instruction<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BF7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:15 LSR
    case 0xC00BF8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:16 LSR
    case 0xC00BF9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:17 STA @VIRTUAL04
    case 0xC00BFA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:18 TXA
    case 0xC00BFC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:19 AND #$8000
    case 0xC00BFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/load_map_column.asm:19 AND #$8000
    // Overlapping static entry reached from 0xC00BFD.
    case 0xC00BFF: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/load_map_column.asm:20 BEQ @UNKNOWN0
    case 0xC00C00: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/load_map_column.asm:21 TXA
    case 0xC00C02: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:22 LSR
    case 0xC00C03: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:23 LSR
    case 0xC00C04: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:24 ORA #$E000
    case 0xC00C05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/load_map_column.asm:24 ORA #$E000
    // Overlapping static entry reached from 0xC00C05.
    case 0xC00C07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A8, 2); else cpu.execute_instruction<0xE0>(0x0084A8, 3); return true;
    // src/overworld/load_map_column.asm:25 TAY
    case 0xC00C08: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    case 0xC00C09: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    // Overlapping static entry reached from 0xC00C07.
    case 0xC00C0A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:27 BRA @UNKNOWN1
    case 0xC00C0B: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/overworld/load_map_column.asm:29 TXA
    case 0xC00C0D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:30 LSR
    case 0xC00C0E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:31 LSR
    case 0xC00C0F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:32 TAY
    case 0xC00C10: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:33 STY @LOCAL06
    case 0xC00C11: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:35 LDA @VIRTUAL04
    case 0xC00C13: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:36 AND #$000F
    case 0xC00C15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_column.asm:36 AND #$000F
    // Overlapping static entry reached from 0xC00C15.
    case 0xC00C17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:37 STA @LOCAL05
    case 0xC00C18: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:38 TAX
    case 0xC00C1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:39 LDA @VIRTUAL04
    case 0xC00C1B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:41 STA LOADED_COLUMNS_X,X
    case 0xC00C1F: cpu.execute_instruction<0x9D>(0x004736, 3); return true;
    // src/overworld/load_map_column.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC00C22: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:43 TYA
    case 0xC00C24: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:44 AND #$000F
    case 0xC00C25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_column.asm:44 AND #$000F
    // Overlapping static entry reached from 0xC00C25.
    case 0xC00C27: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_column.asm:45 TAX
    case 0xC00C28: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:46 STX @LOCAL04
    case 0xC00C29: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/load_map_column.asm:47 TYA
    case 0xC00C2B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:49 STA LOADED_COLUMNS_Y,X
    case 0xC00C2E: cpu.execute_instruction<0x9D>(0x004746, 3); return true;
    // src/overworld/load_map_column.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC00C31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:51 LDA @VIRTUAL04
    case 0xC00C33: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:52 LSR
    case 0xC00C35: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:53 LSR
    case 0xC00C36: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:54 LSR
    case 0xC00C37: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:55 STA @VIRTUAL02
    case 0xC00C38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:56 TYA
    case 0xC00C3A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    case 0xC00C3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    // Overlapping static entry reached from 0xC00C3B.
    case 0xC00C3D: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:59 CLC
    case 0xC00C41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:60 ADC @VIRTUAL02
    case 0xC00C42: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:61 TAX
    case 0xC00C44: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C45: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:63 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C47: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_column.asm:64 LSR
    case 0xC00C4B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:65 LSR
    case 0xC00C4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:66 LSR
    case 0xC00C4D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC00C4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:68 AND #$00FF
    case 0xC00C50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC00C50.
    case 0xC00C52: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:69 STA @LOCAL03
    case 0xC00C53: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:70 LDA @LOCAL05
    case 0xC00C55: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:71 ASL
    case 0xC00C57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:72 CLC
    case 0xC00C58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00C59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00C59.
    case 0xC00C5B: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    case 0xC00C5C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    // Overlapping static entry reached from 0xC00C5B.
    case 0xC00C5D: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    case 0xC00C5E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00C5D.
    case 0xC00C5F: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    case 0xC00C60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C5F.
    case 0xC00C61: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C60.
    case 0xC00C62: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    case 0xC00C63: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC00C62.
    case 0xC00C64: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    case 0xC00C65: cpu.execute_instruction<0x4C>(0x000CE7, 3); return true;
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC00C64.
    case 0xC00C66: cpu.execute_instruction<0xE7>(0x00000C, 2); return true;
    // src/overworld/load_map_column.asm:80 LDX @LOCAL04
    case 0xC00C68: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/load_map_column.asm:81 TXA
    case 0xC00C6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:83 STA @VIRTUAL02
    case 0xC00C6F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:84 STA @LOCAL01
    case 0xC00C71: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:85 STZ @LOCAL00
    case 0xC00C73: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:86 BRA @UNKNOWN7
    case 0xC00C75: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/overworld/load_map_column.asm:88 TYA
    case 0xC00C77: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:89 AND #$0003
    case 0xC00C78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_map_column.asm:89 AND #$0003
    // Overlapping static entry reached from 0xC00C78.
    case 0xC00C7A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_column.asm:90 BNE @UNKNOWN4
    case 0xC00C7B: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/load_map_column.asm:91 LDA @VIRTUAL04
    case 0xC00C7D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:92 LSR
    case 0xC00C7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:93 LSR
    case 0xC00C80: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:94 LSR
    case 0xC00C81: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:95 STA @VIRTUAL02
    case 0xC00C82: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:96 TYA
    case 0xC00C84: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    case 0xC00C85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    // Overlapping static entry reached from 0xC00C85.
    case 0xC00C87: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:99 CLC
    case 0xC00C8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:100 ADC @VIRTUAL02
    case 0xC00C8C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:101 TAX
    case 0xC00C8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C8F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:103 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C91: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_column.asm:104 LSR
    case 0xC00C95: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:105 LSR
    case 0xC00C96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:106 LSR
    case 0xC00C97: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC00C98: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:108 AND #$00FF
    case 0xC00C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC00C9A.
    case 0xC00C9C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:109 STA @LOCAL03
    case 0xC00C9D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:111 CPY #320
    case 0xC00C9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000040, 2); else cpu.execute_instruction<0xC0>(0x000140, 3); return true;
    // src/overworld/load_map_column.asm:111 CPY #320
    // Overlapping static entry reached from 0xC00C9F.
    case 0xC00CA1: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    case 0xC00CA2: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    // Overlapping static entry reached from 0xC00CA1.
    case 0xC00CA3: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    case 0xC00CA4: cpu.execute_instruction<0xAD>(0x0046F4, 3); return true;
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00D1F.
    case 0xC00CA6: cpu.execute_instruction<0x46>(0x0000C5, 2); return true;
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    case 0xC00CA7: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    // Overlapping static entry reached from 0xC00CA6.
    case 0xC00CA8: cpu.execute_instruction<0x14>(0x0000D0, 2); return true;
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    case 0xC00CA9: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC00CA8.
    case 0xC00CAA: cpu.execute_instruction<0x14>(0x0000BB, 2); return true;
    // src/overworld/load_map_column.asm:116 TYX
    case 0xC00CAB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:117 LDA @VIRTUAL04
    case 0xC00CAC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:118 JSR UNKNOWN_C0A156
    case 0xC00CAE: cpu.execute_instruction<0x20>(0x00A135, 3); return true;
    // src/overworld/load_map_column.asm:119 STA @LOCAL05
    case 0xC00CB1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:120 LDA @LOCAL01
    case 0xC00CB3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:121 STA @VIRTUAL02
    case 0xC00CB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:122 ASL
    case 0xC00CB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:123 TAY
    case 0xC00CB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:124 LDA @LOCAL05
    case 0xC00CB9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:125 STA (@LOCAL02),Y
    case 0xC00CBB: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:126 BRA @UNKNOWN6
    case 0xC00CBD: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/overworld/load_map_column.asm:128 LDA @LOCAL01
    case 0xC00CBF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:129 STA @VIRTUAL02
    case 0xC00CC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:130 ASL
    case 0xC00CC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:131 TAY
    case 0xC00CC4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:132 LDA #0
    case 0xC00CC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00CC5.
    case 0xC00CC7: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_column.asm:133 STA (@LOCAL02),Y
    case 0xC00CC8: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:135 LDA @VIRTUAL02
    case 0xC00CCA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:136 CLC
    case 0xC00CCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:137 ADC #16
    case 0xC00CCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:137 ADC #16
    // Overlapping static entry reached from 0xC00CCD.
    case 0xC00CCF: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/load_map_column.asm:138 AND #$00FF
    case 0xC00CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC00CD0.
    case 0xC00CD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:139 STA @VIRTUAL02
    case 0xC00CD3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:140 STA @LOCAL01
    case 0xC00CD5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:141 LDY @LOCAL06
    case 0xC00CD7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:142 INY
    case 0xC00CD9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:143 STY @LOCAL06
    case 0xC00CDA: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:144 INC @LOCAL00
    case 0xC00CDC: cpu.execute_instruction<0xE6>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:146 LDA @LOCAL00
    case 0xC00CDE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:147 CMP #16
    case 0xC00CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:147 CMP #16
    // Overlapping static entry reached from 0xC00CE0.
    case 0xC00CE2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:148 BCC @UNKNOWN3
    case 0xC00CE3: cpu.execute_instruction<0x90>(0x000092, 2); return true;
    // src/overworld/load_map_column.asm:149 BRA @UNKNOWN11
    case 0xC00CE5: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/load_map_column.asm:151 LDA #0
    case 0xC00CE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:151 LDA #0
    // Overlapping static entry reached from 0xC00CE7.
    case 0xC00CE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:152 STA @LOCAL05
    case 0xC00CEA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:153 BRA @UNKNOWN10
    case 0xC00CEC: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:156 TAY
    case 0xC00CF3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:157 LDA #0
    case 0xC00CF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:157 LDA #0
    // Overlapping static entry reached from 0xC00CF4.
    case 0xC00CF6: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_column.asm:158 STA (@LOCAL02),Y
    case 0xC00CF7: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:159 LDA @LOCAL05
    case 0xC00CF9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:160 INC
    case 0xC00CFB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:161 STA @LOCAL05
    case 0xC00CFC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:163 CMP #16
    case 0xC00CFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:163 CMP #16
    // Overlapping static entry reached from 0xC00CFE.
    case 0xC00D00: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:164 BCC @UNKNOWN9
    case 0xC00D01: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00D03: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00D04: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_palette.asm (source_named).
bool execute_overworld_load_map_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC007C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007C9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC007CB.
    case 0xC007CD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    case 0xC007D0: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC007CD.
    case 0xC007D1: cpu.execute_instruction<0x1E>(0x0040A0, 3); return true;
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    case 0xC007D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    // Overlapping static entry reached from 0xC007D2.
    case 0xC007D4: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/overworld/load_map_palette.asm:15 STY @LOCAL04
    case 0xC007D5: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0062FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007D7.
    case 0xC007D9: cpu.execute_instruction<0x62>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007DC.
    case 0xC007DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:17 LDA @LOCAL05
    case 0xC007E1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_map_palette.asm:18 ASL
    case 0xC007E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:19 ASL
    case 0xC007E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:20 CLC
    case 0xC007E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:21 ADC @VIRTUAL06
    case 0xC007E6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:22 STA @VIRTUAL06
    case 0xC007E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC007EA.
    case 0xC007EC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007ED: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:24 TXA
    case 0xC007F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    case 0xC007F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC007F7.
    case 0xC007F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_palette.asm:26 JSL MULT168
    case 0xC007FA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/load_map_palette.asm:27 CLC
    case 0xC007FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:28 ADC @VIRTUAL06
    case 0xC007FF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:29 STA @VIRTUAL06
    case 0xC00801: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:30 STA @LOCAL02
    case 0xC00803: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/load_map_palette.asm:31 LDA @VIRTUAL06+2
    case 0xC00805: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:32 STA @LOCAL02+2
    case 0xC00807: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_palette.asm:33 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00809: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/overworld/load_map_palette.asm:34 BNE @UNKNOWN4
    case 0xC0080C: cpu.execute_instruction<0xD0>(0x000065, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0080E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00810: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00812: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00814: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00816: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00818: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0081A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0081C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    case 0xC0081E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC0081E.
    case 0xC00820: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:39 LDY @LOCAL04
    case 0xC00821: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:40 TYA
    case 0xC00823: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:41 JSL MEMCPY16
    case 0xC00824: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/load_map_palette.asm:42 LDY @LOCAL04
    case 0xC00828: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:43 LDA __BSS_START__,Y
    case 0xC0082A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0082D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0082F: cpu.execute_instruction<0x4C>(0x0008D1, 3); return true;
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    case 0xC00832: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    // Overlapping static entry reached from 0xC00832.
    case 0xC00834: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    case 0xC00835: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC00834.
    case 0xC00838: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    case 0xC00839: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    // Overlapping static entry reached from 0xC00838.
    case 0xC0083A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:48 LDX #0
    case 0xC0083B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_palette.asm:48 LDX #0
    // Overlapping static entry reached from 0xC0083B.
    case 0xC0083D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:49 LDY @LOCAL04
    case 0xC0083E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:50 LDA __BSS_START__,Y
    case 0xC00840: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    case 0xC00843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC00843.
    case 0xC00845: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00846: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00848: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/load_map_palette.asm:53 LDX #1
    case 0xC0084A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_map_palette.asm:53 LDX #1
    // Overlapping static entry reached from 0xC0084A.
    case 0xC0084C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/load_map_palette.asm:55 STX @VIRTUAL02
    case 0xC0084D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_palette.asm:56 LDA @LOCAL03
    case 0xC0084F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_palette.asm:57 CMP @VIRTUAL02
    case 0xC00851: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00853: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00855: cpu.execute_instruction<0x4C>(0x0008D1, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00858: cpu.execute_instruction<0xAF>(0xEF62FD, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0085C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0085E: cpu.execute_instruction<0xAF>(0xEF62FF, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00862: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00864: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00866: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00868: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0086A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_palette.asm:61 LDA __BSS_START__ + BPP4PALETTE_SIZE * 1,Y
    case 0xC0086C: cpu.execute_instruction<0xB9>(0x000020, 3); return true;
    // src/overworld/load_map_palette.asm:62 STA @LOCAL02
    case 0xC0086F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/load_map_palette.asm:63 BRA @UNKNOWN0
    case 0xC00871: cpu.execute_instruction<0x80>(0x00009B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00873.
    case 0xC00875: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00876: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00878.
    case 0xC0087A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0087B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC0087D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x002BA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC0087D.
    case 0xC0087F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00880: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00882: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC00882.
    case 0xC00884: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00885: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00887: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00889: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0088B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0088D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_palette.asm:68 JSL DECOMP
    case 0xC0088F: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00893: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00895: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00897: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00899: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_palette.asm:70 LDA CUR_PHOTO_DISPLAY
    case 0xC0089B: cpu.execute_instruction<0xAD>(0x00B6BA, 3); return true;
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    case 0xC0089E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC0089E.
    case 0xC008A0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_palette.asm:72 JSL MULT168
    case 0xC008A1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/load_map_palette.asm:73 CLC
    case 0xC008A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    case 0xC008A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    // Overlapping static entry reached from 0xC008A6.
    case 0xC008A8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_palette.asm:75 TAX
    case 0xC008A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:76 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC008AA: cpu.execute_instruction<0xBF>(0xE123E1, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC008AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC008B0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:78 CLC
    case 0xC008B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008BB: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008BD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008BF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    case 0xC008C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC008C7.
    case 0xC008C9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:82 LDY @LOCAL04
    case 0xC008CA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:83 TYA
    case 0xC008CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:84 JSL MEMCPY16
    case 0xC008CD: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008D2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_row.asm (source_named).
bool execute_overworld_load_map_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_row.asm:3 BEGIN_C_FUNCTION
    case 0xC00AD7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00AD9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ADA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ADB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC00ADC.
    case 0xC00ADE: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ADF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00AE0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:14 STA @LOCAL05
    case 0xC00AE1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:14 STA @LOCAL05
    // Overlapping static entry reached from 0xC00ADE.
    case 0xC00AE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:15 TXA
    case 0xC00AE3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:16 LSR
    case 0xC00AE4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:17 LSR
    case 0xC00AE5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:18 STA @VIRTUAL04
    case 0xC00AE6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:19 LDA @LOCAL05
    case 0xC00AE8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:20 AND #$8000
    case 0xC00AEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/load_map_row.asm:20 AND #$8000
    // Overlapping static entry reached from 0xC00AEA.
    case 0xC00AEC: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/load_map_row.asm:21 BEQ @UNKNOWN0
    case 0xC00AED: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/load_map_row.asm:22 LDA @LOCAL05
    case 0xC00AEF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:22 LDA @LOCAL05
    // Overlapping static entry reached from 0xC0A6E9.
    case 0xC00AF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:23 LSR
    case 0xC00AF1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:24 LSR
    case 0xC00AF2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:25 ORA #$E000
    case 0xC00AF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/load_map_row.asm:25 ORA #$E000
    // Overlapping static entry reached from 0xC00AF3.
    case 0xC00AF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A8, 2); else cpu.execute_instruction<0xE0>(0x0084A8, 3); return true;
    // src/overworld/load_map_row.asm:26 TAY
    case 0xC00AF6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:27 STY @LOCAL04
    case 0xC00AF7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:27 STY @LOCAL04
    // Overlapping static entry reached from 0xC00AF5.
    case 0xC00AF8: cpu.execute_instruction<0x16>(0x000080, 2); return true;
    // src/overworld/load_map_row.asm:28 BRA @UNKNOWN1
    case 0xC00AF9: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/load_map_row.asm:28 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC00AF8.
    case 0xC00AFA: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/overworld/load_map_row.asm:30 LDA @LOCAL05
    case 0xC00AFB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:30 LDA @LOCAL05
    // Overlapping static entry reached from 0xC00AFA.
    case 0xC00AFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:31 LSR
    case 0xC00AFD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:32 LSR
    case 0xC00AFE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:33 TAY
    case 0xC00AFF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:34 STY @LOCAL04
    case 0xC00B00: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:36 TYA
    case 0xC00B02: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:37 AND #$000F
    case 0xC00B03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:37 AND #$000F
    // Overlapping static entry reached from 0xC00B03.
    case 0xC00B05: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_row.asm:38 TAX
    case 0xC00B06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:39 STX @LOCAL05
    case 0xC00B07: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:40 TYA
    case 0xC00B09: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:42 STA LOADED_ROWS_X,X
    case 0xC00B0C: cpu.execute_instruction<0x9D>(0x004716, 3); return true;
    // src/overworld/load_map_row.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC00B0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:44 LDA @VIRTUAL04
    case 0xC00B11: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:45 AND #$000F
    case 0xC00B13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:45 AND #$000F
    // Overlapping static entry reached from 0xC00B13.
    case 0xC00B15: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:46 STA @LOCAL03
    case 0xC00B16: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:47 TAX
    case 0xC00B18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:48 LDA @VIRTUAL04
    case 0xC00B19: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:50 STA LOADED_ROWS_Y,X
    case 0xC00B1D: cpu.execute_instruction<0x9D>(0x004726, 3); return true;
    // src/overworld/load_map_row.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC00B20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:52 TYA
    case 0xC00B22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:53 LSR
    case 0xC00B23: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:54 LSR
    case 0xC00B24: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:55 LSR
    case 0xC00B25: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:56 STA @VIRTUAL02
    case 0xC00B26: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:57 LDA @VIRTUAL04
    case 0xC00B28: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:58 AND #$FFFC
    case 0xC00B2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_row.asm:58 AND #$FFFC
    // Overlapping static entry reached from 0xC00B2A.
    case 0xC00B2C: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:60 CLC
    case 0xC00B30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:61 ADC @VIRTUAL02
    case 0xC00B31: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:62 TAX
    case 0xC00B33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:64 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00B36: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_row.asm:65 LSR
    case 0xC00B3A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:66 LSR
    case 0xC00B3B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:67 LSR
    case 0xC00B3C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC00B3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:69 AND #$00FF
    case 0xC00B3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_row.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC00B3F.
    case 0xC00B41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:70 STA @LOCAL02
    case 0xC00B42: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:71 LDA @LOCAL03
    case 0xC00B44: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:73 CLC
    case 0xC00B4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:74 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_map_row.asm:74 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00B4C.
    case 0xC00B4E: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:75 STA @LOCAL03
    case 0xC00B4F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:75 STA @LOCAL03
    // Overlapping static entry reached from 0xC00B4E.
    case 0xC00B50: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/overworld/load_map_row.asm:76 LDA @VIRTUAL04
    case 0xC00B51: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00B50.
    case 0xC00B52: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    case 0xC00B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000140, 3); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    // Overlapping static entry reached from 0xC00B52.
    case 0xC00B54: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    // Overlapping static entry reached from 0xC00B53.
    case 0xC00B55: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:78 BCC @UNKNOWN2
    case 0xC00B56: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_row.asm:78 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC00B55.
    case 0xC00B57: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/load_map_row.asm:79 JMP @UNKNOWN8
    case 0xC00B58: cpu.execute_instruction<0x4C>(0x000BD4, 3); return true;
    // src/overworld/load_map_row.asm:79 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC00B57.
    case 0xC00B59: cpu.execute_instruction<0xD4>(0x00000B, 2); return true;
    // src/overworld/load_map_row.asm:81 LDX @LOCAL05
    case 0xC00B5B: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:82 STX @VIRTUAL02
    case 0xC00B5D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:83 LDA @VIRTUAL02
    case 0xC00B5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:84 STA @LOCAL01
    case 0xC00B61: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:85 STZ @LOCAL00
    case 0xC00B63: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:86 BRA @UNKNOWN7
    case 0xC00B65: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/overworld/load_map_row.asm:88 TYA
    case 0xC00B67: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:89 AND #$0007
    case 0xC00B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/load_map_row.asm:89 AND #$0007
    // Overlapping static entry reached from 0xC00B68.
    case 0xC00B6A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_row.asm:90 BNE @UNKNOWN4
    case 0xC00B6B: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/load_map_row.asm:91 TYA
    case 0xC00B6D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:92 LSR
    case 0xC00B6E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:93 LSR
    case 0xC00B6F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:94 LSR
    case 0xC00B70: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:95 STA @VIRTUAL02
    case 0xC00B71: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:96 LDA @VIRTUAL04
    case 0xC00B73: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:97 AND #$FFFC
    case 0xC00B75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_row.asm:97 AND #$FFFC
    // Overlapping static entry reached from 0xC00B75.
    case 0xC00B77: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:99 CLC
    case 0xC00B7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:100 ADC @VIRTUAL02
    case 0xC00B7C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:101 TAX
    case 0xC00B7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:103 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00B81: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_row.asm:104 LSR
    case 0xC00B85: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:105 LSR
    case 0xC00B86: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:106 LSR
    case 0xC00B87: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC00B88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:108 AND #$00FF
    case 0xC00B8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC00B8A.
    case 0xC00B8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:109 STA @LOCAL02
    case 0xC00B8D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:111 CPY #256
    case 0xC00B8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000100, 3); return true;
    // src/overworld/load_map_row.asm:111 CPY #256
    // Overlapping static entry reached from 0xC00B8F.
    case 0xC00B91: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/load_map_row.asm:112 BCS @UNKNOWN5
    case 0xC00B92: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/overworld/load_map_row.asm:112 BCS @UNKNOWN5
    // Overlapping static entry reached from 0xC00B91.
    case 0xC00B93: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:113 LDA LOADED_MAP_TILE_COMBO
    case 0xC00B94: cpu.execute_instruction<0xAD>(0x0046F4, 3); return true;
    // src/overworld/load_map_row.asm:114 CMP @LOCAL02
    case 0xC00B97: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:115 BNE @UNKNOWN5
    case 0xC00B99: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:116 LDX @VIRTUAL04
    case 0xC00B9B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:117 TYA
    case 0xC00B9D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:118 JSR UNKNOWN_C0A156
    case 0xC00B9E: cpu.execute_instruction<0x20>(0x00A135, 3); return true;
    // src/overworld/load_map_row.asm:119 STA @LOCAL05
    case 0xC00BA1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:120 LDA @LOCAL01
    case 0xC00BA3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:121 STA @VIRTUAL02
    case 0xC00BA5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:122 ASL
    case 0xC00BA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:123 TAY
    case 0xC00BA8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:124 LDA @LOCAL05
    case 0xC00BA9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:125 STA (@LOCAL03),Y
    case 0xC00BAB: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:126 BRA @UNKNOWN6
    case 0xC00BAD: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/overworld/load_map_row.asm:128 LDA @LOCAL01
    case 0xC00BAF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:129 STA @VIRTUAL02
    case 0xC00BB1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:130 ASL
    case 0xC00BB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:131 TAY
    case 0xC00BB4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:132 LDA #0
    case 0xC00BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00BB5.
    case 0xC00BB7: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_row.asm:133 STA (@LOCAL03),Y
    case 0xC00BB8: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:135 LDA @VIRTUAL02
    case 0xC00BBA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:136 INC
    case 0xC00BBC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:137 AND #$000F
    case 0xC00BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:137 AND #$000F
    // Overlapping static entry reached from 0xC00BBD.
    case 0xC00BBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:138 STA @VIRTUAL02
    case 0xC00BC0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:139 STA @LOCAL01
    case 0xC00BC2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:140 LDY @LOCAL04
    case 0xC00BC4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:141 INY
    case 0xC00BC6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:142 STY @LOCAL04
    case 0xC00BC7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:143 INC @LOCAL00
    case 0xC00BC9: cpu.execute_instruction<0xE6>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:145 LDA @LOCAL00
    case 0xC00BCB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:146 CMP #16
    case 0xC00BCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_row.asm:146 CMP #16
    // Overlapping static entry reached from 0xC00BCD.
    case 0xC00BCF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:147 BCC @UNKNOWN3
    case 0xC00BD0: cpu.execute_instruction<0x90>(0x000095, 2); return true;
    // src/overworld/load_map_row.asm:148 BRA @UNKNOWN11
    case 0xC00BD2: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:150 LDA #0
    case 0xC00BD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:150 LDA #0
    // Overlapping static entry reached from 0xC00BD4.
    case 0xC00BD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:151 STA @LOCAL05
    case 0xC00BD7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:152 BRA @UNKNOWN10
    case 0xC00BD9: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/load_map_row.asm:154 ASL
    case 0xC00BDB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:155 TAY
    case 0xC00BDC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:156 LDA #0
    case 0xC00BDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:156 LDA #0
    // Overlapping static entry reached from 0xC00BDD.
    case 0xC00BDF: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_row.asm:157 STA (@LOCAL03),Y
    case 0xC00BE0: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:158 LDA @LOCAL05
    case 0xC00BE2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:159 INC
    case 0xC00BE4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:160 STA @LOCAL05
    case 0xC00BE5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:162 CMP #16
    case 0xC00BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_row.asm:162 CMP #16
    // Overlapping static entry reached from 0xC00BE7.
    case 0xC00BE9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:163 BCC @UNKNOWN9
    case 0xC00BEA: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_row.asm:165 END_C_FUNCTION
    case 0xC00BEC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_row.asm:165 END_C_FUNCTION
    case 0xC00BED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_overlay_sprites.asm (source_named).
bool execute_overworld_load_overlay_sprites_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_overlay_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC486D8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC486DC.
    case 0xC486DE: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC486DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    case 0xC486E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005600, 3); return true;
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    // Overlapping static entry reached from 0xC486E0.
    case 0xC486E2: cpu.execute_instruction<0x56>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    case 0xC486E3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC486E2.
    case 0xC486E4: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x000D7E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E4.
    case 0xC486E6: cpu.execute_instruction<0x7E>(0x00850D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E5.
    case 0xC486E7: cpu.execute_instruction<0x0D>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486E8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486E6.
    case 0xC486E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC486EA.
    case 0xC486EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC486ED: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    case 0xC486EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    // Overlapping static entry reached from 0xC486EF.
    case 0xC486F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:13 STA @VIRTUAL02
    case 0xC486F2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:14 BRA @FIRSTLOOPSTART
    case 0xC486F4: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486F6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486F8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486FA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC486FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC486FE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    case 0xC48700: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    // Overlapping static entry reached from 0xC48700.
    case 0xC48702: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_overlay_sprites.asm:19 LDA [@VIRTUAL0A],Y
    case 0xC48703: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC48705: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    case 0xC48707: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC48707.
    case 0xC48709: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_overlay_sprites.asm:22 TAY
    case 0xC4870A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:23 LDA [@VIRTUAL06]
    case 0xC4870B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:24 TAX
    case 0xC4870D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:25 LDA @LOCAL02
    case 0xC4870E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:26 JSR UNKNOWN_C4B1B8
    case 0xC48710: cpu.execute_instruction<0x20>(0x008625, 3); return true;
    // src/overworld/load_overlay_sprites.asm:27 STA @LOCAL01
    case 0xC48713: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC48715: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    case 0xC48717: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    // Overlapping static entry reached from 0xC48717.
    case 0xC48719: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_overlay_sprites.asm:30 LDA [@VIRTUAL0A],Y
    case 0xC4871A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4871C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    case 0xC4871E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4871E.
    case 0xC48720: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_overlay_sprites.asm:33 TAY
    case 0xC48721: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:34 LDA [@VIRTUAL06]
    case 0xC48722: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:35 TAX
    case 0xC48724: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:36 LDA @LOCAL01
    case 0xC48725: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_overlay_sprites.asm:37 JSR UNKNOWN_C4B1B8
    case 0xC48727: cpu.execute_instruction<0x20>(0x008625, 3); return true;
    // src/overworld/load_overlay_sprites.asm:38 STA @LOCAL02
    case 0xC4872A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    case 0xC4872C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    // Overlapping static entry reached from 0xC4872C.
    case 0xC4872E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_overlay_sprites.asm:40 CLC
    case 0xC4872F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:41 ADC @VIRTUAL0A
    case 0xC48730: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:42 STA @VIRTUAL0A
    case 0xC48732: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:43 INC @VIRTUAL02
    case 0xC48734: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:45 LDA f:ENTITY_OVERLAY_COUNT
    case 0xC48736: cpu.execute_instruction<0xAF>(0xC40D7D, 4); return true;
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    case 0xC4873A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4873A.
    case 0xC4873C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:47 STA @VIRTUAL04
    case 0xC4873D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_overlay_sprites.asm:48 LDA @VIRTUAL02
    case 0xC4873F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:49 CMP @VIRTUAL04
    case 0xC48741: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/load_overlay_sprites.asm:50 BCC @LOADNEXTOVERLAYSPRITE
    case 0xC48743: cpu.execute_instruction<0x90>(0x0000B1, 2); return true;
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    case 0xC48745: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    // Overlapping static entry reached from 0xC48745.
    case 0xC48747: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:52 STA @LOCAL00
    case 0xC48748: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:53 BRA @SECONDLOOPSTART
    case 0xC4874A: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/overworld/load_overlay_sprites.asm:55 ASL
    case 0xC4874C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:56 TAX
    case 0xC4874D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4874E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000E30, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4874E.
    case 0xC48750: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48751: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC48753.
    case 0xC48755: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC48756: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:58 LDA @VIRTUAL06
    case 0xC48758: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:59 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC4875A: cpu.execute_instruction<0x9D>(0x0032B4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4875D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x000DFC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4875D.
    case 0xC4875F: cpu.execute_instruction<0x0D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48760: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48762: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC48762.
    case 0xC48764: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC48765: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:61 LDA @VIRTUAL06
    case 0xC48767: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:62 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC48769: cpu.execute_instruction<0x9D>(0x003368, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4876C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x000E3C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4876C.
    case 0xC4876E: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4876F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC48771: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48771.
    case 0xC48773: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC48774: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:64 LDA @VIRTUAL06
    case 0xC48776: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:65 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC48778: cpu.execute_instruction<0x9D>(0x00341C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4877B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000E50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4877B.
    case 0xC4877D: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4877E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC48780: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48780.
    case 0xC48782: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC48783: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:67 LDA @VIRTUAL06
    case 0xC48785: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:68 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC48787: cpu.execute_instruction<0x9D>(0x0034D0, 3); return true;
    // src/overworld/load_overlay_sprites.asm:69 LDA @LOCAL00
    case 0xC4878A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:70 INC
    case 0xC4878C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:71 STA @LOCAL00
    case 0xC4878D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    case 0xC4878F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4878F.
    case 0xC48791: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_overlay_sprites.asm:74 BCC @FILLNEXTENTRY
    case 0xC48792: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC48794: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC48795: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_sector_attributes.asm (source_named).
bool execute_overworld_load_sector_attributes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_sector_attributes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00AB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AB5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AB6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AB7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00AB8.
    case 0xC00ABA: cpu.execute_instruction<0xFF>(0xEB685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00ABB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00ABC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:9 XBA
    case 0xC00ABD: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:10 AND #$00FF
    case 0xC00ABE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_sector_attributes.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC00ABE.
    case 0xC00AC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_sector_attributes.asm:11 STA @VIRTUAL02
    case 0xC00AC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_sector_attributes.asm:12 TXA
    case 0xC00AC3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:13 AND #$FF80
    case 0xC00AC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x00FF80, 3); return true;
    // src/overworld/load_sector_attributes.asm:13 AND #$FF80
    // Overlapping static entry reached from 0xC00AC4.
    case 0xC00AC6: cpu.execute_instruction<0xFF>(0x184A4A, 4); return true;
    // src/overworld/load_sector_attributes.asm:14 LSR
    case 0xC00AC7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:15 LSR
    case 0xC00AC8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:16 CLC
    case 0xC00AC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:17 ADC @VIRTUAL02
    case 0xC00ACA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_sector_attributes.asm:18 ASL
    case 0xC00ACC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:19 TAX
    case 0xC00ACD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:20 LDA f:MAP_DATA_PER_SECTOR_ATTRIBUTES_TABLE,X
    case 0xC00ACE: cpu.execute_instruction<0xBF>(0xD7B200, 4); return true;
    // src/overworld/load_sector_attributes.asm:21 STA CURRENT_SECTOR_ATTRIBUTES
    case 0xC00AD2: cpu.execute_instruction<0x8D>(0x004714, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_sector_attributes.asm:22 END_C_FUNCTION
    case 0xC00AD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_sector_attributes.asm:22 END_C_FUNCTION
    case 0xC00AD6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_special_sprite_palette.asm (source_named).
bool execute_overworld_load_special_sprite_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_special_sprite_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00788: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0078C.
    case 0xC0078E: cpu.execute_instruction<0xFF>(0x40A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0078F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00790: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000240, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00790.
    case 0xC00792: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:9 LDA __BSS_START__ + BPP4PALETTE_SIZE * 2,X
    case 0xC00793: cpu.execute_instruction<0xBD>(0x000040, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:10 BEQ @UNKNOWN2
    case 0xC00796: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00798: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00799: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0079C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:12 CLC
    case 0xC0079D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    case 0xC0079E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0079E.
    case 0xC007A0: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:14 TAX
    case 0xC007A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:15 STX @LOCAL01
    case 0xC007A2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    case 0xC007A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    // Overlapping static entry reached from 0xC007A4.
    case 0xC007A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:17 STA @LOCAL00
    case 0xC007A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:18 BRA @UNKNOWN1
    case 0xC007A9: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:20 ASL
    case 0xC007AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:21 PHA
    case 0xC007AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:22 LDA __BSS_START__,X
    case 0xC007AD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:23 PLX
    case 0xC007B0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:24 STA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC007B1: cpu.execute_instruction<0x9D>(0x000300, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:25 LDX @LOCAL01
    case 0xC007B4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:26 INX
    case 0xC007B6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:27 INX
    case 0xC007B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:28 STX @LOCAL01
    case 0xC007B8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:29 LDA @LOCAL00
    case 0xC007BA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:30 INC
    case 0xC007BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:31 STA @LOCAL00
    case 0xC007BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    case 0xC007BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000050, 2); else cpu.execute_instruction<0xC9>(0x000050, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    // Overlapping static entry reached from 0xC007BF.
    case 0xC007C1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:34 BCC @UNKNOWN0
    case 0xC007C2: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007C4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007C5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_tile_collision.asm (source_named).
bool execute_overworld_load_tile_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_tile_collision.asm:3 BEGIN_C_FUNCTION
    case 0xC0063A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0063C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0063D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0063E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0063F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0063F.
    case 0xC00641: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00642: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00643: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    case 0xC00644: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC00641.
    case 0xC00645: cpu.execute_instruction<0x0E>(0x007DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00637D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00646.
    case 0xC00648: cpu.execute_instruction<0x63>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00649: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00648.
    case 0xC0064A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0064B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0064A.
    case 0xC0064C: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0064B.
    case 0xC0064D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0064E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_tile_collision.asm:10 LDA @LOCAL00
    case 0xC00650: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:11 ASL
    case 0xC00652: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:12 ASL
    case 0xC00653: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:13 CLC
    case 0xC00654: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:14 ADC @VIRTUAL06
    case 0xC00655: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:15 STA @VIRTUAL06
    case 0xC00657: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00659: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00659.
    case 0xC0065B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0065C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0065E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0065F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00661: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00663: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00665.
    case 0xC00667: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00668: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0066A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0066A.
    case 0xC0066C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0066D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_tile_collision.asm:18 LDA #0
    case 0xC0066F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_tile_collision.asm:18 LDA #0
    // Overlapping static entry reached from 0xC0066F.
    case 0xC00671: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_tile_collision.asm:19 STA @LOCAL00
    case 0xC00672: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:20 BRA @UNKNOWN1
    case 0xC00674: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/load_tile_collision.asm:22 LDA [@VIRTUAL0A]
    case 0xC00676: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:23 STA [@VIRTUAL06]
    case 0xC00678: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:24 INC @VIRTUAL0A
    case 0xC0067A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:25 INC @VIRTUAL0A
    case 0xC0067C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:26 INC @VIRTUAL06
    case 0xC0067E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:27 INC @VIRTUAL06
    case 0xC00680: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:28 LDA @LOCAL00
    case 0xC00682: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:29 INC
    case 0xC00684: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:30 STA @LOCAL00
    case 0xC00685: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:32 CMP #960
    case 0xC00687: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0003C0, 3); return true;
    // src/overworld/load_tile_collision.asm:32 CMP #960
    // Overlapping static entry reached from 0xC00687.
    case 0xC00689: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    case 0xC0068A: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC00689.
    case 0xC0068B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0068C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0068D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_town_map_data.asm (source_named).
bool execute_overworld_load_town_map_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_town_map_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4A823: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A825: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A826: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A827: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A828: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A828.
    case 0xC4A82A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A82B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A82C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:10 TAY
    case 0xC4A82D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:11 STY @LOCAL02
    case 0xC4A82E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_town_map_data.asm:12 LDX #1
    case 0xC4A830: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_town_map_data.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4A830.
    case 0xC4A832: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:13 LDA #2
    case 0xC4A833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/load_town_map_data.asm:13 LDA #2
    // Overlapping static entry reached from 0xC4A833.
    case 0xC4A835: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:14 JSL FADE_OUT
    case 0xC4A836: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E5, 2); else cpu.execute_instruction<0xA9>(0x0030E5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83A.
    case 0xC4A83C: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83C.
    case 0xC4A83E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83F.
    case 0xC4A841: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A842: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_town_map_data.asm:16 LDY @LOCAL02
    case 0xC4A844: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_town_map_data.asm:17 TYA
    case 0xC4A846: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:18 ASL
    case 0xC4A847: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:19 ASL
    case 0xC4A848: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:20 CLC
    case 0xC4A849: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:21 ADC @VIRTUAL0A
    case 0xC4A84A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_town_map_data.asm:22 STA @VIRTUAL0A
    case 0xC4A84C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A84E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A84E.
    case 0xC4A850: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A851: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A853: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A854: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A856: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A858: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A860: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4A862.
    case 0xC4A864: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A865: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4A867.
    case 0xC4A869: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A86A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_town_map_data.asm:26 JSL DECOMP
    case 0xC4A86C: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/overworld/load_town_map_data.asm:28 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4A870: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    case 0xC4A873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4A873.
    case 0xC4A875: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_town_map_data.asm:30 BNE @UNKNOWN0
    case 0xC4A876: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A878.
    case 0xC4A87A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A87B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A87D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A87D.
    case 0xC4A87F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A880: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A882: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A884: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A886: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A888: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    case 0xC4A88A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4A88A.
    case 0xC4A88C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    case 0xC4A88D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4A88D.
    case 0xC4A88F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:35 JSL MEMCPY16
    case 0xC4A890: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x00DEFD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4A894.
    case 0xC4A896: cpu.execute_instruction<0xDE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A897: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4A899.
    case 0xC4A89B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A89C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4A89E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A89E.
    case 0xC4A8A0: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4A8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A8A0.
    case 0xC4A8A2: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A8A1.
    case 0xC4A8A3: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    case 0xC4A8A4: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4A8A3.
    case 0xC4A8A5: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4A8A5.
    case 0xC4A8A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A0, 2); else cpu.execute_instruction<0xC0>(0x0000A0, 3); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    case 0xC4A8A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4A8A7.
    case 0xC4A8A9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4A8A8.
    case 0xC4A8AA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    case 0xC4A8AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    // Overlapping static entry reached from 0xC4A8AB.
    case 0xC4A8AD: cpu.execute_instruction<0x30>(0x000098, 2); return true;
    // src/overworld/load_town_map_data.asm:42 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4A8AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:43 JSL SET_BG1_VRAM_LOCATION
    case 0xC4A8AF: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/overworld/load_town_map_data.asm:44 LDA #3
    case 0xC4A8B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/load_town_map_data.asm:44 LDA #3
    // Overlapping static entry reached from 0xC4A8B3.
    case 0xC4A8B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:45 JSL SET_OAM_SIZE
    case 0xC4A8B6: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/overworld/load_town_map_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A8BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:47 LDA #$00
    case 0xC4A8BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    case 0xC4A8BE: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4A8BC.
    case 0xC4A8BF: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4A8BF.
    case 0xC4A8C1: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/overworld/load_town_map_data.asm:49 STA f:CGWSEL
    case 0xC4A8C2: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/overworld/load_town_map_data.asm:50 LDA #$01
    case 0xC4A8C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    case 0xC4A8C8: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A8C6.
    case 0xC4A8C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A8C9.
    case 0xC4A8CA: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/overworld/load_town_map_data.asm:52 STZ TD_MIRROR
    case 0xC4A8CB: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/overworld/load_town_map_data.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4A8CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8D0.
    case 0xC4A8D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8D5.
    case 0xC4A8D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DA.
    case 0xC4A8DC: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DC.
    case 0xC4A8DE: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DD.
    case 0xC4A8DF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E4: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8E2.
    case 0xC4A8E5: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8E5.
    case 0xC4A8E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0040A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000840, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8E7.
    case 0xC4A8E9: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8E8.
    case 0xC4A8EA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8ED.
    case 0xC4A8EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8F2.
    case 0xC4A8F4: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8F5.
    case 0xC4A8F7: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8FB: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A8FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00D7E2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A8FF.
    case 0xC4A901: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A902: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A901.
    case 0xC4A903: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A904.
    case 0xC4A906: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A907: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A909: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_town_map_data.asm:60 JSL DECOMP
    case 0xC4A911: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A915: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A917: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A919: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A91B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A91D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A91D.
    case 0xC4A91F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A920: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A920.
    case 0xC4A922: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A923: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A927: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A925.
    case 0xC4A928: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A928.
    case 0xC4A92A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0018A9, 3); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    case 0xC4A92B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4A92A.
    case 0xC4A92C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4A92B.
    case 0xC4A92D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:64 JSL UNKNOWN_C0856B
    case 0xC4A92E: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/load_town_map_data.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A932: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:66 LDA #$11
    case 0xC4A934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    case 0xC4A936: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A934.
    case 0xC4A937: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A937.
    case 0xC4A938: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/load_town_map_data.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC4A939: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:69 STZ BG1_Y_POS
    case 0xC4A93B: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/overworld/load_town_map_data.asm:70 STZ BG1_X_POS
    case 0xC4A93E: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/overworld/load_town_map_data.asm:71 JSL UPDATE_SCREEN
    case 0xC4A941: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/load_town_map_data.asm:72 LDX #1
    case 0xC4A945: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_town_map_data.asm:72 LDX #1
    // Overlapping static entry reached from 0xC4A945.
    case 0xC4A947: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:73 LDA #2
    case 0xC4A948: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/load_town_map_data.asm:73 LDA #2
    // Overlapping static entry reached from 0xC4A948.
    case 0xC4A94A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:74 JSL FADE_IN
    case 0xC4A94B: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4A94F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4A950: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_your_sanctuary_location.asm (source_named).
bool execute_overworld_load_your_sanctuary_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B492: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B494: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B495: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B496: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B497: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B497.
    case 0xC4B499: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B49A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4B49B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:9 TAX
    case 0xC4B49C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:10 STX @LOCAL01
    case 0xC4B49D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:11 TXA
    case 0xC4B49F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:12 ASL
    case 0xC4B4A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:13 CLC
    case 0xC4B4A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    case 0xC4B4A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x00B692, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    // Overlapping static entry reached from 0xC4B4A2.
    case 0xC4B4A4: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    case 0xC4B4A5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B4A4.
    case 0xC4B4A6: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:16 LDX @VIRTUAL02
    case 0xC4B4A7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:17 LDA __BSS_START__,X
    case 0xC4B4A9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:18 BNE @UNKNOWN0
    case 0xC4B4AC: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4B4AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x00B089, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B4AE.
    case 0xC4B4B0: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4B4B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B4B0.
    case 0xC4B4B2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4B4B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B4B2.
    case 0xC4B4B4: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B4B3.
    case 0xC4B4B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4B4B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:20 LDX @LOCAL01
    case 0xC4B4B8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:21 TXA
    case 0xC4B4BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:22 ASL
    case 0xC4B4BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:23 ASL
    case 0xC4B4BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:24 STA @LOCAL00
    case 0xC4B4BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:25 TXY
    case 0xC4B4BF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:26 INC
    case 0xC4B4C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:27 INC
    case 0xC4B4C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B4C2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B4C4: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B4C6: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B4C8: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:29 CLC
    case 0xC4B4CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:30 ADC @VIRTUAL0A
    case 0xC4B4CB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:31 STA @VIRTUAL0A
    case 0xC4B4CD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:32 LDA [@VIRTUAL0A]
    case 0xC4B4CF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:33 TAX
    case 0xC4B4D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:34 LDA @LOCAL00
    case 0xC4B4D2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:35 CLC
    case 0xC4B4D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:36 ADC @VIRTUAL06
    case 0xC4B4D5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:37 STA @VIRTUAL06
    case 0xC4B4D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:38 LDA [@VIRTUAL06]
    case 0xC4B4D9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:39 JSR LOAD_YOUR_SANCTUARY_LOCATION_DATA
    case 0xC4B4DB: cpu.execute_instruction<0x20>(0x00B351, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    case 0xC4B4DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    // Overlapping static entry reached from 0xC4B4DE.
    case 0xC4B4E0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:41 LDX @VIRTUAL02
    case 0xC4B4E1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:42 STA __BSS_START__,X
    case 0xC4B4E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4B4E6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4B4E7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_your_sanctuary_location_data.asm (source_named).
bool execute_overworld_load_your_sanctuary_location_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B351: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC4B34E.
    case 0xC4B352: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B353: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B354: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B355: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B356: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B356.
    case 0xC4B358: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B359: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B35A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    case 0xC4B35B: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC4B358.
    case 0xC4B35C: cpu.execute_instruction<0x20>(0x000286, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:17 STX @VIRTUAL02
    case 0xC4B35D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:18 STX @LOCAL05
    case 0xC4B35F: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:19 STA @VIRTUAL04
    case 0xC4B361: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:20 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B363: cpu.execute_instruction<0x9C>(0x00B690, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:21 LDA @VIRTUAL04
    case 0xC4B366: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:22 LSR
    case 0xC4B368: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:23 LSR
    case 0xC4B369: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:24 LSR
    case 0xC4B36A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:25 LSR
    case 0xC4B36B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:26 LSR
    case 0xC4B36C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:27 STA @LOCAL04
    case 0xC4B36D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:28 LDA @VIRTUAL02
    case 0xC4B36F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:29 LSR
    case 0xC4B371: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:30 LSR
    case 0xC4B372: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:31 LSR
    case 0xC4B373: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:32 LSR
    case 0xC4B374: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:33 TAX
    case 0xC4B375: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B376: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B376.
    case 0xC4B378: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B379: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B37B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B37B.
    case 0xC4B37D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B37E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:35 LDA @LOCAL04
    case 0xC4B380: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:36 STA @VIRTUAL02
    case 0xC4B382: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:37 TXA
    case 0xC4B384: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B385: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B386: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B387: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B388: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B389: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:39 CLC
    case 0xC4B38A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:40 ADC @VIRTUAL02
    case 0xC4B38B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B38D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B38F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B391: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B393: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:42 CLC
    case 0xC4B395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:43 ADC @VIRTUAL0A
    case 0xC4B396: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:44 STA @VIRTUAL0A
    case 0xC4B398: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:45 LDA [@VIRTUAL0A]
    case 0xC4B39A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    case 0xC4B39C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B39C.
    case 0xC4B39E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:47 TAY
    case 0xC4B39F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:48 STY @LOCAL03
    case 0xC4B3A0: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:49 LDA @VIRTUAL04
    case 0xC4B3A2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:50 LSR
    case 0xC4B3A4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:51 LSR
    case 0xC4B3A5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:52 LSR
    case 0xC4B3A6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:53 LSR
    case 0xC4B3A7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:54 LSR
    case 0xC4B3A8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:55 PHA
    case 0xC4B3A9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:56 LDA @LOCAL05
    case 0xC4B3AA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:57 STA @VIRTUAL02
    case 0xC4B3AC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:58 LSR
    case 0xC4B3AE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:59 LSR
    case 0xC4B3AF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    case 0xC4B3B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    // Overlapping static entry reached from 0xC4B3B0.
    case 0xC4B3B2: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:62 PLX
    case 0xC4B3B6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:63 STX @VIRTUAL02
    case 0xC4B3B7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:64 CLC
    case 0xC4B3B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:65 ADC @VIRTUAL02
    case 0xC4B3BA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:66 CLC
    case 0xC4B3BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:67 ADC @VIRTUAL06
    case 0xC4B3BD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:68 STA @VIRTUAL06
    case 0xC4B3BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B3C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:70 LDA [@VIRTUAL06]
    case 0xC4B3C3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:71 LSR
    case 0xC4B3C5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:72 LSR
    case 0xC4B3C6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:73 LSR
    case 0xC4B3C7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC4B3C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    case 0xC4B3CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4B3CA.
    case 0xC4B3CC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:76 STA LOADED_MAP_TILE_COMBO
    case 0xC4B3CD: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:77 LDX @LOCAL06
    case 0xC4B3D0: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:78 TYA
    case 0xC4B3D2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    case 0xC4B3D3: cpu.execute_instruction<0x20>(0x00B0FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00621D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B3D6.
    case 0xC4B3D8: cpu.execute_instruction<0x62>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3D9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B3DB.
    case 0xC4B3DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3DE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:81 LDY @LOCAL03
    case 0xC4B3E0: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:82 TYA
    case 0xC4B3E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:83 LSR
    case 0xC4B3E3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:84 LSR
    case 0xC4B3E4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:85 LSR
    case 0xC4B3E5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:86 ASL
    case 0xC4B3E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:87 CLC
    case 0xC4B3E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:88 ADC @VIRTUAL0A
    case 0xC4B3E8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:89 STA @VIRTUAL0A
    case 0xC4B3EA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3EC.
    case 0xC4B3EE: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F1.
    case 0xC4B3F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3F8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3FC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B3FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0062AD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3FE.
    case 0xC4B400: cpu.execute_instruction<0x62>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B401: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B403: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B403.
    case 0xC4B405: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B406: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:93 LDA [@VIRTUAL0A]
    case 0xC4B408: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B40A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B40B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:95 CLC
    case 0xC4B40C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:96 ADC @VIRTUAL06
    case 0xC4B40D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:97 STA @VIRTUAL06
    case 0xC4B40F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B411: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B411.
    case 0xC4B413: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B414: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B416: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B417: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B419: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B41B: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B41D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B41F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B421: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B423: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B425: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B427: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B429: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B42B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B42D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B42F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B431: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B433: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    case 0xC4B435: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    // Overlapping static entry reached from 0xC4B4B0.
    case 0xC4B437: cpu.execute_instruction<0x19>(0x00A4C4, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    case 0xC4B439: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    // Overlapping static entry reached from 0xC4B437.
    case 0xC4B43A: cpu.execute_instruction<0x20>(0x001EA5, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:104 LDA @LOCAL05
    case 0xC4B43B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:105 STA @VIRTUAL02
    case 0xC4B43D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:106 LDX @VIRTUAL02
    case 0xC4B43F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:107 LDA @VIRTUAL04
    case 0xC4B441: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:108 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILE_ARRANGEMENT_DATA
    case 0xC4B443: cpu.execute_instruction<0x20>(0x00B18E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B446: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00625D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B446.
    case 0xC4B448: cpu.execute_instruction<0x62>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B449: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B44B.
    case 0xC4B44D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B44E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:111 LDA [@VIRTUAL0A]
    case 0xC4B450: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:112 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B452: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:112 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B453: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:113 CLC
    case 0xC4B454: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:114 ADC @VIRTUAL06
    case 0xC4B455: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:115 STA @VIRTUAL06
    case 0xC4B457: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B459: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B459.
    case 0xC4B45B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B461: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B463: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B465: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B467: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B469: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B46B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B46D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B46F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B471: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B473: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B475: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B477: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B479: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B47B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:132 JSL DECOMP
    case 0xC4B47D: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:133 LDA @LOCAL06
    case 0xC4B481: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:134 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILESET_DATA
    case 0xC4B483: cpu.execute_instruction<0x20>(0x00B29F, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:135 LDA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B486: cpu.execute_instruction<0xAD>(0x00B68E, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:136 CLC
    case 0xC4B489: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:137 ADC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B48A: cpu.execute_instruction<0x6D>(0x00B690, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:138 STA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B48D: cpu.execute_instruction<0x8D>(0x00B68E, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:139 PLD
    case 0xC4B490: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:140 RTS
    case 0xC4B491: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/map_input_to_direction.asm (source_named).
bool execute_overworld_map_input_to_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/map_input_to_direction.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC042D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC042DB.
    case 0xC042DD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    case 0xC042E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC042DD.
    case 0xC042E1: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    case 0xC042E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC042E1.
    case 0xC042E3: cpu.execute_instruction<0xFF>(0x0E86FF, 4); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC042E2.
    case 0xC042E4: cpu.execute_instruction<0xFF>(0xAD0E86, 4); return true;
    // src/overworld/map_input_to_direction.asm:12 STX @LOCAL00
    case 0xC042E5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    case 0xC042E7: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC042E4.
    case 0xC042E8: cpu.execute_instruction<0x20>(0x00F061, 3); return true;
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    case 0xC042EA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC042E8.
    case 0xC042EB: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/overworld/map_input_to_direction.asm:15 TXA
    case 0xC042EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:16 JMP @RETURN
    case 0xC042ED: cpu.execute_instruction<0x4C>(0x00439B, 3); return true;
    // src/overworld/map_input_to_direction.asm:18 LDA @LOCAL01
    case 0xC042F0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:19 ASL
    case 0xC042F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:20 TAX
    case 0xC042F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:21 LDA f:ALLOWED_INPUT_DIRECTIONS,X
    case 0xC042F4: cpu.execute_instruction<0xBF>(0xC3E116, 4); return true;
    // src/overworld/map_input_to_direction.asm:22 STA @LOCAL01
    case 0xC042F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:23 LDA PAD_STATE
    case 0xC042FA: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    case 0xC042FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000F00, 3); return true;
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    // Overlapping static entry reached from 0xC042FD.
    case 0xC042FF: cpu.execute_instruction<0x0F>(0x0800C9, 4); return true;
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    case 0xC04300: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    // Overlapping static entry reached from 0xC04300.
    case 0xC04302: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:26 BEQ @UP_PRESSED
    case 0xC04303: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    case 0xC04305: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000900, 3); return true;
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    // Overlapping static entry reached from 0xC04305.
    case 0xC04307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000F0, 2); else cpu.execute_instruction<0x09>(0x002EF0, 3); return true;
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    case 0xC04308: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04307.
    case 0xC04309: cpu.execute_instruction<0x2E>(0x0000C9, 3); return true;
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    case 0xC0430A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    // Overlapping static entry reached from 0xC0430A.
    case 0xC0430C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    case 0xC0430D: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    // Overlapping static entry reached from 0xC0430C.
    case 0xC0430E: cpu.execute_instruction<0x37>(0x0000C9, 2); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    case 0xC0430F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000500, 3); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC0430E.
    case 0xC04310: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC0430F.
    case 0xC04311: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    case 0xC04312: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04311.
    case 0xC04313: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    case 0xC04314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000400, 3); return true;
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    // Overlapping static entry reached from 0xC04314.
    case 0xC04316: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    case 0xC04317: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    // Overlapping static entry reached from 0xC04316.
    case 0xC04318: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000C9, 2); else cpu.execute_instruction<0x49>(0x0000C9, 3); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    case 0xC04319: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000600, 3); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04318.
    case 0xC0431A: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04319.
    case 0xC0431B: cpu.execute_instruction<0x06>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    case 0xC0431C: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    // Overlapping static entry reached from 0xC0431B.
    case 0xC0431D: cpu.execute_instruction<0x52>(0x0000C9, 2); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    case 0xC0431E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC0431D.
    case 0xC0431F: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC0431E.
    case 0xC04320: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:38 BEQ @LEFT_PRESSED
    case 0xC04321: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    case 0xC04323: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000A00, 3); return true;
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    // Overlapping static entry reached from 0xC04323.
    case 0xC04325: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:40 BEQ @UP_LEFT_PRESSED
    case 0xC04326: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/overworld/map_input_to_direction.asm:41 BRA @RETURN_DEFAULT
    case 0xC04328: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/overworld/map_input_to_direction.asm:43 LDA @LOCAL01
    case 0xC0432A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    case 0xC0432C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    // Overlapping static entry reached from 0xC0432C.
    case 0xC0432E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:45 BEQ @RETURN_DEFAULT
    case 0xC0432F: cpu.execute_instruction<0xF0>(0x000067, 2); return true;
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    case 0xC04331: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    // Overlapping static entry reached from 0xC04331.
    case 0xC04333: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:47 STX @LOCAL00
    case 0xC04334: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:48 BRA @RETURN_DEFAULT
    case 0xC04336: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/overworld/map_input_to_direction.asm:50 LDA @LOCAL01
    case 0xC04338: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    case 0xC0433A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    // Overlapping static entry reached from 0xC0433A.
    case 0xC0433C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:52 BEQ @RETURN_DEFAULT
    case 0xC0433D: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    case 0xC0433F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    // Overlapping static entry reached from 0xC0433F.
    case 0xC04341: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:54 STX @LOCAL00
    case 0xC04342: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:55 BRA @RETURN_DEFAULT
    case 0xC04344: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/overworld/map_input_to_direction.asm:57 LDA @LOCAL01
    case 0xC04346: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    case 0xC04348: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    // Overlapping static entry reached from 0xC04348.
    case 0xC0434A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:59 BEQ @RETURN_DEFAULT
    case 0xC0434B: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    case 0xC0434D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC0434D.
    case 0xC0434F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:61 STX @LOCAL00
    case 0xC04350: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:62 BRA @RETURN_DEFAULT
    case 0xC04352: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/overworld/map_input_to_direction.asm:64 LDA @LOCAL01
    case 0xC04354: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    case 0xC04356: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    // Overlapping static entry reached from 0xC04356.
    case 0xC04358: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:66 BEQ @RETURN_DEFAULT
    case 0xC04359: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    case 0xC0435B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    // Overlapping static entry reached from 0xC0435B.
    case 0xC0435D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:68 STX @LOCAL00
    case 0xC0435E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:69 BRA @RETURN_DEFAULT
    case 0xC04360: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/overworld/map_input_to_direction.asm:71 LDA @LOCAL01
    case 0xC04362: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    case 0xC04364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    // Overlapping static entry reached from 0xC04364.
    case 0xC04366: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:73 BEQ @RETURN_DEFAULT
    case 0xC04367: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    case 0xC04369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC04369.
    case 0xC0436B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:75 STX @LOCAL00
    case 0xC0436C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:76 BRA @RETURN_DEFAULT
    case 0xC0436E: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/overworld/map_input_to_direction.asm:78 LDA @LOCAL01
    case 0xC04370: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    case 0xC04372: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    // Overlapping static entry reached from 0xC04372.
    case 0xC04374: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:80 BEQ @RETURN_DEFAULT
    case 0xC04375: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    case 0xC04377: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    // Overlapping static entry reached from 0xC04377.
    case 0xC04379: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:82 STX @LOCAL00
    case 0xC0437A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:83 BRA @RETURN_DEFAULT
    case 0xC0437C: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/overworld/map_input_to_direction.asm:85 LDA @LOCAL01
    case 0xC0437E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    case 0xC04380: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    // Overlapping static entry reached from 0xC04380.
    case 0xC04382: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:87 BEQ @RETURN_DEFAULT
    case 0xC04383: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    case 0xC04385: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC04385.
    case 0xC04387: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:89 STX @LOCAL00
    case 0xC04388: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:90 BRA @RETURN_DEFAULT
    case 0xC0438A: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/map_input_to_direction.asm:92 LDA @LOCAL01
    case 0xC0438C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    case 0xC0438E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    // Overlapping static entry reached from 0xC0438E.
    case 0xC04390: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:94 BEQ @RETURN_DEFAULT
    case 0xC04391: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    case 0xC04393: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    // Overlapping static entry reached from 0xC04393.
    case 0xC04395: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:96 STX @LOCAL00
    case 0xC04396: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:98 LDX @LOCAL00
    case 0xC04398: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:99 TXA
    case 0xC0439A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC0439B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC0439C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/mushroomization_movement_swap.asm (source_named).
bool execute_overworld_mushroomization_movement_swap_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:3 BEGIN_C_FUNCTION
    case 0xC02E5E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E60: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E61: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02E62.
    case 0xC02E64: cpu.execute_instruction<0xFF>(0x22AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02E65: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    case 0xC02E66: cpu.execute_instruction<0xAD>(0x006122, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02E64.
    case 0xC02E68: cpu.execute_instruction<0x61>(0x0000D0, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    case 0xC02E69: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    // Overlapping static entry reached from 0xC02E68.
    case 0xC02E6A: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    case 0xC02E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000708, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02E6A.
    case 0xC02E6C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02E6B.
    case 0xC02E6D: cpu.execute_instruction<0x07>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    case 0xC02E6E: cpu.execute_instruction<0x8D>(0x006122, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02E6D.
    case 0xC02E6F: cpu.execute_instruction<0x22>(0x24A261, 4); return true;
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    case 0xC02E71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000024, 2); else cpu.execute_instruction<0xA2>(0x006124, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02E71.
    case 0xC02E73: cpu.execute_instruction<0x61>(0x0000BD, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    case 0xC02E74: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02E73.
    case 0xC02E75: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:13 INC
    case 0xC02E77: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:14 STA __BSS_START__,X
    case 0xC02E78: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    case 0xC02E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC02E7B.
    case 0xC02E7D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:16 STA __BSS_START__,X
    case 0xC02E7E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:18 DEC MUSHROOMIZATION_TIMER
    case 0xC02E81: cpu.execute_instruction<0xCE>(0x006122, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:19 LDA MUSHROOMIZATION_MODIFIER
    case 0xC02E84: cpu.execute_instruction<0xAD>(0x006124, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:20 STA @LOCAL00
    case 0xC02E87: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:21 BEQ @RETURN
    case 0xC02E89: cpu.execute_instruction<0xF0>(0x000071, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC02E8B: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:23 BNE @RETURN
    case 0xC02E8E: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:24 LDA PAD_PRESS
    case 0xC02E90: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:25 XBA
    case 0xC02E93: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    case 0xC02E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC02E94.
    case 0xC02E96: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    case 0xC02E97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC02E97.
    case 0xC02E99: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:28 TAY
    case 0xC02E9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:29 LDA PAD_STATE
    case 0xC02E9B: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:30 XBA
    case 0xC02E9E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    case 0xC02E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC02E9F.
    case 0xC02EA1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    case 0xC02EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC02EA2.
    case 0xC02EA4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:33 TAX
    case 0xC02EA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x00E162, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EA6.
    case 0xC02EA8: cpu.execute_instruction<0xE1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EA8.
    case 0xC02EAA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EAA.
    case 0xC02EAC: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02EAB.
    case 0xC02EAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02EAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:35 LDA @LOCAL00
    case 0xC02EB0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:36 DEC
    case 0xC02EB2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02EB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:38 STA @LOCAL00
    case 0xC02EB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:39 TYA
    case 0xC02EBA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:40 ASL
    case 0xC02EBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:41 STA @VIRTUAL04
    case 0xC02EBC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:42 LDA @LOCAL00
    case 0xC02EBE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:43 CLC
    case 0xC02EC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:44 ADC @VIRTUAL04
    case 0xC02EC1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC3: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC5: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC7: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02EC9: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:46 CLC
    case 0xC02ECB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:47 ADC @VIRTUAL0A
    case 0xC02ECC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:48 STA @VIRTUAL0A
    case 0xC02ECE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:49 LDA [@VIRTUAL0A]
    case 0xC02ED0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:50 STA @VIRTUAL02
    case 0xC02ED2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:51 LDA PAD_PRESS
    case 0xC02ED4: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    case 0xC02ED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    // Overlapping static entry reached from 0xC02ED7.
    case 0xC02ED9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    case 0xC02EDA: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02ED9.
    case 0xC02EDB: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:54 STA PAD_PRESS
    case 0xC02EDC: cpu.execute_instruction<0x8D>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:55 TXA
    case 0xC02EDF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:56 ASL
    case 0xC02EE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:57 STA @VIRTUAL04
    case 0xC02EE1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:58 LDA @LOCAL00
    case 0xC02EE3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:59 CLC
    case 0xC02EE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:60 ADC @VIRTUAL04
    case 0xC02EE6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:61 CLC
    case 0xC02EE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:62 ADC @VIRTUAL06
    case 0xC02EE9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:63 STA @VIRTUAL06
    case 0xC02EEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:64 LDA [@VIRTUAL06]
    case 0xC02EED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:65 STA @VIRTUAL02
    case 0xC02EEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:66 LDA PAD_STATE
    case 0xC02EF1: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    case 0xC02EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    // Overlapping static entry reached from 0xC02EF4.
    case 0xC02EF6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    case 0xC02EF7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02EF6.
    case 0xC02EF8: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:69 STA PAD_STATE
    case 0xC02EF9: cpu.execute_instruction<0x8D>(0x000065, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02EFC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02EFD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/npc_collision_check.asm (source_named).
bool execute_overworld_npc_collision_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/npc_collision_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06224: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06226: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06227: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06228: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06229: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC06229.
    case 0xC0622B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC0622C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC0622D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    case 0xC0622E: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC0622B.
    case 0xC0622F: cpu.execute_instruction<0x1C>(0x000285, 3); return true;
    // src/overworld/npc_collision_check.asm:18 STA @VIRTUAL02
    case 0xC06230: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC06232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC06232.
    case 0xC06234: cpu.execute_instruction<0xFF>(0x981A85, 4); return true;
    // src/overworld/npc_collision_check.asm:20 STA @LOCAL06
    case 0xC06235: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:21 TYA
    case 0xC06237: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:22 ASL
    case 0xC06238: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:23 TAX
    case 0xC06239: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:24 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC0623A: cpu.execute_instruction<0xBD>(0x003728, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0623D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0623F: cpu.execute_instruction<0x4C>(0x006361, 3); return true;
    // src/overworld/npc_collision_check.asm:26 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC06242: cpu.execute_instruction<0xAD>(0x0060DC, 3); return true;
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    case 0xC06245: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    // Overlapping static entry reached from 0xC06245.
    case 0xC06247: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC06248: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0624A: cpu.execute_instruction<0x4C>(0x006361, 3); return true;
    // src/overworld/npc_collision_check.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC0624D: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    case 0xC06250: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06250.
    case 0xC06252: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06253: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06255: cpu.execute_instruction<0x4C>(0x006361, 3); return true;
    // src/overworld/npc_collision_check.asm:32 LDA DEMO_FRAMES_LEFT
    case 0xC06258: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0625B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0625D: cpu.execute_instruction<0x4C>(0x006361, 3); return true;
    // src/overworld/npc_collision_check.asm:34 LDA ENTITY_DIRECTIONS,X
    case 0xC06260: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    case 0xC06263: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06263.
    case 0xC06265: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/npc_collision_check.asm:36 BEQ @UNKNOWN4
    case 0xC06266: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    case 0xC06268: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06268.
    case 0xC0626A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/npc_collision_check.asm:38 BNE @UNKNOWN5
    case 0xC0626B: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/overworld/npc_collision_check.asm:40 TYA
    case 0xC0626D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:41 ASL
    case 0xC0626E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:42 TAX
    case 0xC0626F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:43 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC06270: cpu.execute_instruction<0xBD>(0x0037DC, 3); return true;
    // src/overworld/npc_collision_check.asm:44 STA @LOCAL05
    case 0xC06273: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:45 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06275: cpu.execute_instruction<0xBD>(0x001A40, 3); return true;
    // src/overworld/npc_collision_check.asm:46 STA @VIRTUAL04
    case 0xC06278: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:47 BRA @UNKNOWN6
    case 0xC0627A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/npc_collision_check.asm:49 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0627C: cpu.execute_instruction<0xBD>(0x003764, 3); return true;
    // src/overworld/npc_collision_check.asm:50 STA @LOCAL05
    case 0xC0627F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:51 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06281: cpu.execute_instruction<0xBD>(0x0037A0, 3); return true;
    // src/overworld/npc_collision_check.asm:52 STA @VIRTUAL04
    case 0xC06284: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:54 LDA @LOCAL05
    case 0xC06286: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:55 PHA
    case 0xC06288: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:56 LDA @VIRTUAL02
    case 0xC06289: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:57 PLY
    case 0xC0628B: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:58 STY @VIRTUAL02
    case 0xC0628C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:59 SEC
    case 0xC0628E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:60 SBC @VIRTUAL02
    case 0xC0628F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:61 STA @LOCAL04
    case 0xC06291: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/npc_collision_check.asm:62 LDA @LOCAL05
    case 0xC06293: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:63 ASL
    case 0xC06295: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:64 STA @LOCAL03
    case 0xC06296: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:65 LDA @LOCAL07
    case 0xC06298: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:66 SEC
    case 0xC0629A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:67 SBC @VIRTUAL04
    case 0xC0629B: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:68 STA @LOCAL07
    case 0xC0629D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:69 LDA #0
    case 0xC0629F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/npc_collision_check.asm:69 LDA #0
    // Overlapping static entry reached from 0xC0629F.
    case 0xC062A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/npc_collision_check.asm:70 STA @VIRTUAL02
    case 0xC062A2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:71 STA @LOCAL02
    case 0xC062A4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:72 JMP @UNKNOWN15
    case 0xC062A6: cpu.execute_instruction<0x4C>(0x006357, 3); return true;
    // src/overworld/npc_collision_check.asm:74 LDA @VIRTUAL02
    case 0xC062A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:75 ASL
    case 0xC062AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:76 TAX
    case 0xC062AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:77 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC062AD: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    case 0xC062B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    // Overlapping static entry reached from 0xC062B0.
    case 0xC062B2: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC062B3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC062B5: cpu.execute_instruction<0x4C>(0x00634D, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC062B2.
    case 0xC062B6: cpu.execute_instruction<0x4D>(0x00BD63, 3); return true;
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC062B8: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC062B6.
    case 0xC062B9: cpu.execute_instruction<0x9C>(0x00C92C, 3); return true;
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    case 0xC062BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC062B9.
    case 0xC062BC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC062BB.
    case 0xC062BD: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC062BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC062C0: cpu.execute_instruction<0x4C>(0x00634D, 3); return true;
    // src/overworld/npc_collision_check.asm:83 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC062C3: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/overworld/npc_collision_check.asm:84 BEQ @UNKNOWN10
    case 0xC062C6: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/npc_collision_check.asm:85 LDA ENTITY_NPC_IDS,X
    case 0xC062C8: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/overworld/npc_collision_check.asm:86 INC
    case 0xC062CB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    case 0xC062CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x008001, 3); return true;
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    // Overlapping static entry reached from 0xC062CC.
    case 0xC062CE: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/overworld/npc_collision_check.asm:88 BCC @UNKNOWN10
    case 0xC062CF: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/npc_collision_check.asm:89 JMP @UNKNOWN14
    case 0xC062D1: cpu.execute_instruction<0x4C>(0x00634D, 3); return true;
    // src/overworld/npc_collision_check.asm:91 LDA @VIRTUAL02
    case 0xC062D4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:92 ASL
    case 0xC062D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:93 TAX
    case 0xC062D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:94 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC062D8: cpu.execute_instruction<0xBD>(0x003728, 3); return true;
    // src/overworld/npc_collision_check.asm:95 BEQ @UNKNOWN14
    case 0xC062DB: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/overworld/npc_collision_check.asm:96 LDA ENTITY_DIRECTIONS,X
    case 0xC062DD: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    case 0xC062E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC062E0.
    case 0xC062E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/npc_collision_check.asm:98 BEQ @UNKNOWN11
    case 0xC062E3: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    case 0xC062E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC062E5.
    case 0xC062E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/npc_collision_check.asm:100 BNE @UNKNOWN12
    case 0xC062E8: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:102 LDA @VIRTUAL02
    case 0xC062EA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:103 ASL
    case 0xC062EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:104 TAX
    case 0xC062ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:105 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC062EE: cpu.execute_instruction<0xBC>(0x0037DC, 3); return true;
    // src/overworld/npc_collision_check.asm:106 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC062F1: cpu.execute_instruction<0xBD>(0x001A40, 3); return true;
    // src/overworld/npc_collision_check.asm:107 STA @LOCAL01
    case 0xC062F4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:108 BRA @UNKNOWN13
    case 0xC062F6: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/overworld/npc_collision_check.asm:110 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC062F8: cpu.execute_instruction<0xBC>(0x003764, 3); return true;
    // src/overworld/npc_collision_check.asm:111 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC062FB: cpu.execute_instruction<0xBD>(0x0037A0, 3); return true;
    // src/overworld/npc_collision_check.asm:112 STA @LOCAL01
    case 0xC062FE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:114 LDA @VIRTUAL02
    case 0xC06300: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:115 ASL
    case 0xC06302: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:116 TAX
    case 0xC06303: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:117 LDA @LOCAL01
    case 0xC06304: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:118 STA @VIRTUAL02
    case 0xC06306: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:119 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC06308: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/npc_collision_check.asm:120 SEC
    case 0xC0630B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:121 SBC @VIRTUAL02
    case 0xC0630C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:122 STA @LOCAL00
    case 0xC0630E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:123 SEC
    case 0xC06310: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:124 SBC @VIRTUAL04
    case 0xC06311: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:125 CMP @LOCAL07
    case 0xC06313: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:126 BCS @UNKNOWN14
    case 0xC06315: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/overworld/npc_collision_check.asm:127 LDA @LOCAL01
    case 0xC06317: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:128 CLC
    case 0xC06319: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:129 ADC @LOCAL00
    case 0xC0631A: cpu.execute_instruction<0x65>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:130 CMP @LOCAL07
    case 0xC0631C: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC0631E: cpu.execute_instruction<0x90>(0x00002D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC06320: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/overworld/npc_collision_check.asm:132 STY @VIRTUAL02
    case 0xC06322: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC06324: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/npc_collision_check.asm:134 SEC
    case 0xC06327: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:135 SBC @VIRTUAL02
    case 0xC06328: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:136 STA @LOCAL00
    case 0xC0632A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:137 TYA
    case 0xC0632C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:138 ASL
    case 0xC0632D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:139 TAX
    case 0xC0632E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:140 LDA @LOCAL00
    case 0xC0632F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:141 SEC
    case 0xC06331: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:142 SBC @LOCAL03
    case 0xC06332: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:143 CMP @LOCAL04
    case 0xC06334: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/overworld/npc_collision_check.asm:144 BCS @UNKNOWN14
    case 0xC06336: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/overworld/npc_collision_check.asm:145 STX @VIRTUAL02
    case 0xC06338: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:146 LDA @LOCAL00
    case 0xC0633A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:147 CLC
    case 0xC0633C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:148 ADC @VIRTUAL02
    case 0xC0633D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:149 CMP @LOCAL04
    case 0xC0633F: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06341: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06343: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/npc_collision_check.asm:151 LDA @LOCAL02
    case 0xC06345: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:152 STA @VIRTUAL02
    case 0xC06347: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:153 STA @LOCAL06
    case 0xC06349: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:154 BRA @UNKNOWN16
    case 0xC0634B: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:156 LDA @LOCAL02
    case 0xC0634D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:157 STA @VIRTUAL02
    case 0xC0634F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:158 INC @VIRTUAL02
    case 0xC06351: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:159 LDA @VIRTUAL02
    case 0xC06353: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:160 STA @LOCAL02
    case 0xC06355: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:162 LDA @VIRTUAL02
    case 0xC06357: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:163 CMP #23
    case 0xC06359: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/overworld/npc_collision_check.asm:163 CMP #23
    // Overlapping static entry reached from 0xC06359.
    case 0xC0635B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0635C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0635E: cpu.execute_instruction<0x4C>(0x0062A9, 3); return true;
    // src/overworld/npc_collision_check.asm:166 LDA @LOCAL06
    case 0xC06361: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:167 STA ENTITY_COLLIDED_OBJECTS+46
    case 0xC06363: cpu.execute_instruction<0x8D>(0x002CCA, 3); return true;
    // src/overworld/npc_collision_check.asm:168 LDA @LOCAL06
    case 0xC06366: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC06368: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC06369: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/open_menu-jp.asm (source_named).
bool execute_overworld_open_menu_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13A85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A88: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DD, 2); else cpu.execute_instruction<0x69>(0x00FFDD, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC13A89.
    case 0xC13A8B: cpu.execute_instruction<0xFF>(0x1B225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu-jp.asm:13 END_STACK_VARS
    case 0xC13A8C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:14 JSL UNKNOWN_C0943C
    case 0xC13A8D: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/open_menu-jp.asm:14 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC13A8B.
    case 0xC13A8F: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/overworld/open_menu-jp.asm:15 LDA #SFX::CURSOR1
    case 0xC13A91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:15 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13A91.
    case 0xC13A93: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:16 JSL PLAY_SOUND
    case 0xC13A94: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC13A98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC13A98.
    case 0xC13A9A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC13A9B: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/open_menu-jp.asm:18 LDA #1
    case 0xC13A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:18 LDA #1
    // Overlapping static entry reached from 0xC13A9E.
    case 0xC13AA0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu-jp.asm:19 STA @VIRTUAL02
    case 0xC13AA1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:20 JMP @UNKNOWN7
    case 0xC13AA3: cpu.execute_instruction<0x4C>(0x003B4C, 3); return true;
    // src/overworld/open_menu-jp.asm:22 LDA @VIRTUAL02
    case 0xC13AA6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:23 CMP #3
    case 0xC13AA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:23 CMP #3
    // Overlapping static entry reached from 0xC13AA8.
    case 0xC13AAA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:24 BNE @UNKNOWN2
    case 0xC13AAB: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/overworld/open_menu-jp.asm:25 JSR UNKNOWN_C1C373
    case 0xC13AAD: cpu.execute_instruction<0x20>(0x00C1D5, 3); return true;
    // src/overworld/open_menu-jp.asm:26 CMP #0
    case 0xC13AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:26 CMP #0
    // Overlapping static entry reached from 0xC13AB0.
    case 0xC13AB2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:27 BEQL @UNKNOWN6
    case 0xC13AB3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:27 BEQL @UNKNOWN6
    case 0xC13AB5: cpu.execute_instruction<0x4C>(0x003B4A, 3); return true;
    // src/overworld/open_menu-jp.asm:29 LDA @VIRTUAL02
    case 0xC13AB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:30 CMP #1
    case 0xC13ABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:30 CMP #1
    // Overlapping static entry reached from 0xC13ABA.
    case 0xC13ABC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:31 BEQ @UNKNOWN3
    case 0xC13ABD: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/overworld/open_menu-jp.asm:32 LDA @VIRTUAL02
    case 0xC13ABF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:33 CMP #5
    case 0xC13AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/open_menu-jp.asm:33 CMP #5
    // Overlapping static entry reached from 0xC13AC1.
    case 0xC13AC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:34 BEQ @UNKNOWN3
    case 0xC13AC4: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/overworld/open_menu-jp.asm:35 LDA @VIRTUAL02
    case 0xC13AC6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:36 CMP #2
    case 0xC13AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:36 CMP #2
    // Overlapping static entry reached from 0xC13AC8.
    case 0xC13ACA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:37 BNE @UNKNOWN4
    case 0xC13ACB: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:38 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13ACD: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/overworld/open_menu-jp.asm:39 AND #$00FF
    case 0xC13AD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC13AD0.
    case 0xC13AD2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu-jp.asm:40 CMP #1
    case 0xC13AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:40 CMP #1
    // Overlapping static entry reached from 0xC13AD3.
    case 0xC13AD5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:41 BNE @UNKNOWN4
    case 0xC13AD6: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/overworld/open_menu-jp.asm:42 LDX #1
    case 0xC13AD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:42 LDX #1
    // Overlapping static entry reached from 0xC13AD8.
    case 0xC13ADA: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/overworld/open_menu-jp.asm:43 LDA GAME_STATE + game_state::party_members
    case 0xC13ADB: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/overworld/open_menu-jp.asm:44 AND #$00FF
    case 0xC13ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC13ADE.
    case 0xC13AE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:45 JSL GET_CHARACTER_ITEM
    case 0xC13AE1: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/open_menu-jp.asm:46 CMP #0
    case 0xC13AE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:46 CMP #0
    // Overlapping static entry reached from 0xC13AE5.
    case 0xC13AE7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:47 BNE @UNKNOWN4
    case 0xC13AE8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/open_menu-jp.asm:49 LDX #1
    case 0xC13AEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:49 LDX #1
    // Overlapping static entry reached from 0xC13AEA.
    case 0xC13AEC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/open_menu-jp.asm:50 BRA @UNKNOWN5
    case 0xC13AED: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/open_menu-jp.asm:52 LDX #27
    case 0xC13AEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/overworld/open_menu-jp.asm:52 LDX #27
    // Overlapping static entry reached from 0xC13AEF.
    case 0xC13AF1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/open_menu-jp.asm:54 LDA @VIRTUAL02
    case 0xC13AF2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:55 DEC
    case 0xC13AF4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:56 STA @LOCAL07
    case 0xC13AF5: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x00DD30, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13AF7.
    case 0xC13AF9: cpu.execute_instruction<0xDD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13AFC.
    case 0xC13AFE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:57 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13AFF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:58 LDA @LOCAL07
    case 0xC13B01: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B03: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B07: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:60 CLC
    case 0xC13B09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:61 ADC @VIRTUAL06
    case 0xC13B0A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:62 STA @VIRTUAL06
    case 0xC13B0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:63 STA @LOCAL00
    case 0xC13B0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/open_menu-jp.asm:64 LDA @VIRTUAL06+2
    case 0xC13B10: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:65 STA @LOCAL00+2
    case 0xC13B12: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13B14.
    case 0xC13B16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B17: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13B19.
    case 0xC13B1B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:66 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13B1C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu-jp.asm:67 TXA
    case 0xC13B1E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC13B1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:69 STA @LOCAL02
    case 0xC13B21: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/open_menu-jp.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC13B23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:71 LDA @LOCAL07
    case 0xC13B25: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/overworld/open_menu-jp.asm:72 LSR
    case 0xC13B27: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:73 TAY
    case 0xC13B28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:74 STY @LOCAL06
    case 0xC13B29: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/overworld/open_menu-jp.asm:75 LDY #2
    case 0xC13B2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:75 LDY #2
    // Overlapping static entry reached from 0xC13B2B.
    case 0xC13B2D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/open_menu-jp.asm:76 LDA @VIRTUAL02
    case 0xC13B2E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:77 JSL MODULUS16
    case 0xC13B30: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B34: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:78 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13B38: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:79 STA @VIRTUAL04
    case 0xC13B3A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:80 LDA #5
    case 0xC13B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/open_menu-jp.asm:80 LDA #5
    // Overlapping static entry reached from 0xC13B3C.
    case 0xC13B3E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/overworld/open_menu-jp.asm:81 SEC
    case 0xC13B3F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:82 SBC @VIRTUAL04
    case 0xC13B40: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:83 TAX
    case 0xC13B42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:84 LDA @VIRTUAL02
    case 0xC13B43: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:85 LDY @LOCAL06
    case 0xC13B45: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/overworld/open_menu-jp.asm:86 JSR UNKNOWN_C11596
    case 0xC13B47: cpu.execute_instruction<0x20>(0x001B6A, 3); return true;
    // src/overworld/open_menu-jp.asm:88 INC @VIRTUAL02
    case 0xC13B4A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:90 LDA @VIRTUAL02
    case 0xC13B4C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:91 CMP #7
    case 0xC13B4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/overworld/open_menu-jp.asm:91 CMP #7
    // Overlapping static entry reached from 0xC13B4E.
    case 0xC13B50: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B51: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B53: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:92 BCCL @UNKNOWN1
    case 0xC13B55: cpu.execute_instruction<0x4C>(0x003AA6, 3); return true;
    // src/overworld/open_menu-jp.asm:93 JSR PRINT_MENU_ITEMS
    case 0xC13B58: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/overworld/open_menu-jp.asm:95 LDA #0
    case 0xC13B5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:95 LDA #0
    // Overlapping static entry reached from 0xC13B5B.
    case 0xC13B5D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:96 JSR SET_WINDOW_FOCUS
    case 0xC13B5E: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/overworld/open_menu-jp.asm:97 JSR PRINT_MENU_ITEMS
    case 0xC13B61: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/overworld/open_menu-jp.asm:98 LDA #1
    case 0xC13B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:98 LDA #1
    // Overlapping static entry reached from 0xC13B64.
    case 0xC13B66: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:99 JSR SELECTION_MENU
    case 0xC13B67: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:100 STORE_INT1632 @VIRTUAL06
    case 0xC13B6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:100 STORE_INT1632 @VIRTUAL06
    case 0xC13B6C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:101 LDA @VIRTUAL06
    case 0xC13B6E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:102 CMP #MENU_OPTIONS::TALK_TO
    case 0xC13B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:102 CMP #MENU_OPTIONS::TALK_TO
    // Overlapping static entry reached from 0xC13B70.
    case 0xC13B72: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:103 BEQ @TALK_TO
    case 0xC13B73: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/overworld/open_menu-jp.asm:104 CMP #MENU_OPTIONS::GOODS
    case 0xC13B75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:104 CMP #MENU_OPTIONS::GOODS
    // Overlapping static entry reached from 0xC13B75.
    case 0xC13B77: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:105 BEQ @GOODS
    case 0xC13B78: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/overworld/open_menu-jp.asm:106 CMP #MENU_OPTIONS::PSI
    case 0xC13B7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:106 CMP #MENU_OPTIONS::PSI
    // Overlapping static entry reached from 0xC13B7A.
    case 0xC13B7C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:107 BEQL @PSI
    case 0xC13B7D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:107 BEQL @PSI
    case 0xC13B7F: cpu.execute_instruction<0x4C>(0x003FE1, 3); return true;
    // src/overworld/open_menu-jp.asm:108 CMP #MENU_OPTIONS::EQUIP
    case 0xC13B82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/open_menu-jp.asm:108 CMP #MENU_OPTIONS::EQUIP
    // Overlapping static entry reached from 0xC13B82.
    case 0xC13B84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:109 BEQL @EQUIP
    case 0xC13B85: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:109 BEQL @EQUIP
    case 0xC13B87: cpu.execute_instruction<0x4C>(0x004027, 3); return true;
    // src/overworld/open_menu-jp.asm:110 CMP #MENU_OPTIONS::CHECK
    case 0xC13B8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/open_menu-jp.asm:110 CMP #MENU_OPTIONS::CHECK
    // Overlapping static entry reached from 0xC13B8A.
    case 0xC13B8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:111 BEQL @CHECK
    case 0xC13B8D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:111 BEQL @CHECK
    case 0xC13B8F: cpu.execute_instruction<0x4C>(0x004048, 3); return true;
    // src/overworld/open_menu-jp.asm:112 CMP #MENU_OPTIONS::STATUS
    case 0xC13B92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/open_menu-jp.asm:112 CMP #MENU_OPTIONS::STATUS
    // Overlapping static entry reached from 0xC13B92.
    case 0xC13B94: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:113 BEQL @STATUS
    case 0xC13B95: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:113 BEQL @STATUS
    case 0xC13B97: cpu.execute_instruction<0x4C>(0x00407A, 3); return true;
    // src/overworld/open_menu-jp.asm:114 JMP @UNKNOWN75
    case 0xC13B9A: cpu.execute_instruction<0x4C>(0x004083, 3); return true;
    // src/overworld/open_menu-jp.asm:116 JSL TALK_TO
    case 0xC13B9D: cpu.execute_instruction<0x22>(0xC13864, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BA1.
    case 0xC13BA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BA6.
    case 0xC13BA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:117 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BA9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAD: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BAF: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BB1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:118 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BB3: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:119 BNE @T012
    case 0xC13BB5: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x0025A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BB7.
    case 0xC13BB9: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BB9.
    case 0xC13BBB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBB.
    case 0xC13BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBC.
    case 0xC13BBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13BBF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:120 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BBD.
    case 0xC13BC0: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:123 JSL DISPLAY_TEXT
    case 0xC13BC9: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:124 JMP @UNKNOWN75
    case 0xC13BCD: cpu.execute_instruction<0x4C>(0x004083, 3); return true;
    // src/overworld/open_menu-jp.asm:126 JSR UNKNOWN_C1134B
    case 0xC13BD0: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/overworld/open_menu-jp.asm:128 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13BD3: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/overworld/open_menu-jp.asm:129 AND #$00FF
    case 0xC13BD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC13BD6.
    case 0xC13BD8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu-jp.asm:130 CMP #1
    case 0xC13BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:130 CMP #1
    // Overlapping static entry reached from 0xC13BD9.
    case 0xC13BDB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:131 BNE @GOODS_MANY_PARTY_MEMBERS
    case 0xC13BDC: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // src/overworld/open_menu-jp.asm:132 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC13BDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x009B20, 3); return true;
    // src/overworld/open_menu-jp.asm:132 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC13BDE.
    case 0xC13BE0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:133 STY @LOCAL05
    case 0xC13BE1: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:134 LDX #1
    case 0xC13BE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:134 LDX #1
    // Overlapping static entry reached from 0xC13BE3.
    case 0xC13BE5: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/overworld/open_menu-jp.asm:135 LDA __BSS_START__,Y
    case 0xC13BE6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:136 AND #$00FF
    case 0xC13BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC13BE9.
    case 0xC13BEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:137 JSL GET_CHARACTER_ITEM
    case 0xC13BEC: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/open_menu-jp.asm:138 CMP #0
    case 0xC13BF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:138 CMP #0
    // Overlapping static entry reached from 0xC13BF0.
    case 0xC13BF2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:139 BEQL @MAIN_PAUSE_MENU
    case 0xC13BF3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:139 BEQL @MAIN_PAUSE_MENU
    case 0xC13BF5: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:140 LDX #2
    case 0xC13BF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:140 LDX #2
    // Overlapping static entry reached from 0xC13BF8.
    case 0xC13BFA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/open_menu-jp.asm:141 LDY @LOCAL05
    case 0xC13BFB: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:142 LDA __BSS_START__,Y
    case 0xC13BFD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:143 AND #$00FF
    case 0xC13C00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC13C00.
    case 0xC13C02: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:144 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13C03: cpu.execute_instruction<0x20>(0x009930, 3); return true;
    // src/overworld/open_menu-jp.asm:145 LDY @LOCAL05
    case 0xC13C06: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C08: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:147 LDA __BSS_START__,Y
    case 0xC13C0A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C0F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C11: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/overworld/open_menu-jp.asm:148 STORE_INT832 @VIRTUAL06
    case 0xC13C13: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/open_menu-jp.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC13C15: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C17: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C19: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C1B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:150 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C1D: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/overworld/open_menu-jp.asm:151 LDA #0
    case 0xC13C1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:151 LDA #0
    // Overlapping static entry reached from 0xC13C1F.
    case 0xC13C21: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:152 JSR UNKNOWN_C43573
    case 0xC13C22: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // src/overworld/open_menu-jp.asm:153 BRA @UNKNOWN12
    case 0xC13C25: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/overworld/open_menu-jp.asm:155 LDA #0
    case 0xC13C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:155 LDA #0
    // Overlapping static entry reached from 0xC13C27.
    case 0xC13C29: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:156 JSR UNKNOWN_C193E7
    case 0xC13C2A: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x003A73, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC13C2D.
    case 0xC13C2F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC13C32.
    case 0xC13C34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:157 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC13C35: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13C37.
    case 0xC13C39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13C3C.
    case 0xC13C3E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:158 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13C3F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu-jp.asm:159 LDX #1
    case 0xC13C41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:159 LDX #1
    // Overlapping static entry reached from 0xC13C41.
    case 0xC13C43: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/open_menu-jp.asm:160 LDA #0
    case 0xC13C44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:160 LDA #0
    // Overlapping static entry reached from 0xC13C44.
    case 0xC13C46: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:161 JSR CHAR_SELECT_PROMPT
    case 0xC13C47: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:162 STORE_INT1632 @VIRTUAL06
    case 0xC13C4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:162 STORE_INT1632 @VIRTUAL06
    case 0xC13C4C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C4E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C50: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C52: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:163 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13C54: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C56.
    case 0xC13C58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C59: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C5B.
    case 0xC13C5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:165 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C5E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C62: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C64: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C66: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:166 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C68: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:168 BNE @UNKNOWN14
    case 0xC13C6A: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/overworld/open_menu-jp.asm:169 LDA #WINDOW::INVENTORY
    case 0xC13C6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:169 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13C6C.
    case 0xC13C6E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:170 JSR CLOSE_WINDOW
    case 0xC13C6F: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:171 JSR UNKNOWN_C19437
    case 0xC13C72: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/overworld/open_menu-jp.asm:172 JMP @MAIN_PAUSE_MENU
    case 0xC13C75: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:174 LDX #1
    case 0xC13C78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:174 LDX #1
    // Overlapping static entry reached from 0xC13C78.
    case 0xC13C7A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/open_menu-jp.asm:175 LDA @VIRTUAL06
    case 0xC13C7B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:176 JSL GET_CHARACTER_ITEM
    case 0xC13C7D: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/open_menu-jp.asm:177 CMP #0
    case 0xC13C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:177 CMP #0
    // Overlapping static entry reached from 0xC13C81.
    case 0xC13C83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:178 BEQL @UNKNOWN9
    case 0xC13C84: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:178 BEQL @UNKNOWN9
    case 0xC13C86: cpu.execute_instruction<0x4C>(0x003BD3, 3); return true;
    // src/overworld/open_menu-jp.asm:180 LDA #1
    case 0xC13C89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:180 LDA #1
    // Overlapping static entry reached from 0xC13C89.
    case 0xC13C8B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:181 JSR UNKNOWN_C193E7
    case 0xC13C8C: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // src/overworld/open_menu-jp.asm:182 LDA #2
    case 0xC13C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:182 LDA #2
    // Overlapping static entry reached from 0xC13C8F.
    case 0xC13C91: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:183 JSR SET_WINDOW_FOCUS
    case 0xC13C92: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/overworld/open_menu-jp.asm:184 LDA #1
    case 0xC13C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:184 LDA #1
    // Overlapping static entry reached from 0xC13C95.
    case 0xC13C97: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:185 JSR SELECTION_MENU
    case 0xC13C98: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/overworld/open_menu-jp.asm:186 STA @VIRTUAL02
    case 0xC13C9B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:187 JSR UNKNOWN_C19437
    case 0xC13C9D: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/overworld/open_menu-jp.asm:188 LDA @VIRTUAL02
    case 0xC13CA0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:189 BNE @GOODS_ITEM_SELECTED
    case 0xC13CA2: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/overworld/open_menu-jp.asm:190 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13CA4: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/overworld/open_menu-jp.asm:191 AND #$00FF
    case 0xC13CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC13CA7.
    case 0xC13CA9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu-jp.asm:192 CMP #1
    case 0xC13CAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:192 CMP #1
    // Overlapping static entry reached from 0xC13CAA.
    case 0xC13CAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:193 BNEL @UNKNOWN9
    case 0xC13CAD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:193 BNEL @UNKNOWN9
    case 0xC13CAF: cpu.execute_instruction<0x4C>(0x003BD3, 3); return true;
    // src/overworld/open_menu-jp.asm:194 LDX #1
    case 0xC13CB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:194 LDX #1
    // Overlapping static entry reached from 0xC13CB2.
    case 0xC13CB4: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/overworld/open_menu-jp.asm:195 LDA GAME_STATE + game_state::party_members
    case 0xC13CB5: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/overworld/open_menu-jp.asm:196 AND #$00FF
    case 0xC13CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:196 AND #$00FF
    // Overlapping static entry reached from 0xC13CB8.
    case 0xC13CBA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:197 JSL GET_CHARACTER_ITEM
    case 0xC13CBB: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/open_menu-jp.asm:198 CMP #0
    case 0xC13CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:198 CMP #0
    // Overlapping static entry reached from 0xC13CBF.
    case 0xC13CC1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:199 BEQ @UNKNOWN17
    case 0xC13CC2: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:200 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu-jp.asm:200 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13CC4.
    case 0xC13CC6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:201 JSL PLAY_SOUND
    case 0xC13CC7: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/open_menu-jp.asm:202 JSR UNKNOWN_C3E6F8
    case 0xC13CCB: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/overworld/open_menu-jp.asm:204 LDA #WINDOW::INVENTORY
    case 0xC13CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:204 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13CCE.
    case 0xC13CD0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:205 JSR CLOSE_WINDOW
    case 0xC13CD1: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:206 JMP @MAIN_PAUSE_MENU
    case 0xC13CD4: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13CD7.
    case 0xC13CD9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:208 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13CDA: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CDD: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CDF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CE1: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:209 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13CE3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:210 LDA @VIRTUAL06
    case 0xC13CE5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:211 DEC
    case 0xC13CE7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:212 LDY #.SIZEOF(char_struct)
    case 0xC13CE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/open_menu-jp.asm:212 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC13CE8.
    case 0xC13CEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:213 JSL MULT168
    case 0xC13CEB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/open_menu-jp.asm:214 TAX
    case 0xC13CEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:215 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC13CF0: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/overworld/open_menu-jp.asm:216 AND #$00FF
    case 0xC13CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:216 AND #$00FF
    // Overlapping static entry reached from 0xC13CF3.
    case 0xC13CF5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/open_menu-jp.asm:217 TAX
    case 0xC13CF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:218 BEQ @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13CF7: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/open_menu-jp.asm:219 STX @VIRTUAL04
    case 0xC13CF9: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:220 LDA #4
    case 0xC13CFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/open_menu-jp.asm:220 LDA #4
    // Overlapping static entry reached from 0xC13CFB.
    case 0xC13CFD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/open_menu-jp.asm:221 CLC
    case 0xC13CFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:222 SBC @VIRTUAL04
    case 0xC13CFF: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D01: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D03: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D05: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/open_menu-jp.asm:223 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13D07: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/open_menu-jp.asm:224 LDX #1
    case 0xC13D09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:224 LDX #1
    // Overlapping static entry reached from 0xC13D09.
    case 0xC13D0B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/open_menu-jp.asm:225 BRA @UNKNOWN22
    case 0xC13D0C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/open_menu-jp.asm:227 LDX #0
    case 0xC13D0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:227 LDX #0
    // Overlapping static entry reached from 0xC13D0E.
    case 0xC13D10: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/overworld/open_menu-jp.asm:229 TXY
    case 0xC13D11: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:230 STY @LOCAL03
    case 0xC13D12: cpu.execute_instruction<0x84>(0x000017, 2); return true;
    // src/overworld/open_menu-jp.asm:231 TYX
    case 0xC13D14: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:232 LDA #0
    case 0xC13D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:232 LDA #0
    // Overlapping static entry reached from 0xC13D15.
    case 0xC13D17: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:233 JSR UNKNOWN_C438A5
    case 0xC13D18: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/overworld/open_menu-jp.asm:234 BRA @UNKNOWN24
    case 0xC13D1B: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/overworld/open_menu-jp.asm:236 TYX
    case 0xC13D1D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:237 INX
    case 0xC13D1E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:238 STX @LOCAL05
    case 0xC13D1F: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0032D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D21.
    case 0xC13D23: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D24: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D23.
    case 0xC13D25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13D26.
    case 0xC13D28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:239 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL0A
    case 0xC13D29: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/open_menu-jp.asm:240 TYA
    case 0xC13D2B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:241 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC13D30: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:242 CLC
    case 0xC13D32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:243 ADC @VIRTUAL0A
    case 0xC13D33: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:244 STA @VIRTUAL0A
    case 0xC13D35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:245 STA @LOCAL00
    case 0xC13D37: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/open_menu-jp.asm:246 LDA @VIRTUAL0A+2
    case 0xC13D39: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/overworld/open_menu-jp.asm:247 STA @LOCAL00+2
    case 0xC13D3B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13D3D.
    case 0xC13D3F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D40: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13D42.
    case 0xC13D44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:248 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13D45: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu-jp.asm:249 TXA
    case 0xC13D47: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:250 JSR UNKNOWN_C115F4
    case 0xC13D48: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/overworld/open_menu-jp.asm:251 LDX @LOCAL05
    case 0xC13D4B: cpu.execute_instruction<0xA6>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:252 TXY
    case 0xC13D4D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:253 STY @LOCAL03
    case 0xC13D4E: cpu.execute_instruction<0x84>(0x000017, 2); return true;
    // src/overworld/open_menu-jp.asm:255 LDY @LOCAL03
    case 0xC13D50: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // src/overworld/open_menu-jp.asm:256 CPY #4
    case 0xC13D52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/overworld/open_menu-jp.asm:256 CPY #4
    // Overlapping static entry reached from 0xC13D52.
    case 0xC13D54: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/open_menu-jp.asm:257 BCC @UNKNOWN23
    case 0xC13D55: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // src/overworld/open_menu-jp.asm:258 LDY #0
    case 0xC13D57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:258 LDY #0
    // Overlapping static entry reached from 0xC13D57.
    case 0xC13D59: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/overworld/open_menu-jp.asm:259 TYX
    case 0xC13D5A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:260 LDA #1
    case 0xC13D5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:260 LDA #1
    // Overlapping static entry reached from 0xC13D5B.
    case 0xC13D5D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    case 0xC13D5E: cpu.execute_instruction<0x20>(0x001DEA, 3); return true;
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    // Overlapping static entry reached from 0xC13DD8.
    case 0xC13D5F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:261 JSR UNKNOWN_C451FA
    // Overlapping static entry reached from 0xC13D5F.
    case 0xC13D60: cpu.execute_instruction<0x1D>(0x0003A9, 3); return true;
    // src/overworld/open_menu-jp.asm:263 LDA #3
    case 0xC13D61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:263 LDA #3
    // Overlapping static entry reached from 0xC13D61.
    case 0xC13D63: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:264 JSR SET_WINDOW_FOCUS
    case 0xC13D64: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/overworld/open_menu-jp.asm:265 JSR PRINT_MENU_ITEMS
    case 0xC13D67: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/overworld/open_menu-jp.asm:266 LDA #1
    case 0xC13D6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:266 LDA #1
    // Overlapping static entry reached from 0xC13D6A.
    case 0xC13D6C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:267 JSR SELECTION_MENU
    case 0xC13D6D: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:268 STORE_INT1632 @VIRTUAL0A
    case 0xC13D70: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:268 STORE_INT1632 @VIRTUAL0A
    case 0xC13D72: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/overworld/open_menu-jp.asm:269 LDA @VIRTUAL0A
    case 0xC13D74: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:270 BEQ @UNKNOWN30
    case 0xC13D76: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:271 CMP #1
    case 0xC13D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:271 CMP #1
    // Overlapping static entry reached from 0xC13D78.
    case 0xC13D7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:272 BEQ @GOODS_ITEM_USE
    case 0xC13D7B: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/overworld/open_menu-jp.asm:273 CMP #4
    case 0xC13D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/open_menu-jp.asm:273 CMP #4
    // Overlapping static entry reached from 0xC13D7D.
    case 0xC13D7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:274 BEQ @GOODS_ITEM_HELP
    case 0xC13D80: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/overworld/open_menu-jp.asm:275 CMP #2
    case 0xC13D82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:275 CMP #2
    // Overlapping static entry reached from 0xC13D82.
    case 0xC13D84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:276 BEQL @UNKNOWN34
    case 0xC13D85: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:276 BEQL @UNKNOWN34
    case 0xC13D87: cpu.execute_instruction<0x4C>(0x003E23, 3); return true;
    // src/overworld/open_menu-jp.asm:277 CMP #3
    case 0xC13D8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:277 CMP #3
    // Overlapping static entry reached from 0xC13D8A.
    case 0xC13D8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:278 BEQL @UNKNOWN48
    case 0xC13D8D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:278 BEQL @UNKNOWN48
    case 0xC13D8F: cpu.execute_instruction<0x4C>(0x003F94, 3); return true;
    // src/overworld/open_menu-jp.asm:279 JMP @UNKNOWN75
    case 0xC13D92: cpu.execute_instruction<0x4C>(0x004083, 3); return true;
    // src/overworld/open_menu-jp.asm:281 JSR CLOSE_FOCUS_WINDOW
    case 0xC13D95: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/overworld/open_menu-jp.asm:282 LDA #2
    case 0xC13D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:282 LDA #2
    // Overlapping static entry reached from 0xC13D98.
    case 0xC13D9A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:283 JSR SET_WINDOW_FOCUS
    case 0xC13D9B: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/overworld/open_menu-jp.asm:284 JSR PRINT_MENU_ITEMS
    case 0xC13D9E: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/overworld/open_menu-jp.asm:285 JMP @UNKNOWN15
    case 0xC13DA1: cpu.execute_instruction<0x4C>(0x003C89, 3); return true;
    // src/overworld/open_menu-jp.asm:287 LDY #0
    case 0xC13DA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:287 LDY #0
    // Overlapping static entry reached from 0xC13DA4.
    case 0xC13DA6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/open_menu-jp.asm:288 LDX @VIRTUAL02
    case 0xC13DA7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DA9: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAD: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:289 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DAF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:290 LDA @VIRTUAL06
    case 0xC13DB1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:291 JSR OVERWORLD_USE_ITEM
    case 0xC13DB3: cpu.execute_instruction<0x20>(0x00AE35, 3); return true;
    // src/overworld/open_menu-jp.asm:292 CMP #0
    case 0xC13DB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:292 CMP #0
    // Overlapping static entry reached from 0xC13DB6.
    case 0xC13DB8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:293 BEQ @UNKNOWN25
    case 0xC13DB9: cpu.execute_instruction<0xF0>(0x0000A6, 2); return true;
    // src/overworld/open_menu-jp.asm:294 JMP @UNKNOWN75
    case 0xC13DBB: cpu.execute_instruction<0x4C>(0x004083, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13DBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13DBE.
    case 0xC13DC0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:296 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13DC1: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/open_menu-jp.asm:297 LDX @VIRTUAL02
    case 0xC13DC4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DC6: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DCA: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:298 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13DCC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:299 LDA @VIRTUAL06
    case 0xC13DCE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:300 JSL GET_CHARACTER_ITEM
    case 0xC13DD0: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/open_menu-jp.asm:301 STA @LOCAL07
    case 0xC13DD4: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DD6.
    case 0xC13DD8: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DD9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DD8.
    case 0xC13DDA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DDA.
    case 0xC13DDC: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13DDB.
    case 0xC13DDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:302 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC13DDE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu-jp.asm:303 LDA @LOCAL07
    case 0xC13DE0: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:304 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13DE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:305 CLC
    case 0xC13DEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:306 ADC #item::help_text
    case 0xC13DEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000014, 2); else cpu.execute_instruction<0x69>(0x000014, 3); return true;
    // src/overworld/open_menu-jp.asm:306 ADC #item::help_text
    // Overlapping static entry reached from 0xC13DEB.
    case 0xC13DED: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/open_menu-jp.asm:307 CLC
    case 0xC13DEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:308 ADC @VIRTUAL06
    case 0xC13DEF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:309 STA @VIRTUAL06
    case 0xC13DF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13DF3.
    case 0xC13DF5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DF9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DFB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:310 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13DFD: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13DFF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E01: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E03: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:311 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13E05: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:312 JSL DISPLAY_TEXT
    case 0xC13E07: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:313 LDA #WINDOW::TEXT_STANDARD
    case 0xC13E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:313 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13E0B.
    case 0xC13E0D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:314 JSR CLOSE_WINDOW
    case 0xC13E0E: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:315 LDA #WINDOW::INVENTORY_MENU
    case 0xC13E11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:315 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13E11.
    case 0xC13E13: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:316 JSR CLOSE_WINDOW
    case 0xC13E14: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:317 LDA #WINDOW::INVENTORY
    case 0xC13E17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:317 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13E17.
    case 0xC13E19: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:318 JSR SET_WINDOW_FOCUS
    case 0xC13E1A: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/overworld/open_menu-jp.asm:319 JSR PRINT_MENU_ITEMS
    case 0xC13E1D: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/overworld/open_menu-jp.asm:320 JMP @UNKNOWN15
    case 0xC13E20: cpu.execute_instruction<0x4C>(0x003C89, 3); return true;
    // src/overworld/open_menu-jp.asm:322 LDA #3
    case 0xC13E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:322 LDA #3
    // Overlapping static entry reached from 0xC13E23.
    case 0xC13E25: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:323 JSR UNKNOWN_C193E7
    case 0xC13E26: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x003A7C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13E29.
    case 0xC13E2B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13E2E.
    case 0xC13E30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:324 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13E31: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13E33.
    case 0xC13E35: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E36: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13E38.
    case 0xC13E3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:325 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13E3B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu-jp.asm:326 LDX #1
    case 0xC13E3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:326 LDX #1
    // Overlapping static entry reached from 0xC13E3D.
    case 0xC13E3F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/open_menu-jp.asm:327 LDA #2
    case 0xC13E40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:327 LDA #2
    // Overlapping static entry reached from 0xC13E40.
    case 0xC13E42: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:328 JSR CHAR_SELECT_PROMPT
    case 0xC13E43: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/overworld/open_menu-jp.asm:329 STA @VIRTUAL04
    case 0xC13E46: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:330 STA @LOCAL05
    case 0xC13E48: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:331 JSR UNKNOWN_C19437
    case 0xC13E4A: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/overworld/open_menu-jp.asm:332 LDA #WINDOW::UNKNOWN2C
    case 0xC13E4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00002C, 3); return true;
    // src/overworld/open_menu-jp.asm:332 LDA #WINDOW::UNKNOWN2C
    // Overlapping static entry reached from 0xC13E4D.
    case 0xC13E4F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:333 JSR CLOSE_WINDOW
    case 0xC13E50: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:334 LDA @VIRTUAL04
    case 0xC13E53: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:335 BEQL @UNKNOWN25
    case 0xC13E55: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:335 BEQL @UNKNOWN25
    case 0xC13E57: cpu.execute_instruction<0x4C>(0x003D61, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5A: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E5E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:336 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13E60: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E62: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E64: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:337 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC13E66: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E68: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6A: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E6E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:338 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13E70: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:339 BEQ @UNKNOWN37
    case 0xC13E72: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/overworld/open_menu-jp.asm:340 LDX @VIRTUAL02
    case 0xC13E74: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:341 LDA @VIRTUAL06
    case 0xC13E76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:342 JSL GET_CHARACTER_ITEM
    case 0xC13E78: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E7F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/open_menu-jp.asm:343 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC13E83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:345 CLC
    case 0xC13E84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:346 ADC #item::flags
    case 0xC13E85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/open_menu-jp.asm:346 ADC #item::flags
    // Overlapping static entry reached from 0xC13E85.
    case 0xC13E87: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/open_menu-jp.asm:347 TAX
    case 0xC13E88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:348 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC13E89: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/overworld/open_menu-jp.asm:349 AND #$00FF
    case 0xC13E8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:349 AND #$00FF
    // Overlapping static entry reached from 0xC13E8D.
    case 0xC13E8F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/open_menu-jp.asm:350 AND #ITEM_FLAGS::CANNOT_GIVE
    case 0xC13E90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/open_menu-jp.asm:350 AND #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC13E90.
    case 0xC13E92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:351 BEQ @UNKNOWN37
    case 0xC13E93: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13E95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13E95.
    case 0xC13E97: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:352 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13E98: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13E9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:354 JSR SET_WORKING_MEMORY
    case 0xC13EA3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EA6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EA8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:355 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EAA: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EAC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EAE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EB0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:356 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EB2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:357 JSR SET_ARGUMENT_MEMORY
    case 0xC13EB4: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x002725, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EB7.
    case 0xC13EB9: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EB9.
    case 0xC13EBB: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC13EBC.
    case 0xC13EBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EBF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:358 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC13EC1: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:359 LDA #1
    case 0xC13EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:359 LDA #1
    // Overlapping static entry reached from 0xC13EC5.
    case 0xC13EC7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:360 JSR CLOSE_WINDOW
    case 0xC13EC8: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:361 JMP @UNKNOWN25
    case 0xC13ECB: cpu.execute_instruction<0x4C>(0x003D61, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13ECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13ECE.
    case 0xC13ED0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13ED1: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13ED8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:365 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EDA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:366 JSR SET_WORKING_MEMORY
    case 0xC13EDC: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EDF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EE1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:367 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC13EE3: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EE9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:368 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13EEB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:369 JSR SET_ARGUMENT_MEMORY
    case 0xC13EED: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0025C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF0.
    case 0xC13EF2: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF2.
    case 0xC13EF4: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    // Overlapping static entry reached from 0xC13EF5.
    case 0xC13EF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EF8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:370 DISPLAY_TEXT_PTR MSG_SYS_CARRY
    case 0xC13EFA: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:371 LDA @LOCAL05
    case 0xC13EFE: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu-jp.asm:372 STA @VIRTUAL04
    case 0xC13F00: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:373 STORE_INT1632 @VIRTUAL0A
    case 0xC13F02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:373 STORE_INT1632 @VIRTUAL0A
    case 0xC13F04: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F06: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F0A: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:374 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F0C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F0E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F10: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F12: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F14: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:375 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13F16: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:376 BNE @UNKNOWN45
    case 0xC13F18: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/overworld/open_menu-jp.asm:377 LDY @VIRTUAL02
    case 0xC13F1A: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:378 LDA @VIRTUAL06
    case 0xC13F1C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:379 TAX
    case 0xC13F1E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:380 LDA @VIRTUAL04
    case 0xC13F1F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:381 JSL UNKNOWN_C22A3A
    case 0xC13F21: cpu.execute_instruction<0x22>(0xC2295F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x002604, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F25.
    case 0xC13F27: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F27.
    case 0xC13F29: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    // Overlapping static entry reached from 0xC13F2A.
    case 0xC13F2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:382 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF
    case 0xC13F2F: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:383 BRA @UNKNOWN47
    case 0xC13F33: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/overworld/open_menu-jp.asm:385 LDA @VIRTUAL04
    case 0xC13F35: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:386 JSL FIND_INVENTORY_SPACE2
    case 0xC13F37: cpu.execute_instruction<0x22>(0xC43525, 4); return true;
    // src/overworld/open_menu-jp.asm:387 CMP #0
    case 0xC13F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:387 CMP #0
    // Overlapping static entry reached from 0xC13F3B.
    case 0xC13F3D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu-jp.asm:388 BEQ @UNKNOWN46
    case 0xC13F3E: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/open_menu-jp.asm:389 LDY @VIRTUAL02
    case 0xC13F40: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/open_menu-jp.asm:390 LDA @VIRTUAL06
    case 0xC13F42: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:391 TAX
    case 0xC13F44: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:392 LDA @VIRTUAL04
    case 0xC13F45: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/open_menu-jp.asm:393 JSL UNKNOWN_C22A3A
    case 0xC13F47: cpu.execute_instruction<0x22>(0xC2295F, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F4F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:394 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F51: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:395 JSR SET_WORKING_MEMORY
    case 0xC13F53: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x002613, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F56.
    case 0xC13F58: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F58.
    case 0xC13F5A: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    // Overlapping static entry reached from 0xC13F5B.
    case 0xC13F5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:396 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER
    case 0xC13F60: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:397 BRA @UNKNOWN47
    case 0xC13F64: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F66: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F6A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:399 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC13F6C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:400 JSR SET_WORKING_MEMORY
    case 0xC13F6E: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x002646, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F71.
    case 0xC13F73: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F73.
    case 0xC13F75: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    // Overlapping static entry reached from 0xC13F76.
    case 0xC13F78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:401 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_NG
    case 0xC13F7B: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:403 LDA #WINDOW::TEXT_STANDARD
    case 0xC13F7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:403 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13F7F.
    case 0xC13F81: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:404 JSR CLOSE_WINDOW
    case 0xC13F82: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:405 LDA #WINDOW::INVENTORY_MENU
    case 0xC13F85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:405 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13F85.
    case 0xC13F87: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:406 JSR CLOSE_WINDOW
    case 0xC13F88: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:407 LDA #WINDOW::INVENTORY
    case 0xC13F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:407 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13F8B.
    case 0xC13F8D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:408 JSR CLOSE_WINDOW
    case 0xC13F8E: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:409 JMP @MAIN_PAUSE_MENU
    case 0xC13F91: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13F94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13F94.
    case 0xC13F96: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu-jp.asm:411 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13F97: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9A: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13F9E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:412 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13FA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:413 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:414 JSR SET_WORKING_MEMORY
    case 0xC13FAA: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FAD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:415 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13FB1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:416 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13FB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:417 JSR SET_ARGUMENT_MEMORY
    case 0xC13FBB: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00266A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FBE.
    case 0xC13FC0: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FC0.
    case 0xC13FC2: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13FC3.
    case 0xC13FC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu-jp.asm:418 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13FC8: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:419 LDA #WINDOW::TEXT_STANDARD
    case 0xC13FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:419 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13FCC.
    case 0xC13FCE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:420 JSR CLOSE_WINDOW
    case 0xC13FCF: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:421 LDA #WINDOW::INVENTORY_MENU
    case 0xC13FD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu-jp.asm:421 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13FD2.
    case 0xC13FD4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:422 JSR CLOSE_WINDOW
    case 0xC13FD5: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:423 LDA #WINDOW::INVENTORY
    case 0xC13FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu-jp.asm:423 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13FD8.
    case 0xC13FDA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu-jp.asm:424 JSR CLOSE_WINDOW
    case 0xC13FDB: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/open_menu-jp.asm:425 JMP @MAIN_PAUSE_MENU
    case 0xC13FDE: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:428 JSR UNKNOWN_C1134B
    case 0xC13FE1: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/overworld/open_menu-jp.asm:429 JSR UNKNOWN_C1C373
    case 0xC13FE4: cpu.execute_instruction<0x20>(0x00C1D5, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:430 STORE_INT1632 @VIRTUAL06
    case 0xC13FE7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:430 STORE_INT1632 @VIRTUAL06
    case 0xC13FE9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13FEB.
    case 0xC13FED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FEE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13FF0.
    case 0xC13FF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:431 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13FF3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF7: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FF9: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FFB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:432 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13FFD: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:433 BEQ @UNKNOWN66
    case 0xC13FFF: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:434 LDA @VIRTUAL06
    case 0xC14001: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu-jp.asm:435 DEC
    case 0xC14003: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:436 JSR UNKNOWN_C43573
    case 0xC14004: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // src/overworld/open_menu-jp.asm:438 JSR UNKNOWN_C1B5B6
    case 0xC14007: cpu.execute_instruction<0x20>(0x00B47D, 3); return true;
    // src/overworld/open_menu-jp.asm:439 CMP #0
    case 0xC1400A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu-jp.asm:439 CMP #0
    // Overlapping static entry reached from 0xC1400A.
    case 0xC1400C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu-jp.asm:440 BNE @UNKNOWN75
    case 0xC1400D: cpu.execute_instruction<0xD0>(0x000074, 2); return true;
    // src/overworld/open_menu-jp.asm:442 JSR UNKNOWN_C1C3B6
    case 0xC1400F: cpu.execute_instruction<0x20>(0x00C21D, 3); return true;
    // src/overworld/open_menu-jp.asm:443 CMP #1
    case 0xC14012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:443 CMP #1
    // Overlapping static entry reached from 0xC14012.
    case 0xC14014: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:444 BNEL @MAIN_PAUSE_MENU
    case 0xC14015: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:444 BNEL @MAIN_PAUSE_MENU
    case 0xC14017: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:445 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1401A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu-jp.asm:445 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1401A.
    case 0xC1401C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:446 JSL PLAY_SOUND
    case 0xC1401D: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/open_menu-jp.asm:447 JSR UNKNOWN_C3E6F8
    case 0xC14021: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/overworld/open_menu-jp.asm:448 JMP @MAIN_PAUSE_MENU
    case 0xC14024: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:450 JSR UNKNOWN_C1134B
    case 0xC14027: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/overworld/open_menu-jp.asm:451 JSR UNKNOWN_C1AA5D
    case 0xC1402A: cpu.execute_instruction<0x20>(0x00A941, 3); return true;
    // src/overworld/open_menu-jp.asm:452 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1402D: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/overworld/open_menu-jp.asm:452 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC14099.
    case 0xC1402F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:453 AND #$00FF
    case 0xC14030: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu-jp.asm:453 AND #$00FF
    // Overlapping static entry reached from 0xC14030.
    case 0xC14032: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu-jp.asm:454 CMP #1
    case 0xC14033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:454 CMP #1
    // Overlapping static entry reached from 0xC14033.
    case 0xC14035: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu-jp.asm:455 BNEL @MAIN_PAUSE_MENU
    case 0xC14036: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:455 BNEL @MAIN_PAUSE_MENU
    case 0xC14038: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:456 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1403B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu-jp.asm:456 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1403B.
    case 0xC1403D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:457 JSL PLAY_SOUND
    case 0xC1403E: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/open_menu-jp.asm:458 JSR UNKNOWN_C3E6F8
    case 0xC14042: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/overworld/open_menu-jp.asm:459 JMP @MAIN_PAUSE_MENU
    case 0xC14045: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:461 JSL CHECK
    case 0xC14048: cpu.execute_instruction<0x22>(0xC13918, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1404C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1404C.
    case 0xC1404E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1404F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC14051.
    case 0xC14053: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:462 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14054: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14056: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14058: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:463 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1405E: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:464 BNE @UNKNOWN73
    case 0xC14060: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x0025B8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14062.
    case 0xC14064: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14065: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14064.
    case 0xC14066: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC14067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14066.
    case 0xC14068: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14067.
    case 0xC14069: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC1406A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:465 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC14068.
    case 0xC1406B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1406C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1406E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14070: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:467 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14072: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:468 JSL DISPLAY_TEXT
    case 0xC14074: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:469 BRA @UNKNOWN75
    case 0xC14078: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/open_menu-jp.asm:471 JSR UNKNOWN_C1134B
    case 0xC1407A: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/overworld/open_menu-jp.asm:472 JSR UNKNOWN_C1BB71
    case 0xC1407D: cpu.execute_instruction<0x20>(0x00BA16, 3); return true;
    // src/overworld/open_menu-jp.asm:473 JMP @MAIN_PAUSE_MENU
    case 0xC14080: cpu.execute_instruction<0x4C>(0x003B5B, 3); return true;
    // src/overworld/open_menu-jp.asm:475 JSR CLEAR_INSTANT_PRINTING
    case 0xC14083: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/overworld/open_menu-jp.asm:476 JSR HIDE_HPPP_WINDOWS
    case 0xC14086: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/overworld/open_menu-jp.asm:477 JSR UNKNOWN_C1008E
    case 0xC14089: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/overworld/open_menu-jp.asm:479 JSL WINDOW_TICK
    case 0xC1408C: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/open_menu-jp.asm:481 LDA ENTITY_FADE_ENTITY
    case 0xC14090: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/overworld/open_menu-jp.asm:482 CMP #.LOWORD(-1)
    case 0xC14093: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/open_menu-jp.asm:482 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14093.
    case 0xC14095: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/overworld/open_menu-jp.asm:483 BNE @UNKNOWN76
    case 0xC14096: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    case 0xC14098: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14095.
    case 0xC14099: cpu.execute_instruction<0x30>(0x000094, 2); return true;
    // src/overworld/open_menu-jp.asm:484 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14099.
    case 0xC1409B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu-jp.asm:485 END_C_FUNCTION
    case 0xC1409C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu-jp.asm:485 END_C_FUNCTION
    case 0xC1409D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu-jp.asm:488 BEGIN_C_FUNCTION_FAR
    case 0xC1409E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    // Overlapping static entry reached from 0xC140A2.
    case 0xC140A4: cpu.execute_instruction<0xFF>(0x1B225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu-jp.asm:492 END_STACK_VARS
    case 0xC140A5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/open_menu-jp.asm:493 JSL UNKNOWN_C0943C
    case 0xC140A6: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/open_menu-jp.asm:493 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC140A4.
    case 0xC140A8: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/overworld/open_menu-jp.asm:494 LDA #SFX::CURSOR1
    case 0xC140AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu-jp.asm:494 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC140AA.
    case 0xC140AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu-jp.asm:495 JSL PLAY_SOUND
    case 0xC140AD: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/open_menu-jp.asm:496 JSL TALK_TO
    case 0xC140B1: cpu.execute_instruction<0x22>(0xC13864, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC140B5.
    case 0xC140B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140B8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC140BA.
    case 0xC140BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:497 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC140BD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C1: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C3: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:498 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140C7: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:499 BNE @UNKNOWN79
    case 0xC140C9: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/overworld/open_menu-jp.asm:500 JSL CHECK
    case 0xC140CB: cpu.execute_instruction<0x22>(0xC13918, 4); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D1: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D3: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu-jp.asm:501 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC140D7: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu-jp.asm:502 BNE @UNKNOWN79
    case 0xC140D9: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x0025B8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DB.
    case 0xC140DD: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DD.
    case 0xC140DF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140DF.
    case 0xC140E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140E0.
    case 0xC140E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC140E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu-jp.asm:503 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC140E1.
    case 0xC140E4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu-jp.asm:505 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC140EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu-jp.asm:506 JSL DISPLAY_TEXT
    case 0xC140ED: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/open_menu-jp.asm:507 JSR CLEAR_INSTANT_PRINTING
    case 0xC140F1: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/overworld/open_menu-jp.asm:508 JSR HIDE_HPPP_WINDOWS
    case 0xC140F4: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/overworld/open_menu-jp.asm:509 JSR UNKNOWN_C1008E
    case 0xC140F7: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/overworld/open_menu-jp.asm:511 JSL WINDOW_TICK
    case 0xC140FA: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/open_menu-jp.asm:512 LDA ENTITY_FADE_ENTITY
    case 0xC140FE: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/overworld/open_menu-jp.asm:513 CMP #.LOWORD(-1)
    case 0xC14101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/open_menu-jp.asm:513 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14101.
    case 0xC14103: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/overworld/open_menu-jp.asm:514 BNE @UNKNOWN80
    case 0xC14104: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    case 0xC14106: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14103.
    case 0xC14107: cpu.execute_instruction<0x30>(0x000094, 2); return true;
    // src/overworld/open_menu-jp.asm:515 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC14107.
    case 0xC14109: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu-jp.asm:516 END_C_FUNCTION
    case 0xC1410A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu-jp.asm:516 END_C_FUNCTION
    case 0xC1410B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_average_for_sprite_palettes.asm (source_named).
bool execute_overworld_prepare_average_for_sprite_palettes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC005F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC005FB.
    case 0xC005FD: cpu.execute_instruction<0xFF>(0x01AF5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005FF: cpu.execute_instruction<0xAF>(0xEF6301, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC005FD.
    case 0xC00601: cpu.execute_instruction<0x63>(0x0000EF, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00603: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00605: cpu.execute_instruction<0xAF>(0xEF6303, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00609: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC0060B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0060B.
    case 0xC0060D: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:10 STY @LOCAL01
    case 0xC0060E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00610: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00612: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00614: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00616: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    case 0xC00618: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC00618.
    case 0xC0061A: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:13 TYA
    case 0xC0061B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:14 JSL MEMCPY16
    case 0xC0061C: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:15 LDY @LOCAL01
    case 0xC00620: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:16 TYA
    case 0xC00622: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC00623: cpu.execute_instruction<0x20>(0x0003A1, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    // Overlapping static entry reached from 0xC0069D.
    case 0xC00624: cpu.execute_instruction<0xA1>(0x000003, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:18 LDA COLOUR_AVERAGE_RED
    case 0xC00626: cpu.execute_instruction<0xAD>(0x004756, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:19 STA SAVED_COLOUR_AVERAGE_RED
    case 0xC00629: cpu.execute_instruction<0x8D>(0x00475C, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:20 LDA COLOUR_AVERAGE_GREEN
    case 0xC0062C: cpu.execute_instruction<0xAD>(0x004758, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:21 STA SAVED_COLOUR_AVERAGE_GREEN
    case 0xC0062F: cpu.execute_instruction<0x8D>(0x00475E, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:22 LDA COLOUR_AVERAGE_BLUE
    case 0xC00632: cpu.execute_instruction<0xAD>(0x00475A, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:23 STA SAVED_COLOUR_AVERAGE_BLUE
    case 0xC00635: cpu.execute_instruction<0x8D>(0x004760, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00638: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00639: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity.asm (source_named).
bool execute_overworld_prepare_new_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/prepare_new_entity.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC44BBB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/prepare_new_entity.asm:4 STX ENTITY_PREPARED_X_COORDINATE
    case 0xC44BBD: cpu.execute_instruction<0x8E>(0x00A033, 3); return true;
    // src/overworld/prepare_new_entity.asm:5 STY ENTITY_PREPARED_Y_COORDINATE
    case 0xC44BC0: cpu.execute_instruction<0x8C>(0x00A035, 3); return true;
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    case 0xC44BC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC44BC3.
    case 0xC44BC5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/prepare_new_entity.asm:7 STA ENTITY_PREPARED_DIRECTION
    case 0xC44BC6: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // src/overworld/prepare_new_entity.asm:8 RTL
    case 0xC44BC9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity_at_existing_entity_location.asm (source_named).
bool execute_overworld_prepare_new_entity_at_existing_entity_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44B31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B33: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44B36.
    case 0xC44B38: cpu.execute_instruction<0xFF>(0xF0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B3A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    case 0xC44B3B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC44B38.
    case 0xC44B3C: cpu.execute_instruction<0x07>(0x0000C9, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    case 0xC44B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC44B3C.
    case 0xC44B3E: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC44B3D.
    case 0xC44B3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:10 BEQ @UNKNOWN1
    case 0xC44B40: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:11 BRA @UNKNOWN2
    case 0xC44B42: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:13 LDX CURRENT_ENTITY_SLOT
    case 0xC44B44: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:14 STX @LOCAL00
    case 0xC44B47: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:15 BRA @UNKNOWN2
    case 0xC44B49: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:17 LDX GAME_STATE+game_state::current_party_members
    case 0xC44B4B: cpu.execute_instruction<0xAE>(0x009B3A, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:18 STX @LOCAL00
    case 0xC44B4E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:20 LDX @LOCAL00
    case 0xC44B50: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:21 TXA
    case 0xC44B52: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:22 ASL
    case 0xC44B53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:23 TAX
    case 0xC44B54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44B55: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC44B58: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:26 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44B5B: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:27 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44B5E: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:28 LDA ENTITY_DIRECTIONS,X
    case 0xC44B61: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:29 STA ENTITY_PREPARED_DIRECTION
    case 0xC44B64: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC44B67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC44B68: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity_at_teleport_destination.asm (source_named).
bool execute_overworld_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44B69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B6D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44B6E.
    case 0xC44B70: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B71: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC44B72: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC44B73: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC44B70.
    case 0xC44B74: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:9 STA @LOCAL00
    case 0xC44B75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC44B77: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC44B79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00EB0B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44B79.
    case 0xC44B7B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC44B7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC44B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44B7E.
    case 0xC44B80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC44B81: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:12 LDA @LOCAL00
    case 0xC44B83: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    case 0xC44B85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC44B85.
    case 0xC44B87: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC44B88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC44B89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC44B8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:15 CLC
    case 0xC44B8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:16 ADC @VIRTUAL06
    case 0xC44B8C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:17 STA @VIRTUAL06
    case 0xC44B8E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:18 STA @VIRTUAL0A
    case 0xC44B90: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:19 LDA @VIRTUAL06+2
    case 0xC44B92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:20 STA @VIRTUAL0A+2
    case 0xC44B94: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:21 LDA [@VIRTUAL0A] ;teleport_destination::x_coord
    case 0xC44B96: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:22 ASL
    case 0xC44B98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:23 ASL
    case 0xC44B99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:24 ASL
    case 0xC44B9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC44B9B: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    case 0xC44B9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC44B9E.
    case 0xC44BA0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:27 LDA [@VIRTUAL06],Y
    case 0xC44BA1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:28 ASL
    case 0xC44BA3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:29 ASL
    case 0xC44BA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:30 ASL
    case 0xC44BA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:31 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44BA6: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC44BA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    case 0xC44BAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    // Overlapping static entry reached from 0xC44BAB.
    case 0xC44BAD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:34 LDA [@VIRTUAL06],Y
    case 0xC44BAE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC44BB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    case 0xC44BB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC44BB2.
    case 0xC44BB4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:37 DEC
    case 0xC44BB5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:38 STA ENTITY_PREPARED_DIRECTION
    case 0xC44BB6: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC44BB9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC44BBA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_palette_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B0FA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B0FF.
    case 0xC4B101: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B102: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B103: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    case 0xC4B104: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4B101.
    case 0xC4B105: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:13 TAY
    case 0xC4B106: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:14 STY @LOCAL03
    case 0xC4B107: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:15 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC4B109: cpu.execute_instruction<0x22>(0xC005F7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B10D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B10D.
    case 0xC4B10F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B110: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B112.
    case 0xC4B114: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B115: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4B117: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B117.
    case 0xC4B119: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4B11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B119.
    case 0xC4B11B: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B11A.
    case 0xC4B11C: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    case 0xC4B11D: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B11C.
    case 0xC4B11E: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B11E.
    case 0xC4B120: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x001AA4, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    case 0xC4B121: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4B120.
    case 0xC4B122: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:21 TYA
    case 0xC4B123: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    case 0xC4B124: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    // Overlapping static entry reached from 0xC4B124.
    case 0xC4B126: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:23 TAX
    case 0xC4B127: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:24 TYA
    case 0xC4B128: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:25 LSR
    case 0xC4B129: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:26 LSR
    case 0xC4B12A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:27 LSR
    case 0xC4B12B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:28 JSL LOAD_MAP_PAL
    case 0xC4B12C: cpu.execute_instruction<0x22>(0xC007C6, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:29 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC4B130: cpu.execute_instruction<0x22>(0xC00490, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B134: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:31 STZ PALETTE_UPLOAD_MODE
    case 0xC4B136: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4B139: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B13B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B13B.
    case 0xC4B13D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B13E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B140: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B141: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B143: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B144: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B146: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4B148: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B150: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    case 0xC4B152: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4B152.
    case 0xC4B154: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:37 STA @LOCAL02+2
    case 0xC4B155: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B157.
    case 0xC4B159: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B15C.
    case 0xC4B15E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    case 0xC4B161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4B161.
    case 0xC4B163: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:40 LDA @VIRTUAL02
    case 0xC4B164: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:41 JSL MULT16
    case 0xC4B166: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:42 CLC
    case 0xC4B16A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:43 ADC @VIRTUAL06
    case 0xC4B16B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:44 STA @VIRTUAL06
    case 0xC4B16D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:45 STA @LOCAL00
    case 0xC4B16F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:46 LDA @VIRTUAL06+2
    case 0xC4B171: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:47 STA @LOCAL00+2
    case 0xC4B173: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B175: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B177: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B179: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B17B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B17D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B17F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B181: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B183: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    case 0xC4B185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B185.
    case 0xC4B187: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    case 0xC4B188: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    // Overlapping static entry reached from 0xC4B187.
    case 0xC4B189: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4B18C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4B18D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B18E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B190: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B191: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B192: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B193: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B193.
    case 0xC4B195: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B196: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B197: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    case 0xC4B198: cpu.execute_instruction<0x84>(0x000017, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC4B195.
    case 0xC4B199: cpu.execute_instruction<0x17>(0x000038, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:16 SEC
    case 0xC4B19A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    case 0xC4B19B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    // Overlapping static entry reached from 0xC4B19B.
    case 0xC4B19D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:18 STA @LOCAL04
    case 0xC4B19E: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:19 TXA
    case 0xC4B1A0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:20 SEC
    case 0xC4B1A1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    case 0xC4B1A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    // Overlapping static entry reached from 0xC4B1A2.
    case 0xC4B1A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:22 STA @LOCAL03
    case 0xC4B1A5: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B1A7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4B1A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4B1AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4B1A9.
    case 0xC4B1AC: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    case 0xC4B1AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    // Overlapping static entry reached from 0xC4B1AD.
    case 0xC4B1AF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4B1B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4B1B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4B1B2.
    case 0xC4B1B4: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    case 0xC4B1B5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    // Overlapping static entry reached from 0xC4B1B4.
    case 0xC4B1B6: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B1B9.
    case 0xC4B1BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B1BE.
    case 0xC4B1C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:30 LDY @LOCAL05
    case 0xC4B1C3: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:31 TYA
    case 0xC4B1C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    case 0xC4B1C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    // Overlapping static entry reached from 0xC4B1C6.
    case 0xC4B1C8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:33 JSL MULT16
    case 0xC4B1C9: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:34 CLC
    case 0xC4B1CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:35 ADC @VIRTUAL06
    case 0xC4B1CE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:36 STA @VIRTUAL06
    case 0xC4B1D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    case 0xC4B1D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4B1D2.
    case 0xC4B1D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:38 STA @VIRTUAL04
    case 0xC4B1D5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    case 0xC4B1D7: cpu.execute_instruction<0x4C>(0x00B291, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC4B1B4.
    case 0xC4B1D8: cpu.execute_instruction<0x91>(0x0000B2, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    case 0xC4B1DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4B254.
    case 0xC4B1DB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4B1DA.
    case 0xC4B1DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:42 STA @VIRTUAL02
    case 0xC4B1DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:43 STA @LOCAL02
    case 0xC4B1DF: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:44 JMP @UNKNOWN4
    case 0xC4B1E1: cpu.execute_instruction<0x4C>(0x00B283, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:46 LDA @VIRTUAL04
    case 0xC4B1E4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:47 CLC
    case 0xC4B1E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:48 ADC @LOCAL03
    case 0xC4B1E7: cpu.execute_instruction<0x65>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:49 LSR
    case 0xC4B1E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:50 LSR
    case 0xC4B1EA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:51 STA @LOCAL01
    case 0xC4B1EB: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:52 LDA @VIRTUAL02
    case 0xC4B1ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:53 CLC
    case 0xC4B1EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:54 ADC @LOCAL04
    case 0xC4B1F0: cpu.execute_instruction<0x65>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:55 LSR
    case 0xC4B1F2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:56 LSR
    case 0xC4B1F3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:57 TAY
    case 0xC4B1F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:58 LSR
    case 0xC4B1F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:59 LSR
    case 0xC4B1F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:60 LSR
    case 0xC4B1F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:61 STA @VIRTUAL02
    case 0xC4B1F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:62 LDA @LOCAL01
    case 0xC4B1FA: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    case 0xC4B1FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    // Overlapping static entry reached from 0xC4B1FC.
    case 0xC4B1FE: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B1FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B200: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B201: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:65 CLC
    case 0xC4B202: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:66 ADC @VIRTUAL02
    case 0xC4B203: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:67 TAX
    case 0xC4B205: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B206: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:69 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC4B208: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:70 LSR
    case 0xC4B20C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:71 LSR
    case 0xC4B20D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:72 LSR
    case 0xC4B20E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4B20F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    case 0xC4B211: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC4B211.
    case 0xC4B213: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:75 CMP LOADED_MAP_TILE_COMBO
    case 0xC4B214: cpu.execute_instruction<0xCD>(0x0046F4, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:76 BNE @UNKNOWN2
    case 0xC4B217: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:77 LDA @LOCAL01
    case 0xC4B219: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:78 TAX
    case 0xC4B21B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:79 TYA
    case 0xC4B21C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:80 JSL REDIRECT_C0A156
    case 0xC4B21D: cpu.execute_instruction<0x22>(0xC0A131, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:81 STA @LOCAL01
    case 0xC4B221: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:82 BRA @UNKNOWN3
    case 0xC4B223: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    case 0xC4B225: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    // Overlapping static entry reached from 0xC4B225.
    case 0xC4B227: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:85 STA @LOCAL01
    case 0xC4B228: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:87 LDA @LOCAL02
    case 0xC4B22A: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:88 STA @VIRTUAL02
    case 0xC4B22C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:89 CLC
    case 0xC4B22E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:90 ADC @LOCAL04
    case 0xC4B22F: cpu.execute_instruction<0x65>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    case 0xC4B231: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    // Overlapping static entry reached from 0xC4B231.
    case 0xC4B233: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:92 PHA
    case 0xC4B234: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:93 LDA @VIRTUAL04
    case 0xC4B235: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:94 CLC
    case 0xC4B237: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:95 ADC @LOCAL03
    case 0xC4B238: cpu.execute_instruction<0x65>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    case 0xC4B23A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    // Overlapping static entry reached from 0xC4B23A.
    case 0xC4B23C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B23D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B23E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:98 STA @VIRTUAL02
    case 0xC4B23F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:99 LDA @LOCAL01
    case 0xC4B241: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B243: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B244: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B245: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B246: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:101 CLC
    case 0xC4B247: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:102 ADC @VIRTUAL02
    case 0xC4B248: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:103 PLY
    case 0xC4B24A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:104 STY @VIRTUAL02
    case 0xC4B24B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:105 CLC
    case 0xC4B24D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:106 ADC @VIRTUAL02
    case 0xC4B24E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:107 STA @LOCAL01
    case 0xC4B250: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B252.
    case 0xC4B254: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B255: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B257.
    case 0xC4B259: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B25A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:109 LDA @LOCAL01
    case 0xC4B25C: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:110 ASL
    case 0xC4B25E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:111 CLC
    case 0xC4B25F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:112 ADC @VIRTUAL0A
    case 0xC4B260: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:113 STA @VIRTUAL0A
    case 0xC4B262: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:114 LDA [@VIRTUAL0A]
    case 0xC4B264: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    case 0xC4B266: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    // Overlapping static entry reached from 0xC4B266.
    case 0xC4B268: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:116 ASL
    case 0xC4B269: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:117 TAX
    case 0xC4B26A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    case 0xC4B26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    // Overlapping static entry reached from 0xC4B26B.
    case 0xC4B26D: cpu.execute_instruction<0xFF>(0xF0009D, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:119 STA LOADED_MAP_BLOCKS,X
    case 0xC4B26E: cpu.execute_instruction<0x9D>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:120 LDA [@VIRTUAL0A]
    case 0xC4B271: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:121 STA [@VIRTUAL06]
    case 0xC4B273: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:122 INC @VIRTUAL06
    case 0xC4B275: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:123 INC @VIRTUAL06
    case 0xC4B277: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:124 LDA @LOCAL02
    case 0xC4B279: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:125 STA @VIRTUAL02
    case 0xC4B27B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:126 INC @VIRTUAL02
    case 0xC4B27D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:127 LDA @VIRTUAL02
    case 0xC4B27F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:128 STA @LOCAL02
    case 0xC4B281: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:130 LDA @VIRTUAL02
    case 0xC4B283: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    case 0xC4B285: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    // Overlapping static entry reached from 0xC4B285.
    case 0xC4B287: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B288: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B28A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B28C: cpu.execute_instruction<0x4C>(0x00B1E4, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:133 INC @VIRTUAL04
    case 0xC4B28F: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:135 LDA @VIRTUAL04
    case 0xC4B291: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    case 0xC4B293: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    // Overlapping static entry reached from 0xC4B293.
    case 0xC4B295: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B296: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B298: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B29A: cpu.execute_instruction<0x4C>(0x00B1DA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4B29D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4B29E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_tileset_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B29F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B2A4.
    case 0xC4B2A6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4B2A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    case 0xC4B2A9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4B2A6.
    case 0xC4B2AA: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    case 0xC4B2AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4B2AA.
    case 0xC4B2AC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4B2AB.
    case 0xC4B2AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:12 STA @VIRTUAL04
    case 0xC4B2AE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:13 BRA @UNKNOWN2
    case 0xC4B2B0: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:15 LDA @VIRTUAL04
    case 0xC4B2B2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:16 ASL
    case 0xC4B2B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:17 CLC
    case 0xC4B2B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4B2B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4B2B6.
    case 0xC4B2B8: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    case 0xC4B2B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B2B8.
    case 0xC4B2BA: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:20 LDX @VIRTUAL02
    case 0xC4B2BB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:21 LDA __BSS_START__,X
    case 0xC4B2BD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:22 BEQ @UNKNOWN1
    case 0xC4B2C0: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2C2.
    case 0xC4B2C4: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B2C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B2C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2C7.
    case 0xC4B2C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B2CA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:24 LDA @VIRTUAL04
    case 0xC4B2CC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:25 ASL
    case 0xC4B2CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:26 ASL
    case 0xC4B2CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:27 ASL
    case 0xC4B2D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:28 ASL
    case 0xC4B2D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:29 ASL
    case 0xC4B2D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:30 CLC
    case 0xC4B2D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:31 ADC @VIRTUAL06
    case 0xC4B2D4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:32 STA @VIRTUAL06
    case 0xC4B2D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:33 STA @LOCAL00
    case 0xC4B2D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:34 LDA @VIRTUAL06+2
    case 0xC4B2DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:35 STA @LOCAL00+2
    case 0xC4B2DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:36 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4B2DE: cpu.execute_instruction<0xAD>(0x00B68C, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:37 ASL
    case 0xC4B2E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:38 ASL
    case 0xC4B2E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:39 ASL
    case 0xC4B2E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:40 ASL
    case 0xC4B2E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:41 CLC
    case 0xC4B2E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    case 0xC4B2E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    // Overlapping static entry reached from 0xC4B2E6.
    case 0xC4B2E8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    case 0xC4B2E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    // Overlapping static entry reached from 0xC4B2E9.
    case 0xC4B2EB: cpu.execute_instruction<0x7F>(0x20A2A8, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:44 TAY
    case 0xC4B2EC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    case 0xC4B2ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    // Overlapping static entry reached from 0xC4B2ED.
    case 0xC4B2EF: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B2F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:47 LDA #0
    case 0xC4B2F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    case 0xC4B2F4: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B2F2.
    case 0xC4B2F5: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B2F5.
    case 0xC4B2F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x008CAD, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4B2F8: cpu.execute_instruction<0xAD>(0x00B68C, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4B2F7.
    case 0xC4B2F9: cpu.execute_instruction<0x8C>(0x00A6B6, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4B2F7.
    case 0xC4B2FA: cpu.execute_instruction<0xB6>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    case 0xC4B2FB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4B2FA.
    case 0xC4B2FC: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:52 STA __BSS_START__,X
    case 0xC4B2FD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:53 INC NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4B300: cpu.execute_instruction<0xEE>(0x00B68C, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:54 INC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B303: cpu.execute_instruction<0xEE>(0x00B690, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:56 INC @VIRTUAL04
    case 0xC4B306: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:58 LDA @VIRTUAL04
    case 0xC4B308: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    case 0xC4B30A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000400, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    // Overlapping static entry reached from 0xC4B30A.
    case 0xC4B30C: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    case 0xC4B30D: cpu.execute_instruction<0x90>(0x0000A3, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC4B30C.
    case 0xC4B30E: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B30E.
    case 0xC4B310: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B30F.
    case 0xC4B311: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B312: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B314.
    case 0xC4B316: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B317: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    case 0xC4B319: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    // Overlapping static entry reached from 0xC4B319.
    case 0xC4B31B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:63 LDA @LOCAL02
    case 0xC4B31C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:64 JSL MULT16
    case 0xC4B31E: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:65 CLC
    case 0xC4B322: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:66 ADC @VIRTUAL06
    case 0xC4B323: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:67 STA @VIRTUAL06
    case 0xC4B325: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    case 0xC4B327: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    // Overlapping static entry reached from 0xC4B327.
    case 0xC4B329: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:69 STX @LOCAL01
    case 0xC4B32A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:70 BRA @UNKNOWN4
    case 0xC4B32C: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:72 LDA [@VIRTUAL06]
    case 0xC4B32E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:73 STA @LOCAL02
    case 0xC4B330: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    case 0xC4B332: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    // Overlapping static entry reached from 0xC4B332.
    case 0xC4B334: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:75 ASL
    case 0xC4B335: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:76 TAX
    case 0xC4B336: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:77 LDA @LOCAL02
    case 0xC4B337: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    case 0xC4B339: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FC00, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    // Overlapping static entry reached from 0xC4B339.
    case 0xC4B33B: cpu.execute_instruction<0xFC>(0x00001D, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    case 0xC4B33C: cpu.execute_instruction<0x1D>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    // Overlapping static entry reached from 0xC4B33B.
    case 0xC4B33E: cpu.execute_instruction<0xF0>(0x000087, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    case 0xC4B33F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B33E.
    case 0xC4B340: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    case 0xC4B341: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4B340.
    case 0xC4B342: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    case 0xC4B343: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4B342.
    case 0xC4B344: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    case 0xC4B345: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4B344.
    case 0xC4B346: cpu.execute_instruction<0x12>(0x0000E8, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:84 INX
    case 0xC4B347: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:85 STX @LOCAL01
    case 0xC4B348: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    case 0xC4B34A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000C0, 2); else cpu.execute_instruction<0xE0>(0x0003C0, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    // Overlapping static entry reached from 0xC4B34A.
    case 0xC4B34C: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    case 0xC4B34D: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC4B34C.
    case 0xC4B34E: cpu.execute_instruction<0xDF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4B34F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4B350: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_item_transformations.asm (source_named).
bool execute_overworld_process_item_transformations_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_item_transformations.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4660E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46610: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46611: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46612.
    case 0xC46614: cpu.execute_instruction<0xFF>(0x40AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46615: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC46616: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC46614.
    case 0xC46618: cpu.execute_instruction<0x51>(0x000018, 2); return true;
    // src/overworld/process_item_transformations.asm:11 CLC
    case 0xC46619: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    case 0xC4661A: cpu.execute_instruction<0x6D>(0x0060E6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC4661D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC4661F: cpu.execute_instruction<0x4C>(0x006736, 3); return true;
    // src/overworld/process_item_transformations.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC46622: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC46625: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC46627: cpu.execute_instruction<0x4C>(0x006736, 3); return true;
    // src/overworld/process_item_transformations.asm:16 LDA GAME_STATE + game_state::unknownB0
    case 0xC4662A: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/overworld/process_item_transformations.asm:17 CMP #2
    case 0xC4662D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/process_item_transformations.asm:17 CMP #2
    // Overlapping static entry reached from 0xC4662D.
    case 0xC4662F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC46630: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC46632: cpu.execute_instruction<0x4C>(0x006736, 3); return true;
    // src/overworld/process_item_transformations.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC46635: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:20 LDA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC46637: cpu.execute_instruction<0xAD>(0x00A132, 3); return true;
    // src/overworld/process_item_transformations.asm:21 DEC
    case 0xC4663A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:22 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC4663B: cpu.execute_instruction<0x8D>(0x00A132, 3); return true;
    // src/overworld/process_item_transformations.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4663E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    case 0xC46640: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC46640.
    case 0xC46642: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC46643: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC46645: cpu.execute_instruction<0x4C>(0x006736, 3); return true;
    // src/overworld/process_item_transformations.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC46648: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:27 LDA #60
    case 0xC4664A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x008D3C, 3); return true;
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC4664C: cpu.execute_instruction<0x8D>(0x00A132, 3); return true;
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC4664A.
    case 0xC4664D: cpu.execute_instruction<0x32>(0x0000A1, 2); return true;
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4664F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC46651: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00A120, 3); return true;
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC46651.
    case 0xC46653: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    case 0xC46654: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC46653.
    case 0xC46655: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/overworld/process_item_transformations.asm:32 LDA #1
    case 0xC46656: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC46656.
    case 0xC46658: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_item_transformations.asm:33 STA @LOCAL03
    case 0xC46659: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:34 LDA #0
    case 0xC4665B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:34 LDA #0
    // Overlapping static entry reached from 0xC4665B.
    case 0xC4665D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_item_transformations.asm:35 STA @VIRTUAL04
    case 0xC4665E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:36 STA @LOCAL02
    case 0xC46660: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:37 JMP @UNKNOWN7
    case 0xC46662: cpu.execute_instruction<0x4C>(0x00672A, 3); return true;
    // src/overworld/process_item_transformations.asm:39 LDA @LOCAL03
    case 0xC46665: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:40 BEQ @UNKNOWN5
    case 0xC46667: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/overworld/process_item_transformations.asm:41 LDY @VIRTUAL02
    case 0xC46669: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:42 INY
    case 0xC4666B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:43 STY @LOCAL01
    case 0xC4666C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:44 LDA __BSS_START__,Y
    case 0xC4666E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    case 0xC46671: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC46671.
    case 0xC46673: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_item_transformations.asm:46 BEQ @UNKNOWN5
    case 0xC46674: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/overworld/process_item_transformations.asm:47 LDX @VIRTUAL02
    case 0xC46676: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:48 INX
    case 0xC46678: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:49 INX
    case 0xC46679: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:50 STX @LOCAL00
    case 0xC4667A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4667C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:52 LDA __BSS_START__,X
    case 0xC4667E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:53 DEC
    case 0xC46681: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:54 STA __BSS_START__,X
    case 0xC46682: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC46685: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    case 0xC46687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC46687.
    case 0xC46689: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_item_transformations.asm:57 BNE @UNKNOWN5
    case 0xC4668A: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/overworld/process_item_transformations.asm:58 LDA #2
    case 0xC4668C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/process_item_transformations.asm:58 LDA #2
    // Overlapping static entry reached from 0xC4668C.
    case 0xC4668E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:59 JSL RAND_MOD
    case 0xC4668F: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/overworld/process_item_transformations.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC46693: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:61 STA @VIRTUAL00
    case 0xC46695: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/process_item_transformations.asm:62 LDY @LOCAL01
    case 0xC46697: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:63 LDA __BSS_START__,Y
    case 0xC46699: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:64 CLC
    case 0xC4669C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:65 ADC @VIRTUAL00
    case 0xC4669D: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/overworld/process_item_transformations.asm:66 DEC
    case 0xC4669F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:67 LDX @LOCAL00
    case 0xC466A0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:68 STA __BSS_START__,X
    case 0xC466A2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:69 LDX @VIRTUAL02
    case 0xC466A5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC466A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:71 LDA __BSS_START__,X
    case 0xC466A9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    case 0xC466AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC466AC.
    case 0xC466AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:73 JSL PLAY_SOUND
    case 0xC466AF: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/process_item_transformations.asm:74 STZ @LOCAL03
    case 0xC466B3: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:76 LDX @VIRTUAL02
    case 0xC466B5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:77 INX
    case 0xC466B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:78 INX
    case 0xC466B8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:79 INX
    case 0xC466B9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:80 LDA __BSS_START__,X
    case 0xC466BA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    case 0xC466BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC466BD.
    case 0xC466BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_item_transformations.asm:82 BEQ @UNKNOWN6
    case 0xC466C0: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/overworld/process_item_transformations.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC466C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:84 DEC
    case 0xC466C4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:85 STA __BSS_START__,X
    case 0xC466C5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC466C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    case 0xC466CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC466CA.
    case 0xC466CC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_item_transformations.asm:88 BNE @UNKNOWN6
    case 0xC466CD: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00F41B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC466CF.
    case 0xC466D1: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC466D4.
    case 0xC466D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_item_transformations.asm:90 LDA @VIRTUAL04
    case 0xC466D9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:92 TAY
    case 0xC466E1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:93 STY @LOCAL00
    case 0xC466E2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:94 TYA
    case 0xC466E4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E5: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E7: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E9: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466EB: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/process_item_transformations.asm:96 CLC
    case 0xC466ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:97 ADC @VIRTUAL0A
    case 0xC466EE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:98 STA @VIRTUAL0A
    case 0xC466F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:99 LDA [@VIRTUAL0A]
    case 0xC466F2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    case 0xC466F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC466F4.
    case 0xC466F6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/process_item_transformations.asm:101 TAX
    case 0xC466F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    case 0xC466F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    // Overlapping static entry reached from 0xC466F8.
    case 0xC466FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:103 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC466FB: cpu.execute_instruction<0x22>(0xC18F56, 4); return true;
    // src/overworld/process_item_transformations.asm:104 STA @LOCAL01
    case 0xC466FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:105 LDY @LOCAL00
    case 0xC46701: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:106 TYA
    case 0xC46703: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:107 INC
    case 0xC46704: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:108 INC
    case 0xC46705: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:109 INC
    case 0xC46706: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:110 CLC
    case 0xC46707: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:111 ADC @VIRTUAL06
    case 0xC46708: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:112 STA @VIRTUAL06
    case 0xC4670A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:113 LDA [@VIRTUAL06]
    case 0xC4670C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    case 0xC4670E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC4670E.
    case 0xC46710: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/process_item_transformations.asm:115 TAX
    case 0xC46711: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:116 LDA @LOCAL01
    case 0xC46712: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:117 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC46714: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // src/overworld/process_item_transformations.asm:119 INC @VIRTUAL02
    case 0xC46718: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:120 INC @VIRTUAL02
    case 0xC4671A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:121 INC @VIRTUAL02
    case 0xC4671C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:122 INC @VIRTUAL02
    case 0xC4671E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:123 LDA @LOCAL02
    case 0xC46720: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:124 STA @VIRTUAL04
    case 0xC46722: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:125 INC @VIRTUAL04
    case 0xC46724: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:126 LDA @VIRTUAL04
    case 0xC46726: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:127 STA @LOCAL02
    case 0xC46728: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:129 LDA @VIRTUAL04
    case 0xC4672A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:130 CMP #4
    case 0xC4672C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/process_item_transformations.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4672C.
    case 0xC4672E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC4672F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC46731: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC46733: cpu.execute_instruction<0x4C>(0x006665, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC46736: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC46737: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_overworld_tasks.asm (source_named).
bool execute_overworld_process_overworld_tasks_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_overworld_tasks.asm:3 BEGIN_C_FUNCTION
    case 0xC0DC16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC1A.
    case 0xC0DC1C: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    case 0xC0DC1E: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC0DC1C.
    case 0xC0DC20: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    case 0xC0DC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0DC21.
    case 0xC0DC23: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_overworld_tasks.asm:9 BNE @UNKNOWN0
    case 0xC0DC24: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/process_overworld_tasks.asm:10 LDA DAD_PHONE_TIMER
    case 0xC0DC26: cpu.execute_instruction<0xAD>(0x00A05A, 3); return true;
    // src/overworld/process_overworld_tasks.asm:11 BEQ @UNKNOWN0
    case 0xC0DC29: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/process_overworld_tasks.asm:12 DEC DAD_PHONE_TIMER
    case 0xC0DC2B: cpu.execute_instruction<0xCE>(0x00A05A, 3); return true;
    // src/overworld/process_overworld_tasks.asm:14 LDA WINDOW_HEAD
    case 0xC0DC2E: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    case 0xC0DC31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DC31.
    case 0xC0DC33: cpu.execute_instruction<0xFF>(0xAD56D0, 4); return true;
    // src/overworld/process_overworld_tasks.asm:16 BNE @UNKNOWN4
    case 0xC0DC34: cpu.execute_instruction<0xD0>(0x000056, 2); return true;
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    case 0xC0DC36: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC33.
    case 0xC0DC37: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC37.
    case 0xC0DC38: cpu.execute_instruction<0x99>(0x0051D0, 3); return true;
    // src/overworld/process_overworld_tasks.asm:18 BNE @UNKNOWN4
    case 0xC0DC39: cpu.execute_instruction<0xD0>(0x000051, 2); return true;
    // src/overworld/process_overworld_tasks.asm:19 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DC3B: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/overworld/process_overworld_tasks.asm:20 BNE @UNKNOWN4
    case 0xC0DC3E: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/overworld/process_overworld_tasks.asm:21 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DC40: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/overworld/process_overworld_tasks.asm:22 BNE @UNKNOWN4
    case 0xC0DC43: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DC45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000042, 2); else cpu.execute_instruction<0xA0>(0x00A042, 3); return true;
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DC45.
    case 0xC0DC47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x000E84, 3); return true;
    // src/overworld/process_overworld_tasks.asm:24 STY @LOCAL00
    case 0xC0DC48: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:24 STY @LOCAL00
    // Overlapping static entry reached from 0xC0DC47.
    case 0xC0DC49: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    case 0xC0DC4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    // Overlapping static entry reached from 0xC0DC4A.
    case 0xC0DC4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_overworld_tasks.asm:26 STA @VIRTUAL02
    case 0xC0DC4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:27 BRA @UNKNOWN3
    case 0xC0DC4F: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/process_overworld_tasks.asm:29 LDA a:overworld_task::frames_left,Y
    case 0xC0DC51: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:30 BEQ @UNKNOWN2
    case 0xC0DC54: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/overworld/process_overworld_tasks.asm:31 TYX
    case 0xC0DC56: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:32 DEC
    case 0xC0DC57: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:33 STA a:overworld_task::frames_left,X
    case 0xC0DC58: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:34 BNE @UNKNOWN2
    case 0xC0DC5B: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/overworld/process_overworld_tasks.asm:35 INY ;overworld_task::function
    case 0xC0DC5D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:36 INY
    case 0xC0DC5E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC5F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC64: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC67: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_overworld_tasks.asm:38 PHA
    case 0xC0DC69: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DC6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DC6C: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DC6F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DC71: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/overworld/process_overworld_tasks.asm:40 PLA
    case 0xC0DC74: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:41 JSL UNKNOWN_C09279
    case 0xC0DC75: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/overworld/process_overworld_tasks.asm:43 LDY @LOCAL00
    case 0xC0DC79: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:44 TYA
    case 0xC0DC7B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:45 CLC
    case 0xC0DC7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    case 0xC0DC7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DC7D.
    case 0xC0DC7F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/process_overworld_tasks.asm:47 TAY
    case 0xC0DC80: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:48 STY @LOCAL00
    case 0xC0DC81: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:49 INC @VIRTUAL02
    case 0xC0DC83: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:51 LDA @VIRTUAL02
    case 0xC0DC85: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    case 0xC0DC87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    // Overlapping static entry reached from 0xC0DC87.
    case 0xC0DC89: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/process_overworld_tasks.asm:53 BCC @UNKNOWN1
    case 0xC0DC8A: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DC8C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DC8D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_queued_interactions.asm (source_named).
bool execute_overworld_process_queued_interactions_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_queued_interactions.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0781C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC0781E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC0781F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC07820: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC07820.
    case 0xC07822: cpu.execute_instruction<0xFF>(0x88AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC07823: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07824: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC07822.
    case 0xC07826: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC07827: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    // Overlapping static entry reached from 0xC07826.
    case 0xC07828: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC07829: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0782A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0782C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:13 TAX
    case 0xC0782D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:14 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC0782E: cpu.execute_instruction<0xBD>(0x006170, 3); return true;
    // src/overworld/process_queued_interactions.asm:15 STA @LOCAL02
    case 0xC07831: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/process_queued_interactions.asm:16 TXA
    case 0xC07833: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:17 CLC
    case 0xC07834: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC07835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000072, 2); else cpu.execute_instruction<0x69>(0x006172, 3); return true;
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC07835.
    case 0xC07837: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/overworld/process_queued_interactions.asm:19 TAY
    case 0xC07838: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07839: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0783C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0783E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07841: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07843: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07845: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07847: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07849: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/process_queued_interactions.asm:24 LDA @LOCAL02
    case 0xC0784B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/process_queued_interactions.asm:25 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC0784D: cpu.execute_instruction<0x8D>(0x006146, 3); return true;
    // src/overworld/process_queued_interactions.asm:26 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07850: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/overworld/process_queued_interactions.asm:27 INC
    case 0xC07853: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    case 0xC07854: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    // Overlapping static entry reached from 0xC07854.
    case 0xC07856: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/process_queued_interactions.asm:29 STA CURRENT_QUEUED_INTERACTION
    case 0xC07857: cpu.execute_instruction<0x8D>(0x006188, 3); return true;
    // src/overworld/process_queued_interactions.asm:30 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0785A: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    case 0xC0785D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    // Overlapping static entry reached from 0xC0785D.
    case 0xC0785F: cpu.execute_instruction<0xFF>(0x60DE8D, 4); return true;
    // src/overworld/process_queued_interactions.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07860: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/overworld/process_queued_interactions.asm:33 JSL UNKNOWN_C07C5B
    case 0xC07863: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/overworld/process_queued_interactions.asm:34 LDA @LOCAL02
    case 0xC07867: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    case 0xC07869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    // Overlapping static entry reached from 0xC07869.
    case 0xC0786B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:36 BEQ @UNKNOWN0
    case 0xC0786C: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    case 0xC0786E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    // Overlapping static entry reached from 0xC0786E.
    case 0xC07870: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:38 BEQ @UNKNOWN1
    case 0xC07871: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    case 0xC07873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    // Overlapping static entry reached from 0xC07873.
    case 0xC07875: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:40 BEQ @UNKNOWN3
    case 0xC07876: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    case 0xC07878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    // Overlapping static entry reached from 0xC07878.
    case 0xC0787A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:42 BEQ @UNKNOWN3
    case 0xC0787B: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    case 0xC0787D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    // Overlapping static entry reached from 0xC0787D.
    case 0xC0787F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:44 BEQ @UNKNOWN3
    case 0xC07880: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/overworld/process_queued_interactions.asm:45 BRA @UNKNOWN4
    case 0xC07882: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07884: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07886: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07888: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0788A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:48 JSR DOOR_TRANSITION
    case 0xC0788C: cpu.execute_instruction<0x20>(0x006E2D, 3); return true;
    // src/overworld/process_queued_interactions.asm:49 BRA @UNKNOWN4
    case 0xC0788F: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07891: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07893: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07895: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07897: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:52 JSL UNKNOWN_C10004
    case 0xC07899: cpu.execute_instruction<0x22>(0xC10000, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC0789D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00319E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC0789D.
    case 0xC0789F: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC0789F.
    case 0xC078A1: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A1.
    case 0xC078A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A2.
    case 0xC078A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A3.
    case 0xC078A6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:55 LDA @VIRTUAL06
    case 0xC078A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/process_queued_interactions.asm:56 STA @VIRTUAL02
    case 0xC078A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_queued_interactions.asm:58 LDA @VIRTUAL06
    case 0xC078B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/process_queued_interactions.asm:59 CMP @VIRTUAL02
    case 0xC078B5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/process_queued_interactions.asm:64 BNE @UNKNOWN4
    case 0xC078B7: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    case 0xC078B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x000697, 3); return true;
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    // Overlapping static entry reached from 0xC078B9.
    case 0xC078BB: cpu.execute_instruction<0x06>(0x00008D, 2); return true;
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    case 0xC078BC: cpu.execute_instruction<0x8D>(0x00A05A, 3); return true;
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC078BB.
    case 0xC078BD: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC078BD.
    case 0xC078BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x005C9C, 3); return true;
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    case 0xC078BF: cpu.execute_instruction<0x9C>(0x00A05C, 3); return true;
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC078BE.
    case 0xC078C0: cpu.execute_instruction<0x5C>(0x0C80A0, 4); return true;
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC078BE.
    case 0xC078C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000C80, 3); return true;
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    case 0xC078C2: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC078C1.
    case 0xC078C3: cpu.execute_instruction<0x0C>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078CA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:71 JSL UNKNOWN_C10004
    case 0xC078CC: cpu.execute_instruction<0x22>(0xC10000, 4); return true;
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    case 0xC078D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    // Overlapping static entry reached from 0xC078D0.
    case 0xC078D2: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/overworld/process_queued_interactions.asm:74 LDA CURRENT_QUEUED_INTERACTION
    case 0xC078D3: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/overworld/process_queued_interactions.asm:75 CMP NEXT_QUEUED_INTERACTION
    case 0xC078D6: cpu.execute_instruction<0xCD>(0x00618A, 3); return true;
    // src/overworld/process_queued_interactions.asm:76 BEQ @UNKNOWN5
    case 0xC078D9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    case 0xC078DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    // Overlapping static entry reached from 0xC078DB.
    case 0xC078DD: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/overworld/process_queued_interactions.asm:79 STX PENDING_INTERACTIONS
    case 0xC078DE: cpu.execute_instruction<0x8E>(0x006120, 3); return true;
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    case 0xC078E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC078E1.
    case 0xC078E3: cpu.execute_instruction<0xFF>(0x61468D, 4); return true;
    // src/overworld/process_queued_interactions.asm:81 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC078E4: cpu.execute_instruction<0x8D>(0x006146, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC078E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC078E8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
