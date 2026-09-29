// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
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
    case 0xC20006: cpu.execute_instruction<0xFF>(0x98AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:7 END_STACK_VARS
    case 0xC20007: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC20008: cpu.execute_instruction<0xAD>(0x005D98, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20077.
    case 0xC20009: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:8 LDA OVERWORLD_STATUS_SUPPRESSION
    // Overlapping static entry reached from 0xC20006.
    case 0xC2000A: cpu.execute_instruction<0x5D>(0x0003F0, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/inflict_sunstroke_check.asm:9 BNEL @UNKNOWN11
    case 0xC2000D: cpu.execute_instruction<0x4C>(0x0000B5, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:10 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC20010: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
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
    case 0xC2002A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:21 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2002A.
    case 0xC2002C: cpu.execute_instruction<0x97>(0x0000A8, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:22 TAY
    case 0xC2002D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/inflict_sunstroke_check.asm:23 LDA __BSS_START__ + game_state::unknown96,Y
    case 0xC2002E: cpu.execute_instruction<0xB9>(0x000096, 3); return true;
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
    case 0xC20048: cpu.execute_instruction<0xB9>(0x00009C, 3); return true;
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
    case 0xC20050: cpu.execute_instruction<0xBC>(0x004DC8, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:35 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC20053: cpu.execute_instruction<0x8C>(0x004DC6, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:36 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC20056: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
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
    case 0xC20064: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:44 LDA a:char_struct::guts,X
    case 0xC20067: cpu.execute_instruction<0xBD>(0x000018, 3); return true;
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
    case 0xC20085: cpu.execute_instruction<0xFF>(0x915B22, 4); return true;
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20086: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/inflict_sunstroke_check.asm:57 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC20085.
    case 0xC20089: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    case 0xC2008A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:58 STA @LOCAL00
    // Overlapping static entry reached from 0xC20089.
    case 0xC2008B: cpu.execute_instruction<0x0E>(0x009A22, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:59 JSL RAND
    case 0xC2008C: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
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
    // Overlapping static entry reached from 0xC2049D.
    case 0xC2009D: cpu.execute_instruction<0x20>(0x0006A9, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:67 LDA #STATUS_0::SUNSTROKE
    case 0xC2009E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00AE06, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC200A0: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/inflict_sunstroke_check.asm:68 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC2009E.
    case 0xC200A1: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/overworld/inflict_sunstroke_check.asm:69 STA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC200A3: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
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
    case 0xC092F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:6 STZ NEW_ENTITY_POS_Z
    case 0xC092F6: cpu.execute_instruction<0x9C>(0x000A48, 3); return true;
    // src/overworld/init_entity.asm:7 STZ NEW_ENTITY_VAR0
    case 0xC092F9: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/overworld/init_entity.asm:8 STZ NEW_ENTITY_VAR1
    case 0xC092FC: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/overworld/init_entity.asm:9 STZ NEW_ENTITY_VAR2
    case 0xC092FF: cpu.execute_instruction<0x9C>(0x000A3C, 3); return true;
    // src/overworld/init_entity.asm:10 STZ NEW_ENTITY_VAR3
    case 0xC09302: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/overworld/init_entity.asm:11 STZ NEW_ENTITY_VAR4
    case 0xC09305: cpu.execute_instruction<0x9C>(0x000A40, 3); return true;
    // src/overworld/init_entity.asm:12 STZ NEW_ENTITY_VAR5
    case 0xC09308: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/overworld/init_entity.asm:13 STZ NEW_ENTITY_VAR6
    case 0xC0930B: cpu.execute_instruction<0x9C>(0x000A44, 3); return true;
    // src/overworld/init_entity.asm:14 STZ NEW_ENTITY_VAR7
    case 0xC0930E: cpu.execute_instruction<0x9C>(0x000A46, 3); return true;
    // src/overworld/init_entity.asm:15 STZ NEW_ENTITY_PRIORITY
    case 0xC09311: cpu.execute_instruction<0x9C>(0x000A4A, 3); return true;
    // src/overworld/init_entity.asm:16 LDA #$0000
    case 0xC09314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/init_entity.asm:16 LDA #$0000
    // Overlapping static entry reached from 0xC09314.
    case 0xC09316: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/init_entity.asm:17 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09317: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/overworld/init_entity.asm:18 LDA #$001E
    case 0xC0931A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/overworld/init_entity.asm:18 LDA #$001E
    // Overlapping static entry reached from 0xC0931A.
    case 0xC0931C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/init_entity.asm:19 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0931D: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/overworld/init_entity.asm:20 PLA
    case 0xC09320: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:24 PHA
    case 0xC09321: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:25 PHY
    case 0xC09322: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:26 PHX
    case 0xC09323: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:27 LDA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09324: cpu.execute_instruction<0xAD>(0x000A4C, 3); return true;
    // src/overworld/init_entity.asm:28 ASL
    case 0xC09327: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:29 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09328: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/overworld/init_entity.asm:30 LDA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0932B: cpu.execute_instruction<0xAD>(0x000A4E, 3); return true;
    // src/overworld/init_entity.asm:31 ASL
    case 0xC0932E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:32 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0932F: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    case 0xC09332: cpu.execute_instruction<0x20>(0x009C02, 3); return true;
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    // Overlapping static entry reached from 0xC09395.
    case 0xC09334: cpu.execute_instruction<0x9C>(0x000790, 3); return true;
    // src/overworld/init_entity.asm:34 BCC @UNKNOWN0
    case 0xC09335: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/overworld/init_entity.asm:35 PLA
    case 0xC09337: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:36 PLA
    case 0xC09338: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:37 PLA
    case 0xC09339: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:38 LDA #$0000
    case 0xC0933A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/init_entity.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC0933A.
    case 0xC0933C: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/overworld/init_entity.asm:39 RTL
    case 0xC0933D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:41 JSR UNKNOWN_C09D03
    case 0xC0933E: cpu.execute_instruction<0x20>(0x009D03, 3); return true;
    // src/overworld/init_entity.asm:42 TYA
    case 0xC09341: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:43 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09342: cpu.execute_instruction<0x9D>(0x000ADA, 3); return true;
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    case 0xC09345: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    // Overlapping static entry reached from 0xC09345.
    case 0xC09347: cpu.execute_instruction<0xFF>(0x125A99, 4); return true;
    // src/overworld/init_entity.asm:45 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09348: cpu.execute_instruction<0x99>(0x00125A, 3); return true;
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    case 0xC0934B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x009FC8, 3); return true;
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    // Overlapping static entry reached from 0xC0934B.
    case 0xC0934D: cpu.execute_instruction<0x9F>(0x121E9D, 4); return true;
    // src/overworld/init_entity.asm:47 STA ENTITY_MOVE_CALLBACK,X
    case 0xC0934E: cpu.execute_instruction<0x9D>(0x00121E, 3); return true;
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    case 0xC09351: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x00A023, 3); return true;
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    // Overlapping static entry reached from 0xC09351.
    case 0xC09353: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009D, 2); else cpu.execute_instruction<0xA0>(0x00A69D, 3); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    case 0xC09354: cpu.execute_instruction<0x9D>(0x0011A6, 3); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09353.
    case 0xC09355: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09353.
    case 0xC09356: cpu.execute_instruction<0x11>(0x0000A9, 2); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    case 0xC09357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A4, 2); else cpu.execute_instruction<0xA9>(0x00A3A4, 3); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09356.
    case 0xC09358: cpu.execute_instruction<0xA4>(0x0000A3, 2); return true;
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09357.
    case 0xC09359: cpu.execute_instruction<0xA3>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    case 0xC0935A: cpu.execute_instruction<0x9D>(0x0011E2, 3); return true;
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    // Overlapping static entry reached from 0xC09359.
    case 0xC0935B: cpu.execute_instruction<0xE2>(0x000011, 2); return true;
    // src/overworld/init_entity.asm:52 LDA NEW_ENTITY_VAR0
    case 0xC0935D: cpu.execute_instruction<0xAD>(0x000A38, 3); return true;
    // src/overworld/init_entity.asm:53 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC09360: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // src/overworld/init_entity.asm:54 LDA NEW_ENTITY_VAR1
    case 0xC09363: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/overworld/init_entity.asm:55 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC09366: cpu.execute_instruction<0x9D>(0x000E9A, 3); return true;
    // src/overworld/init_entity.asm:56 LDA NEW_ENTITY_VAR2
    case 0xC09369: cpu.execute_instruction<0xAD>(0x000A3C, 3); return true;
    // src/overworld/init_entity.asm:57 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0936C: cpu.execute_instruction<0x9D>(0x000ED6, 3); return true;
    // src/overworld/init_entity.asm:58 LDA NEW_ENTITY_VAR3
    case 0xC0936F: cpu.execute_instruction<0xAD>(0x000A3E, 3); return true;
    // src/overworld/init_entity.asm:59 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC09372: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/overworld/init_entity.asm:60 LDA NEW_ENTITY_VAR4
    case 0xC09375: cpu.execute_instruction<0xAD>(0x000A40, 3); return true;
    // src/overworld/init_entity.asm:61 STA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC09378: cpu.execute_instruction<0x9D>(0x000F4E, 3); return true;
    // src/overworld/init_entity.asm:62 LDA NEW_ENTITY_VAR5
    case 0xC0937B: cpu.execute_instruction<0xAD>(0x000A42, 3); return true;
    // src/overworld/init_entity.asm:63 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0937E: cpu.execute_instruction<0x9D>(0x000F8A, 3); return true;
    // src/overworld/init_entity.asm:64 LDA NEW_ENTITY_VAR6
    case 0xC09381: cpu.execute_instruction<0xAD>(0x000A44, 3); return true;
    // src/overworld/init_entity.asm:65 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC09384: cpu.execute_instruction<0x9D>(0x000FC6, 3); return true;
    // src/overworld/init_entity.asm:66 LDA NEW_ENTITY_VAR7
    case 0xC09387: cpu.execute_instruction<0xAD>(0x000A46, 3); return true;
    // src/overworld/init_entity.asm:67 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0938A: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // src/overworld/init_entity.asm:68 LDA NEW_ENTITY_PRIORITY
    case 0xC0938D: cpu.execute_instruction<0xAD>(0x000A4A, 3); return true;
    // src/overworld/init_entity.asm:69 STA ENTITY_DRAW_PRIORITY,X
    case 0xC09390: cpu.execute_instruction<0x9D>(0x00103E, 3); return true;
    // src/overworld/init_entity.asm:70 LDA #$8000
    case 0xC09393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/overworld/init_entity.asm:70 LDA #$8000
    // Overlapping static entry reached from 0xC09393.
    case 0xC09395: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:71 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09396: cpu.execute_instruction<0x9D>(0x000C42, 3); return true;
    // src/overworld/init_entity.asm:72 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09399: cpu.execute_instruction<0x9D>(0x000C7E, 3); return true;
    // src/overworld/init_entity.asm:73 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0939C: cpu.execute_instruction<0x9D>(0x000CBA, 3); return true;
    // src/overworld/init_entity.asm:74 PLA
    case 0xC0939F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:75 STA ENTITY_ABS_X_TABLE,X
    case 0xC093A0: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/overworld/init_entity.asm:76 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC093A3: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/overworld/init_entity.asm:77 PLA
    case 0xC093A6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:78 STA ENTITY_ABS_Y_TABLE,X
    case 0xC093A7: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/overworld/init_entity.asm:79 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC093AA: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/overworld/init_entity.asm:80 LDA NEW_ENTITY_POS_Z
    case 0xC093AD: cpu.execute_instruction<0xAD>(0x000A48, 3); return true;
    // src/overworld/init_entity.asm:81 STA ENTITY_ABS_Z_TABLE,X
    case 0xC093B0: cpu.execute_instruction<0x9D>(0x000C06, 3); return true;
    // src/overworld/init_entity.asm:82 JSR UNKNOWN_C09C57
    case 0xC093B3: cpu.execute_instruction<0x20>(0x009C57, 3); return true;
    // src/overworld/init_entity.asm:83 PLA
    case 0xC093B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:84 BRA @UNKNOWN1
    case 0xC093B7: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/overworld/init_entity.asm:85 PHA
    case 0xC093B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:86 JSR UNKNOWN_C09C99
    case 0xC093BA: cpu.execute_instruction<0x20>(0x009C99, 3); return true;
    // src/overworld/init_entity.asm:87 JSR UNKNOWN_C09D03
    case 0xC093BD: cpu.execute_instruction<0x20>(0x009D03, 3); return true;
    // src/overworld/init_entity.asm:88 TYA
    case 0xC093C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:89 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC093C1: cpu.execute_instruction<0x9D>(0x000ADA, 3); return true;
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    case 0xC093C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    // Overlapping static entry reached from 0xC093C4.
    case 0xC093C6: cpu.execute_instruction<0xFF>(0x125A99, 4); return true;
    // src/overworld/init_entity.asm:91 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC093C7: cpu.execute_instruction<0x99>(0x00125A, 3); return true;
    // src/overworld/init_entity.asm:92 PLA
    case 0xC093CA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:94 STA ENTITY_SCRIPT_TABLE,X
    case 0xC093CB: cpu.execute_instruction<0x9D>(0x000A62, 3); return true;
    // src/overworld/init_entity.asm:95 PHX
    case 0xC093CE: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:96 ASL
    case 0xC093CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:97 ADC ENTITY_SCRIPT_TABLE,X
    case 0xC093D0: cpu.execute_instruction<0x7D>(0x000A62, 3); return true;
    // src/overworld/init_entity.asm:98 TXY
    case 0xC093D3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:99 TAX
    case 0xC093D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:100 LDA f:EVENT_SCRIPT_POINTERS+2,X
    case 0xC093D5: cpu.execute_instruction<0xBF>(0xC400D6, 4); return true;
    // src/overworld/init_entity.asm:101 TAY
    case 0xC093D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:102 LDA f:EVENT_SCRIPT_POINTERS,X
    case 0xC093DA: cpu.execute_instruction<0xBF>(0xC400D4, 4); return true;
    // src/overworld/init_entity.asm:103 PLX
    case 0xC093DE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:104 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC093DF: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // src/overworld/init_entity.asm:105 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC093E2: cpu.execute_instruction<0xDE>(0x0010F2, 3); return true;
    // src/overworld/init_entity.asm:106 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC093E5: cpu.execute_instruction<0x9E>(0x000DAA, 3); return true;
    // src/overworld/init_entity.asm:107 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC093E8: cpu.execute_instruction<0x9E>(0x000CF6, 3); return true;
    // src/overworld/init_entity.asm:108 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC093EB: cpu.execute_instruction<0x9E>(0x000DE6, 3); return true;
    // src/overworld/init_entity.asm:109 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC093EE: cpu.execute_instruction<0x9E>(0x000D32, 3); return true;
    // src/overworld/init_entity.asm:110 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC093F1: cpu.execute_instruction<0x9E>(0x000E22, 3); return true;
    // src/overworld/init_entity.asm:111 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC093F4: cpu.execute_instruction<0x9E>(0x000D6E, 3); return true;
    // src/overworld/init_entity.asm:112 BRA UNKNOWN_C092F5_UNKNOWN4
    case 0xC093F7: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/overworld/init_entity.asm:114 PHA
    case 0xC093F9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:115 TXA
    case 0xC093FA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:116 ASL
    case 0xC093FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:117 TAX
    case 0xC093FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:118 PLA
    case 0xC093FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:119 JSL INIT_ENTITY_UNKNOWN2
    case 0xC093FE: cpu.execute_instruction<0x22>(0xC09403, 4); return true;
    // src/overworld/init_entity.asm:120 RTL
    case 0xC09402: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:122 PHY
    case 0xC09403: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:123 PHA
    case 0xC09404: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:124 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC09405: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/overworld/init_entity.asm:125 BPL @DONT_LOOP
    case 0xC09408: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // src/overworld/init_entity.asm:127 BRA @LOOP
    case 0xC0940A: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/overworld/init_entity.asm:129 JSR UNKNOWN_C09C99
    case 0xC0940C: cpu.execute_instruction<0x20>(0x009C99, 3); return true;
    // src/overworld/init_entity.asm:130 JSR UNKNOWN_C09D03
    case 0xC0940F: cpu.execute_instruction<0x20>(0x009D03, 3); return true;
    // src/overworld/init_entity.asm:131 TYA
    case 0xC09412: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:132 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09413: cpu.execute_instruction<0x9D>(0x000ADA, 3); return true;
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    case 0xC09416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    // Overlapping static entry reached from 0xC09416.
    case 0xC09418: cpu.execute_instruction<0xFF>(0x125A99, 4); return true;
    // src/overworld/init_entity.asm:134 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09419: cpu.execute_instruction<0x99>(0x00125A, 3); return true;
    // src/overworld/init_entity.asm:135 PLA
    case 0xC0941C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:136 PLY
    case 0xC0941D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:138 PHY
    case 0xC0941E: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:139 PHA
    case 0xC0941F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:140 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09420: cpu.execute_instruction<0x20>(0x009DA1, 3); return true;
    // src/overworld/init_entity.asm:141 TXY
    case 0xC09423: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:142 LDX ENTITY_SCRIPT_INDEX_TABLE,Y
    case 0xC09424: cpu.execute_instruction<0xBE>(0x000ADA, 3); return true;
    // src/overworld/init_entity.asm:143 PLA
    case 0xC09427: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:144 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC09428: cpu.execute_instruction<0x9D>(0x0013FE, 3); return true;
    // src/overworld/init_entity.asm:145 PLA
    case 0xC0942B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:146 AND #$00FF
    case 0xC0942C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/init_entity.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC0942C.
    case 0xC0942E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/init_entity.asm:147 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC0942F: cpu.execute_instruction<0x9D>(0x00148A, 3); return true;
    // src/overworld/init_entity.asm:148 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09432: cpu.execute_instruction<0x9E>(0x001372, 3); return true;
    // src/overworld/init_entity.asm:149 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09435: cpu.execute_instruction<0x9E>(0x0012E6, 3); return true;
    // src/overworld/init_entity.asm:150 TYA
    case 0xC09438: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:151 LSR
    case 0xC09439: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:152 CLC
    case 0xC0943A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/init_entity.asm:154 RTL
    case 0xC0943B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC0007B: cpu.execute_instruction<0xFF>(0x708DFF, 4); return true;
    // src/overworld/initialize.asm:13 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0007A.
    case 0xC0007C: cpu.execute_instruction<0xFF>(0x43708D, 4); return true;
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    case 0xC0007D: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/overworld/initialize.asm:14 STA LOADED_MAP_PALETTE
    // Overlapping static entry reached from 0xC0007B.
    case 0xC0007F: cpu.execute_instruction<0x43>(0x00008D, 2); return true;
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    case 0xC00080: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/initialize.asm:15 STA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC0007F.
    case 0xC00081: cpu.execute_instruction<0x6E>(0x002B43, 3); return true;
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
    case 0xC48EEB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EEE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EEF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC48EF0.
    case 0xC48EF2: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_item_transformation.asm:8 END_STACK_VARS
    case 0xC48EF4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:9 TAX
    case 0xC48EF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:10 STX @LOCAL01
    case 0xC48EF6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:11 TXA
    case 0xC48EF8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:12 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC48EF9: cpu.execute_instruction<0x22>(0xC48ECE, 4); return true;
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    case 0xC48EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/initialize_item_transformation.asm:13 CMP #0
    // Overlapping static entry reached from 0xC48EFD.
    case 0xC48EFF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/initialize_item_transformation.asm:14 BNE @UNKNOWN0
    case 0xC48F00: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F02: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:16 LDA #60
    case 0xC48F04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x008D3C, 3); return true;
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48F06: cpu.execute_instruction<0x8D>(0x009F2C, 3); return true;
    // src/overworld/initialize_item_transformation.asm:17 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC48F04.
    case 0xC48F07: cpu.execute_instruction<0x2C>(0x00C29F, 3); return true;
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC48F09: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:18 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48F07.
    case 0xC48F0A: cpu.execute_instruction<0x20>(0x002AEE, 3); return true;
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    case 0xC48F0B: cpu.execute_instruction<0xEE>(0x009F2A, 3); return true;
    // src/overworld/initialize_item_transformation.asm:19 INC ITEM_TRANSFORMATIONS_LOADED
    // Overlapping static entry reached from 0xC48F0A.
    case 0xC48F0D: cpu.execute_instruction<0x9F>(0x8A10A6, 4); return true;
    // src/overworld/initialize_item_transformation.asm:21 LDX @LOCAL01
    case 0xC48F0E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:22 TXA
    case 0xC48F10: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48F11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48F12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:24 CLC
    case 0xC48F13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC48F14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x009F1A, 3); return true;
    // src/overworld/initialize_item_transformation.asm:25 ADC #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC48F14.
    case 0xC48F16: cpu.execute_instruction<0x9F>(0x0E84A8, 4); return true;
    // src/overworld/initialize_item_transformation.asm:26 TAY
    case 0xC48F17: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:27 STY @LOCAL00
    case 0xC48F18: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x00F4BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48F1A.
    case 0xC48F1C: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48F1F.
    case 0xC48F21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:28 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC48F22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/initialize_item_transformation.asm:29 TXA
    case 0xC48F24: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F25: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/initialize_item_transformation.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC48F29: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/initialize_item_transformation.asm:31 TAX
    case 0xC48F2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:32 STX @LOCAL01
    case 0xC48F2C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:33 TXA
    case 0xC48F2E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:34 INC
    case 0xC48F2F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:35 PHA
    case 0xC48F30: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F31: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F33: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F35: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC48F37: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:37 PLA
    case 0xC48F39: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:38 CLC
    case 0xC48F3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:39 ADC @VIRTUAL0A
    case 0xC48F3B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:40 STA @VIRTUAL0A
    case 0xC48F3D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:42 LDA [@VIRTUAL0A]
    case 0xC48F41: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:43 STA a:loaded_timed_item_transformation::sfx,Y
    case 0xC48F43: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/initialize_item_transformation.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC48F46: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:45 TXA
    case 0xC48F48: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:46 INC
    case 0xC48F49: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:47 INC
    case 0xC48F4A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F4F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/initialize_item_transformation.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC48F51: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/initialize_item_transformation.asm:49 CLC
    case 0xC48F53: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:50 ADC @VIRTUAL0A
    case 0xC48F54: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:51 STA @VIRTUAL0A
    case 0xC48F56: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:53 LDA [@VIRTUAL0A]
    case 0xC48F5A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/initialize_item_transformation.asm:54 STA @VIRTUAL00
    case 0xC48F5C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:55 STA a:loaded_timed_item_transformation::sfx_frequency,Y
    case 0xC48F5E: cpu.execute_instruction<0x99>(0x000001, 3); return true;
    // src/overworld/initialize_item_transformation.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC48F61: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    case 0xC48F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/initialize_item_transformation.asm:57 LDA #2
    // Overlapping static entry reached from 0xC48F63.
    case 0xC48F65: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/initialize_item_transformation.asm:58 JSL RAND_MOD
    case 0xC48F66: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/overworld/initialize_item_transformation.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:60 PHA
    case 0xC48F6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:61 LDA @VIRTUAL00
    case 0xC48F6D: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:62 SEP #PROC_FLAGS::INDEX8
    case 0xC48F6F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:63 PLX
    case 0xC48F71: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:64 STX @VIRTUAL00
    case 0xC48F72: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:65 CLC
    case 0xC48F74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:66 ADC @VIRTUAL00
    case 0xC48F75: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/overworld/initialize_item_transformation.asm:67 DEC
    case 0xC48F77: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC48F78: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:69 LDY @LOCAL00
    case 0xC48F7A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_item_transformation.asm:70 STA a:loaded_timed_item_transformation::sfx_countdown,Y
    case 0xC48F7C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/initialize_item_transformation.asm:71 LDX @LOCAL01
    case 0xC48F7F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/initialize_item_transformation.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC48F81: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:73 TXA
    case 0xC48F83: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:74 INC
    case 0xC48F84: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:75 INC
    case 0xC48F85: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:76 INC
    case 0xC48F86: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:77 INC
    case 0xC48F87: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:78 CLC
    case 0xC48F88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_item_transformation.asm:79 ADC @VIRTUAL06
    case 0xC48F89: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:80 STA @VIRTUAL06
    case 0xC48F8B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC48F8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_item_transformation.asm:82 LDA [@VIRTUAL06]
    case 0xC48F8F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/initialize_item_transformation.asm:83 STA a:loaded_timed_item_transformation::transformation_countdown,Y
    case 0xC48F91: cpu.execute_instruction<0x99>(0x000003, 3); return true;
    // src/overworld/initialize_item_transformation.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC48F94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC48F96: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_item_transformation.asm:85 END_C_FUNCTION
    case 0xC48F97: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_map.asm (source_named).
bool execute_overworld_initialize_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC019B2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019B4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019B5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019B6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC019B7.
    case 0xC019B9: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019BA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map.asm:9 END_STACK_VARS
    case 0xC019BB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    case 0xC019BC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/initialize_map.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC019B9.
    case 0xC019BD: cpu.execute_instruction<0x0E>(0x000486, 3); return true;
    // src/overworld/initialize_map.asm:11 STX @VIRTUAL04
    case 0xC019BE: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:12 STA @VIRTUAL02
    case 0xC019C0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:13 LDX @VIRTUAL04
    case 0xC019C2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:14 LDA @VIRTUAL02
    case 0xC019C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:15 JSL UNKNOWN_C068F4
    case 0xC019C6: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/overworld/initialize_map.asm:16 LDX @VIRTUAL04
    case 0xC019CA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:17 LDA @VIRTUAL02
    case 0xC019CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:18 JSL LOAD_MAP_AT_POSITION
    case 0xC019CE: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/overworld/initialize_map.asm:19 LDY @LOCAL00
    case 0xC019D2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_map.asm:20 LDX @VIRTUAL04
    case 0xC019D4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/initialize_map.asm:21 LDA @VIRTUAL02
    case 0xC019D6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/initialize_map.asm:22 JSL UNKNOWN_C03FA9
    case 0xC019D8: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/overworld/initialize_map.asm:23 JSL UNKNOWN_C069AF
    case 0xC019DC: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019E0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map.asm:24 END_C_FUNCTION
    case 0xC019E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_map_palette_fade.asm (source_named).
bool execute_overworld_initialize_map_palette_fade_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49208: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC491E5.
    case 0xC49209: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4920D.
    case 0xC4920F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC49210: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC49211: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    case 0xC49212: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4920F.
    case 0xC49213: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49214: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49213.
    case 0xC49215: cpu.execute_instruction<0x00>(0x000078, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49214.
    case 0xC49216: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49217: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49219: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49219.
    case 0xC4921B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4921C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:14 STZ @LOCAL03
    case 0xC4921E: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:15 JMP @UNKNOWN1
    case 0xC49220: cpu.execute_instruction<0x4C>(0x0092C4, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:17 LDA @LOCAL03
    case 0xC49223: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:18 ASL
    case 0xC49225: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:19 STA @VIRTUAL02
    case 0xC49226: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:20 CLC
    case 0xC49228: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC49229: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000240, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC49229.
    case 0xC4922B: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:22 STA @LOCAL02
    case 0xC4922C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:23 LDA (@LOCAL02)
    case 0xC4922E: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:24 STA @LOCAL01
    case 0xC49230: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:25 LDA [@VIRTUAL06]
    case 0xC49232: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:26 STA @VIRTUAL04
    case 0xC49234: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:27 LDY @LOCAL04
    case 0xC49236: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:28 LDA @VIRTUAL04
    case 0xC49238: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    case 0xC4923A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    // Overlapping static entry reached from 0xC4923A.
    case 0xC4923C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:30 TAX
    case 0xC4923D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:31 LDA @LOCAL01
    case 0xC4923E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    case 0xC49240: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    // Overlapping static entry reached from 0xC49240.
    case 0xC49242: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:33 JSR GET_COLOUR_FADE_SLOPE
    case 0xC49243: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:34 LDX @VIRTUAL02
    case 0xC49246: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:35 STA BUFFER + $7900,X
    case 0xC49248: cpu.execute_instruction<0x9F>(0x7F7900, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:36 LDY @LOCAL04
    case 0xC4924C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:37 LDA @VIRTUAL04
    case 0xC4924E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    case 0xC49250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC49250.
    case 0xC49252: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:39 LSR
    case 0xC49253: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:40 LSR
    case 0xC49254: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:41 LSR
    case 0xC49255: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:42 LSR
    case 0xC49256: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:43 LSR
    case 0xC49257: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:44 TAX
    case 0xC49258: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:45 LDA @LOCAL01
    case 0xC49259: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    case 0xC4925B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC4925B.
    case 0xC4925D: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:47 LSR
    case 0xC4925E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:48 LSR
    case 0xC4925F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:49 LSR
    case 0xC49260: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:50 LSR
    case 0xC49261: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:51 LSR
    case 0xC49262: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:52 JSR GET_COLOUR_FADE_SLOPE
    case 0xC49263: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:53 LDX @VIRTUAL02
    case 0xC49266: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:54 STA BUFFER + $7A00,X
    case 0xC49268: cpu.execute_instruction<0x9F>(0x7F7A00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:55 LDY @LOCAL04
    case 0xC4926C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:56 STY @LOCAL00
    case 0xC4926E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    case 0xC49270: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    // Overlapping static entry reached from 0xC49270.
    case 0xC49272: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    case 0xC49273: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC49272.
    case 0xC49274: cpu.execute_instruction<0x04>(0x000029, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    case 0xC49275: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49274.
    case 0xC49276: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49275.
    case 0xC49277: cpu.execute_instruction<0x7C>(0x005B22, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:60 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC49278: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:61 TAX
    case 0xC4927C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    case 0xC4927D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    // Overlapping static entry reached from 0xC4927D.
    case 0xC4927F: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    case 0xC49280: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4927F.
    case 0xC49281: cpu.execute_instruction<0x10>(0x000029, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    case 0xC49282: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49281.
    case 0xC49283: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49282.
    case 0xC49284: cpu.execute_instruction<0x7C>(0x005B22, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:65 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC49285: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:66 LDY @LOCAL00
    case 0xC49289: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:67 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4928B: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:68 LDX @VIRTUAL02
    case 0xC4928E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:69 STA BUFFER + $7B00,X
    case 0xC49290: cpu.execute_instruction<0x9F>(0x7F7B00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:70 LDA (@LOCAL02)
    case 0xC49294: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    case 0xC49296: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    // Overlapping static entry reached from 0xC49296.
    case 0xC49298: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:72 XBA
    case 0xC49299: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    case 0xC4929A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    // Overlapping static entry reached from 0xC4929A.
    case 0xC4929C: cpu.execute_instruction<0xFF>(0x9F02A6, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:74 LDX @VIRTUAL02
    case 0xC4929D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    case 0xC4929F: cpu.execute_instruction<0x9F>(0x7F7C00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    // Overlapping static entry reached from 0xC4929C.
    case 0xC492A0: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:76 LDA (@LOCAL02)
    case 0xC492A3: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    case 0xC492A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC492A5.
    case 0xC492A7: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:78 ASL
    case 0xC492A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:79 ASL
    case 0xC492A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:80 ASL
    case 0xC492AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    case 0xC492AB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC49281.
    case 0xC492AC: cpu.execute_instruction<0x02>(0x00009F, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:82 STA BUFFER + $7D00,X
    case 0xC492AD: cpu.execute_instruction<0x9F>(0x7F7D00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:83 LDA (@LOCAL02)
    case 0xC492B1: cpu.execute_instruction<0xB2>(0x000012, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    case 0xC492B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC492B3.
    case 0xC492B5: cpu.execute_instruction<0x7C>(0x004A4A, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:85 LSR
    case 0xC492B6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:86 LSR
    case 0xC492B7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/initialize_map_palette_fade.asm:87 LDX @VIRTUAL02
    case 0xC492B8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:88 STA BUFFER + $7E00,X
    case 0xC492BA: cpu.execute_instruction<0x9F>(0x7F7E00, 4); return true;
    // src/overworld/initialize_map_palette_fade.asm:89 INC @VIRTUAL06
    case 0xC492BE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:90 INC @VIRTUAL06
    case 0xC492C0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:91 INC @LOCAL03
    case 0xC492C2: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:93 LDA @LOCAL03
    case 0xC492C4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    case 0xC492C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC492C6.
    case 0xC492C8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492C9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492CB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492CD: cpu.execute_instruction<0x4C>(0x009223, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC492D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC492D1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_misc_object_data.asm (source_named).
bool execute_overworld_initialize_misc_object_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_misc_object_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01A69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    case 0xC01A6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    // Overlapping static entry reached from 0xC01A6B.
    case 0xC01A6D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:6 BRA @UNKNOWN1
    case 0xC01A6E: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:8 TYA
    case 0xC01A70: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:9 ASL
    case 0xC01A71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:10 TAX
    case 0xC01A72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:11 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC01A73: cpu.execute_instruction<0x9E>(0x002B32, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC01A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC01A76.
    case 0xC01A78: cpu.execute_instruction<0xFF>(0x289E9D, 4); return true;
    // src/overworld/initialize_misc_object_data.asm:13 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC01A79: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:14 STA ENTITY_NPC_IDS,X
    case 0xC01A7C: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:15 INY
    case 0xC01A7F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    case 0xC01A80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC01A80.
    case 0xC01A82: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/initialize_misc_object_data.asm:18 BCC @UNKNOWN0
    case 0xC01A83: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_misc_object_data.asm:19 END_C_FUNCTION
    case 0xC01A85: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/initialize_your_sanctuary_display.asm (source_named).
bool execute_overworld_initialize_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DE98: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DE9C.
    case 0xC4DE9E: cpu.execute_instruction<0xFF>(0xB89C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4DEA0: cpu.execute_instruction<0x9C>(0x00B4B8, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4DE9E.
    case 0xC4DEA2: cpu.execute_instruction<0xB4>(0x00009C, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4DEA3: cpu.execute_instruction<0x9C>(0x00B4BA, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA2.
    case 0xC4DEA4: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA4.
    case 0xC4DEA5: cpu.execute_instruction<0xB4>(0x00009C, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4DEA6: cpu.execute_instruction<0x9C>(0x00B4BC, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA5.
    case 0xC4DEA7: cpu.execute_instruction<0xBC>(0x009CB4, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC4DEA9: cpu.execute_instruction<0x9C>(0x004472, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC4DEA7.
    case 0xC4DEAA: cpu.execute_instruction<0x72>(0x000044, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:11 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC4DEAC: cpu.execute_instruction<0x9C>(0x004474, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    case 0xC4DEAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4DEAF.
    case 0xC4DEB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:13 STA @LOCAL00
    case 0xC4DEB2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:14 BRA @UNKNOWN1
    case 0xC4DEB4: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:16 ASL
    case 0xC4DEB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:17 TAX
    case 0xC4DEB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:18 STZ LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4DEB8: cpu.execute_instruction<0x9E>(0x00B4BE, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:19 LDA @LOCAL00
    case 0xC4DEBB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:20 INC
    case 0xC4DEBD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:21 STA @LOCAL00
    case 0xC4DEBE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    case 0xC4DEC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    // Overlapping static entry reached from 0xC4DEC0.
    case 0xC4DEC2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:24 BCC @UNKNOWN0
    case 0xC4DEC3: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DEC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:26 LDA #$10
    case 0xC4DEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008D10, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    case 0xC4DEC9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DEC7.
    case 0xC4DECA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DECA.
    case 0xC4DECB: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/initialize_your_sanctuary_display.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC4DECC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4DECE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4DECF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/is_valid_item_transformation.asm (source_named).
bool execute_overworld_is_valid_item_transformation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/is_valid_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48ECE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    case 0xC48ED0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    // Overlapping static entry reached from 0xC48ED0.
    case 0xC48ED2: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48ED3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48ED4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/is_valid_item_transformation.asm:9 TAX
    case 0xC48ED5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/is_valid_item_transformation.asm:10 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::transformation_countdown,X
    case 0xC48ED6: cpu.execute_instruction<0xBD>(0x009F1D, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    case 0xC48ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC48ED9.
    case 0xC48EDB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:12 BNE @UNKNOWN0
    case 0xC48EDC: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:13 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::sfx_frequency,X
    case 0xC48EDE: cpu.execute_instruction<0xBD>(0x009F1B, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    case 0xC48EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC48EE1.
    case 0xC48EE3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:15 BEQ @UNKNOWN1
    case 0xC48EE4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    case 0xC48EE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    // Overlapping static entry reached from 0xC48EE6.
    case 0xC48EE8: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/is_valid_item_transformation.asm:19 TYA
    case 0xC48EE9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:20 END_C_FUNCTION
    case 0xC48EEA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_collision_column.asm (source_named).
bool execute_overworld_load_collision_column_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_collision_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00D7E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D80: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D81: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D82: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00D83.
    case 0xC00D85: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D86: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D87: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    case 0xC00D88: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC00D85.
    case 0xC00D89: cpu.execute_instruction<0x12>(0x00004A, 2); return true;
    // src/overworld/load_collision_column.asm:11 LSR
    case 0xC00D8A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:12 LSR
    case 0xC00D8B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:13 AND #$000F
    case 0xC00D8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_collision_column.asm:13 AND #$000F
    // Overlapping static entry reached from 0xC00D8C.
    case 0xC00D8E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:14 ASL
    case 0xC00D8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:15 CLC
    case 0xC00D90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00D91.
    case 0xC00D93: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    case 0xC00D94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC00D93.
    case 0xC00D95: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/load_collision_column.asm:18 LDA @LOCAL02
    case 0xC00D96: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:19 AND #$003F
    case 0xC00D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/overworld/load_collision_column.asm:19 AND #$003F
    // Overlapping static entry reached from 0xC00D98.
    case 0xC00D9A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_collision_column.asm:20 CLC
    case 0xC00D9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    case 0xC00D9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00E000, 3); return true;
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    // Overlapping static entry reached from 0xC00D9C.
    case 0xC00D9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AA, 2); else cpu.execute_instruction<0xE0>(0x0086AA, 3); return true;
    // src/overworld/load_collision_column.asm:22 TAX
    case 0xC00D9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    case 0xC00DA0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    // Overlapping static entry reached from 0xC00D9E.
    case 0xC00DA1: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    case 0xC00DA2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    // Overlapping static entry reached from 0xC00DA1.
    case 0xC00DA3: cpu.execute_instruction<0x12>(0x000029, 2); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    case 0xC00DA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DA3.
    case 0xC00DA5: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DA4.
    case 0xC00DA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:26 STA @VIRTUAL04
    case 0xC00DA7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_collision_column.asm:27 LDY #0
    case 0xC00DA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:27 LDY #0
    // Overlapping static entry reached from 0xC00DA9.
    case 0xC00DAB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_collision_column.asm:28 STY @LOCAL00
    case 0xC00DAC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:29 BRA @UNKNOWN1
    case 0xC00DAE: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/overworld/load_collision_column.asm:31 LDX @VIRTUAL02
    case 0xC00DB0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:32 LDA __BSS_START__,X
    case 0xC00DB2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:33 ASL
    case 0xC00DB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:34 TAX
    case 0xC00DB6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:35 LDA f:TILE_COLLISION_BUFFER,X
    case 0xC00DB7: cpu.execute_instruction<0xBF>(0x7FF800, 4); return true;
    // src/overworld/load_collision_column.asm:36 STA @LOCAL02
    case 0xC00DBB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:37 LDA @VIRTUAL02
    case 0xC00DBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_collision_column.asm:38 CLC
    case 0xC00DBF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:39 ADC #32
    case 0xC00DC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/overworld/load_collision_column.asm:39 ADC #32
    // Overlapping static entry reached from 0xC00DC0.
    case 0xC00DC2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_collision_column.asm:40 STA @VIRTUAL02
    case 0xC00DC3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DC5.
    case 0xC00DC7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DCA.
    case 0xC00DCC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DCD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_collision_column.asm:42 LDA @LOCAL02
    case 0xC00DCF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_column.asm:43 CLC
    case 0xC00DD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:44 ADC @VIRTUAL04
    case 0xC00DD2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/load_collision_column.asm:45 CLC
    case 0xC00DD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:46 ADC @VIRTUAL06
    case 0xC00DD5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:47 STA @VIRTUAL06
    case 0xC00DD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:48 STA @VIRTUAL0A
    case 0xC00DD9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    case 0xC00DDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC00E55.
    case 0xC00DDC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:50 STA @VIRTUAL0A+2
    case 0xC00DDD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_collision_column.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC00DDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_collision_column.asm:52 LDA [@VIRTUAL0A]
    case 0xC00DE1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_collision_column.asm:53 LDX @LOCAL01
    case 0xC00DE3: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:54 STA __BSS_START__,X
    case 0xC00DE5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/load_collision_column.asm:55 LDY #4
    case 0xC00DE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/load_collision_column.asm:55 LDY #4
    // Overlapping static entry reached from 0xC00DE8.
    case 0xC00DEA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:56 LDA [@VIRTUAL06],Y
    case 0xC00DEB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:57 STA __BSS_START__+64,X
    case 0xC00DED: cpu.execute_instruction<0x9D>(0x000040, 3); return true;
    // src/overworld/load_collision_column.asm:58 LDY #8
    case 0xC00DF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/load_collision_column.asm:58 LDY #8
    // Overlapping static entry reached from 0xC00DF0.
    case 0xC00DF2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:59 LDA [@VIRTUAL06],Y
    case 0xC00DF3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:60 STA __BSS_START__+128,X
    case 0xC00DF5: cpu.execute_instruction<0x9D>(0x000080, 3); return true;
    // src/overworld/load_collision_column.asm:61 LDY #12
    case 0xC00DF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/overworld/load_collision_column.asm:61 LDY #12
    // Overlapping static entry reached from 0xC00DF8.
    case 0xC00DFA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_column.asm:62 LDA [@VIRTUAL06],Y
    case 0xC00DFB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_column.asm:63 STA __BSS_START__+192,X
    case 0xC00DFD: cpu.execute_instruction<0x9D>(0x0000C0, 3); return true;
    // src/overworld/load_collision_column.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC00E00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_collision_column.asm:65 TXA
    case 0xC00E02: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:66 CLC
    case 0xC00E03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:67 ADC #256
    case 0xC00E04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/load_collision_column.asm:67 ADC #256
    // Overlapping static entry reached from 0xC00E04.
    case 0xC00E06: cpu.execute_instruction<0x01>(0x0000AA, 2); return true;
    // src/overworld/load_collision_column.asm:68 TAX
    case 0xC00E07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:69 STX @LOCAL01
    case 0xC00E08: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_column.asm:70 LDY @LOCAL00
    case 0xC00E0A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:71 INY
    case 0xC00E0C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_collision_column.asm:72 STY @LOCAL00
    case 0xC00E0D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_column.asm:74 CPY #16
    case 0xC00E0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/overworld/load_collision_column.asm:74 CPY #16
    // Overlapping static entry reached from 0xC00E0F.
    case 0xC00E11: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_collision_column.asm:75 BCC @UNKNOWN0
    case 0xC00E12: cpu.execute_instruction<0x90>(0x00009C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E15: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_collision_row.asm (source_named).
bool execute_overworld_load_collision_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_collision_row.asm:3 BEGIN_C_FUNCTION
    case 0xC00CF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CF6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CF7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00CF8.
    case 0xC00CFA: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CFB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_collision_row.asm:9 END_STACK_VARS
    case 0xC00CFC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:10 TXA
    case 0xC00CFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:11 STA @LOCAL02
    case 0xC00CFE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:12 LSR
    case 0xC00D00: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:13 LSR
    case 0xC00D01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:14 AND #$000F
    case 0xC00D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_collision_row.asm:14 AND #$000F
    // Overlapping static entry reached from 0xC00D02.
    case 0xC00D04: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:15 ASL
    case 0xC00D05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:16 ASL
    case 0xC00D06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:17 ASL
    case 0xC00D07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:18 ASL
    case 0xC00D08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:19 ASL
    case 0xC00D09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:20 CLC
    case 0xC00D0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:21 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_collision_row.asm:21 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00D0B.
    case 0xC00D0D: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_collision_row.asm:22 STA @VIRTUAL02
    case 0xC00D0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:22 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC00D0D.
    case 0xC00D0F: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/load_collision_row.asm:23 LDA @LOCAL02
    case 0xC00D10: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:24 AND #$003F
    case 0xC00D12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/overworld/load_collision_row.asm:24 AND #$003F
    // Overlapping static entry reached from 0xC00D12.
    case 0xC00D14: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:25 ASL
    case 0xC00D15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:26 ASL
    case 0xC00D16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:27 ASL
    case 0xC00D17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:28 ASL
    case 0xC00D18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:29 ASL
    case 0xC00D19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:30 ASL
    case 0xC00D1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:31 CLC
    case 0xC00D1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:32 ADC #.LOWORD(LOADED_COLLISION_TILES)
    case 0xC00D1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00E000, 3); return true;
    // src/overworld/load_collision_row.asm:32 ADC #.LOWORD(LOADED_COLLISION_TILES)
    // Overlapping static entry reached from 0xC00D1C.
    case 0xC00D1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AA, 2); else cpu.execute_instruction<0xE0>(0x0086AA, 3); return true;
    // src/overworld/load_collision_row.asm:33 TAX
    case 0xC00D1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:34 STX @LOCAL01
    case 0xC00D20: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:34 STX @LOCAL01
    // Overlapping static entry reached from 0xC00D1E.
    case 0xC00D21: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/overworld/load_collision_row.asm:35 LDA @LOCAL02
    case 0xC00D22: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:35 LDA @LOCAL02
    // Overlapping static entry reached from 0xC00D21.
    case 0xC00D23: cpu.execute_instruction<0x12>(0x000029, 2); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    case 0xC00D24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    // Overlapping static entry reached from 0xC00D23.
    case 0xC00D25: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/overworld/load_collision_row.asm:36 AND #$0003
    // Overlapping static entry reached from 0xC00D24.
    case 0xC00D26: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:37 ASL
    case 0xC00D27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:38 ASL
    case 0xC00D28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:39 STA @VIRTUAL04
    case 0xC00D29: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_collision_row.asm:40 LDY #0
    case 0xC00D2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:40 LDY #0
    // Overlapping static entry reached from 0xC00D2B.
    case 0xC00D2D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_collision_row.asm:41 STY @LOCAL00
    case 0xC00D2E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:42 BRA @UNKNOWN1
    case 0xC00D30: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/overworld/load_collision_row.asm:44 LDX @VIRTUAL02
    case 0xC00D32: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:45 LDA __BSS_START__,X
    case 0xC00D34: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:46 ASL
    case 0xC00D37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:47 TAX
    case 0xC00D38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:48 LDA f:TILE_COLLISION_BUFFER,X
    case 0xC00D39: cpu.execute_instruction<0xBF>(0x7FF800, 4); return true;
    // src/overworld/load_collision_row.asm:49 STA @LOCAL02
    case 0xC00D3D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:50 INC @VIRTUAL02
    case 0xC00D3F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/load_collision_row.asm:51 INC @VIRTUAL02
    case 0xC00D41: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00D43.
    case 0xC00D45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D46: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00D48.
    case 0xC00D4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_collision_row.asm:52 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00D4B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_collision_row.asm:53 LDA @LOCAL02
    case 0xC00D4D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_collision_row.asm:54 CLC
    case 0xC00D4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:55 ADC @VIRTUAL04
    case 0xC00D50: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/load_collision_row.asm:56 CLC
    case 0xC00D52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:57 ADC @VIRTUAL06
    case 0xC00D53: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:58 STA @VIRTUAL06
    case 0xC00D55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:59 STA @VIRTUAL0A
    case 0xC00D57: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:60 LDA @VIRTUAL06+2
    case 0xC00D59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_collision_row.asm:61 STA @VIRTUAL0A+2
    case 0xC00D5B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_collision_row.asm:62 LDA [@VIRTUAL0A]
    case 0xC00D5D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_collision_row.asm:63 LDX @LOCAL01
    case 0xC00D5F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:64 STA __BSS_START__,X
    case 0xC00D61: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/load_collision_row.asm:65 LDY #2
    case 0xC00D64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_collision_row.asm:65 LDY #2
    // Overlapping static entry reached from 0xC00D64.
    case 0xC00D66: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_collision_row.asm:66 LDA [@VIRTUAL06],Y
    case 0xC00D67: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_collision_row.asm:67 STA __BSS_START__+2,X
    case 0xC00D69: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/overworld/load_collision_row.asm:68 INX
    case 0xC00D6C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:69 INX
    case 0xC00D6D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:70 INX
    case 0xC00D6E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:71 INX
    case 0xC00D6F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:72 STX @LOCAL01
    case 0xC00D70: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_collision_row.asm:73 LDY @LOCAL00
    case 0xC00D72: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:74 INY
    case 0xC00D74: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_collision_row.asm:75 STY @LOCAL00
    case 0xC00D75: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/load_collision_row.asm:77 CPY #16
    case 0xC00D77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/overworld/load_collision_row.asm:77 CPY #16
    // Overlapping static entry reached from 0xC00D77.
    case 0xC00D79: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_collision_row.asm:78 BCC @UNKNOWN0
    case 0xC00D7A: cpu.execute_instruction<0x90>(0x0000B6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_collision_row.asm:79 END_C_FUNCTION
    case 0xC00D7C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_collision_row.asm:79 END_C_FUNCTION
    case 0xC00D7D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_dad_phone.asm (source_named).
bool execute_overworld_load_dad_phone_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_dad_phone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DCC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DCC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DCC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DCCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DCCA.
    case 0xC0DCCC: cpu.execute_instruction<0xFF>(0xE0AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DCCD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    case 0xC0DCCE: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    // Overlapping static entry reached from 0xC0DCCC.
    case 0xC0DCD0: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    case 0xC0DCD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DCD1.
    case 0xC0DCD3: cpu.execute_instruction<0xFF>(0xAD37D0, 4); return true;
    // src/overworld/load_dad_phone.asm:9 BNE @UNKNOWN0
    case 0xC0DCD4: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC0DCD6: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DCD3.
    case 0xC0DCD7: cpu.execute_instruction<0x43>(0x000096, 2); return true;
    // src/overworld/load_dad_phone.asm:11 BNE @UNKNOWN0
    case 0xC0DCD9: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/overworld/load_dad_phone.asm:12 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DCDB: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/overworld/load_dad_phone.asm:13 BNE @UNKNOWN0
    case 0xC0DCDE: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/overworld/load_dad_phone.asm:14 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DCE0: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/overworld/load_dad_phone.asm:15 BNE @UNKNOWN0
    case 0xC0DCE3: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/overworld/load_dad_phone.asm:16 LDA DAD_PHONE_QUEUED
    case 0xC0DCE5: cpu.execute_instruction<0xAD>(0x009E56, 3); return true;
    // src/overworld/load_dad_phone.asm:17 BNE @UNKNOWN0
    case 0xC0DCE8: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    case 0xC0DCEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000307, 3); return true;
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    // Overlapping static entry reached from 0xC0DCEA.
    case 0xC0DCEC: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    case 0xC0DCED: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCEC.
    case 0xC0DCEE: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCEE.
    case 0xC0DCEF: cpu.execute_instruction<0x16>(0x0000C2, 2); return true;
    // src/overworld/load_dad_phone.asm:20 CMP #0
    case 0xC0DCF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/load_dad_phone.asm:20 CMP #0
    // Overlapping static entry reached from 0xC0DCF1.
    case 0xC0DCF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_dad_phone.asm:21 BNE @UNKNOWN0
    case 0xC0DCF4: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00D33E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCF6.
    case 0xC0DCF8: cpu.execute_instruction<0xD3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCF8.
    case 0xC0DCFA: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCFB.
    case 0xC0DCFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCFE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_dad_phone.asm:23 LDA #10
    case 0xC0DD00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/overworld/load_dad_phone.asm:23 LDA #10
    // Overlapping static entry reached from 0xC0DD00.
    case 0xC0DD02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    case 0xC0DD03: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/overworld/load_dad_phone.asm:25 LDA #1
    case 0xC0DD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_dad_phone.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0DD07.
    case 0xC0DD09: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_dad_phone.asm:26 STA DAD_PHONE_QUEUED
    case 0xC0DD0A: cpu.execute_instruction<0x8D>(0x009E56, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DD0D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DD0E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_at_position.asm (source_named).
bool execute_overworld_load_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC013F6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013F8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013F9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC013FB.
    case 0xC013FD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC013FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    case 0xC01400: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC013FD.
    case 0xC01401: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    case 0xC01402: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC01401.
    case 0xC01403: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    case 0xC01404: cpu.execute_instruction<0x22>(0xC02194, 4); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC01403.
    case 0xC01405: cpu.execute_instruction<0x94>(0x000021, 2); return true;
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC01405.
    case 0xC01407: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0014A5, 3); return true;
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    case 0xC01408: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    // Overlapping static entry reached from 0xC01407.
    case 0xC01409: cpu.execute_instruction<0x14>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    case 0xC0140A: cpu.execute_instruction<0x8D>(0x004380, 3); return true;
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC01409.
    case 0xC0140B: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/overworld/load_map_at_position.asm:18 STA SCREEN_X_PIXELS_COPY
    case 0xC0140D: cpu.execute_instruction<0x8D>(0x00437C, 3); return true;
    // src/overworld/load_map_at_position.asm:19 LDX @LOCAL04
    case 0xC01410: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:20 STX SCREEN_Y_PIXELS
    case 0xC01412: cpu.execute_instruction<0x8E>(0x004382, 3); return true;
    // src/overworld/load_map_at_position.asm:21 STX SCREEN_Y_PIXELS_COPY
    case 0xC01415: cpu.execute_instruction<0x8E>(0x00437E, 3); return true;
    // src/overworld/load_map_at_position.asm:22 LSR
    case 0xC01418: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:23 LSR
    case 0xC01419: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:24 LSR
    case 0xC0141A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC0141B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:26 TXA
    case 0xC0141D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:27 LSR
    case 0xC0141E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:28 LSR
    case 0xC0141F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:29 LSR
    case 0xC01420: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:30 TAY
    case 0xC01421: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:31 STY @LOCAL02
    case 0xC01422: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:32 TYA
    case 0xC01424: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:33 LSR
    case 0xC01425: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:34 LSR
    case 0xC01426: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:35 LSR
    case 0xC01427: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:36 LSR
    case 0xC01428: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:37 TAX
    case 0xC01429: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:38 LDA @VIRTUAL02
    case 0xC0142A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:39 LSR
    case 0xC0142C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:40 LSR
    case 0xC0142D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:41 LSR
    case 0xC0142E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:42 LSR
    case 0xC0142F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:43 LSR
    case 0xC01430: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:44 JSR LOAD_MAP_AT_SECTOR
    case 0xC01431: cpu.execute_instruction<0x20>(0x0008C3, 3); return true;
    // src/overworld/load_map_at_position.asm:45 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC01434: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_position.asm:46 BNE @UNKNOWN0
    case 0xC01437: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:47 JSL OVERWORLD_SETUP_VRAM
    case 0xC01439: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/overworld/load_map_at_position.asm:49 LDA @VIRTUAL02
    case 0xC0143D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:50 SEC
    case 0xC0143F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:51 SBC #16
    case 0xC01440: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/load_map_at_position.asm:51 SBC #16
    // Overlapping static entry reached from 0xC01440.
    case 0xC01442: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:52 STA @LOCAL01
    case 0xC01443: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:53 LDY @LOCAL02
    case 0xC01445: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:54 TYA
    case 0xC01447: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:55 SEC
    case 0xC01448: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:56 SBC #14
    case 0xC01449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/load_map_at_position.asm:56 SBC #14
    // Overlapping static entry reached from 0xC01449.
    case 0xC0144B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:57 STA @LOCAL03
    case 0xC0144C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:58 LDA @VIRTUAL02
    case 0xC0144E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:59 SEC
    case 0xC01450: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:60 SBC #32
    case 0xC01451: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/load_map_at_position.asm:60 SBC #32
    // Overlapping static entry reached from 0xC01451.
    case 0xC01453: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:61 STA @VIRTUAL04
    case 0xC01454: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:62 TYA
    case 0xC01456: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:63 SEC
    case 0xC01457: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:64 SBC #32
    case 0xC01458: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/load_map_at_position.asm:64 SBC #32
    // Overlapping static entry reached from 0xC01458.
    case 0xC0145A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_position.asm:65 STA @VIRTUAL02
    case 0xC0145B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:66 STA @LOCAL00
    case 0xC0145D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:67 LDX #0
    case 0xC0145F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:67 LDX #0
    // Overlapping static entry reached from 0xC0145F.
    case 0xC01461: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/load_map_at_position.asm:68 BRA @UNKNOWN2
    case 0xC01462: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/load_map_at_position.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC01464: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:71 LDA #$00FF
    case 0xC01466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    case 0xC01468: cpu.execute_instruction<0x9D>(0x0043C0, 3); return true;
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC01466.
    case 0xC01469: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000043, 2); else cpu.execute_instruction<0xC0>(0x009D43, 3); return true;
    // src/overworld/load_map_at_position.asm:73 STA LOADED_COLUMNS_X,X
    case 0xC0146B: cpu.execute_instruction<0x9D>(0x0043B0, 3); return true;
    // src/overworld/load_map_at_position.asm:73 STA LOADED_COLUMNS_X,X
    // Overlapping static entry reached from 0xC01469.
    case 0xC0146C: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/overworld/load_map_at_position.asm:74 STA LOADED_ROWS_Y,X
    case 0xC0146E: cpu.execute_instruction<0x9D>(0x0043A0, 3); return true;
    // src/overworld/load_map_at_position.asm:75 STA LOADED_ROWS_X,X
    case 0xC01471: cpu.execute_instruction<0x9D>(0x004390, 3); return true;
    // src/overworld/load_map_at_position.asm:76 INX
    case 0xC01474: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:78 CPX #16
    case 0xC01475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/load_map_at_position.asm:78 CPX #16
    // Overlapping static entry reached from 0xC01475.
    case 0xC01477: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:79 BCC @UNKNOWN1
    case 0xC01478: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/load_map_at_position.asm:80 LDY #0
    case 0xC0147A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:80 LDY #0
    // Overlapping static entry reached from 0xC0147A.
    case 0xC0147C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_map_at_position.asm:81 STY @LOCAL02
    case 0xC0147D: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:82 BRA @UNKNOWN4
    case 0xC0147F: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC01481: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:85 LDA @LOCAL00
    case 0xC01483: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:86 STA @VIRTUAL02
    case 0xC01485: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:87 STY @VIRTUAL02
    case 0xC01487: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:88 CLC
    case 0xC01489: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:89 ADC @VIRTUAL02
    case 0xC0148A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:90 TAX
    case 0xC0148C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:91 LDA @VIRTUAL04
    case 0xC0148D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:92 JSR LOAD_MAP_ROW
    case 0xC0148F: cpu.execute_instruction<0x20>(0x000AC5, 3); return true;
    // src/overworld/load_map_at_position.asm:93 LDY @LOCAL02
    case 0xC01492: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:94 INY
    case 0xC01494: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:95 STY @LOCAL02
    case 0xC01495: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:97 CPY #60
    case 0xC01497: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/load_map_at_position.asm:97 CPY #60
    // Overlapping static entry reached from 0xC01497.
    case 0xC01499: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:98 BCC @UNKNOWN3
    case 0xC0149A: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/load_map_at_position.asm:99 LDY #0
    case 0xC0149C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_map_at_position.asm:99 LDY #0
    // Overlapping static entry reached from 0xC0149C.
    case 0xC0149E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/load_map_at_position.asm:100 STY @LOCAL02
    case 0xC0149F: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:101 BRA @UNKNOWN6
    case 0xC014A1: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/load_map_at_position.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC014A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:104 LDA @LOCAL00
    case 0xC014A5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_at_position.asm:105 STA @VIRTUAL02
    case 0xC014A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:106 STY @VIRTUAL02
    case 0xC014A9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:107 CLC
    case 0xC014AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:108 ADC @VIRTUAL02
    case 0xC014AC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:109 TAX
    case 0xC014AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:110 LDA @VIRTUAL04
    case 0xC014AF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_position.asm:111 JSR LOAD_COLLISION_ROW
    case 0xC014B1: cpu.execute_instruction<0x20>(0x000CF3, 3); return true;
    // src/overworld/load_map_at_position.asm:112 LDY @LOCAL02
    case 0xC014B4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:113 INY
    case 0xC014B6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:114 STY @LOCAL02
    case 0xC014B7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:116 CPY #60
    case 0xC014B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/load_map_at_position.asm:116 CPY #60
    // Overlapping static entry reached from 0xC014B9.
    case 0xC014BB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_at_position.asm:117 BCC @UNKNOWN5
    case 0xC014BC: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/load_map_at_position.asm:119 REP #PROC_FLAGS::ACCUM8
    case 0xC014BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:120 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC014C0: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    case 0xC014C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC014C3.
    case 0xC014C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:122 BNE @UNKNOWN7
    case 0xC014C6: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/overworld/load_map_at_position.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC014C8: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_position.asm:124 BNE @UNKNOWN8
    case 0xC014CB: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/overworld/load_map_at_position.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC014CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:126 LDA #$17
    case 0xC014CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    case 0xC014D1: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014CF.
    case 0xC014D2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014D2.
    case 0xC014D3: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC014D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_position.asm:130 LDA NPC_SPAWNS_ENABLED
    case 0xC014D6: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/overworld/load_map_at_position.asm:131 BEQ @UNKNOWN9
    case 0xC014D9: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_position.asm:132 LDA #1
    case 0xC014DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_map_at_position.asm:132 LDA #1
    // Overlapping static entry reached from 0xC014DB.
    case 0xC014DD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:133 STA NPC_SPAWNS_ENABLED
    case 0xC014DE: cpu.execute_instruction<0x8D>(0x004A58, 3); return true;
    // src/overworld/load_map_at_position.asm:135 LDA SCREEN_X_PIXELS
    case 0xC014E1: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/overworld/load_map_at_position.asm:136 SEC
    case 0xC014E4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:137 SBC #128
    case 0xC014E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/overworld/load_map_at_position.asm:137 SBC #128
    // Overlapping static entry reached from 0xC014E5.
    case 0xC014E7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:138 STA BG2_X_POS
    case 0xC014E8: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/load_map_at_position.asm:139 STA BG1_X_POS
    case 0xC014EB: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/load_map_at_position.asm:140 LDA SCREEN_Y_PIXELS
    case 0xC014EE: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/overworld/load_map_at_position.asm:141 SEC
    case 0xC014F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:142 SBC #112
    case 0xC014F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/overworld/load_map_at_position.asm:142 SBC #112
    // Overlapping static entry reached from 0xC014F2.
    case 0xC014F4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_map_at_position.asm:143 STA BG2_Y_POS
    case 0xC014F5: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/load_map_at_position.asm:144 STA BG1_Y_POS
    case 0xC014F8: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    case 0xC014FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC014FB.
    case 0xC014FD: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/overworld/load_map_at_position.asm:146 STY @LOCAL02
    case 0xC014FE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    case 0xC01500: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC014FD.
    case 0xC01501: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:149 TYA
    case 0xC01502: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:150 CLC
    case 0xC01503: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:151 ADC @LOCAL03
    case 0xC01504: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:152 STA @VIRTUAL02
    case 0xC01506: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:153 LDX @VIRTUAL02
    case 0xC01508: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:154 LDA @LOCAL01
    case 0xC0150A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:155 JSR UNKNOWN_C00E16
    case 0xC0150C: cpu.execute_instruction<0x20>(0x000E16, 3); return true;
    // src/overworld/load_map_at_position.asm:156 LDX @VIRTUAL02
    case 0xC0150F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_map_at_position.asm:157 LDA @LOCAL01
    case 0xC01511: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:158 JSL UNKNOWN_C0255C
    case 0xC01513: cpu.execute_instruction<0x22>(0xC0255C, 4); return true;
    // src/overworld/load_map_at_position.asm:159 LDY @LOCAL02
    case 0xC01517: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:160 INY
    case 0xC01519: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:161 STY @LOCAL02
    case 0xC0151A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:163 CPY #31
    case 0xC0151C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/overworld/load_map_at_position.asm:163 CPY #31
    // Overlapping static entry reached from 0xC0151C.
    case 0xC0151E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:164 BNE @UNKNOWN10
    case 0xC0151F: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    case 0xC01521: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F8, 2); else cpu.execute_instruction<0xA0>(0x00FFF8, 3); return true;
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    // Overlapping static entry reached from 0xC01521.
    case 0xC01523: cpu.execute_instruction<0xFF>(0x801284, 4); return true;
    // src/overworld/load_map_at_position.asm:166 STY @LOCAL02
    case 0xC01524: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    case 0xC01526: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC01523.
    case 0xC01527: cpu.execute_instruction<0x14>(0x000098, 2); return true;
    // src/overworld/load_map_at_position.asm:169 TYA
    case 0xC01528: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:170 CLC
    case 0xC01529: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:171 ADC @LOCAL03
    case 0xC0152A: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:172 TAX
    case 0xC0152C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:173 LDA @LOCAL01
    case 0xC0152D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:174 SEC
    case 0xC0152F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:175 SBC #8
    case 0xC01530: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/load_map_at_position.asm:175 SBC #8
    // Overlapping static entry reached from 0xC01530.
    case 0xC01532: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_position.asm:176 JSL SPAWN_HORIZONTAL
    case 0xC01533: cpu.execute_instruction<0x22>(0xC02A6B, 4); return true;
    // src/overworld/load_map_at_position.asm:177 LDY @LOCAL02
    case 0xC01537: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:178 INY
    case 0xC01539: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_at_position.asm:179 STY @LOCAL02
    case 0xC0153A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/load_map_at_position.asm:181 CPY #40
    case 0xC0153C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000028, 2); else cpu.execute_instruction<0xC0>(0x000028, 3); return true;
    // src/overworld/load_map_at_position.asm:181 CPY #40
    // Overlapping static entry reached from 0xC0153C.
    case 0xC0153E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_position.asm:182 BNE @UNKNOWN12
    case 0xC0153F: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/overworld/load_map_at_position.asm:183 LDA NPC_SPAWNS_ENABLED
    case 0xC01541: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/overworld/load_map_at_position.asm:184 BEQ @UNKNOWN14
    case 0xC01544: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    case 0xC01546: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01546.
    case 0xC01548: cpu.execute_instruction<0xFF>(0x4A588D, 4); return true;
    // src/overworld/load_map_at_position.asm:186 STA NPC_SPAWNS_ENABLED
    case 0xC01549: cpu.execute_instruction<0x8D>(0x004A58, 3); return true;
    // src/overworld/load_map_at_position.asm:188 LDA @LOCAL01
    case 0xC0154C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_at_position.asm:189 STA SCREEN_LEFT_X
    case 0xC0154E: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/overworld/load_map_at_position.asm:190 LDA @LOCAL03
    case 0xC01551: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/load_map_at_position.asm:191 STA SCREEN_TOP_Y
    case 0xC01553: cpu.execute_instruction<0x8D>(0x004376, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC01556: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC01557: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_at_sector.asm (source_named).
bool execute_overworld_load_map_at_sector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_sector.asm:4 BEGIN_C_FUNCTION
    case 0xC008C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC008C8.
    case 0xC008CA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008CB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    case 0xC008CD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xC008CA.
    case 0xC008CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:15 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008CF: cpu.execute_instruction<0xAD>(0x00438A, 3); return true;
    // src/overworld/load_map_at_sector.asm:16 ORA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008D2: cpu.execute_instruction<0x0D>(0x00438C, 3); return true;
    // src/overworld/load_map_at_sector.asm:17 BEQ @UNKNOWN0
    case 0xC008D5: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/load_map_at_sector.asm:18 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008D7: cpu.execute_instruction<0xAD>(0x00438A, 3); return true;
    // src/overworld/load_map_at_sector.asm:19 LSR
    case 0xC008DA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:20 LSR
    case 0xC008DB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:21 LSR
    case 0xC008DC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:22 LSR
    case 0xC008DD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:23 LSR
    case 0xC008DE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:24 STA @LOCAL04
    case 0xC008DF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:25 LDA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008E1: cpu.execute_instruction<0xAD>(0x00438C, 3); return true;
    // src/overworld/load_map_at_sector.asm:26 LSR
    case 0xC008E4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:27 LSR
    case 0xC008E5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:28 LSR
    case 0xC008E6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:29 LSR
    case 0xC008E7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:30 TAX
    case 0xC008E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:32 LDA @LOCAL04
    case 0xC008E9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:33 STA @VIRTUAL02
    case 0xC008EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:34 TXA
    case 0xC008ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:35 ASL
    case 0xC008EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:36 ASL
    case 0xC008EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:37 ASL
    case 0xC008F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:38 ASL
    case 0xC008F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:39 ASL
    case 0xC008F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:40 CLC
    case 0xC008F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:41 ADC @VIRTUAL02
    case 0xC008F4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:42 TAX
    case 0xC008F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:43 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC008F7: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    case 0xC008FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC008FB.
    case 0xC008FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_sector.asm:45 STA @LOCAL04
    case 0xC008FE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    case 0xC00900: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    // Overlapping static entry reached from 0xC00900.
    case 0xC00902: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_at_sector.asm:47 STA @LOCAL03
    case 0xC00903: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:48 LDA @LOCAL04
    case 0xC00905: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_at_sector.asm:49 LSR
    case 0xC00907: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:50 LSR
    case 0xC00908: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:51 LSR
    case 0xC00909: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:52 STA @VIRTUAL04
    case 0xC0090A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:53 ASL
    case 0xC0090C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:54 TAX
    case 0xC0090D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:55 LDA f:TILESET_TABLE,X
    case 0xC0090E: cpu.execute_instruction<0xBF>(0xEF101B, 4); return true;
    // src/overworld/load_map_at_sector.asm:56 TAY
    case 0xC00912: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:57 STY @LOCAL02
    case 0xC00913: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:58 TYA
    case 0xC00915: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:59 ASL
    case 0xC00916: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:60 ASL
    case 0xC00917: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:61 STA @VIRTUAL02
    case 0xC00918: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0010AB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091A.
    case 0xC0091C: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091C.
    case 0xC0091E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091F.
    case 0xC00921: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC00922: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_at_sector.asm:63 LDA @VIRTUAL02
    case 0xC00924: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:64 CLC
    case 0xC00926: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:65 ADC @VIRTUAL0A
    case 0xC00927: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:66 STA @VIRTUAL0A
    case 0xC00929: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0092B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0092B.
    case 0xC0092D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0092E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00930: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00931: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00933: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00935: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00937: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00939: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0093B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0093D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC0093F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC0093F.
    case 0xC00941: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00942: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00944: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC00944.
    case 0xC00946: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00947: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_sector.asm:70 JSL DECOMP
    case 0xC00949: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/overworld/load_map_at_sector.asm:71 LDY @LOCAL02
    case 0xC0094D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:72 TYA
    case 0xC0094F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:73 JSR LOAD_TILE_COLLISION
    case 0xC00950: cpu.execute_instruction<0x20>(0x00062A, 3); return true;
    // src/overworld/load_map_at_sector.asm:74 LDY @LOCAL02
    case 0xC00953: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:75 TYA
    case 0xC00955: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:76 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    case 0xC00956: cpu.execute_instruction<0x22>(0xC006F2, 4); return true;
    // src/overworld/load_map_at_sector.asm:77 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC0095A: cpu.execute_instruction<0x22>(0xC005E7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0095E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0095E.
    case 0xC00960: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00961: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC00963.
    case 0xC00965: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00966: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    case 0xC00968: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC00968.
    case 0xC0096A: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0096B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0096A.
    case 0xC0096C: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0096B.
    case 0xC0096D: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    case 0xC0096E: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0096D.
    case 0xC0096F: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0096F.
    case 0xC00971: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    case 0xC00972: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00971.
    case 0xC00973: cpu.execute_instruction<0x04>(0x0000CD, 2); return true;
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    case 0xC00974: cpu.execute_instruction<0xCD>(0x00436E, 3); return true;
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00973.
    case 0xC00975: cpu.execute_instruction<0x6E>(0x00F043, 3); return true;
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    case 0xC00977: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC00975.
    case 0xC00978: cpu.execute_instruction<0x75>(0x0000A4, 2); return true;
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    case 0xC00979: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    // Overlapping static entry reached from 0xC00978.
    case 0xC0097A: cpu.execute_instruction<0x16>(0x00008C, 2); return true;
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    case 0xC0097B: cpu.execute_instruction<0x8C>(0x004372, 3); return true;
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0097A.
    case 0xC0097C: cpu.execute_instruction<0x72>(0x000043, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC0097E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00105B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0097E.
    case 0xC00980: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00981: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00980.
    case 0xC00982: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00983: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00983.
    case 0xC00985: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00986: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_at_sector.asm:88 LDA @VIRTUAL02
    case 0xC00988: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_at_sector.asm:89 CLC
    case 0xC0098A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:90 ADC @VIRTUAL0A
    case 0xC0098B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:91 STA @VIRTUAL0A
    case 0xC0098D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0098F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0098F.
    case 0xC00991: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00992: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00994: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00995: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00997: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00999: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009A1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009A3.
    case 0xC009A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009A8.
    case 0xC009AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009AB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_at_sector.asm:95 JSL DECOMP
    case 0xC009AD: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/overworld/load_map_at_sector.asm:97 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009B1: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    case 0xC009B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC009B4.
    case 0xC009B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_sector.asm:99 BNE @UNKNOWN1
    case 0xC009B7: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/overworld/load_map_at_sector.asm:100 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC009B9: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_sector.asm:101 BNE @UNKNOWN2
    case 0xC009BC: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009BE.
    case 0xC009C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009C3.
    case 0xC009C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009C8.
    case 0xC009CA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CB.
    case 0xC009CD: cpu.execute_instruction<0x70>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CD.
    case 0xC009CF: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D1: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CF.
    case 0xC009D2: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009D2.
    case 0xC009D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x001780, 3); return true;
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    case 0xC009D5: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC009D4.
    case 0xC009D6: cpu.execute_instruction<0x17>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009D6.
    case 0xC009D8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009D7.
    case 0xC009D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009DC.
    case 0xC009DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E1.
    case 0xC009E3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E4.
    case 0xC009E6: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009EA: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/overworld/load_map_at_sector.asm:109 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009EE: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    case 0xC009F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC009F1.
    case 0xC009F3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_at_sector.asm:111 BNE @UNKNOWN3
    case 0xC009F4: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/overworld/load_map_at_sector.asm:112 LDX @LOCAL03
    case 0xC009F6: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:113 LDA @VIRTUAL04
    case 0xC009F8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:114 JSL LOAD_MAP_PAL
    case 0xC009FA: cpu.execute_instruction<0x22>(0xC007B6, 4); return true;
    // src/overworld/load_map_at_sector.asm:115 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC009FE: cpu.execute_instruction<0x22>(0xC00480, 4); return true;
    // src/overworld/load_map_at_sector.asm:116 JSL LOAD_SPECIAL_SPRITE_PALETTE
    case 0xC00A02: cpu.execute_instruction<0x22>(0xC00778, 4); return true;
    // src/overworld/load_map_at_sector.asm:117 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A06: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_sector.asm:118 BNE @UNKNOWN4
    case 0xC00A09: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/load_map_at_sector.asm:119 JSL LOAD_OVERLAY_SPRITES
    case 0xC00A0B: cpu.execute_instruction<0x22>(0xC4B26B, 4); return true;
    // src/overworld/load_map_at_sector.asm:120 JSR LOAD_TILESET_ANIM
    case 0xC00A0F: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/overworld/load_map_at_sector.asm:121 JSR LOAD_PALETTE_ANIM
    case 0xC00A12: cpu.execute_instruction<0x20>(0x00023F, 3); return true;
    // src/overworld/load_map_at_sector.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A15: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_sector.asm:124 BNE @UNKNOWN7
    case 0xC00A18: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/overworld/load_map_at_sector.asm:125 LDA DEBUG
    case 0xC00A1A: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/overworld/load_map_at_sector.asm:126 BEQ @UNKNOWN5
    case 0xC00A1D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:127 JSL UNKNOWN_EFD9F3
    case 0xC00A1F: cpu.execute_instruction<0x22>(0xEFD9F3, 4); return true;
    // src/overworld/load_map_at_sector.asm:128 BRA @UNKNOWN6
    case 0xC00A23: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:130 JSL UNKNOWN_C47F87
    case 0xC00A25: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    case 0xC00A29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00A29.
    case 0xC00A2B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:133 JSL UNKNOWN_C0856B
    case 0xC00A2C: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC00A30.
    case 0xC00A32: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A33: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A35: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A38: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A39: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A3B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/load_map_at_sector.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC00A3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    case 0xC00A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    // Overlapping static entry reached from 0xC00A3F.
    case 0xC00A41: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:139 CLC
    case 0xC00A42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_at_sector.asm:140 ADC @VIRTUAL06
    case 0xC00A43: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:141 STA @VIRTUAL06
    case 0xC00A45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_at_sector.asm:142 STA @LOCAL00
    case 0xC00A47: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_sector.asm:143 LDA @VIRTUAL06+2
    case 0xC00A49: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_map_at_sector.asm:144 STA @LOCAL00+2
    case 0xC00A4B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    case 0xC00A4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0001C0, 3); return true;
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    // Overlapping static entry reached from 0xC00A4D.
    case 0xC00A4F: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC00A50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x004476, 3); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A4F.
    case 0xC00A51: cpu.execute_instruction<0x76>(0x000044, 2); return true;
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A50.
    case 0xC00A52: cpu.execute_instruction<0x44>(0x00D222, 3); return true;
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    case 0xC00A53: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    // Overlapping static entry reached from 0xC00A52.
    case 0xC00A55: cpu.execute_instruction<0x8E>(0x00ADC0, 3); return true;
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A57: cpu.execute_instruction<0xAD>(0x004676, 3); return true;
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    // Overlapping static entry reached from 0xC00A55.
    case 0xC00A58: cpu.execute_instruction<0x76>(0x000046, 2); return true;
    // src/overworld/load_map_at_sector.asm:149 BEQ @UNKNOWN8
    case 0xC00A5A: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/overworld/load_map_at_sector.asm:150 JSL UNKNOWN_C496F9
    case 0xC00A5C: cpu.execute_instruction<0x22>(0xC496F9, 4); return true;
    // src/overworld/load_map_at_sector.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A60: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:152 LDA #$00FF
    case 0xC00A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    case 0xC00A64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    // Overlapping static entry reached from 0xC00A62.
    case 0xC00A65: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    case 0xC00A66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC00A66.
    case 0xC00A68: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_sector.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC00A69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    case 0xC00A6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC00A6B.
    case 0xC00A6D: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:157 JSL MEMSET16
    case 0xC00A6E: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/load_map_at_sector.asm:158 STZ WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A72: cpu.execute_instruction<0x9C>(0x004676, 3); return true;
    // src/overworld/load_map_at_sector.asm:160 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A75: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_at_sector.asm:161 BEQ @UNKNOWN9
    case 0xC00A78: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/overworld/load_map_at_sector.asm:162 JSL UNKNOWN_C496F9
    case 0xC00A7A: cpu.execute_instruction<0x22>(0xC496F9, 4); return true;
    // src/overworld/load_map_at_sector.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/load_map_at_sector.asm:164 STZ_BADOPT @LOCAL00
    case 0xC00A80: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    case 0xC00A82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC00A82.
    case 0xC00A84: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    case 0xC00A85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC00A84.
    case 0xC00A86: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC00A87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC00A87.
    case 0xC00A89: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:168 JSL MEMSET16
    case 0xC00A8A: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    case 0xC00A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    // Overlapping static entry reached from 0xC00A8E.
    case 0xC00A90: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_at_sector.asm:171 JSL UNKNOWN_C0856B
    case 0xC00A91: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/load_map_at_sector.asm:172 LDA @VIRTUAL04
    case 0xC00A95: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_at_sector.asm:173 STA LOADED_MAP_TILE_COMBO
    case 0xC00A97: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/load_map_at_sector.asm:174 LDA @LOCAL03
    case 0xC00A9A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_at_sector.asm:175 STA LOADED_MAP_PALETTE
    case 0xC00A9C: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00A9F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00AA0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_block_event_changes.asm (source_named).
bool execute_overworld_load_map_block_event_changes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_block_event_changes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC006F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC006F7.
    case 0xC006F9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC006FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    case 0xC006FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC006F9.
    case 0xC006FD: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC006FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC006FD.
    case 0xC006FF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC006FE.
    case 0xC00700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00701: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00703.
    case 0xC00705: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00706: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:11 LDA @LOCAL01
    case 0xC00708: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:12 ASL
    case 0xC0070A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:13 TAX
    case 0xC0070B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:14 LDA f:EVENT_CONTROL_PTR_TABLE,X
    case 0xC0070C: cpu.execute_instruction<0xBF>(0xD01598, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:15 CLC
    case 0xC00710: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:16 ADC @VIRTUAL06
    case 0xC00711: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:17 STA @VIRTUAL06
    case 0xC00713: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:19 LDA [@VIRTUAL06] ;map_tile_event::event_flag
    case 0xC00715: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:20 BEQ @UNKNOWN5
    case 0xC00717: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    case 0xC00719: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC00719.
    case 0xC0071B: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    case 0xC0071C: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0071B.
    case 0xC0071F: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    case 0xC00720: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    // Overlapping static entry reached from 0xC0071F.
    case 0xC00721: cpu.execute_instruction<0x0E>(0x0002A0, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    case 0xC00722: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00722.
    case 0xC00724: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:25 LDA [@VIRTUAL06],Y
    case 0xC00725: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:26 TAY
    case 0xC00727: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:27 STY @LOCAL01
    case 0xC00728: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    case 0xC0072A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    // Overlapping static entry reached from 0xC0072A.
    case 0xC0072C: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:29 LDA [@VIRTUAL06]
    case 0xC0072D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    case 0xC0072F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    // Overlapping static entry reached from 0xC0072F.
    case 0xC00731: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:31 BCC @UNKNOWN1
    case 0xC00732: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    case 0xC00734: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    // Overlapping static entry reached from 0xC00734.
    case 0xC00736: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:34 STX @VIRTUAL02
    case 0xC00737: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:35 LDA @LOCAL00
    case 0xC00739: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:36 CMP @VIRTUAL02
    case 0xC0073B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:37 BNE @UNKNOWN4
    case 0xC0073D: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    case 0xC0073F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC0073F.
    case 0xC00741: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:39 CLC
    case 0xC00742: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:40 ADC @VIRTUAL06
    case 0xC00743: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:41 STA @VIRTUAL06
    case 0xC00745: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:42 BRA @UNKNOWN3
    case 0xC00747: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    case 0xC00749: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00749.
    case 0xC0074B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:45 LDA [@VIRTUAL06],Y
    case 0xC0074C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:46 TAX
    case 0xC0074E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:47 LDA [@VIRTUAL06]
    case 0xC0074F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:47 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC007C9.
    case 0xC00750: cpu.execute_instruction<0x06>(0x000020, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:48 JSR REPLACE_BLOCK
    case 0xC00751: cpu.execute_instruction<0x20>(0x00067E, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:48 JSR REPLACE_BLOCK
    // Overlapping static entry reached from 0xC00750.
    case 0xC00752: cpu.execute_instruction<0x7E>(0x00A906, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    case 0xC00754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC00752.
    case 0xC00755: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC00754.
    case 0xC00756: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:50 CLC
    case 0xC00757: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:51 ADC @VIRTUAL06
    case 0xC00758: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:52 STA @VIRTUAL06
    case 0xC0075A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:53 LDY @LOCAL01
    case 0xC0075C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:54 DEY
    case 0xC0075E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:55 STY @LOCAL01
    case 0xC0075F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    case 0xC00761: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    // Overlapping static entry reached from 0xC00761.
    case 0xC00763: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:58 BNE @UNKNOWN2
    case 0xC00764: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:59 BRA @UNKNOWN0
    case 0xC00766: cpu.execute_instruction<0x80>(0x0000AD, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:61 TYA
    case 0xC00768: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00769: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0076A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0076B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0076C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0076D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0076E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:64 CLC
    case 0xC0076F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_block_event_changes.asm:65 ADC @VIRTUAL06
    case 0xC00770: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:66 STA @VIRTUAL06
    case 0xC00772: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_block_event_changes.asm:67 BRA @UNKNOWN0
    case 0xC00774: cpu.execute_instruction<0x80>(0x00009F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00776: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00777: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_column.asm (source_named).
bool execute_overworld_load_map_column_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00BDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BDF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00BE1.
    case 0xC00BE3: cpu.execute_instruction<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:15 LSR
    case 0xC00BE6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:16 LSR
    case 0xC00BE7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:17 STA @VIRTUAL04
    case 0xC00BE8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:18 TXA
    case 0xC00BEA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:19 AND #$8000
    case 0xC00BEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/load_map_column.asm:19 AND #$8000
    // Overlapping static entry reached from 0xC00BEB.
    case 0xC00BED: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/load_map_column.asm:20 BEQ @UNKNOWN0
    case 0xC00BEE: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/load_map_column.asm:21 TXA
    case 0xC00BF0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:22 LSR
    case 0xC00BF1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:23 LSR
    case 0xC00BF2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:24 ORA #$E000
    case 0xC00BF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/load_map_column.asm:24 ORA #$E000
    // Overlapping static entry reached from 0xC00BF3.
    case 0xC00BF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A8, 2); else cpu.execute_instruction<0xE0>(0x0084A8, 3); return true;
    // src/overworld/load_map_column.asm:25 TAY
    case 0xC00BF6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    case 0xC00BF7: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    // Overlapping static entry reached from 0xC00BF5.
    case 0xC00BF8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:27 BRA @UNKNOWN1
    case 0xC00BF9: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/overworld/load_map_column.asm:29 TXA
    case 0xC00BFB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:30 LSR
    case 0xC00BFC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:31 LSR
    case 0xC00BFD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:32 TAY
    case 0xC00BFE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:33 STY @LOCAL06
    case 0xC00BFF: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:35 LDA @VIRTUAL04
    case 0xC00C01: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:36 AND #$000F
    case 0xC00C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_column.asm:36 AND #$000F
    // Overlapping static entry reached from 0xC00C03.
    case 0xC00C05: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:37 STA @LOCAL05
    case 0xC00C06: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:38 TAX
    case 0xC00C08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:39 LDA @VIRTUAL04
    case 0xC00C09: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C0B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:41 STA LOADED_COLUMNS_X,X
    case 0xC00C0D: cpu.execute_instruction<0x9D>(0x0043B0, 3); return true;
    // src/overworld/load_map_column.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC00C10: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:43 TYA
    case 0xC00C12: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:44 AND #$000F
    case 0xC00C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_column.asm:44 AND #$000F
    // Overlapping static entry reached from 0xC00C13.
    case 0xC00C15: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_column.asm:45 TAX
    case 0xC00C16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:46 STX @LOCAL04
    case 0xC00C17: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/load_map_column.asm:47 TYA
    case 0xC00C19: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C1A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:49 STA LOADED_COLUMNS_Y,X
    case 0xC00C1C: cpu.execute_instruction<0x9D>(0x0043C0, 3); return true;
    // src/overworld/load_map_column.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC00C1F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:51 LDA @VIRTUAL04
    case 0xC00C21: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:52 LSR
    case 0xC00C23: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:53 LSR
    case 0xC00C24: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:54 LSR
    case 0xC00C25: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:55 STA @VIRTUAL02
    case 0xC00C26: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:56 TYA
    case 0xC00C28: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    case 0xC00C29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    // Overlapping static entry reached from 0xC00C29.
    case 0xC00C2B: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:59 CLC
    case 0xC00C2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:60 ADC @VIRTUAL02
    case 0xC00C30: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:61 TAX
    case 0xC00C32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:63 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C35: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_column.asm:64 LSR
    case 0xC00C39: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:65 LSR
    case 0xC00C3A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:66 LSR
    case 0xC00C3B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC00C3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:68 AND #$00FF
    case 0xC00C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC00C3E.
    case 0xC00C40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:69 STA @LOCAL03
    case 0xC00C41: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:70 LDA @LOCAL05
    case 0xC00C43: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:71 ASL
    case 0xC00C45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:72 CLC
    case 0xC00C46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00C47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00C47.
    case 0xC00C49: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    case 0xC00C4A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    // Overlapping static entry reached from 0xC00C49.
    case 0xC00C4B: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    case 0xC00C4C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00C4B.
    case 0xC00C4D: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    case 0xC00C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C4D.
    case 0xC00C4F: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C4E.
    case 0xC00C50: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    case 0xC00C51: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC00C50.
    case 0xC00C52: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    case 0xC00C53: cpu.execute_instruction<0x4C>(0x000CD5, 3); return true;
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC00C52.
    case 0xC00C54: cpu.execute_instruction<0xD5>(0x00000C, 2); return true;
    // src/overworld/load_map_column.asm:80 LDX @LOCAL04
    case 0xC00C56: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/load_map_column.asm:81 TXA
    case 0xC00C58: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:83 STA @VIRTUAL02
    case 0xC00C5D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:84 STA @LOCAL01
    case 0xC00C5F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:85 STZ @LOCAL00
    case 0xC00C61: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:86 BRA @UNKNOWN7
    case 0xC00C63: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/overworld/load_map_column.asm:88 TYA
    case 0xC00C65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:89 AND #$0003
    case 0xC00C66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/load_map_column.asm:89 AND #$0003
    // Overlapping static entry reached from 0xC00C66.
    case 0xC00C68: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_column.asm:90 BNE @UNKNOWN4
    case 0xC00C69: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/load_map_column.asm:91 LDA @VIRTUAL04
    case 0xC00C6B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:92 LSR
    case 0xC00C6D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:93 LSR
    case 0xC00C6E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:94 LSR
    case 0xC00C6F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:95 STA @VIRTUAL02
    case 0xC00C70: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:96 TYA
    case 0xC00C72: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    case 0xC00C73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    // Overlapping static entry reached from 0xC00C73.
    case 0xC00C75: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C77: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:99 CLC
    case 0xC00C79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:100 ADC @VIRTUAL02
    case 0xC00C7A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:101 TAX
    case 0xC00C7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:103 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C7F: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_column.asm:104 LSR
    case 0xC00C83: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:105 LSR
    case 0xC00C84: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:106 LSR
    case 0xC00C85: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC00C86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_column.asm:108 AND #$00FF
    case 0xC00C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC00C88.
    case 0xC00C8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:109 STA @LOCAL03
    case 0xC00C8B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:111 CPY #320
    case 0xC00C8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000040, 2); else cpu.execute_instruction<0xC0>(0x000140, 3); return true;
    // src/overworld/load_map_column.asm:111 CPY #320
    // Overlapping static entry reached from 0xC00C8D.
    case 0xC00C8F: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    case 0xC00C90: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    // Overlapping static entry reached from 0xC00C8F.
    case 0xC00C91: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    case 0xC00C92: cpu.execute_instruction<0xAD>(0x00436E, 3); return true;
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00D0D.
    case 0xC00C94: cpu.execute_instruction<0x43>(0x0000C5, 2); return true;
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    case 0xC00C95: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    // Overlapping static entry reached from 0xC00C94.
    case 0xC00C96: cpu.execute_instruction<0x14>(0x0000D0, 2); return true;
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    case 0xC00C97: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC00C96.
    case 0xC00C98: cpu.execute_instruction<0x14>(0x0000BB, 2); return true;
    // src/overworld/load_map_column.asm:116 TYX
    case 0xC00C99: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:117 LDA @VIRTUAL04
    case 0xC00C9A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_column.asm:118 JSR UNKNOWN_C0A156
    case 0xC00C9C: cpu.execute_instruction<0x20>(0x00A156, 3); return true;
    // src/overworld/load_map_column.asm:119 STA @LOCAL05
    case 0xC00C9F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:120 LDA @LOCAL01
    case 0xC00CA1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:121 STA @VIRTUAL02
    case 0xC00CA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:122 ASL
    case 0xC00CA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:123 TAY
    case 0xC00CA6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:124 LDA @LOCAL05
    case 0xC00CA7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:125 STA (@LOCAL02),Y
    case 0xC00CA9: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:126 BRA @UNKNOWN6
    case 0xC00CAB: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/overworld/load_map_column.asm:128 LDA @LOCAL01
    case 0xC00CAD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:129 STA @VIRTUAL02
    case 0xC00CAF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:130 ASL
    case 0xC00CB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:131 TAY
    case 0xC00CB2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:132 LDA #0
    case 0xC00CB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00CB3.
    case 0xC00CB5: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_column.asm:133 STA (@LOCAL02),Y
    case 0xC00CB6: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:135 LDA @VIRTUAL02
    case 0xC00CB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:136 CLC
    case 0xC00CBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:137 ADC #16
    case 0xC00CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:137 ADC #16
    // Overlapping static entry reached from 0xC00CBB.
    case 0xC00CBD: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/load_map_column.asm:138 AND #$00FF
    case 0xC00CBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_column.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC00CBE.
    case 0xC00CC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:139 STA @VIRTUAL02
    case 0xC00CC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_column.asm:140 STA @LOCAL01
    case 0xC00CC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_column.asm:141 LDY @LOCAL06
    case 0xC00CC5: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:142 INY
    case 0xC00CC7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:143 STY @LOCAL06
    case 0xC00CC8: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_map_column.asm:144 INC @LOCAL00
    case 0xC00CCA: cpu.execute_instruction<0xE6>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:146 LDA @LOCAL00
    case 0xC00CCC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_column.asm:147 CMP #16
    case 0xC00CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:147 CMP #16
    // Overlapping static entry reached from 0xC00CCE.
    case 0xC00CD0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:148 BCC @UNKNOWN3
    case 0xC00CD1: cpu.execute_instruction<0x90>(0x000092, 2); return true;
    // src/overworld/load_map_column.asm:149 BRA @UNKNOWN11
    case 0xC00CD3: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/load_map_column.asm:151 LDA #0
    case 0xC00CD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:151 LDA #0
    // Overlapping static entry reached from 0xC00CD5.
    case 0xC00CD7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_column.asm:152 STA @LOCAL05
    case 0xC00CD8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:153 BRA @UNKNOWN10
    case 0xC00CDA: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:156 TAY
    case 0xC00CE1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:157 LDA #0
    case 0xC00CE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_column.asm:157 LDA #0
    // Overlapping static entry reached from 0xC00CE2.
    case 0xC00CE4: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_column.asm:158 STA (@LOCAL02),Y
    case 0xC00CE5: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/overworld/load_map_column.asm:159 LDA @LOCAL05
    case 0xC00CE7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:160 INC
    case 0xC00CE9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_column.asm:161 STA @LOCAL05
    case 0xC00CEA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_column.asm:163 CMP #16
    case 0xC00CEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_column.asm:163 CMP #16
    // Overlapping static entry reached from 0xC00CEC.
    case 0xC00CEE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_column.asm:164 BCC @UNKNOWN9
    case 0xC00CEF: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00CF1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00CF2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_palette.asm (source_named).
bool execute_overworld_load_map_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC007B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC007BB.
    case 0xC007BD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    case 0xC007C0: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC007BD.
    case 0xC007C1: cpu.execute_instruction<0x1E>(0x0040A0, 3); return true;
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    case 0xC007C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    // Overlapping static entry reached from 0xC007C2.
    case 0xC007C4: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/overworld/load_map_palette.asm:15 STY @LOCAL04
    case 0xC007C5: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0010FB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007C7.
    case 0xC007C9: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007C9.
    case 0xC007CB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007CB.
    case 0xC007CD: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007CC.
    case 0xC007CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:17 LDA @LOCAL05
    case 0xC007D1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_map_palette.asm:18 ASL
    case 0xC007D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:19 ASL
    case 0xC007D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:20 CLC
    case 0xC007D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:21 ADC @VIRTUAL06
    case 0xC007D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:22 STA @VIRTUAL06
    case 0xC007D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC007DA.
    case 0xC007DC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007DD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007DF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007E0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007E4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:24 TXA
    case 0xC007E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    case 0xC007E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC007E7.
    case 0xC007E9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_palette.asm:26 JSL MULT168
    case 0xC007EA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/load_map_palette.asm:27 CLC
    case 0xC007EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:28 ADC @VIRTUAL06
    case 0xC007EF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:28 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC0492A.
    case 0xC007F0: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/overworld/load_map_palette.asm:29 STA @VIRTUAL06
    case 0xC007F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_map_palette.asm:29 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC007F0.
    case 0xC007F2: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/overworld/load_map_palette.asm:30 STA @LOCAL02
    case 0xC007F3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/load_map_palette.asm:30 STA @LOCAL02
    // Overlapping static entry reached from 0xC007F2.
    case 0xC007F4: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // src/overworld/load_map_palette.asm:31 LDA @VIRTUAL06+2
    case 0xC007F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:31 LDA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC007F4.
    case 0xC007F6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:32 STA @LOCAL02+2
    case 0xC007F7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_palette.asm:33 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC007F9: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/overworld/load_map_palette.asm:34 BNE @UNKNOWN4
    case 0xC007FC: cpu.execute_instruction<0xD0>(0x000065, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC007FE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00800: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00802: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00804: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00806: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00808: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0080A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0080C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    case 0xC0080E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC0080E.
    case 0xC00810: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:39 LDY @LOCAL04
    case 0xC00811: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:40 TYA
    case 0xC00813: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:41 JSL MEMCPY16
    case 0xC00814: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/load_map_palette.asm:42 LDY @LOCAL04
    case 0xC00818: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:43 LDA __BSS_START__,Y
    case 0xC0081A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0081D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0081F: cpu.execute_instruction<0x4C>(0x0008C1, 3); return true;
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    case 0xC00822: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    // Overlapping static entry reached from 0xC00822.
    case 0xC00824: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    case 0xC00825: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC00824.
    case 0xC00828: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    case 0xC00829: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    // Overlapping static entry reached from 0xC00828.
    case 0xC0082A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:48 LDX #0
    case 0xC0082B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/load_map_palette.asm:48 LDX #0
    // Overlapping static entry reached from 0xC0082B.
    case 0xC0082D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:49 LDY @LOCAL04
    case 0xC0082E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:50 LDA __BSS_START__,Y
    case 0xC00830: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    case 0xC00833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC00833.
    case 0xC00835: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00836: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00838: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/load_map_palette.asm:53 LDX #1
    case 0xC0083A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_map_palette.asm:53 LDX #1
    // Overlapping static entry reached from 0xC0083A.
    case 0xC0083C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/load_map_palette.asm:55 STX @VIRTUAL02
    case 0xC0083D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_palette.asm:56 LDA @LOCAL03
    case 0xC0083F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/load_map_palette.asm:57 CMP @VIRTUAL02
    case 0xC00841: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00843: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00845: cpu.execute_instruction<0x4C>(0x0008C1, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00848: cpu.execute_instruction<0xAF>(0xEF10FB, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0084C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0084E: cpu.execute_instruction<0xAF>(0xEF10FD, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00852: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00854: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00856: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00858: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0085A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_palette.asm:61 LDA __BSS_START__ + BPP4PALETTE_SIZE * 1,Y
    case 0xC0085C: cpu.execute_instruction<0xB9>(0x000020, 3); return true;
    // src/overworld/load_map_palette.asm:62 STA @LOCAL02
    case 0xC0085F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/load_map_palette.asm:63 BRA @UNKNOWN0
    case 0xC00861: cpu.execute_instruction<0x80>(0x00009B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00863.
    case 0xC00865: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00866: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00868: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00868.
    case 0xC0086A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0086B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC0086D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00374A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC0086D.
    case 0xC0086F: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00870: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC0086F.
    case 0xC00871: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00872: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC00872.
    case 0xC00874: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00875: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00877: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00879: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0087B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0087D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_palette.asm:68 JSL DECOMP
    case 0xC0087F: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00883: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00885: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00887: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00889: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_map_palette.asm:70 LDA CUR_PHOTO_DISPLAY
    case 0xC0088B: cpu.execute_instruction<0xAD>(0x00B4F1, 3); return true;
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    case 0xC0088E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC0088E.
    case 0xC00890: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_map_palette.asm:72 JSL MULT168
    case 0xC00891: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/load_map_palette.asm:73 CLC
    case 0xC00895: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    case 0xC00896: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    // Overlapping static entry reached from 0xC00896.
    case 0xC00898: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_palette.asm:75 TAX
    case 0xC00899: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:76 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC0089A: cpu.execute_instruction<0xBF>(0xE12F8A, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC0089E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC008A0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/overworld/load_map_palette.asm:78 CLC
    case 0xC008A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008A3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008A5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008AB: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    case 0xC008B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC008B7.
    case 0xC008B9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/load_map_palette.asm:82 LDY @LOCAL04
    case 0xC008BA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/overworld/load_map_palette.asm:83 TYA
    case 0xC008BC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_palette.asm:84 JSL MEMCPY16
    case 0xC008BD: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008C2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_map_row.asm (source_named).
bool execute_overworld_load_map_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_row.asm:3 BEGIN_C_FUNCTION
    case 0xC00AC5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00AC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00AC8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00AC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC00ACA.
    case 0xC00ACC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ACD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_row.asm:13 END_STACK_VARS
    case 0xC00ACE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:14 STA @LOCAL05
    case 0xC00ACF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:14 STA @LOCAL05
    // Overlapping static entry reached from 0xC00ACC.
    case 0xC00AD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:15 TXA
    case 0xC00AD1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:16 LSR
    case 0xC00AD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:17 LSR
    case 0xC00AD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:18 STA @VIRTUAL04
    case 0xC00AD4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:19 LDA @LOCAL05
    case 0xC00AD6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:20 AND #$8000
    case 0xC00AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/load_map_row.asm:20 AND #$8000
    // Overlapping static entry reached from 0xC00AD8.
    case 0xC00ADA: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/load_map_row.asm:21 BEQ @UNKNOWN0
    case 0xC00ADB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/load_map_row.asm:22 LDA @LOCAL05
    case 0xC00ADD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:23 LSR
    case 0xC00ADF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:24 LSR
    case 0xC00AE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:25 ORA #$E000
    case 0xC00AE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/load_map_row.asm:25 ORA #$E000
    // Overlapping static entry reached from 0xC00AE1.
    case 0xC00AE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A8, 2); else cpu.execute_instruction<0xE0>(0x0084A8, 3); return true;
    // src/overworld/load_map_row.asm:26 TAY
    case 0xC00AE4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:27 STY @LOCAL04
    case 0xC00AE5: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:27 STY @LOCAL04
    // Overlapping static entry reached from 0xC00AE3.
    case 0xC00AE6: cpu.execute_instruction<0x16>(0x000080, 2); return true;
    // src/overworld/load_map_row.asm:28 BRA @UNKNOWN1
    case 0xC00AE7: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/load_map_row.asm:28 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC00AE6.
    case 0xC00AE8: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/overworld/load_map_row.asm:30 LDA @LOCAL05
    case 0xC00AE9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:30 LDA @LOCAL05
    // Overlapping static entry reached from 0xC00AE8.
    case 0xC00AEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:31 LSR
    case 0xC00AEB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:32 LSR
    case 0xC00AEC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:33 TAY
    case 0xC00AED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:34 STY @LOCAL04
    case 0xC00AEE: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:36 TYA
    case 0xC00AF0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:37 AND #$000F
    case 0xC00AF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:37 AND #$000F
    // Overlapping static entry reached from 0xC00AF1.
    case 0xC00AF3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/load_map_row.asm:38 TAX
    case 0xC00AF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:39 STX @LOCAL05
    case 0xC00AF5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:40 TYA
    case 0xC00AF7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC00AF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:42 STA LOADED_ROWS_X,X
    case 0xC00AFA: cpu.execute_instruction<0x9D>(0x004390, 3); return true;
    // src/overworld/load_map_row.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC00AFD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:44 LDA @VIRTUAL04
    case 0xC00AFF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:45 AND #$000F
    case 0xC00B01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:45 AND #$000F
    // Overlapping static entry reached from 0xC00B01.
    case 0xC00B03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:46 STA @LOCAL03
    case 0xC00B04: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:47 TAX
    case 0xC00B06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:48 LDA @VIRTUAL04
    case 0xC00B07: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:50 STA LOADED_ROWS_Y,X
    case 0xC00B0B: cpu.execute_instruction<0x9D>(0x0043A0, 3); return true;
    // src/overworld/load_map_row.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC00B0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:52 TYA
    case 0xC00B10: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:53 LSR
    case 0xC00B11: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:54 LSR
    case 0xC00B12: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:55 LSR
    case 0xC00B13: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:56 STA @VIRTUAL02
    case 0xC00B14: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:57 LDA @VIRTUAL04
    case 0xC00B16: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:58 AND #$FFFC
    case 0xC00B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_row.asm:58 AND #$FFFC
    // Overlapping static entry reached from 0xC00B18.
    case 0xC00B1A: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_row.asm:59 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:60 CLC
    case 0xC00B1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:61 ADC @VIRTUAL02
    case 0xC00B1F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:62 TAX
    case 0xC00B21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:64 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00B24: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_row.asm:65 LSR
    case 0xC00B28: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:66 LSR
    case 0xC00B29: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:67 LSR
    case 0xC00B2A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC00B2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:69 AND #$00FF
    case 0xC00B2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_row.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC00B2D.
    case 0xC00B2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:70 STA @LOCAL02
    case 0xC00B30: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:71 LDA @LOCAL03
    case 0xC00B32: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_map_row.asm:72 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00B38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:73 CLC
    case 0xC00B39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:74 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/load_map_row.asm:74 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00B3A.
    case 0xC00B3C: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:75 STA @LOCAL03
    case 0xC00B3D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:75 STA @LOCAL03
    // Overlapping static entry reached from 0xC00B3C.
    case 0xC00B3E: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/overworld/load_map_row.asm:76 LDA @VIRTUAL04
    case 0xC00B3F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00B3E.
    case 0xC00B40: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    case 0xC00B41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000140, 3); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    // Overlapping static entry reached from 0xC00B40.
    case 0xC00B42: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:77 CMP #$0140
    // Overlapping static entry reached from 0xC00B41.
    case 0xC00B43: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:78 BCC @UNKNOWN2
    case 0xC00B44: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/load_map_row.asm:78 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC00B43.
    case 0xC00B45: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/load_map_row.asm:79 JMP @UNKNOWN8
    case 0xC00B46: cpu.execute_instruction<0x4C>(0x000BC2, 3); return true;
    // src/overworld/load_map_row.asm:79 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC00B45.
    case 0xC00B47: cpu.execute_instruction<0xC2>(0x00000B, 2); return true;
    // src/overworld/load_map_row.asm:81 LDX @LOCAL05
    case 0xC00B49: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:82 STX @VIRTUAL02
    case 0xC00B4B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:83 LDA @VIRTUAL02
    case 0xC00B4D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:84 STA @LOCAL01
    case 0xC00B4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:85 STZ @LOCAL00
    case 0xC00B51: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:86 BRA @UNKNOWN7
    case 0xC00B53: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/overworld/load_map_row.asm:88 TYA
    case 0xC00B55: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:89 AND #$0007
    case 0xC00B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/load_map_row.asm:89 AND #$0007
    // Overlapping static entry reached from 0xC00B56.
    case 0xC00B58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_map_row.asm:90 BNE @UNKNOWN4
    case 0xC00B59: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/load_map_row.asm:91 TYA
    case 0xC00B5B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:92 LSR
    case 0xC00B5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:93 LSR
    case 0xC00B5D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:94 LSR
    case 0xC00B5E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:95 STA @VIRTUAL02
    case 0xC00B5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:96 LDA @VIRTUAL04
    case 0xC00B61: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:97 AND #$FFFC
    case 0xC00B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_map_row.asm:97 AND #$FFFC
    // Overlapping static entry reached from 0xC00B63.
    case 0xC00B65: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_row.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00B68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:99 CLC
    case 0xC00B69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:100 ADC @VIRTUAL02
    case 0xC00B6A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:101 TAX
    case 0xC00B6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC00B6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:103 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00B6F: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/load_map_row.asm:104 LSR
    case 0xC00B73: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:105 LSR
    case 0xC00B74: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:106 LSR
    case 0xC00B75: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC00B76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_map_row.asm:108 AND #$00FF
    case 0xC00B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_map_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC00B78.
    case 0xC00B7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:109 STA @LOCAL02
    case 0xC00B7B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:111 CPY #256
    case 0xC00B7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000100, 3); return true;
    // src/overworld/load_map_row.asm:111 CPY #256
    // Overlapping static entry reached from 0xC00B7D.
    case 0xC00B7F: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/overworld/load_map_row.asm:112 BCS @UNKNOWN5
    case 0xC00B80: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/overworld/load_map_row.asm:112 BCS @UNKNOWN5
    // Overlapping static entry reached from 0xC00B7F.
    case 0xC00B81: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:113 LDA LOADED_MAP_TILE_COMBO
    case 0xC00B82: cpu.execute_instruction<0xAD>(0x00436E, 3); return true;
    // src/overworld/load_map_row.asm:114 CMP @LOCAL02
    case 0xC00B85: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/overworld/load_map_row.asm:115 BNE @UNKNOWN5
    case 0xC00B87: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:116 LDX @VIRTUAL04
    case 0xC00B89: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/load_map_row.asm:117 TYA
    case 0xC00B8B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:118 JSR UNKNOWN_C0A156
    case 0xC00B8C: cpu.execute_instruction<0x20>(0x00A156, 3); return true;
    // src/overworld/load_map_row.asm:119 STA @LOCAL05
    case 0xC00B8F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:120 LDA @LOCAL01
    case 0xC00B91: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:121 STA @VIRTUAL02
    case 0xC00B93: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:122 ASL
    case 0xC00B95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:123 TAY
    case 0xC00B96: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:124 LDA @LOCAL05
    case 0xC00B97: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:125 STA (@LOCAL03),Y
    case 0xC00B99: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:126 BRA @UNKNOWN6
    case 0xC00B9B: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/overworld/load_map_row.asm:128 LDA @LOCAL01
    case 0xC00B9D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:129 STA @VIRTUAL02
    case 0xC00B9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:130 ASL
    case 0xC00BA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:131 TAY
    case 0xC00BA2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:132 LDA #0
    case 0xC00BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00BA3.
    case 0xC00BA5: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_row.asm:133 STA (@LOCAL03),Y
    case 0xC00BA6: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:135 LDA @VIRTUAL02
    case 0xC00BA8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:136 INC
    case 0xC00BAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:137 AND #$000F
    case 0xC00BAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/load_map_row.asm:137 AND #$000F
    // Overlapping static entry reached from 0xC00BAB.
    case 0xC00BAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:138 STA @VIRTUAL02
    case 0xC00BAE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_map_row.asm:139 STA @LOCAL01
    case 0xC00BB0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_map_row.asm:140 LDY @LOCAL04
    case 0xC00BB2: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:141 INY
    case 0xC00BB4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:142 STY @LOCAL04
    case 0xC00BB5: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_map_row.asm:143 INC @LOCAL00
    case 0xC00BB7: cpu.execute_instruction<0xE6>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:145 LDA @LOCAL00
    case 0xC00BB9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_map_row.asm:146 CMP #16
    case 0xC00BBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_row.asm:146 CMP #16
    // Overlapping static entry reached from 0xC00BBB.
    case 0xC00BBD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:147 BCC @UNKNOWN3
    case 0xC00BBE: cpu.execute_instruction<0x90>(0x000095, 2); return true;
    // src/overworld/load_map_row.asm:148 BRA @UNKNOWN11
    case 0xC00BC0: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:150 LDA #0
    case 0xC00BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:150 LDA #0
    // Overlapping static entry reached from 0xC00BC2.
    case 0xC00BC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_map_row.asm:151 STA @LOCAL05
    case 0xC00BC5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:152 BRA @UNKNOWN10
    case 0xC00BC7: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/load_map_row.asm:154 ASL
    case 0xC00BC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:155 TAY
    case 0xC00BCA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:156 LDA #0
    case 0xC00BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_map_row.asm:156 LDA #0
    // Overlapping static entry reached from 0xC00BCB.
    case 0xC00BCD: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/overworld/load_map_row.asm:157 STA (@LOCAL03),Y
    case 0xC00BCE: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/overworld/load_map_row.asm:158 LDA @LOCAL05
    case 0xC00BD0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:159 INC
    case 0xC00BD2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_map_row.asm:160 STA @LOCAL05
    case 0xC00BD3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/load_map_row.asm:162 CMP #16
    case 0xC00BD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/load_map_row.asm:162 CMP #16
    // Overlapping static entry reached from 0xC00BD5.
    case 0xC00BD7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_map_row.asm:163 BCC @UNKNOWN9
    case 0xC00BD8: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_row.asm:165 END_C_FUNCTION
    case 0xC00BDA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_row.asm:165 END_C_FUNCTION
    case 0xC00BDB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_overlay_sprites.asm (source_named).
bool execute_overworld_load_overlay_sprites_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_overlay_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B26B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B26F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B26F.
    case 0xC4B271: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_overlay_sprites.asm:8 END_STACK_VARS
    case 0xC4B272: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    case 0xC4B273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005600, 3); return true;
    // src/overworld/load_overlay_sprites.asm:9 LDA #VRAM::OVERLAY_BASE
    // Overlapping static entry reached from 0xC4B273.
    case 0xC4B275: cpu.execute_instruction<0x56>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    case 0xC4B276: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4B275.
    case 0xC4B277: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B278: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000E32, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B277.
    case 0xC4B279: cpu.execute_instruction<0x32>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B278.
    case 0xC4B27A: cpu.execute_instruction<0x0E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B27B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B27D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B27D.
    case 0xC4B27F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:11 LOADPTR ENTITY_OVERLAY_SPRITES, @VIRTUAL0A
    case 0xC4B280: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    case 0xC4B282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_overlay_sprites.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4B282.
    case 0xC4B284: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:13 STA @VIRTUAL02
    case 0xC4B285: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:14 BRA @FIRSTLOOPSTART
    case 0xC4B287: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B289: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:16 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B28F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B291: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    case 0xC4B293: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/load_overlay_sprites.asm:18 LDY #2
    // Overlapping static entry reached from 0xC4B293.
    case 0xC4B295: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_overlay_sprites.asm:19 LDA [@VIRTUAL0A],Y
    case 0xC4B296: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC4B298: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    case 0xC4B29A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4B29A.
    case 0xC4B29C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_overlay_sprites.asm:22 TAY
    case 0xC4B29D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:23 LDA [@VIRTUAL06]
    case 0xC4B29E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:24 TAX
    case 0xC4B2A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:25 LDA @LOCAL02
    case 0xC4B2A1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:26 JSR UNKNOWN_C4B1B8
    case 0xC4B2A3: cpu.execute_instruction<0x20>(0x00B1B8, 3); return true;
    // src/overworld/load_overlay_sprites.asm:27 STA @LOCAL01
    case 0xC4B2A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B2A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC486C0.
    case 0xC4B2A9: cpu.execute_instruction<0x20>(0x0003A0, 3); return true;
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    case 0xC4B2AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/load_overlay_sprites.asm:29 LDY #3
    // Overlapping static entry reached from 0xC4B2AA.
    case 0xC4B2AC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/load_overlay_sprites.asm:30 LDA [@VIRTUAL0A],Y
    case 0xC4B2AD: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4B2AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    case 0xC4B2B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4B2B1.
    case 0xC4B2B3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_overlay_sprites.asm:33 TAY
    case 0xC4B2B4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:34 LDA [@VIRTUAL06]
    case 0xC4B2B5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:35 TAX
    case 0xC4B2B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:36 LDA @LOCAL01
    case 0xC4B2B8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/load_overlay_sprites.asm:37 JSR UNKNOWN_C4B1B8
    case 0xC4B2BA: cpu.execute_instruction<0x20>(0x00B1B8, 3); return true;
    // src/overworld/load_overlay_sprites.asm:38 STA @LOCAL02
    case 0xC4B2BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    case 0xC4B2BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/load_overlay_sprites.asm:39 LDA #4
    // Overlapping static entry reached from 0xC4B2BF.
    case 0xC4B2C1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/load_overlay_sprites.asm:40 CLC
    case 0xC4B2C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:41 ADC @VIRTUAL0A
    case 0xC4B2C3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:42 STA @VIRTUAL0A
    case 0xC4B2C5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_overlay_sprites.asm:43 INC @VIRTUAL02
    case 0xC4B2C7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:45 LDA f:ENTITY_OVERLAY_COUNT
    case 0xC4B2C9: cpu.execute_instruction<0xAF>(0xC40E31, 4); return true;
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    case 0xC4B2CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_overlay_sprites.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B2CD.
    case 0xC4B2CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:47 STA @VIRTUAL04
    case 0xC4B2D0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_overlay_sprites.asm:48 LDA @VIRTUAL02
    case 0xC4B2D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_overlay_sprites.asm:49 CMP @VIRTUAL04
    case 0xC4B2D4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/overworld/load_overlay_sprites.asm:50 BCC @LOADNEXTOVERLAYSPRITE
    case 0xC4B2D6: cpu.execute_instruction<0x90>(0x0000B1, 2); return true;
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    case 0xC4B2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_overlay_sprites.asm:51 LDA #0
    // Overlapping static entry reached from 0xC4B2D8.
    case 0xC4B2DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_overlay_sprites.asm:52 STA @LOCAL00
    case 0xC4B2DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:53 BRA @SECONDLOOPSTART
    case 0xC4B2DD: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/overworld/load_overlay_sprites.asm:55 ASL
    case 0xC4B2DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:56 TAX
    case 0xC4B2E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x000EE4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2E1.
    case 0xC4B2E3: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2E6.
    case 0xC4B2E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:57 LOADPTR ENTITY_OVERLAY_MUSHROOMIZED, @VIRTUAL06
    case 0xC4B2E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:58 LDA @VIRTUAL06
    case 0xC4B2EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:59 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC4B2ED: cpu.execute_instruction<0x9D>(0x002EB6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x000EB0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2F0.
    case 0xC4B2F2: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2F5.
    case 0xC4B2F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:60 LOADPTR ENTITY_OVERLAY_SWEATING, @VIRTUAL06
    case 0xC4B2F8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:61 LDA @VIRTUAL06
    case 0xC4B2FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:62 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC4B2FC: cpu.execute_instruction<0x9D>(0x002F6A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B2FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x000EF0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B2FF.
    case 0xC4B301: cpu.execute_instruction<0x0E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B302: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B304: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B304.
    case 0xC4B306: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:63 LOADPTR ENTITY_OVERLAY_RIPPLE, @VIRTUAL06
    case 0xC4B307: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:64 LDA @VIRTUAL06
    case 0xC4B309: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:65 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC4B30B: cpu.execute_instruction<0x9D>(0x00301E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B30E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000F04, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B30E.
    case 0xC4B310: cpu.execute_instruction<0x0F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B311: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B313: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B310.
    case 0xC4B314: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B313.
    case 0xC4B315: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_overlay_sprites.asm:66 LOADPTR ENTITY_OVERLAY_BIG_RIPPLE, @VIRTUAL06
    case 0xC4B316: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_overlay_sprites.asm:67 LDA @VIRTUAL06
    case 0xC4B318: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/load_overlay_sprites.asm:68 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC4B31A: cpu.execute_instruction<0x9D>(0x0030D2, 3); return true;
    // src/overworld/load_overlay_sprites.asm:69 LDA @LOCAL00
    case 0xC4B31D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:70 INC
    case 0xC4B31F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_overlay_sprites.asm:71 STA @LOCAL00
    case 0xC4B320: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    case 0xC4B322: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/load_overlay_sprites.asm:73 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4B322.
    case 0xC4B324: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_overlay_sprites.asm:74 BCC @FILLNEXTENTRY
    case 0xC4B325: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC4B327: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_overlay_sprites.asm:75 END_C_FUNCTION
    case 0xC4B328: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_sector_attributes.asm (source_named).
bool execute_overworld_load_sector_attributes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_sector_attributes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00AA1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AA3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AA4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AA5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00AA6.
    case 0xC00AA8: cpu.execute_instruction<0xFF>(0xEB685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AA9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_sector_attributes.asm:8 END_STACK_VARS
    case 0xC00AAA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:9 XBA
    case 0xC00AAB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:10 AND #$00FF
    case 0xC00AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_sector_attributes.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC00AAC.
    case 0xC00AAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_sector_attributes.asm:11 STA @VIRTUAL02
    case 0xC00AAF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_sector_attributes.asm:12 TXA
    case 0xC00AB1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:13 AND #$FF80
    case 0xC00AB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x00FF80, 3); return true;
    // src/overworld/load_sector_attributes.asm:13 AND #$FF80
    // Overlapping static entry reached from 0xC00AB2.
    case 0xC00AB4: cpu.execute_instruction<0xFF>(0x184A4A, 4); return true;
    // src/overworld/load_sector_attributes.asm:14 LSR
    case 0xC00AB5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:15 LSR
    case 0xC00AB6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:16 CLC
    case 0xC00AB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:17 ADC @VIRTUAL02
    case 0xC00AB8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_sector_attributes.asm:18 ASL
    case 0xC00ABA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:19 TAX
    case 0xC00ABB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_sector_attributes.asm:20 LDA f:MAP_DATA_PER_SECTOR_ATTRIBUTES_TABLE,X
    case 0xC00ABC: cpu.execute_instruction<0xBF>(0xD7B200, 4); return true;
    // src/overworld/load_sector_attributes.asm:21 STA CURRENT_SECTOR_ATTRIBUTES
    case 0xC00AC0: cpu.execute_instruction<0x8D>(0x00438E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_sector_attributes.asm:22 END_C_FUNCTION
    case 0xC00AC3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_sector_attributes.asm:22 END_C_FUNCTION
    case 0xC00AC4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_special_sprite_palette.asm (source_named).
bool execute_overworld_load_special_sprite_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_special_sprite_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00778: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0077A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0077B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0077C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0077C.
    case 0xC0077E: cpu.execute_instruction<0xFF>(0x40A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:7 END_STACK_VARS
    case 0xC0077F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00780: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000240, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:8 LDX #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00780.
    case 0xC00782: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:9 LDA __BSS_START__ + BPP4PALETTE_SIZE * 2,X
    case 0xC00783: cpu.execute_instruction<0xBD>(0x000040, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:10 BEQ @UNKNOWN2
    case 0xC00786: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00788: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC00789: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0078A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0078B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:11 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0078C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:12 CLC
    case 0xC0078D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    case 0xC0078E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:13 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0078E.
    case 0xC00790: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:14 TAX
    case 0xC00791: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:15 STX @LOCAL01
    case 0xC00792: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    case 0xC00794: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:16 LDA #(BPP4PALETTE_SIZE * 4) / 2 ;goes by colour count, not size
    // Overlapping static entry reached from 0xC00794.
    case 0xC00796: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:17 STA @LOCAL00
    case 0xC00797: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:18 BRA @UNKNOWN1
    case 0xC00799: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:20 ASL
    case 0xC0079B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:21 PHA
    case 0xC0079C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:22 LDA __BSS_START__,X
    case 0xC0079D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:23 PLX
    case 0xC007A0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:24 STA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC007A1: cpu.execute_instruction<0x9D>(0x000300, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:25 LDX @LOCAL01
    case 0xC007A4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:26 INX
    case 0xC007A6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:27 INX
    case 0xC007A7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:28 STX @LOCAL01
    case 0xC007A8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:29 LDA @LOCAL00
    case 0xC007AA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:30 INC
    case 0xC007AC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_special_sprite_palette.asm:31 STA @LOCAL00
    case 0xC007AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    case 0xC007AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000050, 2); else cpu.execute_instruction<0xC9>(0x000050, 3); return true;
    // src/overworld/load_special_sprite_palette.asm:33 CMP #(BPP4PALETTE_SIZE * 5) / 2
    // Overlapping static entry reached from 0xC007AF.
    case 0xC007B1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/load_special_sprite_palette.asm:34 BCC @UNKNOWN0
    case 0xC007B2: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_special_sprite_palette.asm:36 END_C_FUNCTION
    case 0xC007B5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_tile_collision.asm (source_named).
bool execute_overworld_load_tile_collision_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_tile_collision.asm:3 BEGIN_C_FUNCTION
    case 0xC0062A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0062F.
    case 0xC00631: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00632: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00633: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    case 0xC00634: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC00631.
    case 0xC00635: cpu.execute_instruction<0x0E>(0x007BA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00636: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00117B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00636.
    case 0xC00638: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00639: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00638.
    case 0xC0063A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0063B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0063A.
    case 0xC0063C: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0063B.
    case 0xC0063D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0063E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_tile_collision.asm:10 LDA @LOCAL00
    case 0xC00640: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:11 ASL
    case 0xC00642: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:12 ASL
    case 0xC00643: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:13 CLC
    case 0xC00644: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:14 ADC @VIRTUAL06
    case 0xC00645: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:15 STA @VIRTUAL06
    case 0xC00647: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00649: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00649.
    case 0xC0064B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00651: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00653: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00655.
    case 0xC00657: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00658: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0065A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0065A.
    case 0xC0065C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0065D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_tile_collision.asm:18 LDA #0
    case 0xC0065F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/load_tile_collision.asm:18 LDA #0
    // Overlapping static entry reached from 0xC0065F.
    case 0xC00661: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/load_tile_collision.asm:19 STA @LOCAL00
    case 0xC00662: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:20 BRA @UNKNOWN1
    case 0xC00664: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/load_tile_collision.asm:22 LDA [@VIRTUAL0A]
    case 0xC00666: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:23 STA [@VIRTUAL06]
    case 0xC00668: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:24 INC @VIRTUAL0A
    case 0xC0066A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:25 INC @VIRTUAL0A
    case 0xC0066C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/load_tile_collision.asm:26 INC @VIRTUAL06
    case 0xC0066E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:27 INC @VIRTUAL06
    case 0xC00670: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/load_tile_collision.asm:28 LDA @LOCAL00
    case 0xC00672: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:29 INC
    case 0xC00674: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_tile_collision.asm:30 STA @LOCAL00
    case 0xC00675: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_tile_collision.asm:32 CMP #960
    case 0xC00677: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0003C0, 3); return true;
    // src/overworld/load_tile_collision.asm:32 CMP #960
    // Overlapping static entry reached from 0xC00677.
    case 0xC00679: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    case 0xC0067A: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC00679.
    case 0xC0067B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0067C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0067D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_town_map_data.asm (source_named).
bool execute_overworld_load_town_map_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_town_map_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4D553: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D555: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D556: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D557: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D558: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D558.
    case 0xC4D55A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D55B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D55C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:10 TAY
    case 0xC4D55D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:11 STY @LOCAL02
    case 0xC4D55E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/load_town_map_data.asm:12 LDX #1
    case 0xC4D560: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_town_map_data.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4D560.
    case 0xC4D562: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:13 LDA #2
    case 0xC4D563: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/load_town_map_data.asm:13 LDA #2
    // Overlapping static entry reached from 0xC4D563.
    case 0xC4D565: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:14 JSL FADE_OUT
    case 0xC4D566: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x002190, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56A.
    case 0xC4D56C: cpu.execute_instruction<0x21>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56C.
    case 0xC4D56E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56F.
    case 0xC4D571: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D572: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_town_map_data.asm:16 LDY @LOCAL02
    case 0xC4D574: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/load_town_map_data.asm:17 TYA
    case 0xC4D576: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:18 ASL
    case 0xC4D577: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:19 ASL
    case 0xC4D578: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:20 CLC
    case 0xC4D579: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:21 ADC @VIRTUAL0A
    case 0xC4D57A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_town_map_data.asm:22 STA @VIRTUAL0A
    case 0xC4D57C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D57E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D57E.
    case 0xC4D580: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D581: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D583: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D584: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D586: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D588: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D590: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4D592.
    case 0xC4D594: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D595: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D597: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4D597.
    case 0xC4D599: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D59A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_town_map_data.asm:26 JSL DECOMP
    case 0xC4D59C: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/overworld/load_town_map_data.asm:28 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4D5A0: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    case 0xC4D5A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4D5A3.
    case 0xC4D5A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/load_town_map_data.asm:30 BNE @UNKNOWN0
    case 0xC4D5A6: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D5A8.
    case 0xC4D5AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D5AD.
    case 0xC4D5AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    case 0xC4D5BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4D5BA.
    case 0xC4D5BC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    case 0xC4D5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4D5BD.
    case 0xC4D5BF: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:35 JSL MEMCPY16
    case 0xC4D5C0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00F1C3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C4.
    case 0xC4D5C6: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C6.
    case 0xC4D5C8: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C9.
    case 0xC4D5CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4D5CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5CE.
    case 0xC4D5D0: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4D5D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5D0.
    case 0xC4D5D2: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5D1.
    case 0xC4D5D3: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    case 0xC4D5D4: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4D5D3.
    case 0xC4D5D5: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4D5D5.
    case 0xC4D5D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A0, 2); else cpu.execute_instruction<0xC0>(0x0000A0, 3); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    case 0xC4D5D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4D5D7.
    case 0xC4D5D9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4D5D8.
    case 0xC4D5DA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    case 0xC4D5DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    // Overlapping static entry reached from 0xC4D5DB.
    case 0xC4D5DD: cpu.execute_instruction<0x30>(0x000098, 2); return true;
    // src/overworld/load_town_map_data.asm:42 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4D5DE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:43 JSL SET_BG1_VRAM_LOCATION
    case 0xC4D5DF: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/overworld/load_town_map_data.asm:44 LDA #3
    case 0xC4D5E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/load_town_map_data.asm:44 LDA #3
    // Overlapping static entry reached from 0xC4D5E3.
    case 0xC4D5E5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:45 JSL SET_OAM_SIZE
    case 0xC4D5E6: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/overworld/load_town_map_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D5EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:47 LDA #$00
    case 0xC4D5EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    case 0xC4D5EE: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4D5EC.
    case 0xC4D5EF: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4D5EF.
    case 0xC4D5F1: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/overworld/load_town_map_data.asm:49 STA f:CGWSEL
    case 0xC4D5F2: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/overworld/load_town_map_data.asm:50 LDA #$01
    case 0xC4D5F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    case 0xC4D5F8: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D5F6.
    case 0xC4D5F9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D5F9.
    case 0xC4D5FA: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/overworld/load_town_map_data.asm:52 STZ TD_MIRROR
    case 0xC4D5FB: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/overworld/load_town_map_data.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4D5FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D600: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D600.
    case 0xC4D602: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D603: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D605: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D605.
    case 0xC4D607: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D608: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D60A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60A.
    case 0xC4D60C: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D60D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60C.
    case 0xC4D60E: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60D.
    case 0xC4D60F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D610: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D612: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D614: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D612.
    case 0xC4D615: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D615.
    case 0xC4D617: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0040A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D618: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000840, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D617.
    case 0xC4D619: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D618.
    case 0xC4D61A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D61B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D61D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D61D.
    case 0xC4D61F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D620: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D622: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D622.
    case 0xC4D624: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D625: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D625.
    case 0xC4D627: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D628: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D62A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D62B: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D62F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00EA50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4D62F.
    case 0xC4D631: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D632: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4D634.
    case 0xC4D636: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D637: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D639: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_town_map_data.asm:60 JSL DECOMP
    case 0xC4D641: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D645: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D647: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D649: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D64B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D64D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D64D.
    case 0xC4D64F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D650: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D650.
    case 0xC4D652: cpu.execute_instruction<0x24>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D653: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D652.
    case 0xC4D654: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D657: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D655.
    case 0xC4D658: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D658.
    case 0xC4D65A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0018A9, 3); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    case 0xC4D65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4D65A.
    case 0xC4D65C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4D65B.
    case 0xC4D65D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:64 JSL UNKNOWN_C0856B
    case 0xC4D65E: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/load_town_map_data.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D662: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:66 LDA #$11
    case 0xC4D664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    case 0xC4D666: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D664.
    case 0xC4D667: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D667.
    case 0xC4D668: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/load_town_map_data.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC4D669: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_town_map_data.asm:69 STZ BG1_Y_POS
    case 0xC4D66B: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/overworld/load_town_map_data.asm:70 STZ BG1_X_POS
    case 0xC4D66E: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/overworld/load_town_map_data.asm:71 JSL UPDATE_SCREEN
    case 0xC4D671: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/load_town_map_data.asm:72 LDX #1
    case 0xC4D675: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/load_town_map_data.asm:72 LDX #1
    // Overlapping static entry reached from 0xC4D675.
    case 0xC4D677: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/load_town_map_data.asm:73 LDA #2
    case 0xC4D678: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/load_town_map_data.asm:73 LDA #2
    // Overlapping static entry reached from 0xC4D678.
    case 0xC4D67A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/load_town_map_data.asm:74 JSL FADE_IN
    case 0xC4D67B: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4D67F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4D680: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_your_sanctuary_location.asm (source_named).
bool execute_overworld_load_your_sanctuary_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E281: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E283: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E284: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E285: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E286: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E286.
    case 0xC4E288: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E289: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E28A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:9 TAX
    case 0xC4E28B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:10 STX @LOCAL01
    case 0xC4E28C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:11 TXA
    case 0xC4E28E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:12 ASL
    case 0xC4E28F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:13 CLC
    case 0xC4E290: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    case 0xC4E291: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BE, 2); else cpu.execute_instruction<0x69>(0x00B4BE, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    // Overlapping static entry reached from 0xC4E291.
    case 0xC4E293: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    case 0xC4E294: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4E293.
    case 0xC4E295: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:16 LDX @VIRTUAL02
    case 0xC4E296: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:17 LDA __BSS_START__,X
    case 0xC4E298: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:18 BNE @UNKNOWN0
    case 0xC4E29B: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x00DE78, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E29D.
    case 0xC4E29F: cpu.execute_instruction<0xDE>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E2A2.
    case 0xC4E2A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:20 LDX @LOCAL01
    case 0xC4E2A7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:21 TXA
    case 0xC4E2A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:22 ASL
    case 0xC4E2AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:23 ASL
    case 0xC4E2AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:24 STA @LOCAL00
    case 0xC4E2AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:25 TXY
    case 0xC4E2AE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:26 INC
    case 0xC4E2AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:27 INC
    case 0xC4E2B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B1: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B3: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B5: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B7: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:29 CLC
    case 0xC4E2B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:30 ADC @VIRTUAL0A
    case 0xC4E2BA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:30 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F182.
    case 0xC4E2BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:31 STA @VIRTUAL0A
    case 0xC4E2BC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:32 LDA [@VIRTUAL0A]
    case 0xC4E2BE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:33 TAX
    case 0xC4E2C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:34 LDA @LOCAL00
    case 0xC4E2C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:35 CLC
    case 0xC4E2C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location.asm:36 ADC @VIRTUAL06
    case 0xC4E2C4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:37 STA @VIRTUAL06
    case 0xC4E2C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:38 LDA [@VIRTUAL06]
    case 0xC4E2C8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:39 JSR LOAD_YOUR_SANCTUARY_LOCATION_DATA
    case 0xC4E2CA: cpu.execute_instruction<0x20>(0x00E13E, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    case 0xC4E2CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    // Overlapping static entry reached from 0xC4E2CD.
    case 0xC4E2CF: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:41 LDX @VIRTUAL02
    case 0xC4E2D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location.asm:42 STA __BSS_START__,X
    case 0xC4E2D2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4E2D5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4E2D6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/load_your_sanctuary_location_data.asm (source_named).
bool execute_overworld_load_your_sanctuary_location_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4E13E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC4E13B.
    case 0xC4E13F: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E140: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E141: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E142: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E143: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E143.
    case 0xC4E145: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E146: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E147: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    case 0xC4E148: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC4E145.
    case 0xC4E149: cpu.execute_instruction<0x20>(0x000286, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:17 STX @VIRTUAL02
    case 0xC4E14A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:18 STX @LOCAL05
    case 0xC4E14C: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:19 STA @VIRTUAL04
    case 0xC4E14E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:20 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E150: cpu.execute_instruction<0x9C>(0x00B4BC, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:21 LDA @VIRTUAL04
    case 0xC4E153: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:22 LSR
    case 0xC4E155: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:23 LSR
    case 0xC4E156: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:24 LSR
    case 0xC4E157: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:25 LSR
    case 0xC4E158: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:26 LSR
    case 0xC4E159: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:27 STA @LOCAL04
    case 0xC4E15A: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:28 LDA @VIRTUAL02
    case 0xC4E15C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:29 LSR
    case 0xC4E15E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:30 LSR
    case 0xC4E15F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:31 LSR
    case 0xC4E160: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:32 LSR
    case 0xC4E161: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:33 TAX
    case 0xC4E162: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E163.
    case 0xC4E165: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E166: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E168.
    case 0xC4E16A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E16B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:35 LDA @LOCAL04
    case 0xC4E16D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:36 STA @VIRTUAL02
    case 0xC4E16F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:37 TXA
    case 0xC4E171: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E172: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E173: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E174: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E175: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E176: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:39 CLC
    case 0xC4E177: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:40 ADC @VIRTUAL02
    case 0xC4E178: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E180: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:42 CLC
    case 0xC4E182: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:43 ADC @VIRTUAL0A
    case 0xC4E183: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:44 STA @VIRTUAL0A
    case 0xC4E185: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:45 LDA [@VIRTUAL0A]
    case 0xC4E187: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    case 0xC4E189: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4E189.
    case 0xC4E18B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:47 TAY
    case 0xC4E18C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:48 STY @LOCAL03
    case 0xC4E18D: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:49 LDA @VIRTUAL04
    case 0xC4E18F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:50 LSR
    case 0xC4E191: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:51 LSR
    case 0xC4E192: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:52 LSR
    case 0xC4E193: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:53 LSR
    case 0xC4E194: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:54 LSR
    case 0xC4E195: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:55 PHA
    case 0xC4E196: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:56 LDA @LOCAL05
    case 0xC4E197: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:57 STA @VIRTUAL02
    case 0xC4E199: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:58 LSR
    case 0xC4E19B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:59 LSR
    case 0xC4E19C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    case 0xC4E19D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    // Overlapping static entry reached from 0xC4E19D.
    case 0xC4E19F: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:62 PLX
    case 0xC4E1A3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:63 STX @VIRTUAL02
    case 0xC4E1A4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:64 CLC
    case 0xC4E1A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:65 ADC @VIRTUAL02
    case 0xC4E1A7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:66 CLC
    case 0xC4E1A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:67 ADC @VIRTUAL06
    case 0xC4E1AA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:68 STA @VIRTUAL06
    case 0xC4E1AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E1AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:70 LDA [@VIRTUAL06]
    case 0xC4E1B0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:71 LSR
    case 0xC4E1B2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:72 LSR
    case 0xC4E1B3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:73 LSR
    case 0xC4E1B4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC4E1B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    case 0xC4E1B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4E1B7.
    case 0xC4E1B9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:76 STA LOADED_MAP_TILE_COMBO
    case 0xC4E1BA: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:77 LDX @LOCAL06
    case 0xC4E1BD: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:78 TYA
    case 0xC4E1BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    case 0xC4E1C0: cpu.execute_instruction<0x20>(0x00DEE9, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    // Overlapping static entry reached from 0xC4E23A.
    case 0xC4E1C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000DE, 2); else cpu.execute_instruction<0xE9>(0x00A9DE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00101B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C1.
    case 0xC4E1C4: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C3.
    case 0xC4E1C5: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C5.
    case 0xC4E1C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C8.
    case 0xC4E1CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1CB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:81 LDY @LOCAL03
    case 0xC4E1CD: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:82 TYA
    case 0xC4E1CF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:83 LSR
    case 0xC4E1D0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:84 LSR
    case 0xC4E1D1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:85 LSR
    case 0xC4E1D2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:86 ASL
    case 0xC4E1D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:87 CLC
    case 0xC4E1D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:88 ADC @VIRTUAL0A
    case 0xC4E1D5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:89 STA @VIRTUAL0A
    case 0xC4E1D7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1D9.
    case 0xC4E1DB: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1DE.
    case 0xC4E1E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0010AB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1EB.
    case 0xC4E1ED: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1ED.
    case 0xC4E1EF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1EF.
    case 0xC4E1F1: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1F0.
    case 0xC4E1F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:93 LDA [@VIRTUAL0A]
    case 0xC4E1F5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E1F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E1F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:95 CLC
    case 0xC4E1F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:96 ADC @VIRTUAL06
    case 0xC4E1FA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:97 STA @VIRTUAL06
    case 0xC4E1FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E1FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1FE.
    case 0xC4E200: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E201: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E203: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E204: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E206: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E208: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E210: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E212: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E214: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E216: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E218: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E220: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    case 0xC4E222: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    case 0xC4E226: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:104 LDA @LOCAL05
    case 0xC4E228: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:105 STA @VIRTUAL02
    case 0xC4E22A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:106 LDX @VIRTUAL02
    case 0xC4E22C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:107 LDA @VIRTUAL04
    case 0xC4E22E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:108 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILE_ARRANGEMENT_DATA
    case 0xC4E230: cpu.execute_instruction<0x20>(0x00DF7D, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:119 LDA [@VIRTUAL0A]
    case 0xC4E233: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:120 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E235: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:120 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E236: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:121 PHA
    case 0xC4E237: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00105B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E238.
    case 0xC4E23A: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E23B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E23A.
    case 0xC4E23C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E23D.
    case 0xC4E23F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E240: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:123 PLA
    case 0xC4E242: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:124 CLC
    case 0xC4E243: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:125 ADC @VIRTUAL0A
    case 0xC4E244: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:126 STA @VIRTUAL0A
    case 0xC4E246: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E248: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E248.
    case 0xC4E24A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E250: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E252: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E254: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E256: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E258: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E25A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E25C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E25E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E260: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E262: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E264: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E266: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E268: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E26A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:132 JSL DECOMP
    case 0xC4E26C: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:133 LDA @LOCAL06
    case 0xC4E270: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:134 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILESET_DATA
    case 0xC4E272: cpu.execute_instruction<0x20>(0x00E08C, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:135 LDA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E275: cpu.execute_instruction<0xAD>(0x00B4BA, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:136 CLC
    case 0xC4E278: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:137 ADC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E279: cpu.execute_instruction<0x6D>(0x00B4BC, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:138 STA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E27C: cpu.execute_instruction<0x8D>(0x00B4BA, 3); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:139 PLD
    case 0xC4E27F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/load_your_sanctuary_location_data.asm:140 RTS
    case 0xC4E280: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/map_input_to_direction.asm (source_named).
bool execute_overworld_map_input_to_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/map_input_to_direction.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0404F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04051: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04052: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04053: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04054.
    case 0xC04056: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04057: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04058: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    case 0xC04059: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC04056.
    case 0xC0405A: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    case 0xC0405B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0405A.
    case 0xC0405C: cpu.execute_instruction<0xFF>(0x0E86FF, 4); return true;
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0405B.
    case 0xC0405D: cpu.execute_instruction<0xFF>(0xAD0E86, 4); return true;
    // src/overworld/map_input_to_direction.asm:12 STX @LOCAL00
    case 0xC0405E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    case 0xC04060: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC0405D.
    case 0xC04061: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC04061.
    case 0xC04062: cpu.execute_instruction<0x5D>(0x0004F0, 3); return true;
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    case 0xC04063: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/map_input_to_direction.asm:15 TXA
    case 0xC04065: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:16 JMP @RETURN
    case 0xC04066: cpu.execute_instruction<0x4C>(0x004114, 3); return true;
    // src/overworld/map_input_to_direction.asm:18 LDA @LOCAL01
    case 0xC04069: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:19 ASL
    case 0xC0406B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:20 TAX
    case 0xC0406C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:21 LDA f:ALLOWED_INPUT_DIRECTIONS,X
    case 0xC0406D: cpu.execute_instruction<0xBF>(0xC3E12C, 4); return true;
    // src/overworld/map_input_to_direction.asm:22 STA @LOCAL01
    case 0xC04071: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:23 LDA PAD_STATE
    case 0xC04073: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    case 0xC04076: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000F00, 3); return true;
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    // Overlapping static entry reached from 0xC04076.
    case 0xC04078: cpu.execute_instruction<0x0F>(0x0800C9, 4); return true;
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    case 0xC04079: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    // Overlapping static entry reached from 0xC04079.
    case 0xC0407B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:26 BEQ @UP_PRESSED
    case 0xC0407C: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    case 0xC0407E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000900, 3); return true;
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    // Overlapping static entry reached from 0xC0407E.
    case 0xC04080: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000F0, 2); else cpu.execute_instruction<0x09>(0x002EF0, 3); return true;
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    case 0xC04081: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04080.
    case 0xC04082: cpu.execute_instruction<0x2E>(0x0000C9, 3); return true;
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    case 0xC04083: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    // Overlapping static entry reached from 0xC04083.
    case 0xC04085: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    case 0xC04086: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04085.
    case 0xC04087: cpu.execute_instruction<0x37>(0x0000C9, 2); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    case 0xC04088: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000500, 3); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC04087.
    case 0xC04089: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC04088.
    case 0xC0408A: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    case 0xC0408B: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC0408A.
    case 0xC0408C: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    case 0xC0408D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000400, 3); return true;
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    // Overlapping static entry reached from 0xC0408D.
    case 0xC0408F: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    case 0xC04090: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    // Overlapping static entry reached from 0xC0408F.
    case 0xC04091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000C9, 2); else cpu.execute_instruction<0x49>(0x0000C9, 3); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    case 0xC04092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000600, 3); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04091.
    case 0xC04093: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04092.
    case 0xC04094: cpu.execute_instruction<0x06>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    case 0xC04095: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    // Overlapping static entry reached from 0xC04094.
    case 0xC04096: cpu.execute_instruction<0x52>(0x0000C9, 2); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    case 0xC04097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC04096.
    case 0xC04098: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC04097.
    case 0xC04099: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:38 BEQ @LEFT_PRESSED
    case 0xC0409A: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    case 0xC0409C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000A00, 3); return true;
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    // Overlapping static entry reached from 0xC0409C.
    case 0xC0409E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/map_input_to_direction.asm:40 BEQ @UP_LEFT_PRESSED
    case 0xC0409F: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/overworld/map_input_to_direction.asm:41 BRA @RETURN_DEFAULT
    case 0xC040A1: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/overworld/map_input_to_direction.asm:43 LDA @LOCAL01
    case 0xC040A3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    case 0xC040A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    // Overlapping static entry reached from 0xC040A5.
    case 0xC040A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:45 BEQ @RETURN_DEFAULT
    case 0xC040A8: cpu.execute_instruction<0xF0>(0x000067, 2); return true;
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    case 0xC040AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    // Overlapping static entry reached from 0xC040AA.
    case 0xC040AC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:47 STX @LOCAL00
    case 0xC040AD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:48 BRA @RETURN_DEFAULT
    case 0xC040AF: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/overworld/map_input_to_direction.asm:50 LDA @LOCAL01
    case 0xC040B1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    case 0xC040B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    // Overlapping static entry reached from 0xC040B3.
    case 0xC040B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:52 BEQ @RETURN_DEFAULT
    case 0xC040B6: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    case 0xC040B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    // Overlapping static entry reached from 0xC040B8.
    case 0xC040BA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:54 STX @LOCAL00
    case 0xC040BB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:55 BRA @RETURN_DEFAULT
    case 0xC040BD: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/overworld/map_input_to_direction.asm:57 LDA @LOCAL01
    case 0xC040BF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    case 0xC040C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    // Overlapping static entry reached from 0xC040C1.
    case 0xC040C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:59 BEQ @RETURN_DEFAULT
    case 0xC040C4: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    case 0xC040C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC040C6.
    case 0xC040C8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:61 STX @LOCAL00
    case 0xC040C9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:62 BRA @RETURN_DEFAULT
    case 0xC040CB: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/overworld/map_input_to_direction.asm:64 LDA @LOCAL01
    case 0xC040CD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    case 0xC040CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    // Overlapping static entry reached from 0xC040CF.
    case 0xC040D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:66 BEQ @RETURN_DEFAULT
    case 0xC040D2: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    case 0xC040D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    // Overlapping static entry reached from 0xC040D4.
    case 0xC040D6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:68 STX @LOCAL00
    case 0xC040D7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:69 BRA @RETURN_DEFAULT
    case 0xC040D9: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/overworld/map_input_to_direction.asm:71 LDA @LOCAL01
    case 0xC040DB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    case 0xC040DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    // Overlapping static entry reached from 0xC040DD.
    case 0xC040DF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:73 BEQ @RETURN_DEFAULT
    case 0xC040E0: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    case 0xC040E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC040E2.
    case 0xC040E4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:75 STX @LOCAL00
    case 0xC040E5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:76 BRA @RETURN_DEFAULT
    case 0xC040E7: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/overworld/map_input_to_direction.asm:78 LDA @LOCAL01
    case 0xC040E9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    case 0xC040EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    // Overlapping static entry reached from 0xC040EB.
    case 0xC040ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:80 BEQ @RETURN_DEFAULT
    case 0xC040EE: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    case 0xC040F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    // Overlapping static entry reached from 0xC040F0.
    case 0xC040F2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:82 STX @LOCAL00
    case 0xC040F3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:83 BRA @RETURN_DEFAULT
    case 0xC040F5: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/overworld/map_input_to_direction.asm:85 LDA @LOCAL01
    case 0xC040F7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    case 0xC040F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    // Overlapping static entry reached from 0xC040F9.
    case 0xC040FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:87 BEQ @RETURN_DEFAULT
    case 0xC040FC: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    case 0xC040FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC040FE.
    case 0xC04100: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:89 STX @LOCAL00
    case 0xC04101: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:90 BRA @RETURN_DEFAULT
    case 0xC04103: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/map_input_to_direction.asm:92 LDA @LOCAL01
    case 0xC04105: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    case 0xC04107: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    // Overlapping static entry reached from 0xC04107.
    case 0xC04109: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/map_input_to_direction.asm:94 BEQ @RETURN_DEFAULT
    case 0xC0410A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    case 0xC0410C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    // Overlapping static entry reached from 0xC0410C.
    case 0xC0410E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/map_input_to_direction.asm:96 STX @LOCAL00
    case 0xC0410F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:98 LDX @LOCAL00
    case 0xC04111: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/map_input_to_direction.asm:99 TXA
    case 0xC04113: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC04114: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC04115: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/mushroomization_movement_swap.asm (source_named).
bool execute_overworld_mushroomization_movement_swap_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:3 BEGIN_C_FUNCTION
    case 0xC02C89: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02C8D.
    case 0xC02C8F: cpu.execute_instruction<0xFF>(0x9CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:6 END_STACK_VARS
    case 0xC02C90: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    case 0xC02C91: cpu.execute_instruction<0xAD>(0x005D9C, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:7 LDA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02C8F.
    case 0xC02C93: cpu.execute_instruction<0x5D>(0x0016D0, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:8 BNE @STILL_HAS_TIME_LEFT
    case 0xC02C94: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    case 0xC02C96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000708, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:9 LDA #TIME_BETWEEN_DIRECTION_SWAPS
    // Overlapping static entry reached from 0xC02C96.
    case 0xC02C98: cpu.execute_instruction<0x07>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    case 0xC02C99: cpu.execute_instruction<0x8D>(0x005D9C, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:10 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02C98.
    case 0xC02C9A: cpu.execute_instruction<0x9C>(0x00A25D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    case 0xC02C9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009E, 2); else cpu.execute_instruction<0xA2>(0x005D9E, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02C9A.
    case 0xC02C9D: cpu.execute_instruction<0x9E>(0x00BD5D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:11 LDX #.LOWORD(MUSHROOMIZATION_MODIFIER)
    // Overlapping static entry reached from 0xC02C9C.
    case 0xC02C9E: cpu.execute_instruction<0x5D>(0x0000BD, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    case 0xC02C9F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02C9D.
    case 0xC02CA0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC02C9E.
    case 0xC02CA1: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:13 INC
    case 0xC02CA2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:14 STA __BSS_START__,X
    case 0xC02CA3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    case 0xC02CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC02CA6.
    case 0xC02CA8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:16 STA __BSS_START__,X
    case 0xC02CA9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:18 DEC MUSHROOMIZATION_TIMER
    case 0xC02CAC: cpu.execute_instruction<0xCE>(0x005D9C, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:19 LDA MUSHROOMIZATION_MODIFIER
    case 0xC02CAF: cpu.execute_instruction<0xAD>(0x005D9E, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:20 STA @LOCAL00
    case 0xC02CB2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:21 BEQ @RETURN
    case 0xC02CB4: cpu.execute_instruction<0xF0>(0x000071, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC02CB6: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:23 BNE @RETURN
    case 0xC02CB9: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:24 LDA PAD_PRESS
    case 0xC02CBB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:25 XBA
    case 0xC02CBE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    case 0xC02CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC02CBF.
    case 0xC02CC1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    case 0xC02CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC02CC2.
    case 0xC02CC4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:28 TAY
    case 0xC02CC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:29 LDA PAD_STATE
    case 0xC02CC6: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:30 XBA
    case 0xC02CC9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    case 0xC02CCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC02CCA.
    case 0xC02CCC: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    case 0xC02CCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC02CCD.
    case 0xC02CCF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:33 TAX
    case 0xC02CD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x00E178, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD1.
    case 0xC02CD3: cpu.execute_instruction<0xE1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD3.
    case 0xC02CD5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD5.
    case 0xC02CD7: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    // Overlapping static entry reached from 0xC02CD6.
    case 0xC02CD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:34 LOADPTR MUSHROOMIZATION_DIRECTION_REMAP_TABLES, @VIRTUAL06
    case 0xC02CD9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:35 LDA @LOCAL00
    case 0xC02CDB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:36 DEC
    case 0xC02CDD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:37 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02CE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:38 STA @LOCAL00
    case 0xC02CE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:39 TYA
    case 0xC02CE5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:40 ASL
    case 0xC02CE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:41 STA @VIRTUAL04
    case 0xC02CE7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:42 LDA @LOCAL00
    case 0xC02CE9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:43 CLC
    case 0xC02CEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:44 ADC @VIRTUAL04
    case 0xC02CEC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CEE: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF0: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF2: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:45 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC02CF4: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:46 CLC
    case 0xC02CF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:47 ADC @VIRTUAL0A
    case 0xC02CF7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:48 STA @VIRTUAL0A
    case 0xC02CF9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:49 LDA [@VIRTUAL0A]
    case 0xC02CFB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:50 STA @VIRTUAL02
    case 0xC02CFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:51 LDA PAD_PRESS
    case 0xC02CFF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    case 0xC02D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:52 AND #$F0FF
    // Overlapping static entry reached from 0xC02D02.
    case 0xC02D04: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    case 0xC02D05: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:53 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02D04.
    case 0xC02D06: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:54 STA PAD_PRESS
    case 0xC02D07: cpu.execute_instruction<0x8D>(0x00006D, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:55 TXA
    case 0xC02D0A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:56 ASL
    case 0xC02D0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:57 STA @VIRTUAL04
    case 0xC02D0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:58 LDA @LOCAL00
    case 0xC02D0E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:59 CLC
    case 0xC02D10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:60 ADC @VIRTUAL04
    case 0xC02D11: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:61 CLC
    case 0xC02D13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/mushroomization_movement_swap.asm:62 ADC @VIRTUAL06
    case 0xC02D14: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:63 STA @VIRTUAL06
    case 0xC02D16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:64 LDA [@VIRTUAL06]
    case 0xC02D18: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:65 STA @VIRTUAL02
    case 0xC02D1A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:66 LDA PAD_STATE
    case 0xC02D1C: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    case 0xC02D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/overworld/mushroomization_movement_swap.asm:67 AND #$F0FF
    // Overlapping static entry reached from 0xC02D1F.
    case 0xC02D21: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    case 0xC02D22: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:68 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC02D21.
    case 0xC02D23: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/overworld/mushroomization_movement_swap.asm:69 STA PAD_STATE
    case 0xC02D24: cpu.execute_instruction<0x8D>(0x000065, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02D27: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/mushroomization_movement_swap.asm:71 END_C_FUNCTION
    case 0xC02D28: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/npc_collision_check.asm (source_named).
bool execute_overworld_npc_collision_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/npc_collision_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05FF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC05FFB.
    case 0xC05FFD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    case 0xC06000: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC05FFD.
    case 0xC06001: cpu.execute_instruction<0x1C>(0x000285, 3); return true;
    // src/overworld/npc_collision_check.asm:18 STA @VIRTUAL02
    case 0xC06002: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC06004: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC06004.
    case 0xC06006: cpu.execute_instruction<0xFF>(0x981A85, 4); return true;
    // src/overworld/npc_collision_check.asm:20 STA @LOCAL06
    case 0xC06007: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:21 TYA
    case 0xC06009: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:22 ASL
    case 0xC0600A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:23 TAX
    case 0xC0600B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:24 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC0600C: cpu.execute_instruction<0xBD>(0x00332A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0600F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC06011: cpu.execute_instruction<0x4C>(0x006133, 3); return true;
    // src/overworld/npc_collision_check.asm:26 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC06014: cpu.execute_instruction<0xAD>(0x005D56, 3); return true;
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    case 0xC06017: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    // Overlapping static entry reached from 0xC06017.
    case 0xC06019: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0601A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0601C: cpu.execute_instruction<0x4C>(0x006133, 3); return true;
    // src/overworld/npc_collision_check.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC0601F: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    case 0xC06022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06022.
    case 0xC06024: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06025: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06027: cpu.execute_instruction<0x4C>(0x006133, 3); return true;
    // src/overworld/npc_collision_check.asm:32 LDA DEMO_FRAMES_LEFT
    case 0xC0602A: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0602D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0602F: cpu.execute_instruction<0x4C>(0x006133, 3); return true;
    // src/overworld/npc_collision_check.asm:34 LDA ENTITY_DIRECTIONS,X
    case 0xC06032: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    case 0xC06035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06035.
    case 0xC06037: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/npc_collision_check.asm:36 BEQ @UNKNOWN4
    case 0xC06038: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    case 0xC0603A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC0603A.
    case 0xC0603C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/npc_collision_check.asm:38 BNE @UNKNOWN5
    case 0xC0603D: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/overworld/npc_collision_check.asm:40 TYA
    case 0xC0603F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:41 ASL
    case 0xC06040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:42 TAX
    case 0xC06041: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:43 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC06042: cpu.execute_instruction<0xBD>(0x0033DE, 3); return true;
    // src/overworld/npc_collision_check.asm:44 STA @LOCAL05
    case 0xC06045: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:45 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06047: cpu.execute_instruction<0xBD>(0x001A4A, 3); return true;
    // src/overworld/npc_collision_check.asm:46 STA @VIRTUAL04
    case 0xC0604A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:47 BRA @UNKNOWN6
    case 0xC0604C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/overworld/npc_collision_check.asm:49 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0604E: cpu.execute_instruction<0xBD>(0x003366, 3); return true;
    // src/overworld/npc_collision_check.asm:50 STA @LOCAL05
    case 0xC06051: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:51 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06053: cpu.execute_instruction<0xBD>(0x0033A2, 3); return true;
    // src/overworld/npc_collision_check.asm:52 STA @VIRTUAL04
    case 0xC06056: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:54 LDA @LOCAL05
    case 0xC06058: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:55 PHA
    case 0xC0605A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:56 LDA @VIRTUAL02
    case 0xC0605B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:57 PLY
    case 0xC0605D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:58 STY @VIRTUAL02
    case 0xC0605E: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:59 SEC
    case 0xC06060: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:60 SBC @VIRTUAL02
    case 0xC06061: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:61 STA @LOCAL04
    case 0xC06063: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/npc_collision_check.asm:62 LDA @LOCAL05
    case 0xC06065: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/npc_collision_check.asm:63 ASL
    case 0xC06067: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:64 STA @LOCAL03
    case 0xC06068: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:65 LDA @LOCAL07
    case 0xC0606A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:66 SEC
    case 0xC0606C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:67 SBC @VIRTUAL04
    case 0xC0606D: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:68 STA @LOCAL07
    case 0xC0606F: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:69 LDA #0
    case 0xC06071: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/npc_collision_check.asm:69 LDA #0
    // Overlapping static entry reached from 0xC06071.
    case 0xC06073: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/npc_collision_check.asm:70 STA @VIRTUAL02
    case 0xC06074: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:71 STA @LOCAL02
    case 0xC06076: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:72 JMP @UNKNOWN15
    case 0xC06078: cpu.execute_instruction<0x4C>(0x006129, 3); return true;
    // src/overworld/npc_collision_check.asm:74 LDA @VIRTUAL02
    case 0xC0607B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:75 ASL
    case 0xC0607D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:76 TAX
    case 0xC0607E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:77 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0607F: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    case 0xC06082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    // Overlapping static entry reached from 0xC06082.
    case 0xC06084: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC06085: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC06087: cpu.execute_instruction<0x4C>(0x00611F, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC06084.
    case 0xC06088: cpu.execute_instruction<0x1F>(0x9EBD61, 4); return true;
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0608A: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC06088.
    case 0xC0608C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    case 0xC0608D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0608D.
    case 0xC0608F: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC06090: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC06092: cpu.execute_instruction<0x4C>(0x00611F, 3); return true;
    // src/overworld/npc_collision_check.asm:83 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC06095: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/overworld/npc_collision_check.asm:84 BEQ @UNKNOWN10
    case 0xC06098: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/npc_collision_check.asm:85 LDA ENTITY_NPC_IDS,X
    case 0xC0609A: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/overworld/npc_collision_check.asm:86 INC
    case 0xC0609D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    case 0xC0609E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x008001, 3); return true;
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    // Overlapping static entry reached from 0xC0609E.
    case 0xC060A0: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/overworld/npc_collision_check.asm:88 BCC @UNKNOWN10
    case 0xC060A1: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/npc_collision_check.asm:89 JMP @UNKNOWN14
    case 0xC060A3: cpu.execute_instruction<0x4C>(0x00611F, 3); return true;
    // src/overworld/npc_collision_check.asm:91 LDA @VIRTUAL02
    case 0xC060A6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:92 ASL
    case 0xC060A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:93 TAX
    case 0xC060A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:94 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC060AA: cpu.execute_instruction<0xBD>(0x00332A, 3); return true;
    // src/overworld/npc_collision_check.asm:95 BEQ @UNKNOWN14
    case 0xC060AD: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/overworld/npc_collision_check.asm:96 LDA ENTITY_DIRECTIONS,X
    case 0xC060AF: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    case 0xC060B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC060B2.
    case 0xC060B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/npc_collision_check.asm:98 BEQ @UNKNOWN11
    case 0xC060B5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    case 0xC060B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC060B7.
    case 0xC060B9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/npc_collision_check.asm:100 BNE @UNKNOWN12
    case 0xC060BA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:102 LDA @VIRTUAL02
    case 0xC060BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:103 ASL
    case 0xC060BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:104 TAX
    case 0xC060BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:105 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC060C0: cpu.execute_instruction<0xBC>(0x0033DE, 3); return true;
    // src/overworld/npc_collision_check.asm:106 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC060C3: cpu.execute_instruction<0xBD>(0x001A4A, 3); return true;
    // src/overworld/npc_collision_check.asm:107 STA @LOCAL01
    case 0xC060C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:108 BRA @UNKNOWN13
    case 0xC060C8: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/overworld/npc_collision_check.asm:110 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC060CA: cpu.execute_instruction<0xBC>(0x003366, 3); return true;
    // src/overworld/npc_collision_check.asm:111 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC060CD: cpu.execute_instruction<0xBD>(0x0033A2, 3); return true;
    // src/overworld/npc_collision_check.asm:112 STA @LOCAL01
    case 0xC060D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:114 LDA @VIRTUAL02
    case 0xC060D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:115 ASL
    case 0xC060D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:116 TAX
    case 0xC060D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:117 LDA @LOCAL01
    case 0xC060D6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:118 STA @VIRTUAL02
    case 0xC060D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:119 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC060DA: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/npc_collision_check.asm:120 SEC
    case 0xC060DD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:121 SBC @VIRTUAL02
    case 0xC060DE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:122 STA @LOCAL00
    case 0xC060E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:123 SEC
    case 0xC060E2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:124 SBC @VIRTUAL04
    case 0xC060E3: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/npc_collision_check.asm:125 CMP @LOCAL07
    case 0xC060E5: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/overworld/npc_collision_check.asm:126 BCS @UNKNOWN14
    case 0xC060E7: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/overworld/npc_collision_check.asm:127 LDA @LOCAL01
    case 0xC060E9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/npc_collision_check.asm:128 CLC
    case 0xC060EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:129 ADC @LOCAL00
    case 0xC060EC: cpu.execute_instruction<0x65>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:130 CMP @LOCAL07
    case 0xC060EE: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC060F0: cpu.execute_instruction<0x90>(0x00002D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC060F2: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/overworld/npc_collision_check.asm:132 STY @VIRTUAL02
    case 0xC060F4: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC060F6: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/npc_collision_check.asm:134 SEC
    case 0xC060F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:135 SBC @VIRTUAL02
    case 0xC060FA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:136 STA @LOCAL00
    case 0xC060FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:137 TYA
    case 0xC060FE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:138 ASL
    case 0xC060FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:139 TAX
    case 0xC06100: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:140 LDA @LOCAL00
    case 0xC06101: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:141 SEC
    case 0xC06103: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:142 SBC @LOCAL03
    case 0xC06104: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:143 CMP @LOCAL04
    case 0xC06106: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/overworld/npc_collision_check.asm:144 BCS @UNKNOWN14
    case 0xC06108: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/overworld/npc_collision_check.asm:145 STX @VIRTUAL02
    case 0xC0610A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:146 LDA @LOCAL00
    case 0xC0610C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/npc_collision_check.asm:147 CLC
    case 0xC0610E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/npc_collision_check.asm:148 ADC @VIRTUAL02
    case 0xC0610F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:149 CMP @LOCAL04
    case 0xC06111: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06113: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06115: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/npc_collision_check.asm:151 LDA @LOCAL02
    case 0xC06117: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:152 STA @VIRTUAL02
    case 0xC06119: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:153 STA @LOCAL06
    case 0xC0611B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:154 BRA @UNKNOWN16
    case 0xC0611D: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/overworld/npc_collision_check.asm:156 LDA @LOCAL02
    case 0xC0611F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:157 STA @VIRTUAL02
    case 0xC06121: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:158 INC @VIRTUAL02
    case 0xC06123: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:159 LDA @VIRTUAL02
    case 0xC06125: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:160 STA @LOCAL02
    case 0xC06127: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/npc_collision_check.asm:162 LDA @VIRTUAL02
    case 0xC06129: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/npc_collision_check.asm:163 CMP #23
    case 0xC0612B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/overworld/npc_collision_check.asm:163 CMP #23
    // Overlapping static entry reached from 0xC0612B.
    case 0xC0612D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0612E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC06130: cpu.execute_instruction<0x4C>(0x00607B, 3); return true;
    // src/overworld/npc_collision_check.asm:166 LDA @LOCAL06
    case 0xC06133: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/npc_collision_check.asm:167 STA ENTITY_COLLIDED_OBJECTS+46
    case 0xC06135: cpu.execute_instruction<0x8D>(0x0028CC, 3); return true;
    // src/overworld/npc_collision_check.asm:168 LDA @LOCAL06
    case 0xC06138: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC0613A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC0613B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/open_menu.asm (source_named).
bool execute_overworld_open_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC134A7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134A9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DB, 2); else cpu.execute_instruction<0x69>(0x00FFDB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC134AB.
    case 0xC134AD: cpu.execute_instruction<0xFF>(0x3C225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu.asm:14 END_STACK_VARS
    case 0xC134AE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:15 JSL UNKNOWN_C0943C
    case 0xC134AF: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/open_menu.asm:15 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC134AD.
    case 0xC134B1: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/overworld/open_menu.asm:16 LDA #SFX::CURSOR1
    case 0xC134B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:16 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC134B3.
    case 0xC134B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:17 JSL PLAY_SOUND
    case 0xC134B6: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC134BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC134BA.
    case 0xC134BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN00
    case 0xC134BD: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/open_menu.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC134C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:20 STZ SKIP_ADDING_COMMAND_TEXT
    case 0xC134C2: cpu.execute_instruction<0x9C>(0x005E6C, 3); return true;
    // src/overworld/open_menu.asm:21 JSR UNKNOWN_C133B0
    case 0xC134C5: cpu.execute_instruction<0x20>(0x0033B0, 3); return true;
    // src/overworld/open_menu.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC134C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:23 STZ RESTORE_MENU_BACKUP
    case 0xC134CA: cpu.execute_instruction<0x9C>(0x005E79, 3); return true;
    // src/overworld/open_menu.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC134CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:26 LDA #0
    case 0xC134CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC134CF.
    case 0xC134D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:27 JSR SET_WINDOW_FOCUS
    case 0xC134D2: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:28 LDA #1
    case 0xC134D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:28 LDA #1
    // Overlapping static entry reached from 0xC134D5.
    case 0xC134D7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:29 JSR SELECTION_MENU
    case 0xC134D8: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:30 STORE_INT1632 @VIRTUAL06
    case 0xC134DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:30 STORE_INT1632 @VIRTUAL06
    case 0xC134DD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:31 LDA @VIRTUAL06
    case 0xC134DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:32 CMP #MENU_OPTIONS::TALK_TO
    case 0xC134E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:32 CMP #MENU_OPTIONS::TALK_TO
    // Overlapping static entry reached from 0xC134E1.
    case 0xC134E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:33 BEQ @TALK_TO
    case 0xC134E4: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/overworld/open_menu.asm:34 CMP #MENU_OPTIONS::GOODS
    case 0xC134E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:34 CMP #MENU_OPTIONS::GOODS
    // Overlapping static entry reached from 0xC134E6.
    case 0xC134E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:35 BEQ @GOODS
    case 0xC134E9: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/overworld/open_menu.asm:36 CMP #MENU_OPTIONS::PSI
    case 0xC134EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:36 CMP #MENU_OPTIONS::PSI
    // Overlapping static entry reached from 0xC134EB.
    case 0xC134ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:37 BEQL @PSI
    case 0xC134EE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:37 BEQL @PSI
    case 0xC134F0: cpu.execute_instruction<0x4C>(0x003B62, 3); return true;
    // src/overworld/open_menu.asm:38 CMP #MENU_OPTIONS::EQUIP
    case 0xC134F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/open_menu.asm:38 CMP #MENU_OPTIONS::EQUIP
    // Overlapping static entry reached from 0xC134F3.
    case 0xC134F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:39 BEQL @EQUIP
    case 0xC134F6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:39 BEQL @EQUIP
    case 0xC134F8: cpu.execute_instruction<0x4C>(0x003BAD, 3); return true;
    // src/overworld/open_menu.asm:40 CMP #MENU_OPTIONS::CHECK
    case 0xC134FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/open_menu.asm:40 CMP #MENU_OPTIONS::CHECK
    // Overlapping static entry reached from 0xC134FB.
    case 0xC134FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:41 BEQL @CHECK
    case 0xC134FE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:41 BEQL @CHECK
    case 0xC13500: cpu.execute_instruction<0x4C>(0x003BCF, 3); return true;
    // src/overworld/open_menu.asm:42 CMP #MENU_OPTIONS::STATUS
    case 0xC13503: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/open_menu.asm:42 CMP #MENU_OPTIONS::STATUS
    // Overlapping static entry reached from 0xC13503.
    case 0xC13505: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    case 0xC13506: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    case 0xC13508: cpu.execute_instruction<0x4C>(0x003C01, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:43 BEQL @STATUS
    // Overlapping static entry reached from 0xC152B3.
    case 0xC13509: cpu.execute_instruction<0x01>(0x00003C, 2); return true;
    // src/overworld/open_menu.asm:44 JMP @UNKNOWN75
    case 0xC1350B: cpu.execute_instruction<0x4C>(0x003C16, 3); return true;
    // src/overworld/open_menu.asm:46 JSL TALK_TO
    case 0xC1350E: cpu.execute_instruction<0x22>(0xC13187, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13512.
    case 0xC13514: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13515: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13517.
    case 0xC13519: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:47 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1351A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1351C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1351E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13520: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13522: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:48 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13524: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:49 BNE @UNKNOWN7
    case 0xC13526: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13528: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000088, 2); else cpu.execute_instruction<0xA9>(0x00C588, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC13528.
    case 0xC1352A: cpu.execute_instruction<0xC5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC1352B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352A.
    case 0xC1352C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC1352D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352C.
    case 0xC1352E: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1352D.
    case 0xC1352F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:50 LOADPTR MSG_SYS_HANASU_NG, @VIRTUAL06
    case 0xC13530: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13532: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13534: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13536: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13538: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:53 JSL DISPLAY_TEXT
    case 0xC1353A: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:54 JMP @UNKNOWN75
    case 0xC1353E: cpu.execute_instruction<0x4C>(0x003C16, 3); return true;
    // src/overworld/open_menu.asm:56 JSR UNKNOWN_C1134B
    case 0xC13541: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/overworld/open_menu.asm:58 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13544: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/overworld/open_menu.asm:59 AND #$00FF
    case 0xC13547: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC13547.
    case 0xC13549: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu.asm:60 CMP #1
    case 0xC1354A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:60 CMP #1
    // Overlapping static entry reached from 0xC1354A.
    case 0xC1354C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu.asm:61 BNE @GOODS_MANY_PARTY_MEMBERS
    case 0xC1354D: cpu.execute_instruction<0xD0>(0x00004A, 2); return true;
    // src/overworld/open_menu.asm:62 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC1354F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/overworld/open_menu.asm:62 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC1354F.
    case 0xC13551: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:63 STY @LOCAL08
    case 0xC13552: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:64 LDX #1
    case 0xC13554: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:64 LDX #1
    // Overlapping static entry reached from 0xC13554.
    case 0xC13556: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/overworld/open_menu.asm:65 LDA __BSS_START__,Y
    case 0xC13557: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:66 AND #$00FF
    case 0xC1355A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC1355A.
    case 0xC1355C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:67 JSL GET_CHARACTER_ITEM
    case 0xC1355D: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/open_menu.asm:68 CMP #0
    case 0xC13561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:68 CMP #0
    // Overlapping static entry reached from 0xC13561.
    case 0xC13563: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:69 BEQL @MAIN_PAUSE_MENU
    case 0xC13564: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:69 BEQL @MAIN_PAUSE_MENU
    case 0xC13566: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:70 LDX #2
    case 0xC13569: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:70 LDX #2
    // Overlapping static entry reached from 0xC13569.
    case 0xC1356B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/open_menu.asm:71 LDY @LOCAL08
    case 0xC1356C: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:72 LDA __BSS_START__,Y
    case 0xC1356E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:73 AND #$00FF
    case 0xC13571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC13571.
    case 0xC13573: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:74 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13574: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/overworld/open_menu.asm:75 LDY @LOCAL08
    case 0xC13577: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC13579: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:77 LDA __BSS_START__,Y
    case 0xC1357B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC1357E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13580: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13582: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/overworld/open_menu.asm:78 STORE_INT832 @VIRTUAL06
    case 0xC13584: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/open_menu.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC13586: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC13588: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358A: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:80 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC1358E: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/overworld/open_menu.asm:81 LDA #0
    case 0xC13590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:81 LDA #0
    // Overlapping static entry reached from 0xC13590.
    case 0xC13592: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:82 JSL UNKNOWN_C43573
    case 0xC13593: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // src/overworld/open_menu.asm:83 BRA @UNKNOWN12
    case 0xC13597: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/overworld/open_menu.asm:85 LDA #0
    case 0xC13599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:85 LDA #0
    // Overlapping static entry reached from 0xC13599.
    case 0xC1359B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:86 JSR UNKNOWN_C193E7
    case 0xC1359C: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC1359F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00339E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC1359F.
    case 0xC135A1: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC135A1.
    case 0xC135A3: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    // Overlapping static entry reached from 0xC135A4.
    case 0xC135A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:87 LOADPTR UNKNOWN_C1339E, @LOCAL00
    case 0xC135A7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135A9.
    case 0xC135AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135AE.
    case 0xC135B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:88 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu.asm:89 LDX #1
    case 0xC135B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:89 LDX #1
    // Overlapping static entry reached from 0xC135B3.
    case 0xC135B5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/open_menu.asm:90 LDA #0
    case 0xC135B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:90 LDA #0
    // Overlapping static entry reached from 0xC135B6.
    case 0xC135B8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:91 JSR CHAR_SELECT_PROMPT
    case 0xC135B9: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:92 STORE_INT1632 @VIRTUAL06
    case 0xC135BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:92 STORE_INT1632 @VIRTUAL06
    case 0xC135BE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C2: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:93 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC135C6: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135C8.
    case 0xC135CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135CB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135CD.
    case 0xC135CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:95 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC135D0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D4: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D6: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:96 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC135DA: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:97 BNE @UNKNOWN14
    case 0xC135DC: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/overworld/open_menu.asm:98 LDA #WINDOW::INVENTORY
    case 0xC135DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:98 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC135DE.
    case 0xC135E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:99 JSL CLOSE_WINDOW
    case 0xC135E1: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:100 JSR UNKNOWN_C19437
    case 0xC135E5: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/overworld/open_menu.asm:101 JMP @MAIN_PAUSE_MENU
    case 0xC135E8: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:103 LDX #1
    case 0xC135EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:103 LDX #1
    // Overlapping static entry reached from 0xC135EB.
    case 0xC135ED: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/open_menu.asm:104 LDA @VIRTUAL06
    case 0xC135EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:105 JSL GET_CHARACTER_ITEM
    case 0xC135F0: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/open_menu.asm:106 CMP #0
    case 0xC135F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:106 CMP #0
    // Overlapping static entry reached from 0xC135F4.
    case 0xC135F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:107 BEQL @UNKNOWN9
    case 0xC135F7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:107 BEQL @UNKNOWN9
    case 0xC135F9: cpu.execute_instruction<0x4C>(0x003544, 3); return true;
    // src/overworld/open_menu.asm:109 LDA #1
    case 0xC135FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:109 LDA #1
    // Overlapping static entry reached from 0xC135FC.
    case 0xC135FE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:110 JSR UNKNOWN_C193E7
    case 0xC135FF: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // src/overworld/open_menu.asm:111 LDA #WINDOW::INVENTORY
    case 0xC13602: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:111 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13602.
    case 0xC13604: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:112 JSR SET_WINDOW_FOCUS
    case 0xC13605: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:113 LDA #1
    case 0xC13608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:113 LDA #1
    // Overlapping static entry reached from 0xC13608.
    case 0xC1360A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:114 JSR SELECTION_MENU
    case 0xC1360B: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/overworld/open_menu.asm:115 STA @VIRTUAL04
    case 0xC1360E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:116 STA @LOCAL06
    case 0xC13610: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:117 JSL UNKNOWN_EF016F
    case 0xC13612: cpu.execute_instruction<0x22>(0xEF016F, 4); return true;
    // src/overworld/open_menu.asm:118 JSR UNKNOWN_C19437
    case 0xC13616: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/overworld/open_menu.asm:119 LDA @VIRTUAL04
    case 0xC13619: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:120 BNE @GOODS_ITEM_SELECTED
    case 0xC1361B: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/overworld/open_menu.asm:121 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1361D: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/overworld/open_menu.asm:122 AND #$00FF
    case 0xC13620: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC13620.
    case 0xC13622: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu.asm:123 CMP #1
    case 0xC13623: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:123 CMP #1
    // Overlapping static entry reached from 0xC13623.
    case 0xC13625: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:124 BNEL @UNKNOWN9
    case 0xC13626: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:124 BNEL @UNKNOWN9
    case 0xC13628: cpu.execute_instruction<0x4C>(0x003544, 3); return true;
    // src/overworld/open_menu.asm:125 LDX #1
    case 0xC1362B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:125 LDX #1
    // Overlapping static entry reached from 0xC1362B.
    case 0xC1362D: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/overworld/open_menu.asm:126 LDA GAME_STATE + game_state::party_members
    case 0xC1362E: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/overworld/open_menu.asm:127 AND #$00FF
    case 0xC13631: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC13631.
    case 0xC13633: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:128 JSL GET_CHARACTER_ITEM
    case 0xC13634: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/open_menu.asm:129 CMP #0
    case 0xC13638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:129 CMP #0
    // Overlapping static entry reached from 0xC13638.
    case 0xC1363A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:130 BEQ @UNKNOWN17
    case 0xC1363B: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/overworld/open_menu.asm:131 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC1363D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu.asm:131 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1363D.
    case 0xC1363F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:132 JSL PLAY_SOUND
    case 0xC13640: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/open_menu.asm:133 JSL UNKNOWN_C3E6F8
    case 0xC13644: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/overworld/open_menu.asm:135 LDA #WINDOW::INVENTORY
    case 0xC13648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:135 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13648.
    case 0xC1364A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:136 JSL CLOSE_WINDOW
    case 0xC1364B: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:137 JMP @MAIN_PAUSE_MENU
    case 0xC1364F: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13652: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13652.
    case 0xC13654: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:139 CREATE_WINDOW_NEAR #WINDOW::INVENTORY_MENU
    case 0xC13655: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13658: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365C: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:140 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1365E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:141 LDA @VIRTUAL06
    case 0xC13660: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:142 DEC
    case 0xC13662: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:143 LDY #.SIZEOF(char_struct)
    case 0xC13663: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/open_menu.asm:143 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC13663.
    case 0xC13665: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:144 JSL MULT168
    case 0xC13666: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/open_menu.asm:145 TAX
    case 0xC1366A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:146 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC1366B: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/overworld/open_menu.asm:147 AND #$00FF
    case 0xC1366E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC1366E.
    case 0xC13670: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/open_menu.asm:148 TAX
    case 0xC13671: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:149 BEQ @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13672: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/open_menu.asm:150 STX @VIRTUAL02
    case 0xC13674: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:151 LDA #4
    case 0xC13676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/open_menu.asm:151 LDA #4
    // Overlapping static entry reached from 0xC13676.
    case 0xC13678: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:152 CLC
    case 0xC13679: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:153 SBC @VIRTUAL02
    case 0xC1367A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC1367C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC1367E: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13680: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/open_menu.asm:154 BRANCHLTEQS @GOODS_ITEM_SELECTED_ALIVE
    case 0xC13682: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/overworld/open_menu.asm:155 LDX #1
    case 0xC13684: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:155 LDX #1
    // Overlapping static entry reached from 0xC13684.
    case 0xC13686: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/open_menu.asm:156 BRA @UNKNOWN22
    case 0xC13687: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/overworld/open_menu.asm:158 LDX #$0000
    case 0xC13689: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:158 LDX #$0000
    // Overlapping static entry reached from 0xC13689.
    case 0xC1368B: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/overworld/open_menu.asm:160 TXY
    case 0xC1368C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:161 STY @LOCAL08
    case 0xC1368D: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:162 TYX
    case 0xC1368F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:163 LDA #0
    case 0xC13690: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:163 LDA #0
    // Overlapping static entry reached from 0xC13690.
    case 0xC13692: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:164 JSL UNKNOWN_C438A5
    case 0xC13693: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/overworld/open_menu.asm:165 BRA @UNKNOWN24
    case 0xC13697: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/overworld/open_menu.asm:167 TYX
    case 0xC13699: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:168 INX
    case 0xC1369A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:169 STX @LOCAL05
    case 0xC1369B: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC1369D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x003550, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1369D.
    case 0xC1369F: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1369F.
    case 0xC136A1: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC136A1.
    case 0xC136A3: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC136A2.
    case 0xC136A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:170 LOADPTR ITEM_USE_MENU_STRINGS, @VIRTUAL06
    case 0xC136A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:171 TYA
    case 0xC136A7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136A8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/open_menu.asm:172 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC136AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:173 CLC
    case 0xC136AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:174 ADC @VIRTUAL06
    case 0xC136AF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:175 STA @VIRTUAL06
    case 0xC136B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:176 STA @LOCAL00
    case 0xC136B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/open_menu.asm:177 LDA @VIRTUAL06+2
    case 0xC136B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:178 STA @LOCAL00+2
    case 0xC136B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC136B9.
    case 0xC136BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136BC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC136BE.
    case 0xC136C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:179 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC136C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu.asm:180 TXA
    case 0xC136C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:181 JSR UNKNOWN_C115F4
    case 0xC136C4: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/overworld/open_menu.asm:182 LDX @LOCAL05
    case 0xC136C7: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/overworld/open_menu.asm:183 TXY
    case 0xC136C9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:184 STY @LOCAL08
    case 0xC136CA: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:186 LDY @LOCAL08
    case 0xC136CC: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:187 CPY #4
    case 0xC136CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/overworld/open_menu.asm:187 CPY #4
    // Overlapping static entry reached from 0xC136CE.
    case 0xC136D0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/open_menu.asm:188 BCC @UNKNOWN23
    case 0xC136D1: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // src/overworld/open_menu.asm:189 LDY #0
    case 0xC136D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:189 LDY #0
    // Overlapping static entry reached from 0xC136D3.
    case 0xC136D5: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/overworld/open_menu.asm:190 TYX
    case 0xC136D6: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:191 LDA #1
    case 0xC136D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:191 LDA #1
    // Overlapping static entry reached from 0xC136D7.
    case 0xC136D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:192 JSL UNKNOWN_C451FA
    case 0xC136DA: cpu.execute_instruction<0x22>(0xC451FA, 4); return true;
    // src/overworld/open_menu.asm:193 LDA #0
    case 0xC136DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:193 LDA #0
    // Overlapping static entry reached from 0xC136DE.
    case 0xC136E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:194 STA @VIRTUAL02
    case 0xC136E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:196 REP #PROC_FLAGS::ACCUM8
    case 0xC136E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:197 LDA @VIRTUAL02
    case 0xC136E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:198 BEQ @UNKNOWN26
    case 0xC136E7: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:199 LDA #WINDOW::INVENTORY
    case 0xC136E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:199 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC136E9.
    case 0xC136EB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:200 JSR SET_WINDOW_FOCUS
    case 0xC136EC: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC136EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:202 LDA @LOCAL04
    case 0xC136F1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:203 STA @VIRTUAL00
    case 0xC136F3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/open_menu.asm:204 REP #PROC_FLAGS::ACCUM8
    case 0xC136F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:205 LDA @VIRTUAL00
    case 0xC136F7: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/open_menu.asm:206 AND #$00FF
    case 0xC136F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC136F9.
    case 0xC136FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:207 BEQ @UNKNOWN27
    case 0xC136FC: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/overworld/open_menu.asm:208 JSR PRINT_MENU_ITEMS
    case 0xC136FE: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/overworld/open_menu.asm:209 BRA @UNKNOWN27
    case 0xC13701: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/open_menu.asm:211 LDA #WINDOW::INVENTORY_MENU
    case 0xC13703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:211 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13703.
    case 0xC13705: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:212 JSR SET_WINDOW_FOCUS
    case 0xC13706: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:213 JSR PRINT_MENU_ITEMS
    case 0xC13709: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/overworld/open_menu.asm:215 LDA #WINDOW::INVENTORY_MENU
    case 0xC1370C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:215 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1370C.
    case 0xC1370E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:216 JSR SET_WINDOW_FOCUS
    case 0xC1370F: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:217 LDA #1
    case 0xC13712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:217 LDA #1
    // Overlapping static entry reached from 0xC13712.
    case 0xC13714: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:218 JSR SELECTION_MENU
    case 0xC13715: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:219 STORE_INT1632 @VIRTUAL0A
    case 0xC13718: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:219 STORE_INT1632 @VIRTUAL0A
    case 0xC1371A: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/overworld/open_menu.asm:220 LDA @VIRTUAL0A
    case 0xC1371C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:221 BEQ @UNKNOWN30
    case 0xC1371E: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:222 CMP #1
    case 0xC13720: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:222 CMP #1
    // Overlapping static entry reached from 0xC13720.
    case 0xC13722: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:223 BEQ @GOODS_ITEM_USE
    case 0xC13723: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/overworld/open_menu.asm:224 CMP #4
    case 0xC13725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/open_menu.asm:224 CMP #4
    // Overlapping static entry reached from 0xC13725.
    case 0xC13727: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:225 BEQ @GOODS_ITEM_HELP
    case 0xC13728: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/overworld/open_menu.asm:226 CMP #2
    case 0xC1372A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:226 CMP #2
    // Overlapping static entry reached from 0xC1372A.
    case 0xC1372C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:227 BEQL @UNKNOWN34
    case 0xC1372D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:227 BEQL @UNKNOWN34
    case 0xC1372F: cpu.execute_instruction<0x4C>(0x003810, 3); return true;
    // src/overworld/open_menu.asm:228 CMP #3
    case 0xC13732: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:228 CMP #3
    // Overlapping static entry reached from 0xC13732.
    case 0xC13734: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:229 BEQL @UNKNOWN63
    case 0xC13735: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:229 BEQL @UNKNOWN63
    case 0xC13737: cpu.execute_instruction<0x4C>(0x003B10, 3); return true;
    // src/overworld/open_menu.asm:230 JMP @UNKNOWN75
    case 0xC1373A: cpu.execute_instruction<0x4C>(0x003C16, 3); return true;
    // src/overworld/open_menu.asm:232 JSR CLOSE_FOCUS_WINDOW
    case 0xC1373D: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/overworld/open_menu.asm:233 LDA #WINDOW::INVENTORY
    case 0xC13740: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:233 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13740.
    case 0xC13742: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:234 JSR SET_WINDOW_FOCUS
    case 0xC13743: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:235 JMP @UNKNOWN15
    case 0xC13746: cpu.execute_instruction<0x4C>(0x0035FC, 3); return true;
    // src/overworld/open_menu.asm:237 LDA #1
    case 0xC13749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:237 LDA #1
    // Overlapping static entry reached from 0xC13749.
    case 0xC1374B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:238 STA @VIRTUAL02
    case 0xC1374C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:239 LDY #0
    case 0xC1374E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:239 LDY #0
    // Overlapping static entry reached from 0xC1374E.
    case 0xC13750: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/open_menu.asm:240 LDA @LOCAL06
    case 0xC13751: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:241 STA @VIRTUAL04
    case 0xC13753: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:242 LDX @VIRTUAL04
    case 0xC13755: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13757: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13759: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1375B: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:243 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1375D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:244 LDA @VIRTUAL06
    case 0xC1375F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:245 JSR OVERWORLD_USE_ITEM
    case 0xC13761: cpu.execute_instruction<0x20>(0x00AF74, 3); return true;
    // src/overworld/open_menu.asm:246 CMP #0
    case 0xC13764: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:246 CMP #0
    // Overlapping static entry reached from 0xC13764.
    case 0xC13766: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:247 BNEL @UNKNOWN75
    case 0xC13767: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:247 BNEL @UNKNOWN75
    case 0xC13769: cpu.execute_instruction<0x4C>(0x003C16, 3); return true;
    // src/overworld/open_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1376C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:249 LDA #0
    case 0xC1376E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/overworld/open_menu.asm:250 STA @VIRTUAL00
    case 0xC13770: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/open_menu.asm:250 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1376E.
    case 0xC13771: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:251 STA @LOCAL04
    case 0xC13772: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:252 JMP @UNKNOWN25
    case 0xC13774: cpu.execute_instruction<0x4C>(0x0036E3, 3); return true;
    // src/overworld/open_menu.asm:255 LDA #0
    case 0xC13777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:255 LDA #0
    // Overlapping static entry reached from 0xC13777.
    case 0xC13779: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:256 JSR UNKNOWN_C10F40
    case 0xC1377A: cpu.execute_instruction<0x20>(0x000F40, 3); return true;
    // src/overworld/open_menu.asm:257 LDA #2
    case 0xC1377D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:257 LDA #2
    // Overlapping static entry reached from 0xC1377D.
    case 0xC1377F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:258 JSR UNKNOWN_C10F40
    case 0xC13780: cpu.execute_instruction<0x20>(0x000F40, 3); return true;
    // src/overworld/open_menu.asm:259 SEP #PROC_FLAGS::ACCUM8
    case 0xC13783: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:260 LDA #$00FF
    case 0xC13785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/overworld/open_menu.asm:261 STA RESTORE_MENU_BACKUP
    case 0xC13787: cpu.execute_instruction<0x8D>(0x005E79, 3); return true;
    // src/overworld/open_menu.asm:261 STA RESTORE_MENU_BACKUP
    // Overlapping static entry reached from 0xC13785.
    case 0xC13788: cpu.execute_instruction<0x79>(0x00C25E, 3); return true;
    // src/overworld/open_menu.asm:262 REP #PROC_FLAGS::ACCUM8
    case 0xC1378A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:262 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC13788.
    case 0xC1378B: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1378C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1378C.
    case 0xC1378E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:263 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1378F: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13792: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13794: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13796: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:264 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13798: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:265 LDA @VIRTUAL06
    case 0xC1379A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:266 TAY
    case 0xC1379C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:267 STY @LOCAL08
    case 0xC1379D: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:268 LDA @LOCAL06
    case 0xC1379F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:269 STA @VIRTUAL04
    case 0xC137A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:270 LDX @VIRTUAL04
    case 0xC137A3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:271 TYA
    case 0xC137A5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:272 JSL GET_CHARACTER_ITEM
    case 0xC137A6: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/open_menu.asm:273 STA @LOCAL06
    case 0xC137AA: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137AC.
    case 0xC137AE: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137AF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137AE.
    case 0xC137B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC137B1.
    case 0xC137B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:274 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC137B4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/open_menu.asm:275 LDA @LOCAL06
    case 0xC137B6: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:276 LDY #.SIZEOF(item)
    case 0xC137B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/overworld/open_menu.asm:276 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC137B8.
    case 0xC137BA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:277 JSL MULT168
    case 0xC137BB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/open_menu.asm:278 CLC
    case 0xC137BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:279 ADC #item::help_text
    case 0xC137C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x000023, 3); return true;
    // src/overworld/open_menu.asm:279 ADC #item::help_text
    // Overlapping static entry reached from 0xC137C0.
    case 0xC137C2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:280 CLC
    case 0xC137C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:281 ADC @VIRTUAL0A
    case 0xC137C4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:282 STA @VIRTUAL0A
    case 0xC137C6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC137C8.
    case 0xC137CA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CB: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137CE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/open_menu.asm:283 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC137D2: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:284 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC137DA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:285 JSL DISPLAY_TEXT
    case 0xC137DC: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:286 LDA #WINDOW::TEXT_STANDARD
    case 0xC137E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:286 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC137E0.
    case 0xC137E2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:287 JSL CLOSE_WINDOW
    case 0xC137E3: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:288 LDA #WINDOW::UNKNOWN00
    case 0xC137E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:288 LDA #WINDOW::UNKNOWN00
    // Overlapping static entry reached from 0xC137E7.
    case 0xC137E9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:289 JSR SET_WINDOW_FOCUS
    case 0xC137EA: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:290 SEP #PROC_FLAGS::ACCUM8
    case 0xC137ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:291 LDA #1
    case 0xC137EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/overworld/open_menu.asm:292 STA SKIP_ADDING_COMMAND_TEXT
    case 0xC137F1: cpu.execute_instruction<0x8D>(0x005E6C, 3); return true;
    // src/overworld/open_menu.asm:292 STA SKIP_ADDING_COMMAND_TEXT
    // Overlapping static entry reached from 0xC137EF.
    case 0xC137F2: cpu.execute_instruction<0x6C>(0x00205E, 3); return true;
    // src/overworld/open_menu.asm:293 JSR UNKNOWN_C133B0
    case 0xC137F4: cpu.execute_instruction<0x20>(0x0033B0, 3); return true;
    // src/overworld/open_menu.asm:295 LDX #2
    case 0xC137F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:295 LDX #2
    // Overlapping static entry reached from 0xC137F7.
    case 0xC137F9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/open_menu.asm:296 LDY @LOCAL08
    case 0xC137FA: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:297 TYA
    case 0xC137FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:298 JSR INVENTORY_GET_ITEM_NAME
    case 0xC137FD: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/overworld/open_menu.asm:299 LDA #WINDOW::INVENTORY_MENU
    case 0xC13800: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:299 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13800.
    case 0xC13802: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:300 JSL CLOSE_WINDOW
    case 0xC13803: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:301 LDA #WINDOW::INVENTORY
    case 0xC13807: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:301 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13807.
    case 0xC13809: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:302 JSR SET_WINDOW_FOCUS
    case 0xC1380A: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:303 JMP @UNKNOWN15
    case 0xC1380D: cpu.execute_instruction<0x4C>(0x0035FC, 3); return true;
    // src/overworld/open_menu.asm:305 LDA #WINDOW::INVENTORY
    case 0xC13810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:305 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13810.
    case 0xC13812: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:306 JSR SET_WINDOW_FOCUS
    case 0xC13813: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/overworld/open_menu.asm:307 JSR UNKNOWN_C10FA3
    case 0xC13816: cpu.execute_instruction<0x20>(0x000FA3, 3); return true;
    // src/overworld/open_menu.asm:308 LDA #1
    case 0xC13819: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:308 LDA #1
    // Overlapping static entry reached from 0xC13819.
    case 0xC1381B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:309 STA @VIRTUAL02
    case 0xC1381C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:310 LDA #3
    case 0xC1381E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:310 LDA #3
    // Overlapping static entry reached from 0xC1381E.
    case 0xC13820: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:311 JSR UNKNOWN_C193E7
    case 0xC13821: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13824: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0033A7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13824.
    case 0xC13826: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13827: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13826.
    case 0xC13828: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC13829: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    // Overlapping static entry reached from 0xC13829.
    case 0xC1382B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:312 LOADPTR UNKNOWN_C133A7, @LOCAL00
    case 0xC1382C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1382E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1382E.
    case 0xC13830: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13831: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13833.
    case 0xC13835: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:313 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13836: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/open_menu.asm:314 LDX #1
    case 0xC13838: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:314 LDX #1
    // Overlapping static entry reached from 0xC13838.
    case 0xC1383A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/open_menu.asm:315 LDA #2
    case 0xC1383B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:315 LDA #2
    // Overlapping static entry reached from 0xC1383B.
    case 0xC1383D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:316 JSR CHAR_SELECT_PROMPT
    case 0xC1383E: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/overworld/open_menu.asm:317 STA @LOCAL03
    case 0xC13841: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:318 JSR UNKNOWN_C19437
    case 0xC13843: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/overworld/open_menu.asm:319 LDA #WINDOW::UNKNOWN2C
    case 0xC13846: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00002C, 3); return true;
    // src/overworld/open_menu.asm:319 LDA #WINDOW::UNKNOWN2C
    // Overlapping static entry reached from 0xC13846.
    case 0xC13848: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:320 JSL CLOSE_WINDOW
    case 0xC13849: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:321 LDA @LOCAL03
    case 0xC1384D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:322 BNE @UNKNOWN35
    case 0xC1384F: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/overworld/open_menu.asm:323 SEP #PROC_FLAGS::ACCUM8
    case 0xC13851: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:324 LDA #1
    case 0xC13853: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/overworld/open_menu.asm:325 STA @VIRTUAL00
    case 0xC13855: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/open_menu.asm:325 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC13853.
    case 0xC13856: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:326 STA @LOCAL04
    case 0xC13857: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:327 JMP @UNKNOWN25
    case 0xC13859: cpu.execute_instruction<0x4C>(0x0036E3, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1385C: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC1385E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13860: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:329 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13862: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13864: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13866: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:330 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13868: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386C: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1386E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13870: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:331 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13872: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:332 BEQ @UNKNOWN37
    case 0xC13874: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/overworld/open_menu.asm:333 LDA @LOCAL06
    case 0xC13876: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:334 STA @VIRTUAL04
    case 0xC13878: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:335 LDX @VIRTUAL04
    case 0xC1387A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/open_menu.asm:336 LDA @VIRTUAL06
    case 0xC1387C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:337 JSL GET_CHARACTER_ITEM
    case 0xC1387E: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/open_menu.asm:338 LDY #.SIZEOF(item)
    case 0xC13882: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/overworld/open_menu.asm:338 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC13882.
    case 0xC13884: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:339 JSL MULT168
    case 0xC13885: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/open_menu.asm:341 CLC
    case 0xC13889: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:342 ADC #item::flags
    case 0xC1388A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/overworld/open_menu.asm:342 ADC #item::flags
    // Overlapping static entry reached from 0xC1388A.
    case 0xC1388C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/open_menu.asm:343 TAX
    case 0xC1388D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:344 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1388E: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/overworld/open_menu.asm:345 AND #$00FF
    case 0xC13892: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:345 AND #$00FF
    // Overlapping static entry reached from 0xC13892.
    case 0xC13894: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/open_menu.asm:346 AND #ITEM_FLAGS::CANNOT_GIVE
    case 0xC13895: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/overworld/open_menu.asm:346 AND #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC13895.
    case 0xC13897: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:347 BEQ @UNKNOWN37
    case 0xC13898: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1389A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1389A.
    case 0xC1389C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:348 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1389D: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:349 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:350 JSR SET_WORKING_MEMORY
    case 0xC138A8: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:351 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC138AF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:352 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:353 JSR SET_ARGUMENT_MEMORY
    case 0xC138B9: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x00C6C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138BC.
    case 0xC138BE: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138BE.
    case 0xC138C0: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    // Overlapping static entry reached from 0xC138C1.
    case 0xC138C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:354 DISPLAY_TEXT_PTR MSG_SYS_GOODS_NOCARRY
    case 0xC138C6: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:355 LDA #WINDOW::TEXT_STANDARD
    case 0xC138CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:355 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC138CA.
    case 0xC138CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:356 JSL CLOSE_WINDOW
    case 0xC138CD: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:357 SEP #PROC_FLAGS::ACCUM8
    case 0xC138D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:358 LDA #1
    case 0xC138D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/overworld/open_menu.asm:359 STA @VIRTUAL00
    case 0xC138D5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/open_menu.asm:359 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC138D3.
    case 0xC138D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/open_menu.asm:360 STA @LOCAL04
    case 0xC138D7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:361 JMP @UNKNOWN25
    case 0xC138D9: cpu.execute_instruction<0x4C>(0x0036E3, 3); return true;
    // src/overworld/open_menu.asm:363 LDX #0
    case 0xC138DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:363 LDX #0
    // Overlapping static entry reached from 0xC138DC.
    case 0xC138DE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/open_menu.asm:364 STX @LOCAL02
    case 0xC138DF: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:365 LDA @VIRTUAL06
    case 0xC138E1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:366 DEC
    case 0xC138E3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:367 LDY #.SIZEOF(char_struct)
    case 0xC138E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/open_menu.asm:367 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC138E4.
    case 0xC138E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:368 JSL MULT168
    case 0xC138E7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/open_menu.asm:370 TAX
    case 0xC138EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:371 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC138EC: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/overworld/open_menu.asm:372 AND #$00FF
    case 0xC138EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:372 AND #$00FF
    // Overlapping static entry reached from 0xC138EF.
    case 0xC138F1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/open_menu.asm:373 TAY
    case 0xC138F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:374 CPY #STATUS_0::UNCONSCIOUS
    case 0xC138F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:374 CPY #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC138F3.
    case 0xC138F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:375 BEQ @UNKNOWN38
    case 0xC138F6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/open_menu.asm:376 CPY #STATUS_0::DIAMONDIZED
    case 0xC138F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:376 CPY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC138F8.
    case 0xC138FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu.asm:377 BNE @UNKNOWN39
    case 0xC138FB: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/open_menu.asm:379 LDX #5
    case 0xC138FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/open_menu.asm:379 LDX #5
    // Overlapping static entry reached from 0xC138FD.
    case 0xC138FF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/open_menu.asm:380 STX @LOCAL02
    case 0xC13900: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13902: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13904: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:382 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13906: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13908: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390A: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1390E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:383 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13910: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:385 BEQ @UNKNOWN43
    case 0xC13912: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/overworld/open_menu.asm:386 LDX @LOCAL02
    case 0xC13914: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:387 INX
    case 0xC13916: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:388 STX @LOCAL02
    case 0xC13917: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:389 LDA @LOCAL03
    case 0xC13919: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:390 JSL FIND_INVENTORY_SPACE2
    case 0xC1391B: cpu.execute_instruction<0x22>(0xC4572B, 4); return true;
    // src/overworld/open_menu.asm:391 CMP #0
    case 0xC1391F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:391 CMP #0
    // Overlapping static entry reached from 0xC1391F.
    case 0xC13921: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:392 BEQ @UNKNOWN41
    case 0xC13922: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:393 LDX @LOCAL02
    case 0xC13924: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:394 INX
    case 0xC13926: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:395 INX
    case 0xC13927: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:396 STX @LOCAL02
    case 0xC13928: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:398 LDA @LOCAL03
    case 0xC1392A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:399 DEC
    case 0xC1392C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:400 LDY #.SIZEOF(char_struct)
    case 0xC1392D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/open_menu.asm:400 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1392D.
    case 0xC1392F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:401 JSL MULT168
    case 0xC13930: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/open_menu.asm:402 TAX
    case 0xC13934: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:403 LDA PARTY_CHARACTERS + char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC13935: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/overworld/open_menu.asm:404 AND #$00FF
    case 0xC13938: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC13938.
    case 0xC1393A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/open_menu.asm:405 TAY
    case 0xC1393B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:406 CPY #STATUS_0::UNCONSCIOUS
    case 0xC1393C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:406 CPY #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1393C.
    case 0xC1393E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:407 BEQ @UNKNOWN42
    case 0xC1393F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/open_menu.asm:408 CPY #STATUS_0::DIAMONDIZED
    case 0xC13941: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:408 CPY #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC13941.
    case 0xC13943: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/open_menu.asm:409 BNE @UNKNOWN43
    case 0xC13944: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/open_menu.asm:411 LDX @LOCAL02
    case 0xC13946: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:412 INX
    case 0xC13948: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:413 STX @LOCAL02
    case 0xC13949: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1394B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1394B.
    case 0xC1394D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:415 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1394E: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/open_menu.asm:416 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC13951: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/overworld/open_menu.asm:417 STA @LOCAL08
    case 0xC13954: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:418 CLC
    case 0xC13956: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:419 ADC #window_stats::working_memory
    case 0xC13957: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/overworld/open_menu.asm:419 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC13957.
    case 0xC13959: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/open_menu.asm:420 TAY
    case 0xC1395A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1395B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1395D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC13960: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:421 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC13962: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13965: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13967: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:422 MOVE_INT1632 @LOCAL03, @VIRTUAL0A
    case 0xC13969: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/overworld/open_menu.asm:423 LDA @LOCAL08
    case 0xC1396B: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:424 CLC
    case 0xC1396D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:425 ADC #window_stats::working_memory_storage
    case 0xC1396E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/overworld/open_menu.asm:425 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1396E.
    case 0xC13970: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/open_menu.asm:426 TAY
    case 0xC13971: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13972: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13974: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13977: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:427 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13979: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:428 LDA @LOCAL06
    case 0xC1397C: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:429 STA @VIRTUAL04
    case 0xC1397E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:430 STORE_INT1632 @VIRTUAL0A
    case 0xC13980: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:430 STORE_INT1632 @VIRTUAL0A
    case 0xC13982: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/overworld/open_menu.asm:431 LDA @LOCAL08
    case 0xC13984: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/overworld/open_menu.asm:432 CLC
    case 0xC13986: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:433 ADC #window_stats::argument_memory
    case 0xC13987: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/overworld/open_menu.asm:433 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC13987.
    case 0xC13989: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/open_menu.asm:434 TAY
    case 0xC1398A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1398B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1398D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13990: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/open_menu.asm:435 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC13992: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:436 LDX @LOCAL02
    case 0xC13995: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/open_menu.asm:437 TXA
    case 0xC13997: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:438 BEQ @GOODS_GIVE_SELF_ALIVE_TEXT
    case 0xC13998: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/overworld/open_menu.asm:439 CMP #1
    case 0xC1399A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:439 CMP #1
    // Overlapping static entry reached from 0xC1399A.
    case 0xC1399C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:440 BEQ @GOODS_GIVE_ALIVE_TO_ALIVE_FAIL_TEXT
    case 0xC1399D: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/overworld/open_menu.asm:441 CMP #2
    case 0xC1399F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:441 CMP #2
    // Overlapping static entry reached from 0xC1399F.
    case 0xC139A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/open_menu.asm:442 BEQ @GOODS_GIVE_ALIVE_TO_DEAD_FAIL_TEXT
    case 0xC139A2: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/overworld/open_menu.asm:443 CMP #3
    case 0xC139A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:443 CMP #3
    // Overlapping static entry reached from 0xC139A4.
    case 0xC139A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:444 BEQL @GOODS_GIVE_ALIVE_TO_ALIVE_SUCC_TEXT
    case 0xC139A7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:444 BEQL @GOODS_GIVE_ALIVE_TO_ALIVE_SUCC_TEXT
    case 0xC139A9: cpu.execute_instruction<0x4C>(0x003A25, 3); return true;
    // src/overworld/open_menu.asm:445 CMP #4
    case 0xC139AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/open_menu.asm:445 CMP #4
    // Overlapping static entry reached from 0xC139AC.
    case 0xC139AE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:446 BEQL @GOODS_GIVE_ALIVE_TO_DEAD_SUCC_TEXT
    case 0xC139AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:446 BEQL @GOODS_GIVE_ALIVE_TO_DEAD_SUCC_TEXT
    case 0xC139B1: cpu.execute_instruction<0x4C>(0x003A49, 3); return true;
    // src/overworld/open_menu.asm:447 CMP #5
    case 0xC139B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/open_menu.asm:447 CMP #5
    // Overlapping static entry reached from 0xC139B4.
    case 0xC139B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:448 BEQL @GOODS_GIVE_SELF_DEAD_TEXT
    case 0xC139B7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:448 BEQL @GOODS_GIVE_SELF_DEAD_TEXT
    case 0xC139B9: cpu.execute_instruction<0x4C>(0x003A6D, 3); return true;
    // src/overworld/open_menu.asm:449 CMP #6
    case 0xC139BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/open_menu.asm:449 CMP #6
    // Overlapping static entry reached from 0xC139BC.
    case 0xC139BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:450 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_FAIL_TEXT
    case 0xC139BF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:450 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_FAIL_TEXT
    case 0xC139C1: cpu.execute_instruction<0x4C>(0x003A90, 3); return true;
    // src/overworld/open_menu.asm:451 CMP #7
    case 0xC139C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/overworld/open_menu.asm:451 CMP #7
    // Overlapping static entry reached from 0xC139C4.
    case 0xC139C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:452 BEQL @GOODS_GIVE_DEAD_TO_DEAD_FAIL_TEXT
    case 0xC139C7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:452 BEQL @GOODS_GIVE_DEAD_TO_DEAD_FAIL_TEXT
    case 0xC139C9: cpu.execute_instruction<0x4C>(0x003AA0, 3); return true;
    // src/overworld/open_menu.asm:453 CMP #8
    case 0xC139CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/open_menu.asm:453 CMP #8
    // Overlapping static entry reached from 0xC139CC.
    case 0xC139CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:454 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_SUCC_TEXT
    case 0xC139CF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:454 BEQL @GOODS_GIVE_DEAD_TO_ALIVE_SUCC_TEXT
    case 0xC139D1: cpu.execute_instruction<0x4C>(0x003AB0, 3); return true;
    // src/overworld/open_menu.asm:455 CMP #9
    case 0xC139D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/overworld/open_menu.asm:455 CMP #9
    // Overlapping static entry reached from 0xC139D4.
    case 0xC139D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/open_menu.asm:456 BEQL @GOODS_GIVE_DEAD_TO_DEAD_SUCC_TEXT
    case 0xC139D7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/open_menu.asm:456 BEQL @GOODS_GIVE_DEAD_TO_DEAD_SUCC_TEXT
    case 0xC139D9: cpu.execute_instruction<0x4C>(0x003AD3, 3); return true;
    // src/overworld/open_menu.asm:457 JMP @GOODS_GIVE_INVALID_TEXT
    case 0xC139DC: cpu.execute_instruction<0x4C>(0x003AF6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x00E3FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139DF.
    case 0xC139E1: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139E1.
    case 0xC139E3: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    // Overlapping static entry reached from 0xC139E4.
    case 0xC139E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:459 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_ALIVE
    case 0xC139E9: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:460 LDY @VIRTUAL04
    case 0xC139ED: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139EF: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F3: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:461 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC139F5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:462 LDA @VIRTUAL06
    case 0xC139F7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:463 TAX
    case 0xC139F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:464 LDA @LOCAL03
    case 0xC139FA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:465 JSL UNKNOWN_C22A3A
    case 0xC139FC: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:466 JMP @UNKNOWN62
    case 0xC13A00: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00E42C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A03.
    case 0xC13A05: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A05.
    case 0xC13A07: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A08.
    case 0xC13A0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:468 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_ALIVE
    case 0xC13A0D: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:469 JMP @UNKNOWN62
    case 0xC13A11: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x00E468, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A14.
    case 0xC13A16: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A17: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A16.
    case 0xC13A18: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A19.
    case 0xC13A1B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:471 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_ALIVE_DEAD
    case 0xC13A1E: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:472 JMP @UNKNOWN62
    case 0xC13A22: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A4, 2); else cpu.execute_instruction<0xA9>(0x00E4A4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A25.
    case 0xC13A27: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A27.
    case 0xC13A29: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    // Overlapping static entry reached from 0xC13A2A.
    case 0xC13A2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:474 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_ALIVE
    case 0xC13A2F: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:475 LDY @VIRTUAL04
    case 0xC13A33: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A35: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A37: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A39: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:476 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A3B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:477 LDA @VIRTUAL06
    case 0xC13A3D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:478 TAX
    case 0xC13A3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:479 LDA @LOCAL03
    case 0xC13A40: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:480 JSL UNKNOWN_C22A3A
    case 0xC13A42: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:481 JMP @UNKNOWN62
    case 0xC13A46: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00E4C3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A49.
    case 0xC13A4B: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A4B.
    case 0xC13A4D: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    // Overlapping static entry reached from 0xC13A4E.
    case 0xC13A50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A51: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:483 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_ALIVE_DEAD
    case 0xC13A53: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:484 LDY @VIRTUAL04
    case 0xC13A57: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A59: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5D: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:485 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:486 LDA @VIRTUAL06
    case 0xC13A61: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:487 TAX
    case 0xC13A63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:488 LDA @LOCAL03
    case 0xC13A64: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:489 JSL UNKNOWN_C22A3A
    case 0xC13A66: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:490 JMP @UNKNOWN62
    case 0xC13A6A: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x00E4E9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A6D.
    case 0xC13A6F: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A70: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A6F.
    case 0xC13A71: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    // Overlapping static entry reached from 0xC13A72.
    case 0xC13A74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:492 DISPLAY_TEXT_PTR MSG_SYS_CARRY_SELF_DEAD
    case 0xC13A77: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:493 LDY @VIRTUAL04
    case 0xC13A7B: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A7D: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C47.
    case 0xC13A80: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A81: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A80.
    case 0xC13A82: cpu.execute_instruction<0x21>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13A83: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:494 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A82.
    case 0xC13A84: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:495 LDA @VIRTUAL06
    case 0xC13A85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:496 TAX
    case 0xC13A87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:497 LDA @LOCAL03
    case 0xC13A88: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:498 JSL UNKNOWN_C22A3A
    case 0xC13A8A: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:499 BRA @UNKNOWN62
    case 0xC13A8E: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00E51C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A90.
    case 0xC13A92: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A93: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A92.
    case 0xC13A94: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13A95.
    case 0xC13A97: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A98: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:501 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_ALIVE
    case 0xC13A9A: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:502 BRA @UNKNOWN62
    case 0xC13A9E: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x00E559, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA0.
    case 0xC13AA2: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA2.
    case 0xC13AA4: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AA5.
    case 0xC13AA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:504 DISPLAY_TEXT_PTR MSG_SYS_CARRY_FAIL_OTHER_DEAD_DEAD
    case 0xC13AAA: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:505 BRA @UNKNOWN62
    case 0xC13AAE: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00E5A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB0.
    case 0xC13AB2: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB2.
    case 0xC13AB4: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    // Overlapping static entry reached from 0xC13AB5.
    case 0xC13AB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13AB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:507 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_ALIVE
    case 0xC13ABA: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:508 LDY @VIRTUAL04
    case 0xC13ABE: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC0: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC4: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:509 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AC6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:510 LDA @VIRTUAL06
    case 0xC13AC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:511 TAX
    case 0xC13ACA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:512 LDA @LOCAL03
    case 0xC13ACB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:513 JSL UNKNOWN_C22A3A
    case 0xC13ACD: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:514 BRA @UNKNOWN62
    case 0xC13AD1: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x00E5C2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD3.
    case 0xC13AD5: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD5.
    case 0xC13AD7: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    // Overlapping static entry reached from 0xC13AD8.
    case 0xC13ADA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13ADB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:516 DISPLAY_TEXT_PTR MSG_SYS_CARRY_OTHER_DEAD_DEAD
    case 0xC13ADD: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:517 LDY @VIRTUAL04
    case 0xC13AE1: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE3: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE7: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:518 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13AE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/open_menu.asm:519 LDA @VIRTUAL06
    case 0xC13AEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:520 TAX
    case 0xC13AED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:521 LDA @LOCAL03
    case 0xC13AEE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/open_menu.asm:522 JSL UNKNOWN_C22A3A
    case 0xC13AF0: cpu.execute_instruction<0x22>(0xC22A3A, 4); return true;
    // src/overworld/open_menu.asm:523 BRA @UNKNOWN62
    case 0xC13AF4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/overworld/open_menu.asm:525 BRA @GOODS_GIVE_INVALID_TEXT
    case 0xC13AF6: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/overworld/open_menu.asm:527 LDA #WINDOW::TEXT_STANDARD
    case 0xC13AF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:527 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13AF8.
    case 0xC13AFA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:528 JSL CLOSE_WINDOW
    case 0xC13AFB: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:529 LDA #WINDOW::INVENTORY_MENU
    case 0xC13AFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:529 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13AFF.
    case 0xC13B01: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:530 JSL CLOSE_WINDOW
    case 0xC13B02: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:531 LDA #WINDOW::INVENTORY
    case 0xC13B06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:531 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13B06.
    case 0xC13B08: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:532 JSL CLOSE_WINDOW
    case 0xC13B09: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:533 JMP @MAIN_PAUSE_MENU
    case 0xC13B0D: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13B10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13B10.
    case 0xC13B12: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/open_menu.asm:535 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13B13: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B16: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B1A: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:536 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC13B1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B1E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B22: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B24: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:538 JSR SET_WORKING_MEMORY
    case 0xC13B26: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/overworld/open_menu.asm:539 LDA @LOCAL06
    case 0xC13B29: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/open_menu.asm:540 STA @VIRTUAL04
    case 0xC13B2B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:541 STORE_INT1632 @VIRTUAL06
    case 0xC13B2D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:541 STORE_INT1632 @VIRTUAL06
    case 0xC13B2F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B31: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B33: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B35: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:542 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13B37: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:543 JSR SET_ARGUMENT_MEMORY
    case 0xC13B39: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x00C609, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B3C.
    case 0xC13B3E: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B3F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B3E.
    case 0xC13B40: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    // Overlapping static entry reached from 0xC13B41.
    case 0xC13B43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B44: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/open_menu.asm:544 DISPLAY_TEXT_PTR MSG_SYS_GOODS_DROP
    case 0xC13B46: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:545 LDA #WINDOW::TEXT_STANDARD
    case 0xC13B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:545 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13B4A.
    case 0xC13B4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:546 JSL CLOSE_WINDOW
    case 0xC13B4D: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:547 LDA #WINDOW::INVENTORY_MENU
    case 0xC13B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/open_menu.asm:547 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC13B51.
    case 0xC13B53: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:548 JSL CLOSE_WINDOW
    case 0xC13B54: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:549 LDA #WINDOW::INVENTORY
    case 0xC13B58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/open_menu.asm:549 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC13B58.
    case 0xC13B5A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:550 JSL CLOSE_WINDOW
    case 0xC13B5B: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/open_menu.asm:551 JMP @MAIN_PAUSE_MENU
    case 0xC13B5F: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:553 JSR UNKNOWN_C1134B
    case 0xC13B62: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/overworld/open_menu.asm:554 JSR UNKNOWN_C1C373
    case 0xC13B65: cpu.execute_instruction<0x20>(0x00C373, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/open_menu.asm:555 STORE_INT1632 @VIRTUAL06
    case 0xC13B68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/open_menu.asm:555 STORE_INT1632 @VIRTUAL06
    case 0xC13B6A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13B6C.
    case 0xC13B6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B6F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13B71.
    case 0xC13B73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:556 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13B74: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B76: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B78: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:557 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13B7E: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:558 BEQ @UNKNOWN66
    case 0xC13B80: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/open_menu.asm:559 LDA @VIRTUAL06
    case 0xC13B82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/open_menu.asm:560 DEC
    case 0xC13B84: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:561 JSL UNKNOWN_C43573
    case 0xC13B85: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // src/overworld/open_menu.asm:563 JSR UNKNOWN_C1B5B6
    case 0xC13B89: cpu.execute_instruction<0x20>(0x00B5B6, 3); return true;
    // src/overworld/open_menu.asm:564 CMP #0
    case 0xC13B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/open_menu.asm:564 CMP #0
    // Overlapping static entry reached from 0xC13B8C.
    case 0xC13B8E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:565 BNEL @UNKNOWN75
    case 0xC13B8F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:565 BNEL @UNKNOWN75
    case 0xC13B91: cpu.execute_instruction<0x4C>(0x003C16, 3); return true;
    // src/overworld/open_menu.asm:566 JSR UNKNOWN_C1C3B6
    case 0xC13B94: cpu.execute_instruction<0x20>(0x00C3B6, 3); return true;
    // src/overworld/open_menu.asm:567 CMP #1
    case 0xC13B97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:567 CMP #1
    // Overlapping static entry reached from 0xC13B97.
    case 0xC13B99: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:568 BNEL @MAIN_PAUSE_MENU
    case 0xC13B9A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:568 BNEL @MAIN_PAUSE_MENU
    case 0xC13B9C: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:569 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13B9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu.asm:569 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13B9F.
    case 0xC13BA1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:570 JSL PLAY_SOUND
    case 0xC13BA2: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/open_menu.asm:571 JSL UNKNOWN_C3E6F8
    case 0xC13BA6: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/overworld/open_menu.asm:572 JMP @MAIN_PAUSE_MENU
    case 0xC13BAA: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:574 JSR UNKNOWN_C1134B
    case 0xC13BAD: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/overworld/open_menu.asm:575 JSR UNKNOWN_C1AA5D
    case 0xC13BB0: cpu.execute_instruction<0x20>(0x00AA5D, 3); return true;
    // src/overworld/open_menu.asm:576 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC13BB3: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/overworld/open_menu.asm:577 AND #$00FF
    case 0xC13BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/open_menu.asm:577 AND #$00FF
    // Overlapping static entry reached from 0xC13BB6.
    case 0xC13BB8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/open_menu.asm:578 CMP #1
    case 0xC13BB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:578 CMP #1
    // Overlapping static entry reached from 0xC13BB9.
    case 0xC13BBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/open_menu.asm:579 BNEL @MAIN_PAUSE_MENU
    case 0xC13BBC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/open_menu.asm:579 BNEL @MAIN_PAUSE_MENU
    case 0xC13BBE: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:580 LDA #SFX::MENU_OPEN_CLOSE
    case 0xC13BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/overworld/open_menu.asm:580 LDA #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13BC1.
    case 0xC13BC3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:581 JSL PLAY_SOUND
    case 0xC13BC4: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/open_menu.asm:582 JSL UNKNOWN_C3E6F8
    case 0xC13BC8: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/overworld/open_menu.asm:583 JMP @MAIN_PAUSE_MENU
    case 0xC13BCC: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:585 JSL CHECK
    case 0xC13BCF: cpu.execute_instruction<0x22>(0xC1323B, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BD3.
    case 0xC13BD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13BD8.
    case 0xC13BDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:586 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13BDB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BDF: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:587 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13BE5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:588 BNE @UNKNOWN73
    case 0xC13BE7: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00C59E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BE9.
    case 0xC13BEB: cpu.execute_instruction<0xC5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BEB.
    case 0xC13BED: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BED.
    case 0xC13BEF: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13BEE.
    case 0xC13BF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:589 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13BF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:591 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13BF9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:592 JSL DISPLAY_TEXT
    case 0xC13BFB: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:593 BRA @UNKNOWN75
    case 0xC13BFF: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/overworld/open_menu.asm:595 JSR UNKNOWN_C1134B
    case 0xC13C01: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/overworld/open_menu.asm:596 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C04: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:597 LDA #1
    case 0xC13C06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/overworld/open_menu.asm:598 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC13C08: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/overworld/open_menu.asm:598 STA FORCE_LEFT_TEXT_ALIGNMENT
    // Overlapping static entry reached from 0xC13C06.
    case 0xC13C09: cpu.execute_instruction<0x71>(0x00005E, 2); return true;
    // src/overworld/open_menu.asm:599 JSR UNKNOWN_C1BB71
    case 0xC13C0B: cpu.execute_instruction<0x20>(0x00BB71, 3); return true;
    // src/overworld/open_menu.asm:600 SEP #PROC_FLAGS::ACCUM8
    case 0xC13C0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/open_menu.asm:601 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC13C10: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/overworld/open_menu.asm:602 JMP @MAIN_PAUSE_MENU
    case 0xC13C13: cpu.execute_instruction<0x4C>(0x0034CD, 3); return true;
    // src/overworld/open_menu.asm:604 JSL CLEAR_INSTANT_PRINTING
    case 0xC13C16: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/overworld/open_menu.asm:605 JSR HIDE_HPPP_WINDOWS
    case 0xC13C1A: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/overworld/open_menu.asm:606 JSR UNKNOWN_C1008E
    case 0xC13C1D: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/overworld/open_menu.asm:608 JSL WINDOW_TICK
    case 0xC13C20: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/open_menu.asm:610 LDA ENTITY_FADE_ENTITY
    case 0xC13C24: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/overworld/open_menu.asm:611 CMP #.LOWORD(-1)
    case 0xC13C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/open_menu.asm:611 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13C27.
    case 0xC13C29: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/overworld/open_menu.asm:612 BNE @UNKNOWN76
    case 0xC13C2A: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    case 0xC13C2C: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C29.
    case 0xC13C2D: cpu.execute_instruction<0x51>(0x000094, 2); return true;
    // src/overworld/open_menu.asm:613 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C2D.
    case 0xC13C2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu.asm:614 END_C_FUNCTION
    case 0xC13C30: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu.asm:614 END_C_FUNCTION
    case 0xC13C31: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/open_menu.asm:617 BEGIN_C_FUNCTION_FAR
    case 0xC13C32: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C34: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    // Overlapping static entry reached from 0xC13C36.
    case 0xC13C38: cpu.execute_instruction<0xFF>(0x3C225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/open_menu.asm:620 END_STACK_VARS
    case 0xC13C39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/open_menu.asm:621 JSL UNKNOWN_C0943C
    case 0xC13C3A: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/open_menu.asm:621 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC13C38.
    case 0xC13C3C: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/overworld/open_menu.asm:622 LDA #SFX::CURSOR1
    case 0xC13C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/open_menu.asm:622 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13C3E.
    case 0xC13C40: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/open_menu.asm:623 JSL PLAY_SOUND
    case 0xC13C41: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/open_menu.asm:624 JSL TALK_TO
    case 0xC13C45: cpu.execute_instruction<0x22>(0xC13187, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C49.
    case 0xC13C4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C4C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13C4E.
    case 0xC13C50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:625 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13C51: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C53: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C55: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C57: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C59: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:626 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C5B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:627 BNE @UNKNOWN79
    case 0xC13C5D: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/overworld/open_menu.asm:628 JSL CHECK
    case 0xC13C5F: cpu.execute_instruction<0x22>(0xC1323B, 4); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C65: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C67: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C69: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/open_menu.asm:629 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13C6B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/open_menu.asm:630 BNE @UNKNOWN79
    case 0xC13C6D: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00C59E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C6F.
    case 0xC13C71: cpu.execute_instruction<0xC5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C71.
    case 0xC13C73: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C73.
    case 0xC13C75: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    // Overlapping static entry reached from 0xC13C74.
    case 0xC13C76: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/open_menu.asm:631 LOADPTR MSG_SYS_NOPROBLEM, @VIRTUAL06
    case 0xC13C77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/open_menu.asm:633 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13C7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/open_menu.asm:634 JSL DISPLAY_TEXT
    case 0xC13C81: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/open_menu.asm:635 JSL CLEAR_INSTANT_PRINTING
    case 0xC13C85: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/overworld/open_menu.asm:636 JSR HIDE_HPPP_WINDOWS
    case 0xC13C89: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/overworld/open_menu.asm:637 JSR UNKNOWN_C1008E
    case 0xC13C8C: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/overworld/open_menu.asm:639 JSL WINDOW_TICK
    case 0xC13C8F: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/open_menu.asm:640 LDA ENTITY_FADE_ENTITY
    case 0xC13C93: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/overworld/open_menu.asm:641 CMP #.LOWORD(-1)
    case 0xC13C96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/open_menu.asm:641 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13C96.
    case 0xC13C98: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/overworld/open_menu.asm:642 BNE @UNKNOWN80
    case 0xC13C99: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    case 0xC13C9B: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C98.
    case 0xC13C9C: cpu.execute_instruction<0x51>(0x000094, 2); return true;
    // src/overworld/open_menu.asm:643 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13C9C.
    case 0xC13C9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/open_menu.asm:644 END_C_FUNCTION
    case 0xC13C9F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/open_menu.asm:644 END_C_FUNCTION
    case 0xC13CA0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_average_for_sprite_palettes.asm (source_named).
bool execute_overworld_prepare_average_for_sprite_palettes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC005E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005E9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC005EB.
    case 0xC005ED: cpu.execute_instruction<0xFF>(0xFFAF5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005EF: cpu.execute_instruction<0xAF>(0xEF10FF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC005ED.
    case 0xC005F1: cpu.execute_instruction<0x10>(0x0000EF, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005F5: cpu.execute_instruction<0xAF>(0xEF1101, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005F9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC005FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC005FB.
    case 0xC005FD: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:10 STY @LOCAL01
    case 0xC005FE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00600: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00602: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00604: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00606: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    case 0xC00608: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC00608.
    case 0xC0060A: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:13 TYA
    case 0xC0060B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:14 JSL MEMCPY16
    case 0xC0060C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:15 LDY @LOCAL01
    case 0xC00610: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:16 TYA
    case 0xC00612: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC00613: cpu.execute_instruction<0x20>(0x000391, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    // Overlapping static entry reached from 0xC0068D.
    case 0xC00614: cpu.execute_instruction<0x91>(0x000003, 2); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:18 LDA COLOUR_AVERAGE_RED
    case 0xC00616: cpu.execute_instruction<0xAD>(0x0043D0, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:19 STA SAVED_COLOUR_AVERAGE_RED
    case 0xC00619: cpu.execute_instruction<0x8D>(0x0043D6, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:20 LDA COLOUR_AVERAGE_GREEN
    case 0xC0061C: cpu.execute_instruction<0xAD>(0x0043D2, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:21 STA SAVED_COLOUR_AVERAGE_GREEN
    case 0xC0061F: cpu.execute_instruction<0x8D>(0x0043D8, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:22 LDA COLOUR_AVERAGE_BLUE
    case 0xC00622: cpu.execute_instruction<0xAD>(0x0043D4, 3); return true;
    // src/overworld/prepare_average_for_sprite_palettes.asm:23 STA SAVED_COLOUR_AVERAGE_BLUE
    case 0xC00625: cpu.execute_instruction<0x8D>(0x0043DA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00628: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00629: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity.asm (source_named).
bool execute_overworld_prepare_new_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/prepare_new_entity.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC46E37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/prepare_new_entity.asm:4 STX ENTITY_PREPARED_X_COORDINATE
    case 0xC46E39: cpu.execute_instruction<0x8E>(0x009E2D, 3); return true;
    // src/overworld/prepare_new_entity.asm:5 STY ENTITY_PREPARED_Y_COORDINATE
    case 0xC46E3C: cpu.execute_instruction<0x8C>(0x009E2F, 3); return true;
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    case 0xC46E3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC46E3F.
    case 0xC46E41: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/prepare_new_entity.asm:7 STA ENTITY_PREPARED_DIRECTION
    case 0xC46E42: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // src/overworld/prepare_new_entity.asm:8 RTL
    case 0xC46E45: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity_at_existing_entity_location.asm (source_named).
bool execute_overworld_prepare_new_entity_at_existing_entity_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46DAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46DB2.
    case 0xC46DB4: cpu.execute_instruction<0xFF>(0xF0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    case 0xC46DB7: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC46DB4.
    case 0xC46DB8: cpu.execute_instruction<0x07>(0x0000C9, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    case 0xC46DB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC46DB8.
    case 0xC46DBA: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC46DB9.
    case 0xC46DBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:10 BEQ @UNKNOWN1
    case 0xC46DBC: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:11 BRA @UNKNOWN2
    case 0xC46DBE: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:13 LDX CURRENT_ENTITY_SLOT
    case 0xC46DC0: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:14 STX @LOCAL00
    case 0xC46DC3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:15 BRA @UNKNOWN2
    case 0xC46DC5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:17 LDX GAME_STATE+game_state::current_party_members
    case 0xC46DC7: cpu.execute_instruction<0xAE>(0x009889, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:18 STX @LOCAL00
    case 0xC46DCA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:20 LDX @LOCAL00
    case 0xC46DCC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:21 TXA
    case 0xC46DCE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:22 ASL
    case 0xC46DCF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:23 TAX
    case 0xC46DD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46DD1: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC46DD4: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:26 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46DD7: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:27 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46DDA: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:28 LDA ENTITY_DIRECTIONS,X
    case 0xC46DDD: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:29 STA ENTITY_PREPARED_DIRECTION
    case 0xC46DE0: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC46DE3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC46DE4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_new_entity_at_teleport_destination.asm (source_named).
bool execute_overworld_prepare_new_entity_at_teleport_destination_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46DE5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46DEA.
    case 0xC46DEC: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DEE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC46DEF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46DEC.
    case 0xC46DF0: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:9 STA @LOCAL00
    case 0xC46DF1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC46DF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x00EBAB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DF5.
    case 0xC46DF7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DF8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DFA.
    case 0xC46DFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DFD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:12 LDA @LOCAL00
    case 0xC46DFF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    case 0xC46E01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC46E01.
    case 0xC46E03: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:15 CLC
    case 0xC46E07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:16 ADC @VIRTUAL06
    case 0xC46E08: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:17 STA @VIRTUAL06
    case 0xC46E0A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:18 STA @VIRTUAL0A
    case 0xC46E0C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:19 LDA @VIRTUAL06+2
    case 0xC46E0E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:20 STA @VIRTUAL0A+2
    case 0xC46E10: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:21 LDA [@VIRTUAL0A] ;teleport_destination::x_coord
    case 0xC46E12: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:22 ASL
    case 0xC46E14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:23 ASL
    case 0xC46E15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:24 ASL
    case 0xC46E16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC46E17: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    case 0xC46E1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC46E1A.
    case 0xC46E1C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:27 LDA [@VIRTUAL06],Y
    case 0xC46E1D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:28 ASL
    case 0xC46E1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:29 ASL
    case 0xC46E20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:30 ASL
    case 0xC46E21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:31 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46E22: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC46E25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    case 0xC46E27: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    // Overlapping static entry reached from 0xC46E27.
    case 0xC46E29: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:34 LDA [@VIRTUAL06],Y
    case 0xC46E2A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC46E2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    case 0xC46E2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC46E2E.
    case 0xC46E30: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:37 DEC
    case 0xC46E31: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:38 STA ENTITY_PREPARED_DIRECTION
    case 0xC46E32: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC46E35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC46E36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_palette_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_palette_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4DEE9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DEEE.
    case 0xC4DEF0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEF1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEF2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    case 0xC4DEF3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4DEF0.
    case 0xC4DEF4: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:13 TAY
    case 0xC4DEF5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:14 STY @LOCAL03
    case 0xC4DEF6: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:15 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC4DEF8: cpu.execute_instruction<0x22>(0xC005E7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DEFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4DEFC.
    case 0xC4DEFE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DEFF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DF01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4DF01.
    case 0xC4DF03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DF04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4DF06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF06.
    case 0xC4DF08: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4DF09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF08.
    case 0xC4DF0A: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF09.
    case 0xC4DF0B: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    case 0xC4DF0C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4DF0B.
    case 0xC4DF0D: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4DF0D.
    case 0xC4DF0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x001AA4, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    case 0xC4DF10: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4DF0F.
    case 0xC4DF11: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:21 TYA
    case 0xC4DF12: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    case 0xC4DF13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    // Overlapping static entry reached from 0xC4DF13.
    case 0xC4DF15: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:23 TAX
    case 0xC4DF16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:24 TYA
    case 0xC4DF17: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:25 LSR
    case 0xC4DF18: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:26 LSR
    case 0xC4DF19: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:27 LSR
    case 0xC4DF1A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:28 JSL LOAD_MAP_PAL
    case 0xC4DF1B: cpu.execute_instruction<0x22>(0xC007B6, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:29 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC4DF1F: cpu.execute_instruction<0x22>(0xC00480, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DF23: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:31 STZ PALETTE_UPLOAD_MODE
    case 0xC4DF25: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF2A.
    case 0xC4DF2C: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF32: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF33: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF35: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF37: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF39: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    case 0xC4DF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4DF41.
    case 0xC4DF43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:37 STA @LOCAL02+2
    case 0xC4DF44: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF46.
    case 0xC4DF48: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF4B.
    case 0xC4DF4D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF4E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    case 0xC4DF50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4DF50.
    case 0xC4DF52: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:40 LDA @VIRTUAL02
    case 0xC4DF53: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:41 JSL MULT16
    case 0xC4DF55: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:42 CLC
    case 0xC4DF59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:43 ADC @VIRTUAL06
    case 0xC4DF5A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:44 STA @VIRTUAL06
    case 0xC4DF5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:45 STA @LOCAL00
    case 0xC4DF5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:46 LDA @VIRTUAL06+2
    case 0xC4DF60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:47 STA @LOCAL00+2
    case 0xC4DF62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF64: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF66: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF68: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF6A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF6C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF6E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF70: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF72: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    case 0xC4DF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF74.
    case 0xC4DF76: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    case 0xC4DF77: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    // Overlapping static entry reached from 0xC4DF76.
    case 0xC4DF78: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4DF7B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4DF7C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_tile_arrangement_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4DF7D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF7F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF80: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF81: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DF82.
    case 0xC4DF84: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF85: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF86: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    case 0xC4DF87: cpu.execute_instruction<0x84>(0x000017, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC4DF84.
    case 0xC4DF88: cpu.execute_instruction<0x17>(0x000038, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:16 SEC
    case 0xC4DF89: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    case 0xC4DF8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    // Overlapping static entry reached from 0xC4DF8A.
    case 0xC4DF8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:18 STA @LOCAL04
    case 0xC4DF8D: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:19 TXA
    case 0xC4DF8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:20 SEC
    case 0xC4DF90: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    case 0xC4DF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    // Overlapping static entry reached from 0xC4DF91.
    case 0xC4DF93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:22 STA @LOCAL03
    case 0xC4DF94: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DF96: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4DF98: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    case 0xC4DF9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    // Overlapping static entry reached from 0xC4DF9A.
    case 0xC4DF9C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4DF9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4DF9F.
    case 0xC4DFA1: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    case 0xC4DFA2: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    // Overlapping static entry reached from 0xC4DFA1.
    case 0xC4DFA3: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DFA6.
    case 0xC4DFA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DFAB.
    case 0xC4DFAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:30 LDY @LOCAL05
    case 0xC4DFB0: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:31 TYA
    case 0xC4DFB2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    case 0xC4DFB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    // Overlapping static entry reached from 0xC4DFB3.
    case 0xC4DFB5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:33 JSL MULT16
    case 0xC4DFB6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:34 CLC
    case 0xC4DFBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:35 ADC @VIRTUAL06
    case 0xC4DFBB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:36 STA @VIRTUAL06
    case 0xC4DFBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    case 0xC4DFBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4DFBF.
    case 0xC4DFC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:38 STA @VIRTUAL04
    case 0xC4DFC2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    case 0xC4DFC4: cpu.execute_instruction<0x4C>(0x00E07E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC4DFA1.
    case 0xC4DFC5: cpu.execute_instruction<0x7E>(0x00A9E0, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    case 0xC4DFC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E041.
    case 0xC4DFC8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4DFC7.
    case 0xC4DFC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:42 STA @VIRTUAL02
    case 0xC4DFCA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:43 STA @LOCAL02
    case 0xC4DFCC: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:44 JMP @UNKNOWN4
    case 0xC4DFCE: cpu.execute_instruction<0x4C>(0x00E070, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:46 LDA @VIRTUAL04
    case 0xC4DFD1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:47 CLC
    case 0xC4DFD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:48 ADC @LOCAL03
    case 0xC4DFD4: cpu.execute_instruction<0x65>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:49 LSR
    case 0xC4DFD6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:50 LSR
    case 0xC4DFD7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:51 STA @LOCAL01
    case 0xC4DFD8: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:52 LDA @VIRTUAL02
    case 0xC4DFDA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:53 CLC
    case 0xC4DFDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:54 ADC @LOCAL04
    case 0xC4DFDD: cpu.execute_instruction<0x65>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:55 LSR
    case 0xC4DFDF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:56 LSR
    case 0xC4DFE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:57 TAY
    case 0xC4DFE1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:58 LSR
    case 0xC4DFE2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:59 LSR
    case 0xC4DFE3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:60 LSR
    case 0xC4DFE4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:61 STA @VIRTUAL02
    case 0xC4DFE5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:62 LDA @LOCAL01
    case 0xC4DFE7: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    case 0xC4DFE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x00FFFC, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    // Overlapping static entry reached from 0xC4DFE9.
    case 0xC4DFEB: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:65 CLC
    case 0xC4DFEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:66 ADC @VIRTUAL02
    case 0xC4DFF0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:67 TAX
    case 0xC4DFF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DFF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:69 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC4DFF5: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:70 LSR
    case 0xC4DFF9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:71 LSR
    case 0xC4DFFA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:72 LSR
    case 0xC4DFFB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4DFFC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    case 0xC4DFFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC4DFFE.
    case 0xC4E000: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:75 CMP LOADED_MAP_TILE_COMBO
    case 0xC4E001: cpu.execute_instruction<0xCD>(0x00436E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:76 BNE @UNKNOWN2
    case 0xC4E004: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:77 LDA @LOCAL01
    case 0xC4E006: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:78 TAX
    case 0xC4E008: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:79 TYA
    case 0xC4E009: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:80 JSL REDIRECT_C0A156
    case 0xC4E00A: cpu.execute_instruction<0x22>(0xC0A152, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:81 STA @LOCAL01
    case 0xC4E00E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:82 BRA @UNKNOWN3
    case 0xC4E010: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    case 0xC4E012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    // Overlapping static entry reached from 0xC4E012.
    case 0xC4E014: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:85 STA @LOCAL01
    case 0xC4E015: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:87 LDA @LOCAL02
    case 0xC4E017: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:88 STA @VIRTUAL02
    case 0xC4E019: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:89 CLC
    case 0xC4E01B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:90 ADC @LOCAL04
    case 0xC4E01C: cpu.execute_instruction<0x65>(0x000015, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    case 0xC4E01E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    // Overlapping static entry reached from 0xC4E01E.
    case 0xC4E020: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:92 PHA
    case 0xC4E021: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:93 LDA @VIRTUAL04
    case 0xC4E022: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:94 CLC
    case 0xC4E024: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:95 ADC @LOCAL03
    case 0xC4E025: cpu.execute_instruction<0x65>(0x000013, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    case 0xC4E027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    // Overlapping static entry reached from 0xC4E027.
    case 0xC4E029: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E02A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E02B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:98 STA @VIRTUAL02
    case 0xC4E02C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:99 LDA @LOCAL01
    case 0xC4E02E: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E030: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E031: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E032: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:101 CLC
    case 0xC4E034: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:102 ADC @VIRTUAL02
    case 0xC4E035: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:103 PLY
    case 0xC4E037: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:104 STY @VIRTUAL02
    case 0xC4E038: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:105 CLC
    case 0xC4E03A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:106 ADC @VIRTUAL02
    case 0xC4E03B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:107 STA @LOCAL01
    case 0xC4E03D: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E03F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E03F.
    case 0xC4E041: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E042: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E044: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E044.
    case 0xC4E046: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E047: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:109 LDA @LOCAL01
    case 0xC4E049: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:110 ASL
    case 0xC4E04B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:111 CLC
    case 0xC4E04C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:112 ADC @VIRTUAL0A
    case 0xC4E04D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:113 STA @VIRTUAL0A
    case 0xC4E04F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:114 LDA [@VIRTUAL0A]
    case 0xC4E051: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    case 0xC4E053: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    // Overlapping static entry reached from 0xC4E053.
    case 0xC4E055: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:116 ASL
    case 0xC4E056: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:117 TAX
    case 0xC4E057: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    case 0xC4E058: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    // Overlapping static entry reached from 0xC4E058.
    case 0xC4E05A: cpu.execute_instruction<0xFF>(0xF0009D, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:119 STA LOADED_MAP_BLOCKS,X
    case 0xC4E05B: cpu.execute_instruction<0x9D>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:120 LDA [@VIRTUAL0A]
    case 0xC4E05E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:121 STA [@VIRTUAL06]
    case 0xC4E060: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:122 INC @VIRTUAL06
    case 0xC4E062: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:123 INC @VIRTUAL06
    case 0xC4E064: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:124 LDA @LOCAL02
    case 0xC4E066: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:125 STA @VIRTUAL02
    case 0xC4E068: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:126 INC @VIRTUAL02
    case 0xC4E06A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:127 LDA @VIRTUAL02
    case 0xC4E06C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:128 STA @LOCAL02
    case 0xC4E06E: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:130 LDA @VIRTUAL02
    case 0xC4E070: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    case 0xC4E072: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    // Overlapping static entry reached from 0xC4E072.
    case 0xC4E074: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E075: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E077: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E079: cpu.execute_instruction<0x4C>(0x00DFD1, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:133 INC @VIRTUAL04
    case 0xC4E07C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:135 LDA @VIRTUAL04
    case 0xC4E07E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    case 0xC4E080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    // Overlapping static entry reached from 0xC4E080.
    case 0xC4E082: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E083: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E085: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E087: cpu.execute_instruction<0x4C>(0x00DFC7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4E08A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4E08B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/prepare_your_sanctuary_location_tileset_data.asm (source_named).
bool execute_overworld_prepare_your_sanctuary_location_tileset_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4E08C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E08E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E08F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E090: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E091.
    case 0xC4E093: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E094: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E095: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    case 0xC4E096: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4E093.
    case 0xC4E097: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    case 0xC4E098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4E097.
    case 0xC4E099: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4E098.
    case 0xC4E09A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:12 STA @VIRTUAL04
    case 0xC4E09B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:13 BRA @UNKNOWN2
    case 0xC4E09D: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:15 LDA @VIRTUAL04
    case 0xC4E09F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:16 ASL
    case 0xC4E0A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:17 CLC
    case 0xC4E0A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4E0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4E0A3.
    case 0xC4E0A5: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    case 0xC4E0A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4E0A5.
    case 0xC4E0A7: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:20 LDX @VIRTUAL02
    case 0xC4E0A8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:21 LDA __BSS_START__,X
    case 0xC4E0AA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:22 BEQ @UNKNOWN1
    case 0xC4E0AD: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0AF.
    case 0xC4E0B1: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0B4.
    case 0xC4E0B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:24 LDA @VIRTUAL04
    case 0xC4E0B9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:25 ASL
    case 0xC4E0BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:26 ASL
    case 0xC4E0BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:27 ASL
    case 0xC4E0BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:28 ASL
    case 0xC4E0BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:29 ASL
    case 0xC4E0BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:30 CLC
    case 0xC4E0C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:31 ADC @VIRTUAL06
    case 0xC4E0C1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:32 STA @VIRTUAL06
    case 0xC4E0C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:33 STA @LOCAL00
    case 0xC4E0C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:34 LDA @VIRTUAL06+2
    case 0xC4E0C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:35 STA @LOCAL00+2
    case 0xC4E0C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:36 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0CB: cpu.execute_instruction<0xAD>(0x00B4B8, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:37 ASL
    case 0xC4E0CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:38 ASL
    case 0xC4E0CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:39 ASL
    case 0xC4E0D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:40 ASL
    case 0xC4E0D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:41 CLC
    case 0xC4E0D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    case 0xC4E0D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    // Overlapping static entry reached from 0xC4E0D3.
    case 0xC4E0D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    case 0xC4E0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    // Overlapping static entry reached from 0xC4E0D6.
    case 0xC4E0D8: cpu.execute_instruction<0x7F>(0x20A2A8, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:44 TAY
    case 0xC4E0D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    case 0xC4E0DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    // Overlapping static entry reached from 0xC4E0DA.
    case 0xC4E0DC: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E0DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:47 LDA #0
    case 0xC4E0DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    case 0xC4E0E1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E0DF.
    case 0xC4E0E2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E0E2.
    case 0xC4E0E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00B8AD, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0E5: cpu.execute_instruction<0xAD>(0x00B4B8, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4E0E4.
    case 0xC4E0E6: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4E0E4.
    case 0xC4E0E7: cpu.execute_instruction<0xB4>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    case 0xC4E0E8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4E0E7.
    case 0xC4E0E9: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:52 STA __BSS_START__,X
    case 0xC4E0EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:53 INC NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0ED: cpu.execute_instruction<0xEE>(0x00B4B8, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:54 INC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E0F0: cpu.execute_instruction<0xEE>(0x00B4BC, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:56 INC @VIRTUAL04
    case 0xC4E0F3: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:58 LDA @VIRTUAL04
    case 0xC4E0F5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    case 0xC4E0F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000400, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    // Overlapping static entry reached from 0xC4E0F7.
    case 0xC4E0F9: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    case 0xC4E0FA: cpu.execute_instruction<0x90>(0x0000A3, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC4E0F9.
    case 0xC4E0FB: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E0FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0FB.
    case 0xC4E0FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0FC.
    case 0xC4E0FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E0FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E101.
    case 0xC4E103: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E104: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    case 0xC4E106: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    // Overlapping static entry reached from 0xC4E106.
    case 0xC4E108: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:63 LDA @LOCAL02
    case 0xC4E109: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:64 JSL MULT16
    case 0xC4E10B: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:65 CLC
    case 0xC4E10F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:66 ADC @VIRTUAL06
    case 0xC4E110: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:67 STA @VIRTUAL06
    case 0xC4E112: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    case 0xC4E114: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    // Overlapping static entry reached from 0xC4E114.
    case 0xC4E116: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:69 STX @LOCAL01
    case 0xC4E117: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:70 BRA @UNKNOWN4
    case 0xC4E119: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:72 LDA [@VIRTUAL06]
    case 0xC4E11B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:73 STA @LOCAL02
    case 0xC4E11D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    case 0xC4E11F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    // Overlapping static entry reached from 0xC4E11F.
    case 0xC4E121: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:75 ASL
    case 0xC4E122: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:76 TAX
    case 0xC4E123: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:77 LDA @LOCAL02
    case 0xC4E124: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    case 0xC4E126: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FC00, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    // Overlapping static entry reached from 0xC4E126.
    case 0xC4E128: cpu.execute_instruction<0xFC>(0x00001D, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    case 0xC4E129: cpu.execute_instruction<0x1D>(0x00F000, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    // Overlapping static entry reached from 0xC4E128.
    case 0xC4E12B: cpu.execute_instruction<0xF0>(0x000087, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    case 0xC4E12C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4E12B.
    case 0xC4E12D: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    case 0xC4E12E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4E12D.
    case 0xC4E12F: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    case 0xC4E130: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4E12F.
    case 0xC4E131: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    case 0xC4E132: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4E131.
    case 0xC4E133: cpu.execute_instruction<0x12>(0x0000E8, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:84 INX
    case 0xC4E134: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:85 STX @LOCAL01
    case 0xC4E135: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    case 0xC4E137: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000C0, 2); else cpu.execute_instruction<0xE0>(0x0003C0, 3); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    // Overlapping static entry reached from 0xC4E137.
    case 0xC4E139: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    case 0xC4E13A: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC4E139.
    case 0xC4E13B: cpu.execute_instruction<0xDF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4E13C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4E13D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_item_transformations.asm (source_named).
bool execute_overworld_process_item_transformations_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_item_transformations.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48FC4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC48FC8.
    case 0xC48FCA: cpu.execute_instruction<0xFF>(0xBAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FCB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC48FCC: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC48FCA.
    case 0xC48FCE: cpu.execute_instruction<0x4D>(0x006D18, 3); return true;
    // src/overworld/process_item_transformations.asm:11 CLC
    case 0xC48FCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    case 0xC48FD0: cpu.execute_instruction<0x6D>(0x005D60, 3); return true;
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    // Overlapping static entry reached from 0xC48FCE.
    case 0xC48FD1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC48FD3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC48FD5: cpu.execute_instruction<0x4C>(0x0090EC, 3); return true;
    // src/overworld/process_item_transformations.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC48FD8: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC48FDB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC48FDD: cpu.execute_instruction<0x4C>(0x0090EC, 3); return true;
    // src/overworld/process_item_transformations.asm:16 LDA GAME_STATE + game_state::unknownB0
    case 0xC48FE0: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/overworld/process_item_transformations.asm:17 CMP #2
    case 0xC48FE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/process_item_transformations.asm:17 CMP #2
    // Overlapping static entry reached from 0xC48FE3.
    case 0xC48FE5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC48FE6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC48FE8: cpu.execute_instruction<0x4C>(0x0090EC, 3); return true;
    // src/overworld/process_item_transformations.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FEB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:20 LDA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48FED: cpu.execute_instruction<0xAD>(0x009F2C, 3); return true;
    // src/overworld/process_item_transformations.asm:21 DEC
    case 0xC48FF0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:22 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48FF1: cpu.execute_instruction<0x8D>(0x009F2C, 3); return true;
    // src/overworld/process_item_transformations.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC48FF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    case 0xC48FF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC48FF6.
    case 0xC48FF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC48FF9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC48FFB: cpu.execute_instruction<0x4C>(0x0090EC, 3); return true;
    // src/overworld/process_item_transformations.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FFE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:27 LDA #60
    case 0xC49000: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x008D3C, 3); return true;
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC49002: cpu.execute_instruction<0x8D>(0x009F2C, 3); return true;
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC49000.
    case 0xC49003: cpu.execute_instruction<0x2C>(0x00C29F, 3); return true;
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC49005: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49003.
    case 0xC49006: cpu.execute_instruction<0x20>(0x001AA9, 3); return true;
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC49007: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x009F1A, 3); return true;
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC49007.
    case 0xC49009: cpu.execute_instruction<0x9F>(0xA90285, 4); return true;
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    case 0xC4900A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:32 LDA #1
    case 0xC4900C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC49009.
    case 0xC4900D: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4900C.
    case 0xC4900E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_item_transformations.asm:33 STA @LOCAL03
    case 0xC4900F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:34 LDA #0
    case 0xC49011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:34 LDA #0
    // Overlapping static entry reached from 0xC49011.
    case 0xC49013: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_item_transformations.asm:35 STA @VIRTUAL04
    case 0xC49014: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:36 STA @LOCAL02
    case 0xC49016: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:37 JMP @UNKNOWN7
    case 0xC49018: cpu.execute_instruction<0x4C>(0x0090E0, 3); return true;
    // src/overworld/process_item_transformations.asm:39 LDA @LOCAL03
    case 0xC4901B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:40 BEQ @UNKNOWN5
    case 0xC4901D: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/overworld/process_item_transformations.asm:41 LDY @VIRTUAL02
    case 0xC4901F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:42 INY
    case 0xC49021: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:43 STY @LOCAL01
    case 0xC49022: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:44 LDA __BSS_START__,Y
    case 0xC49024: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    case 0xC49027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC49027.
    case 0xC49029: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_item_transformations.asm:46 BEQ @UNKNOWN5
    case 0xC4902A: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/overworld/process_item_transformations.asm:47 LDX @VIRTUAL02
    case 0xC4902C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:48 INX
    case 0xC4902E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:49 INX
    case 0xC4902F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:50 STX @LOCAL00
    case 0xC49030: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC49032: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:52 LDA __BSS_START__,X
    case 0xC49034: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:53 DEC
    case 0xC49037: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:54 STA __BSS_START__,X
    case 0xC49038: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC4903B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    case 0xC4903D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC4903D.
    case 0xC4903F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_item_transformations.asm:57 BNE @UNKNOWN5
    case 0xC49040: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/overworld/process_item_transformations.asm:58 LDA #2
    case 0xC49042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/process_item_transformations.asm:58 LDA #2
    // Overlapping static entry reached from 0xC49042.
    case 0xC49044: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:59 JSL RAND_MOD
    case 0xC49045: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/overworld/process_item_transformations.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC49049: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:61 STA @VIRTUAL00
    case 0xC4904B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/process_item_transformations.asm:62 LDY @LOCAL01
    case 0xC4904D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:63 LDA __BSS_START__,Y
    case 0xC4904F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:64 CLC
    case 0xC49052: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:65 ADC @VIRTUAL00
    case 0xC49053: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/overworld/process_item_transformations.asm:66 DEC
    case 0xC49055: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:67 LDX @LOCAL00
    case 0xC49056: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:68 STA __BSS_START__,X
    case 0xC49058: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:69 LDX @VIRTUAL02
    case 0xC4905B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC4905D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:71 LDA __BSS_START__,X
    case 0xC4905F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    case 0xC49062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC49062.
    case 0xC49064: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:73 JSL PLAY_SOUND
    case 0xC49065: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/process_item_transformations.asm:74 STZ @LOCAL03
    case 0xC49069: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/overworld/process_item_transformations.asm:76 LDX @VIRTUAL02
    case 0xC4906B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:77 INX
    case 0xC4906D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:78 INX
    case 0xC4906E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:79 INX
    case 0xC4906F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:80 LDA __BSS_START__,X
    case 0xC49070: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    case 0xC49073: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC49073.
    case 0xC49075: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_item_transformations.asm:82 BEQ @UNKNOWN6
    case 0xC49076: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/overworld/process_item_transformations.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC49078: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:84 DEC
    case 0xC4907A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:85 STA __BSS_START__,X
    case 0xC4907B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_item_transformations.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC4907E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    case 0xC49080: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC49080.
    case 0xC49082: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_item_transformations.asm:88 BNE @UNKNOWN6
    case 0xC49083: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC49085: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x00F4BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC49085.
    case 0xC49087: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC49088: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4908A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4908A.
    case 0xC4908C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4908D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_item_transformations.asm:90 LDA @VIRTUAL04
    case 0xC4908F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49091: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49093: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49094: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49095: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:92 TAY
    case 0xC49097: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:93 STY @LOCAL00
    case 0xC49098: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:94 TYA
    case 0xC4909A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC490A1: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/process_item_transformations.asm:96 CLC
    case 0xC490A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:97 ADC @VIRTUAL0A
    case 0xC490A4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:98 STA @VIRTUAL0A
    case 0xC490A6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:99 LDA [@VIRTUAL0A]
    case 0xC490A8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    case 0xC490AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC490AA.
    case 0xC490AC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/process_item_transformations.asm:101 TAX
    case 0xC490AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    case 0xC490AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    // Overlapping static entry reached from 0xC490AE.
    case 0xC490B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/process_item_transformations.asm:103 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC490B1: cpu.execute_instruction<0x22>(0xC18EAD, 4); return true;
    // src/overworld/process_item_transformations.asm:104 STA @LOCAL01
    case 0xC490B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:105 LDY @LOCAL00
    case 0xC490B7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/process_item_transformations.asm:106 TYA
    case 0xC490B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:107 INC
    case 0xC490BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:108 INC
    case 0xC490BB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:109 INC
    case 0xC490BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:110 CLC
    case 0xC490BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:111 ADC @VIRTUAL06
    case 0xC490BE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:112 STA @VIRTUAL06
    case 0xC490C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:113 LDA [@VIRTUAL06]
    case 0xC490C2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    case 0xC490C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC490C4.
    case 0xC490C6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/process_item_transformations.asm:115 TAX
    case 0xC490C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_item_transformations.asm:116 LDA @LOCAL01
    case 0xC490C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/process_item_transformations.asm:117 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC490CA: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // src/overworld/process_item_transformations.asm:119 INC @VIRTUAL02
    case 0xC490CE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:120 INC @VIRTUAL02
    case 0xC490D0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:121 INC @VIRTUAL02
    case 0xC490D2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:122 INC @VIRTUAL02
    case 0xC490D4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_item_transformations.asm:123 LDA @LOCAL02
    case 0xC490D6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:124 STA @VIRTUAL04
    case 0xC490D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:125 INC @VIRTUAL04
    case 0xC490DA: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:126 LDA @VIRTUAL04
    case 0xC490DC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:127 STA @LOCAL02
    case 0xC490DE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/process_item_transformations.asm:129 LDA @VIRTUAL04
    case 0xC490E0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/process_item_transformations.asm:130 CMP #4
    case 0xC490E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/process_item_transformations.asm:130 CMP #4
    // Overlapping static entry reached from 0xC490E2.
    case 0xC490E4: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E5: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E9: cpu.execute_instruction<0x4C>(0x00901B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC490EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC490ED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_overworld_tasks.asm (source_named).
bool execute_overworld_process_overworld_tasks_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_overworld_tasks.asm:3 BEGIN_C_FUNCTION
    case 0xC0DC4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC51: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC52.
    case 0xC0DC54: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC55: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    case 0xC0DC56: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC0DC54.
    case 0xC0DC58: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    case 0xC0DC59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0DC59.
    case 0xC0DC5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/process_overworld_tasks.asm:9 BNE @UNKNOWN0
    case 0xC0DC5C: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/process_overworld_tasks.asm:10 LDA DAD_PHONE_TIMER
    case 0xC0DC5E: cpu.execute_instruction<0xAD>(0x009E54, 3); return true;
    // src/overworld/process_overworld_tasks.asm:11 BEQ @UNKNOWN0
    case 0xC0DC61: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/process_overworld_tasks.asm:12 DEC DAD_PHONE_TIMER
    case 0xC0DC63: cpu.execute_instruction<0xCE>(0x009E54, 3); return true;
    // src/overworld/process_overworld_tasks.asm:14 LDA WINDOW_HEAD
    case 0xC0DC66: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    case 0xC0DC69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DC69.
    case 0xC0DC6B: cpu.execute_instruction<0xFF>(0xAD56D0, 4); return true;
    // src/overworld/process_overworld_tasks.asm:16 BNE @UNKNOWN4
    case 0xC0DC6C: cpu.execute_instruction<0xD0>(0x000056, 2); return true;
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    case 0xC0DC6E: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC6B.
    case 0xC0DC6F: cpu.execute_instruction<0x43>(0x000096, 2); return true;
    // src/overworld/process_overworld_tasks.asm:18 BNE @UNKNOWN4
    case 0xC0DC71: cpu.execute_instruction<0xD0>(0x000051, 2); return true;
    // src/overworld/process_overworld_tasks.asm:19 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DC73: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/overworld/process_overworld_tasks.asm:20 BNE @UNKNOWN4
    case 0xC0DC76: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/overworld/process_overworld_tasks.asm:21 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DC78: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/overworld/process_overworld_tasks.asm:22 BNE @UNKNOWN4
    case 0xC0DC7B: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DC7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003C, 2); else cpu.execute_instruction<0xA0>(0x009E3C, 3); return true;
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DC7D.
    case 0xC0DC7F: cpu.execute_instruction<0x9E>(0x000E84, 3); return true;
    // src/overworld/process_overworld_tasks.asm:24 STY @LOCAL00
    case 0xC0DC80: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    case 0xC0DC82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    // Overlapping static entry reached from 0xC0DC82.
    case 0xC0DC84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/process_overworld_tasks.asm:26 STA @VIRTUAL02
    case 0xC0DC85: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:27 BRA @UNKNOWN3
    case 0xC0DC87: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/overworld/process_overworld_tasks.asm:29 LDA a:overworld_task::frames_left,Y
    case 0xC0DC89: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:30 BEQ @UNKNOWN2
    case 0xC0DC8C: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/overworld/process_overworld_tasks.asm:31 TYX
    case 0xC0DC8E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:32 DEC
    case 0xC0DC8F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:33 STA a:overworld_task::frames_left,X
    case 0xC0DC90: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/process_overworld_tasks.asm:34 BNE @UNKNOWN2
    case 0xC0DC93: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/overworld/process_overworld_tasks.asm:35 INY ;overworld_task::function
    case 0xC0DC95: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:36 INY
    case 0xC0DC96: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC97: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_overworld_tasks.asm:38 PHA
    case 0xC0DCA1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA4: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA9: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/overworld/process_overworld_tasks.asm:40 PLA
    case 0xC0DCAC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:41 JSL UNKNOWN_C09279
    case 0xC0DCAD: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/overworld/process_overworld_tasks.asm:43 LDY @LOCAL00
    case 0xC0DCB1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:44 TYA
    case 0xC0DCB3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:45 CLC
    case 0xC0DCB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    case 0xC0DCB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DCB5.
    case 0xC0DCB7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/process_overworld_tasks.asm:47 TAY
    case 0xC0DCB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/process_overworld_tasks.asm:48 STY @LOCAL00
    case 0xC0DCB9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/process_overworld_tasks.asm:49 INC @VIRTUAL02
    case 0xC0DCBB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:51 LDA @VIRTUAL02
    case 0xC0DCBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    case 0xC0DCBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    // Overlapping static entry reached from 0xC0DCBF.
    case 0xC0DCC1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/process_overworld_tasks.asm:53 BCC @UNKNOWN1
    case 0xC0DCC2: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DCC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DCC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/process_queued_interactions.asm (source_named).
bool execute_overworld_process_queued_interactions_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_queued_interactions.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC075DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC075E1.
    case 0xC075E3: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    case 0xC075E5: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC075E3.
    case 0xC075E7: cpu.execute_instruction<0x5E>(0x000485, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075E8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075EB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:13 TAX
    case 0xC075EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:14 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC075EF: cpu.execute_instruction<0xBD>(0x005DEA, 3); return true;
    // src/overworld/process_queued_interactions.asm:15 STA @LOCAL02
    case 0xC075F2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/process_queued_interactions.asm:16 TXA
    case 0xC075F4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:17 CLC
    case 0xC075F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC075F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x005DEC, 3); return true;
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC075F6.
    case 0xC075F8: cpu.execute_instruction<0x5D>(0x00B9A8, 3); return true;
    // src/overworld/process_queued_interactions.asm:19 TAY
    case 0xC075F9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC075F8.
    case 0xC075FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07602: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/process_queued_interactions.asm:24 LDA @LOCAL02
    case 0xC07604: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/process_queued_interactions.asm:25 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC07606: cpu.execute_instruction<0x8D>(0x005DC0, 3); return true;
    // src/overworld/process_queued_interactions.asm:26 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07609: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/overworld/process_queued_interactions.asm:27 INC
    case 0xC0760C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    case 0xC0760D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    // Overlapping static entry reached from 0xC0760D.
    case 0xC0760F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/process_queued_interactions.asm:29 STA CURRENT_QUEUED_INTERACTION
    case 0xC07610: cpu.execute_instruction<0x8D>(0x005E02, 3); return true;
    // src/overworld/process_queued_interactions.asm:30 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07613: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    case 0xC07616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    // Overlapping static entry reached from 0xC07616.
    case 0xC07618: cpu.execute_instruction<0xFF>(0x5D588D, 4); return true;
    // src/overworld/process_queued_interactions.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07619: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/overworld/process_queued_interactions.asm:33 JSL UNKNOWN_C07C5B
    case 0xC0761C: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/overworld/process_queued_interactions.asm:34 LDA @LOCAL02
    case 0xC07620: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    case 0xC07622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    // Overlapping static entry reached from 0xC07622.
    case 0xC07624: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:36 BEQ @UNKNOWN0
    case 0xC07625: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    case 0xC07627: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    // Overlapping static entry reached from 0xC07627.
    case 0xC07629: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:38 BEQ @UNKNOWN1
    case 0xC0762A: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    case 0xC0762C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    // Overlapping static entry reached from 0xC0762C.
    case 0xC0762E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:40 BEQ @UNKNOWN3
    case 0xC0762F: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    case 0xC07631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    // Overlapping static entry reached from 0xC07631.
    case 0xC07633: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:42 BEQ @UNKNOWN3
    case 0xC07634: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    case 0xC07636: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    // Overlapping static entry reached from 0xC07636.
    case 0xC07638: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/process_queued_interactions.asm:44 BEQ @UNKNOWN3
    case 0xC07639: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/overworld/process_queued_interactions.asm:45 BRA @UNKNOWN4
    case 0xC0763B: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0763D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0763F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07641: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07643: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:48 JSR DOOR_TRANSITION
    case 0xC07645: cpu.execute_instruction<0x20>(0x006BFF, 3); return true;
    // src/overworld/process_queued_interactions.asm:49 BRA @UNKNOWN4
    case 0xC07648: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07650: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:52 JSL UNKNOWN_C10004
    case 0xC07652: cpu.execute_instruction<0x22>(0xC10004, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC07656: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00D33E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07656.
    case 0xC07658: cpu.execute_instruction<0xD3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC07659: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07658.
    case 0xC0765A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC0765B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0765B.
    case 0xC0765D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC0765E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07660: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07662: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07664: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07666: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07668: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/process_queued_interactions.asm:64 BNE @UNKNOWN4
    case 0xC0766A: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    case 0xC0766C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x000697, 3); return true;
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    // Overlapping static entry reached from 0xC0766C.
    case 0xC0766E: cpu.execute_instruction<0x06>(0x00008D, 2); return true;
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    case 0xC0766F: cpu.execute_instruction<0x8D>(0x009E54, 3); return true;
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC0766E.
    case 0xC07670: cpu.execute_instruction<0x54>(0x009C9E, 3); return true;
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    case 0xC07672: cpu.execute_instruction<0x9C>(0x009E56, 3); return true;
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC07670.
    case 0xC07673: cpu.execute_instruction<0x56>(0x00009E, 2); return true;
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    case 0xC07675: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07677: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07679: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0767B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0767D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/process_queued_interactions.asm:71 JSL UNKNOWN_C10004
    case 0xC0767F: cpu.execute_instruction<0x22>(0xC10004, 4); return true;
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    case 0xC07683: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    // Overlapping static entry reached from 0xC07683.
    case 0xC07685: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/overworld/process_queued_interactions.asm:74 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07686: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/overworld/process_queued_interactions.asm:75 CMP NEXT_QUEUED_INTERACTION
    case 0xC07689: cpu.execute_instruction<0xCD>(0x005E04, 3); return true;
    // src/overworld/process_queued_interactions.asm:76 BEQ @UNKNOWN5
    case 0xC0768C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    case 0xC0768E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    // Overlapping static entry reached from 0xC0768E.
    case 0xC07690: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/overworld/process_queued_interactions.asm:79 STX PENDING_INTERACTIONS
    case 0xC07691: cpu.execute_instruction<0x8E>(0x005D9A, 3); return true;
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    case 0xC07694: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07694.
    case 0xC07696: cpu.execute_instruction<0xFF>(0x5DC08D, 4); return true;
    // src/overworld/process_queued_interactions.asm:81 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC07697: cpu.execute_instruction<0x8D>(0x005DC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC0769A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC0769B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
