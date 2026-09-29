// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C2/C200D9.asm (unresolved).
bool execute_unresolved_c2_c200d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C200D9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC200D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C200D9.asm:7 END_STACK_VARS
    case 0xC200DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C200D9.asm:7 END_STACK_VARS
    case 0xC200DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C200D9.asm:7 END_STACK_VARS
    case 0xC200DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C200D9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC200DD.
    case 0xC200DF: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C200D9.asm:7 END_STACK_VARS
    case 0xC200E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC200E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:9 STZ RENDER_HPPP_WINDOWS
    case 0xC200E3: cpu.execute_instruction<0x9C>(0x0089C9, 3); return true;
    // src/unknown/C2/C200D9.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC200E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:11 LDA #$FFFF
    case 0xC200E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:11 LDA #$FFFF
    // Overlapping static entry reached from 0xC200E8.
    case 0xC200EA: cpu.execute_instruction<0xFF>(0x89D28D, 4); return true;
    // src/unknown/C2/C200D9.asm:12 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xC200EB: cpu.execute_instruction<0x8D>(0x0089D2, 3); return true;
    // src/unknown/C2/C200D9.asm:13 STA CURRENT_FLASHING_ENEMY
    case 0xC200EE: cpu.execute_instruction<0x8D>(0x0089D0, 3); return true;
    // src/unknown/C2/C200D9.asm:14 STA CURRENT_FLASHING_ROW
    case 0xC200F1: cpu.execute_instruction<0x8D>(0x0089CE, 3); return true;
    // src/unknown/C2/C200D9.asm:15 STA UNREAD_7E89CC
    case 0xC200F4: cpu.execute_instruction<0x8D>(0x0089CC, 3); return true;
    // src/unknown/C2/C200D9.asm:16 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC200F7: cpu.execute_instruction<0x8D>(0x0089CA, 3); return true;
    // src/unknown/C2/C200D9.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC200FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:18 STZ INSTANT_PRINTING
    case 0xC200FC: cpu.execute_instruction<0x9C>(0x009622, 3); return true;
    // src/unknown/C2/C200D9.asm:19 STZ REDRAW_ALL_WINDOWS
    case 0xC200FF: cpu.execute_instruction<0x9C>(0x009623, 3); return true;
    // src/unknown/C2/C200D9.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC20102: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:21 STZ ACTIONSCRIPT_STATE
    case 0xC20104: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/C2/C200D9.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC20107: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:23 STZ UPLOAD_HPPP_METER_TILES
    case 0xC20109: cpu.execute_instruction<0x9C>(0x009624, 3); return true;
    // src/unknown/C2/C200D9.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2010C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:25 LDA #$FFFF
    case 0xC2010E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:25 LDA #$FFFF
    // Overlapping static entry reached from 0xC2010E.
    case 0xC20110: cpu.execute_instruction<0xFF>(0x88E08D, 4); return true;
    // src/unknown/C2/C200D9.asm:26 STA WINDOW_HEAD
    case 0xC20111: cpu.execute_instruction<0x8D>(0x0088E0, 3); return true;
    // src/unknown/C2/C200D9.asm:27 STA WINDOW_TAIL
    case 0xC20114: cpu.execute_instruction<0x8D>(0x0088E2, 3); return true;
    // src/unknown/C2/C200D9.asm:28 LDA #0
    case 0xC20117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:28 LDA #0
    // Overlapping static entry reached from 0xC20117.
    case 0xC20119: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:29 STA @LOCAL01
    case 0xC2011A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:30 BRA @UNKNOWN1
    case 0xC2011C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C200D9.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC2011E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C200D9.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC2011E.
    case 0xC20120: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C200D9.asm:33 JSL MULT168
    case 0xC20121: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C200D9.asm:34 TAX
    case 0xC20125: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:35 LDA #$FFFF
    case 0xC20126: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xC20126.
    case 0xC20128: cpu.execute_instruction<0xFF>(0x86549D, 4); return true;
    // src/unknown/C2/C200D9.asm:36 STA WINDOW_STATS+window_stats::id,X
    case 0xC20129: cpu.execute_instruction<0x9D>(0x008654, 3); return true;
    // src/unknown/C2/C200D9.asm:37 LDA @LOCAL01
    case 0xC2012C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:38 INC
    case 0xC2012E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:39 STA @LOCAL01
    case 0xC2012F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:41 CMP #8
    case 0xC20131: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C2/C200D9.asm:41 CMP #8
    // Overlapping static entry reached from 0xC20131.
    case 0xC20133: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:42 BNE @UNKNOWN0
    case 0xC20134: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/C2/C200D9.asm:43 LDA #0
    case 0xC20136: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:43 LDA #0
    // Overlapping static entry reached from 0xC20136.
    case 0xC20138: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:44 STA @LOCAL01
    case 0xC20139: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:45 BRA @UNKNOWN3
    case 0xC2013B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C200D9.asm:47 ASL
    case 0xC2013D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:48 TAX
    case 0xC2013E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:49 LDA #$FFFF
    case 0xC2013F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:49 LDA #$FFFF
    // Overlapping static entry reached from 0xC2013F.
    case 0xC20141: cpu.execute_instruction<0xFF>(0x88E49D, 4); return true;
    // src/unknown/C2/C200D9.asm:50 STA OPEN_WINDOW_TABLE,X
    case 0xC20142: cpu.execute_instruction<0x9D>(0x0088E4, 3); return true;
    // src/unknown/C2/C200D9.asm:51 LDA @LOCAL01
    case 0xC20145: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:52 INC
    case 0xC20147: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:53 STA @LOCAL01
    case 0xC20148: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:58 CMP #53
    case 0xC2014A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000035, 2); else cpu.execute_instruction<0xC9>(0x000035, 3); return true;
    // src/unknown/C2/C200D9.asm:58 CMP #53
    // Overlapping static entry reached from 0xC2014A.
    case 0xC2014C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:60 BNE @UNKNOWN2
    case 0xC2014D: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/unknown/C2/C200D9.asm:61 LDA #0
    case 0xC2014F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:61 LDA #0
    // Overlapping static entry reached from 0xC2014F.
    case 0xC20151: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:62 STA @LOCAL01
    case 0xC20152: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:63 BRA @UNKNOWN5
    case 0xC20154: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C200D9.asm:65 ASL
    case 0xC20156: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:66 TAX
    case 0xC20157: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:67 LDA #$FFFF
    case 0xC20158: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:67 LDA #$FFFF
    // Overlapping static entry reached from 0xC20158.
    case 0xC2015A: cpu.execute_instruction<0xFF>(0x894E9D, 4); return true;
    // src/unknown/C2/C200D9.asm:68 STA TITLED_WINDOWS,X
    case 0xC2015B: cpu.execute_instruction<0x9D>(0x00894E, 3); return true;
    // src/unknown/C2/C200D9.asm:69 LDA @LOCAL01
    case 0xC2015E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:70 INC
    case 0xC20160: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:71 STA @LOCAL01
    case 0xC20161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:76 CMP #5
    case 0xC20163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C2/C200D9.asm:76 CMP #5
    // Overlapping static entry reached from 0xC20163.
    case 0xC20165: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:78 BNE @UNKNOWN4
    case 0xC20166: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/unknown/C2/C200D9.asm:79 LDA #$FFFF
    case 0xC20168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:79 LDA #$FFFF
    // Overlapping static entry reached from 0xC20168.
    case 0xC2016A: cpu.execute_instruction<0xFF>(0x5E7A8D, 4); return true;
    // src/unknown/C2/C200D9.asm:80 STA PAGINATION_WINDOW
    case 0xC2016B: cpu.execute_instruction<0x8D>(0x005E7A, 3); return true;
    // src/unknown/C2/C200D9.asm:81 STA PAGINATION_ANIMATION_FRAME
    case 0xC2016E: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // src/unknown/C2/C200D9.asm:82 LDY #.LOWORD(BG2_BUFFER)
    case 0xC20171: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FE, 2); else cpu.execute_instruction<0xA0>(0x007DFE, 3); return true;
    // src/unknown/C2/C200D9.asm:82 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20171.
    case 0xC20173: cpu.execute_instruction<0x7D>(0x0080A2, 3); return true;
    // src/unknown/C2/C200D9.asm:83 LDX #$0380
    case 0xC20174: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/unknown/C2/C200D9.asm:83 LDX #$0380
    // Overlapping static entry reached from 0xC20174.
    case 0xC20176: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/unknown/C2/C200D9.asm:84 BRA @UNKNOWN7
    case 0xC20177: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C2/C200D9.asm:84 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC20176.
    case 0xC20178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x0000A9, 3); return true;
    // src/unknown/C2/C200D9.asm:86 LDA #0
    case 0xC20179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:86 LDA #0
    // Overlapping static entry reached from 0xC20178.
    case 0xC2017A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C200D9.asm:86 LDA #0
    // Overlapping static entry reached from 0xC20179.
    case 0xC2017B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C2/C200D9.asm:87 STA __BSS_START__,Y
    case 0xC2017C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:88 INY
    case 0xC2017F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:89 INY
    case 0xC20180: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:90 DEX
    case 0xC20181: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:92 BNE @UNKNOWN6
    case 0xC20182: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C2/C200D9.asm:93 LDA #0
    case 0xC20184: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:93 LDA #0
    // Overlapping static entry reached from 0xC20184.
    case 0xC20186: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:94 STA @LOCAL01
    case 0xC20187: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:95 BRA @UNKNOWN9
    case 0xC20189: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC2018B.
    case 0xC2018D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C200D9.asm:98 TAX
    case 0xC20192: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:99 STZ MENU_OPTIONS,X
    case 0xC20193: cpu.execute_instruction<0x9E>(0x0089D4, 3); return true;
    // src/unknown/C2/C200D9.asm:100 LDA @LOCAL01
    case 0xC20196: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:101 INC
    case 0xC20198: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:102 STA @LOCAL01
    case 0xC20199: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:104 CMP #70
    case 0xC2019B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000046, 2); else cpu.execute_instruction<0xC9>(0x000046, 3); return true;
    // src/unknown/C2/C200D9.asm:104 CMP #70
    // Overlapping static entry reached from 0xC2019B.
    case 0xC2019D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:105 BNE @UNKNOWN8
    case 0xC2019E: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/unknown/C2/C200D9.asm:106 LDA #0
    case 0xC201A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:106 LDA #0
    // Overlapping static entry reached from 0xC201A0.
    case 0xC201A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:107 STA @LOCAL00
    case 0xC201A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:108 BRA @UNKNOWN13
    case 0xC201A5: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C2/C200D9.asm:110 LDX #0
    case 0xC201A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:110 LDX #0
    // Overlapping static entry reached from 0xC201A7.
    case 0xC201A9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C200D9.asm:111 STX @LOCAL01
    case 0xC201AA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:112 BRA @UNKNOWN12
    case 0xC201AC: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C2/C200D9.asm:114 STX @VIRTUAL02
    case 0xC201AE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C200D9.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC201B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:116 LDA @LOCAL00
    case 0xC201B2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:117 ASL
    case 0xC201B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:118 ASL
    case 0xC201B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:119 ASL
    case 0xC201B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:120 ASL
    case 0xC201B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:121 ASL
    case 0xC201B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:122 CLC
    case 0xC201B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:123 ADC @VIRTUAL02
    case 0xC201BA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C200D9.asm:124 TAX
    case 0xC201BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC201BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:126 LDA #$00FF
    case 0xC201BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C2/C200D9.asm:127 STA UNKNOWN_7E9D23,X
    case 0xC201C1: cpu.execute_instruction<0x9D>(0x009D23, 3); return true;
    // src/unknown/C2/C200D9.asm:127 STA UNKNOWN_7E9D23,X
    // Overlapping static entry reached from 0xC201BF.
    case 0xC201C2: cpu.execute_instruction<0x23>(0x00009D, 2); return true;
    // src/unknown/C2/C200D9.asm:128 LDX @LOCAL01
    case 0xC201C4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:129 INX
    case 0xC201C6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:130 STX @LOCAL01
    case 0xC201C7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:132 CPX #32
    case 0xC201C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C200D9.asm:132 CPX #32
    // Overlapping static entry reached from 0xC201C9.
    case 0xC201CB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C200D9.asm:133 BCC @UNKNOWN11
    case 0xC201CC: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C200D9.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC201CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:135 LDA @LOCAL00
    case 0xC201D0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:136 INC
    case 0xC201D2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:137 STA @LOCAL00
    case 0xC201D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:142 CMP #8
    case 0xC201D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C2/C200D9.asm:142 CMP #8
    // Overlapping static entry reached from 0xC201D5.
    case 0xC201D7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C200D9.asm:144 BCC @UNKNOWN10
    case 0xC201D8: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/unknown/C2/C200D9.asm:145 STZ UNKNOWN_7E9E29
    case 0xC201DA: cpu.execute_instruction<0x9C>(0x009E29, 3); return true;
    // src/unknown/C2/C200D9.asm:146 STZ UNKNOWN_7E9E27
    case 0xC201DD: cpu.execute_instruction<0x9C>(0x009E27, 3); return true;
    // src/unknown/C2/C200D9.asm:147 STZ VWF_TILE
    case 0xC201E0: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C2/C200D9.asm:148 STZ VWF_X
    case 0xC201E3: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C2/C200D9.asm:149 STZ BLINKING_TRIANGLE_FLAG
    case 0xC201E6: cpu.execute_instruction<0x9C>(0x00964D, 3); return true;
    // src/unknown/C2/C200D9.asm:150 LDA #1
    case 0xC201E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C200D9.asm:150 LDA #1
    // Overlapping static entry reached from 0xC201E9.
    case 0xC201EB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C200D9.asm:151 STA TEXT_SOUND_MODE
    case 0xC201EC: cpu.execute_instruction<0x8D>(0x00964F, 3); return true;
    // src/unknown/C2/C200D9.asm:152 STZ BATTLE_MODE_FLAG
    case 0xC201EF: cpu.execute_instruction<0x9C>(0x009643, 3); return true;
    // src/unknown/C2/C200D9.asm:153 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC201F2: cpu.execute_instruction<0x9C>(0x009645, 3); return true;
    // src/unknown/C2/C200D9.asm:154 LDA #$FFFF
    case 0xC201F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:154 LDA #$FFFF
    // Overlapping static entry reached from 0xC201F5.
    case 0xC201F7: cpu.execute_instruction<0xFF>(0x89588D, 4); return true;
    // src/unknown/C2/C200D9.asm:155 STA CURRENT_FOCUS_WINDOW
    case 0xC201F8: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C2/C200D9.asm:157 SEP #PROC_FLAGS::ACCUM8
    case 0xC201FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:158 LDA #1
    case 0xC201FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C2/C200D9.asm:159 STA CHARACTER_PADDING
    case 0xC201FF: cpu.execute_instruction<0x8D>(0x005E6D, 3); return true;
    // src/unknown/C2/C200D9.asm:159 STA CHARACTER_PADDING
    // Overlapping static entry reached from 0xC201FD.
    case 0xC20200: cpu.execute_instruction<0x6D>(0x00225E, 3); return true;
    // src/unknown/C2/C200D9.asm:160 JSL UNKNOWN_C43F53
    case 0xC20202: cpu.execute_instruction<0x22>(0xC43F53, 4); return true;
    // src/unknown/C2/C200D9.asm:160 JSL UNKNOWN_C43F53
    // Overlapping static entry reached from 0xC20200.
    case 0xC20203: cpu.execute_instruction<0x53>(0x00003F, 2); return true;
    // src/unknown/C2/C200D9.asm:160 JSL UNKNOWN_C43F53
    // Overlapping static entry reached from 0xC20203.
    case 0xC20205: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/unknown/C2/C200D9.asm:161 SEP #PROC_FLAGS::ACCUM8
    case 0xC20206: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:161 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20205.
    case 0xC20207: cpu.execute_instruction<0x20>(0x00FFA9, 3); return true;
    // src/unknown/C2/C200D9.asm:162 LDA #$00FF
    case 0xC20208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/unknown/C2/C200D9.asm:163 STA UNREAD_7E9651
    case 0xC2020A: cpu.execute_instruction<0x8D>(0x009651, 3); return true;
    // src/unknown/C2/C200D9.asm:163 STA UNREAD_7E9651
    // Overlapping static entry reached from 0xC20208.
    case 0xC2020B: cpu.execute_instruction<0x51>(0x000096, 2); return true;
    // src/unknown/C2/C200D9.asm:164 REP #PROC_FLAGS::ACCUM8
    case 0xC2020D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:165 LDA #$00FF
    case 0xC2020F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C2/C200D9.asm:165 LDA #$00FF
    // Overlapping static entry reached from 0xC2020F.
    case 0xC20211: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C200D9.asm:166 STA ENABLE_WORD_WRAP
    case 0xC20212: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/unknown/C2/C200D9.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC20215: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:168 STZ EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xC20217: cpu.execute_instruction<0x9C>(0x005E70, 3); return true;
    // src/unknown/C2/C200D9.asm:169 STZ VWF_INDENT_NEW_LINE
    case 0xC2021A: cpu.execute_instruction<0x9C>(0x005E75, 3); return true;
    // src/unknown/C2/C200D9.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC2021D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:171 LDA CURRENT_FOCUS_WINDOW
    case 0xC2021F: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C200D9.asm:172 ASL
    case 0xC20222: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:173 TAX
    case 0xC20223: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:174 LDA OPEN_WINDOW_TABLE,X
    case 0xC20224: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C200D9.asm:175 LDY #.SIZEOF(window_stats)
    case 0xC20227: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C200D9.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20227.
    case 0xC20229: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C200D9.asm:176 JSL MULT168
    case 0xC2022A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C200D9.asm:177 CLC
    case 0xC2022E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:178 ADC #.LOWORD(WINDOW_STATS)
    case 0xC2022F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C2/C200D9.asm:178 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC2022F.
    case 0xC20231: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C2/C200D9.asm:179 TAX
    case 0xC20232: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:180 LDA a:window_stats::current_option,X
    case 0xC20233: cpu.execute_instruction<0xBD>(0x00002B, 3); return true;
    // src/unknown/C2/C200D9.asm:181 LDY #.SIZEOF(menu_option)
    case 0xC20236: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C2/C200D9.asm:181 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC20236.
    case 0xC20238: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C200D9.asm:182 JSL MULT168
    case 0xC20239: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C200D9.asm:183 CLC
    case 0xC2023D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:184 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC2023E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C2/C200D9.asm:184 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC2023E.
    case 0xC20240: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00E2AA, 3); return true;
    // src/unknown/C2/C200D9.asm:185 TAX
    case 0xC20241: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC20242: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:186 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20240.
    case 0xC20243: cpu.execute_instruction<0x20>(0x00719C, 3); return true;
    // src/unknown/C2/C200D9.asm:187 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC20244: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C2/C200D9.asm:187 STZ FORCE_LEFT_TEXT_ALIGNMENT
    // Overlapping static entry reached from 0xC20243.
    case 0xC20246: cpu.execute_instruction<0x5E>(0x002C9E, 3); return true;
    // src/unknown/C2/C200D9.asm:188 STZ __BSS_START__+44,X
    case 0xC20247: cpu.execute_instruction<0x9E>(0x00002C, 3); return true;
    // src/unknown/C2/C200D9.asm:188 STZ __BSS_START__+44,X
    // Overlapping static entry reached from 0xC20246.
    case 0xC20249: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C2/C200D9.asm:189 STZ NEW_TEXT_PIXEL_OFFSET
    case 0xC2024A: cpu.execute_instruction<0x9C>(0x005E72, 3); return true;
    // src/unknown/C2/C200D9.asm:190 STZ LAST_TEXT_PIXEL_OFFSET_SET
    case 0xC2024D: cpu.execute_instruction<0x9C>(0x005E73, 3); return true;
    // src/unknown/C2/C200D9.asm:191 STZ FORCE_CENTRE_TEXT_ALIGNMENT
    case 0xC20250: cpu.execute_instruction<0x9C>(0x005E74, 3); return true;
    // src/unknown/C2/C200D9.asm:192 STZ LAST_PRINTED_CHARACTER
    case 0xC20253: cpu.execute_instruction<0x9C>(0x005E76, 3); return true;
    // src/unknown/C2/C200D9.asm:193 STZ PRINT_TARGET_ARTICLE
    case 0xC20256: cpu.execute_instruction<0x9C>(0x005E78, 3); return true;
    // src/unknown/C2/C200D9.asm:194 STZ PRINT_ATTACKER_ARTICLE
    case 0xC20259: cpu.execute_instruction<0x9C>(0x005E77, 3); return true;
    // src/unknown/C2/C200D9.asm:196 STZ FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC2025C: cpu.execute_instruction<0x9C>(0x00B4CE, 3); return true;
    // src/unknown/C2/C200D9.asm:197 STZ SKIP_ADDING_COMMAND_TEXT
    case 0xC2025F: cpu.execute_instruction<0x9C>(0x005E6C, 3); return true;
    // src/unknown/C2/C200D9.asm:199 REP #PROC_FLAGS::ACCUM8
    case 0xC20262: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C200D9.asm:201 END_C_FUNCTION
    case 0xC20264: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C200D9.asm:201 END_C_FUNCTION
    case 0xC20265: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20266.asm (unresolved).
bool execute_unresolved_c2_c20266_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20266.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20266: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20268: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20269: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC2026A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC2026A.
    case 0xC2026C: cpu.execute_instruction<0xFF>(0x72A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC2026D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:6 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    case 0xC2026E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x008272, 3); return true;
    // src/unknown/C2/C20266.asm:6 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    // Overlapping static entry reached from 0xC2026E.
    case 0xC20270: cpu.execute_instruction<0x82>(0x000EA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00E40E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20271.
    case 0xC20273: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20274: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20273.
    case 0xC20275: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20276: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20275.
    case 0xC20277: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20276.
    case 0xC20278: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20279: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C20266.asm:8 LDX #0
    case 0xC2027B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C20266.asm:8 LDX #0
    // Overlapping static entry reached from 0xC2027B.
    case 0xC2027D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C20266.asm:9 BRA @UNKNOWN1
    case 0xC2027E: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C20266.asm:11 LDA [@VIRTUAL06]
    case 0xC20280: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:12 STA __BSS_START__,Y
    case 0xC20282: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C20266.asm:13 INC @VIRTUAL06
    case 0xC20285: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:14 INC @VIRTUAL06
    case 0xC20287: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:15 INY
    case 0xC20289: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:16 INY
    case 0xC2028A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:17 INX
    case 0xC2028B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:19 CPX #4
    case 0xC2028C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C20266.asm:19 CPX #4
    // Overlapping static entry reached from 0xC2028C.
    case 0xC2028E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C20266.asm:20 BCC @UNKNOWN0
    case 0xC2028F: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20266.asm:21 END_C_FUNCTION
    case 0xC20291: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20266.asm:21 END_C_FUNCTION
    case 0xC20292: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20293.asm (unresolved).
bool execute_unresolved_c2_c20293_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20293.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20293: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C20293.asm:5 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    case 0xC20295: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000072, 2); else cpu.execute_instruction<0xA0>(0x008272, 3); return true;
    // src/unknown/C2/C20293.asm:5 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    // Overlapping static entry reached from 0xC20295.
    case 0xC20297: cpu.execute_instruction<0x82>(0x0000A2, 3); return true;
    // src/unknown/C2/C20293.asm:6 LDX #0
    case 0xC20298: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:6 LDX #0
    // Overlapping static entry reached from 0xC20298.
    case 0xC2029A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C20293.asm:7 BRA @UNKNOWN1
    case 0xC2029B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C2/C20293.asm:9 LDA #0
    case 0xC2029D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:9 LDA #0
    // Overlapping static entry reached from 0xC2029D.
    case 0xC2029F: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C2/C20293.asm:10 STA __BSS_START__,Y
    case 0xC202A0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:11 INY
    case 0xC202A3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:12 INY
    case 0xC202A4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:13 INX
    case 0xC202A5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:15 CPX #4
    case 0xC202A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C20293.asm:15 CPX #4
    // Overlapping static entry reached from 0xC202A6.
    case 0xC202A8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C20293.asm:16 BCC @UNKNOWN0
    case 0xC202A9: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20293.asm:17 END_C_FUNCTION
    case 0xC202AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C202AC.asm (unresolved).
bool execute_unresolved_c2_c202ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C202AC.asm:3 BEGIN_C_FUNCTION
    case 0xC202AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202AF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC202B1.
    case 0xC202B3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202B4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC202B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:13 STA @VIRTUAL02
    case 0xC202B6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC202B3.
    case 0xC202B7: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C2/C202AC.asm:14 ASL
    case 0xC202B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:15 TAX
    case 0xC202B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC202BA: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C202AC.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC202BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C202AC.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC202BD.
    case 0xC202BF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C202AC.asm:18 JSL MULT168
    case 0xC202C0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C202AC.asm:19 CLC
    case 0xC202C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:20 ADC #.LOWORD(WINDOW_STATS)
    case 0xC202C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C2/C202AC.asm:20 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC202C5.
    case 0xC202C7: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C2/C202AC.asm:21 TAY
    case 0xC202C8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:22 CLC
    case 0xC202C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:23 ADC #window_stats::title
    case 0xC202CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/unknown/C2/C202AC.asm:23 ADC #window_stats::title
    // Overlapping static entry reached from 0xC202CA.
    case 0xC202CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:24 STA @VIRTUAL04
    case 0xC202CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C202AC.asm:25 LDA a:window_stats::unknown59,Y
    case 0xC202CF: cpu.execute_instruction<0xB9>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:26 AND #$00FF
    case 0xC202D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC202D2.
    case 0xC202D4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C202AC.asm:27 BNE @UNKNOWN3
    case 0xC202D5: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C2/C202AC.asm:28 LDA #0
    case 0xC202D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:28 LDA #0
    // Overlapping static entry reached from 0xC202D7.
    case 0xC202D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:29 STA @LOCAL01
    case 0xC202DA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C202AC.asm:30 BRA @UNKNOWN1
    case 0xC202DC: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:32 ASL
    case 0xC202DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:33 CLC
    case 0xC202DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:34 ADC #.LOWORD(TITLED_WINDOWS)
    case 0xC202E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00894E, 3); return true;
    // src/unknown/C2/C202AC.asm:34 ADC #.LOWORD(TITLED_WINDOWS)
    // Overlapping static entry reached from 0xC202E0.
    case 0xC202E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0086AA, 3); return true;
    // src/unknown/C2/C202AC.asm:35 TAX
    case 0xC202E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:36 STX @LOCAL00
    case 0xC202E4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C202AC.asm:36 STX @LOCAL00
    // Overlapping static entry reached from 0xC202E2.
    case 0xC202E5: cpu.execute_instruction<0x0E>(0x0000BD, 3); return true;
    // src/unknown/C2/C202AC.asm:37 LDA __BSS_START__,X
    case 0xC202E6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC202E5.
    case 0xC202E8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C202AC.asm:38 CMP #$FFFF
    case 0xC202E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C202AC.asm:38 CMP #$FFFF
    // Overlapping static entry reached from 0xC202E9.
    case 0xC202EB: cpu.execute_instruction<0xFF>(0xA50CF0, 4); return true;
    // src/unknown/C2/C202AC.asm:39 BEQ @UNKNOWN2
    case 0xC202EC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C202AC.asm:40 LDA @LOCAL01
    case 0xC202EE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C202AC.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC202EB.
    case 0xC202EF: cpu.execute_instruction<0x10>(0x00001A, 2); return true;
    // src/unknown/C2/C202AC.asm:41 INC
    case 0xC202F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:42 STA @LOCAL01
    case 0xC202F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C202AC.asm:47 CMP #5
    case 0xC202F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C2/C202AC.asm:47 CMP #5
    // Overlapping static entry reached from 0xC202F3.
    case 0xC202F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C202AC.asm:49 BNE @UNKNOWN0
    case 0xC202F6: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C2/C202AC.asm:50 BRA @RETURN
    case 0xC202F8: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C2/C202AC.asm:52 LDA @VIRTUAL02
    case 0xC202FA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:53 ASL
    case 0xC202FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:54 TAX
    case 0xC202FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC202FE: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C202AC.asm:56 LDX @LOCAL00
    case 0xC20301: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C202AC.asm:57 STA __BSS_START__,X
    case 0xC20303: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:58 LDA @LOCAL01
    case 0xC20306: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C202AC.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC20308: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:60 INC
    case 0xC2030A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:61 STA a:window_stats::unknown59,Y
    case 0xC2030B: cpu.execute_instruction<0x99>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC2030E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:64 LDA a:window_stats::unknown59,Y
    case 0xC20310: cpu.execute_instruction<0xB9>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:65 AND #$00FF
    case 0xC20313: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC20313.
    case 0xC20315: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C202AC.asm:66 DEC
    case 0xC20316: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:67 ASL
    case 0xC20317: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:68 ASL
    case 0xC20318: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:69 ASL
    case 0xC20319: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:70 ASL
    case 0xC2031A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:71 ASL
    case 0xC2031B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:72 ASL
    case 0xC2031C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:73 ASL
    case 0xC2031D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:74 CLC
    case 0xC2031E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:75 ADC #$7700
    case 0xC2031F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007700, 3); return true;
    // src/unknown/C2/C202AC.asm:75 ADC #$7700
    // Overlapping static entry reached from 0xC2031F.
    case 0xC20321: cpu.execute_instruction<0x77>(0x0000AA, 2); return true;
    // src/unknown/C2/C202AC.asm:115 TAX
    case 0xC20322: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:116 LDA @VIRTUAL04
    case 0xC20323: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C202AC.asm:117 JSL UNKNOWN_C444FB
    case 0xC20325: cpu.execute_instruction<0x22>(0xC444FB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C202AC.asm:120 END_C_FUNCTION
    case 0xC20329: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C202AC.asm:120 END_C_FUNCTION
    case 0xC2032A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2038B.asm (unresolved).
bool execute_unresolved_c2_c2038b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2038B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2038B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC2038D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC2038E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC2038F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2038F.
    case 0xC20391: cpu.execute_instruction<0xFF>(0x7EA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC20392: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20393.
    case 0xC20395: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1184 STA $0E
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20396: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20398: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20398.
    case 0xC2039A: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // include/macros.asm:1186 STA $10
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC2039B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC2039D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FE, 2); else cpu.execute_instruction<0xA0>(0x007DFE, 3); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC2039D.
    case 0xC2039F: cpu.execute_instruction<0x7D>(0x0000A2, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC203A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC203A0.
    case 0xC203A2: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC203A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC203A2.
    case 0xC203A4: cpu.execute_instruction<0x20>(0x002E22, 3); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC203A5: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC203A4.
    case 0xC203A7: cpu.execute_instruction<0x86>(0x0000C0, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203A9.
    case 0xC203AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203AE.
    case 0xC203B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x007F80, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203B3.
    case 0xC203B5: cpu.execute_instruction<0x7F>(0x0040A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203B6.
    case 0xC203B8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC203BD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203BB.
    case 0xC203BE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC203BE.
    case 0xC203C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2038B.asm:10 END_C_FUNCTION
    case 0xC203C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2038B.asm:10 END_C_FUNCTION
    case 0xC203C2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2077D.asm (unresolved).
bool execute_unresolved_c2_c2077d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2077D.asm:3 BEGIN_C_FUNCTION
    case 0xC2077D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC2077F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20780: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20781: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20781.
    case 0xC20783: cpu.execute_instruction<0xFF>(0x47AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20784: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:8 LDY CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC20785: cpu.execute_instruction<0xAC>(0x009647, 3); return true;
    // src/unknown/C2/C2077D.asm:8 LDY CURRENTLY_DRAWN_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC20783.
    case 0xC20787: cpu.execute_instruction<0x96>(0x000084, 2); return true;
    // src/unknown/C2/C2077D.asm:9 STY @LOCAL01
    case 0xC20788: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:9 STY @LOCAL01
    // Overlapping static entry reached from 0xC20787.
    case 0xC20789: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C2/C2077D.asm:10 LDX #0
    case 0xC2078A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2077D.asm:10 LDX #0
    // Overlapping static entry reached from 0xC20789.
    case 0xC2078B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2077D.asm:10 LDX #0
    // Overlapping static entry reached from 0xC2078A.
    case 0xC2078C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2077D.asm:11 STX @LOCAL00
    case 0xC2078D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:12 BRA @UNKNOWN2
    case 0xC2078F: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2077D.asm:14 TYA
    case 0xC20791: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:15 AND #$0001
    case 0xC20792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2077D.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC20792.
    case 0xC20794: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2077D.asm:16 BEQ @UNKNOWN1
    case 0xC20795: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2077D.asm:17 TXA
    case 0xC20797: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:18 JSR DRAW_HP_PP_WINDOW
    case 0xC20798: cpu.execute_instruction<0x20>(0x0003C3, 3); return true;
    // src/unknown/C2/C2077D.asm:20 LDY @LOCAL01
    case 0xC2079B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:21 TYA
    case 0xC2079D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:22 LSR
    case 0xC2079E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:23 TAY
    case 0xC2079F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:24 STY @LOCAL01
    case 0xC207A0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:25 LDX @LOCAL00
    case 0xC207A2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:26 INX
    case 0xC207A4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:27 STX @LOCAL00
    case 0xC207A5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:29 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC207A7: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C2077D.asm:30 AND #$00FF
    case 0xC207AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2077D.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC207AA.
    case 0xC207AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2077D.asm:31 STA @VIRTUAL02
    case 0xC207AD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2077D.asm:32 TXA
    case 0xC207AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:33 CMP @VIRTUAL02
    case 0xC207B0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2077D.asm:34 BNE @UNKNOWN0
    case 0xC207B2: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2077D.asm:35 END_C_FUNCTION
    case 0xC207B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2077D.asm:35 END_C_FUNCTION
    case 0xC207B5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C207B6.asm (unresolved).
bool execute_unresolved_c2_c207b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C207B6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC207B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC207BB.
    case 0xC207BD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC207BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C207B6.asm:8 STA @LOCAL00
    case 0xC207C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C207B6.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC207BD.
    case 0xC207C1: cpu.execute_instruction<0x0E>(0x0030E2, 3); return true;
    // src/unknown/C2/C207B6.asm:9 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC207C2: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C2/C207B6.asm:10 TAY
    case 0xC207C4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C207B6.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC207C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C207B6.asm:12 LDA #1
    case 0xC207C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C207B6.asm:12 LDA #1
    // Overlapping static entry reached from 0xC207C7.
    case 0xC207C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C207B6.asm:13 JSL ASL16_ENTRY2
    case 0xC207CA: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C2/C207B6.asm:14 ORA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC207CE: cpu.execute_instruction<0x0D>(0x009647, 3); return true;
    // src/unknown/C2/C207B6.asm:15 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC207D1: cpu.execute_instruction<0x8D>(0x009647, 3); return true;
    // src/unknown/C2/C207B6.asm:16 LDA @LOCAL00
    case 0xC207D4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C207B6.asm:17 JSR DRAW_HP_PP_WINDOW
    case 0xC207D6: cpu.execute_instruction<0x20>(0x0003C3, 3); return true;
    // src/unknown/C2/C207B6.asm:18 LDA #1
    case 0xC207D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C207B6.asm:18 LDA #1
    // Overlapping static entry reached from 0xC207D9.
    case 0xC207DB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C207B6.asm:19 STA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC207DC: cpu.execute_instruction<0x8D>(0x009649, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C207B6.asm:20 END_C_FUNCTION
    case 0xC207DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C207B6.asm:20 END_C_FUNCTION
    case 0xC207E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2087C.asm (unresolved).
bool execute_unresolved_c2_c2087c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2087C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2087C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC2087E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC2087F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20880: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20880.
    case 0xC20882: cpu.execute_instruction<0xFF>(0xC9AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20883: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    case 0xC20884: cpu.execute_instruction<0xAD>(0x0089C9, 3); return true;
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC20882.
    case 0xC20886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000029, 2); else cpu.execute_instruction<0x89>(0x00FF29, 3); return true;
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    case 0xC20887: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20886.
    case 0xC20888: cpu.execute_instruction<0xFF>(0x03F000, 4); return true;
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20887.
    case 0xC20889: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2087C.asm:9 BEQ @UNKNOWN0
    case 0xC2088A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C2/C2087C.asm:10 JSR UNKNOWN_C2077D
    case 0xC2088C: cpu.execute_instruction<0x20>(0x00077D, 3); return true;
    // src/unknown/C2/C2087C.asm:12 LDA WINDOW_HEAD
    case 0xC2088F: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    case 0xC20892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20892.
    case 0xC20894: cpu.execute_instruction<0xFF>(0xAC1FF0, 4); return true;
    // src/unknown/C2/C2087C.asm:14 BEQ @UNKNOWN2
    case 0xC20895: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    case 0xC20897: cpu.execute_instruction<0xAC>(0x0088E0, 3); return true;
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    // Overlapping static entry reached from 0xC20894.
    case 0xC20898: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000088, 2); else cpu.execute_instruction<0xE0>(0x008488, 3); return true;
    // src/unknown/C2/C2087C.asm:16 STY @LOCAL00
    case 0xC2089A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:16 STY @LOCAL00
    // Overlapping static entry reached from 0xC20898.
    case 0xC2089B: cpu.execute_instruction<0x0E>(0x002298, 3); return true;
    // src/unknown/C2/C2087C.asm:18 TYA
    case 0xC2089C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:19 JSL UNKNOWN_C107AF
    case 0xC2089D: cpu.execute_instruction<0x22>(0xC107AF, 4); return true;
    // src/unknown/C2/C2087C.asm:19 JSL UNKNOWN_C107AF
    // Overlapping static entry reached from 0xC2089B.
    case 0xC2089E: cpu.execute_instruction<0xAF>(0xA4C107, 4); return true;
    // src/unknown/C2/C2087C.asm:20 LDY @LOCAL00
    case 0xC208A1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:20 LDY @LOCAL00
    // Overlapping static entry reached from 0xC2089E.
    case 0xC208A2: cpu.execute_instruction<0x0E>(0x00A098, 3); return true;
    // src/unknown/C2/C2087C.asm:21 TYA
    case 0xC208A3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    case 0xC208A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208A2.
    case 0xC208A5: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208A4.
    case 0xC208A6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2087C.asm:23 JSL MULT168
    case 0xC208A7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2087C.asm:24 TAX
    case 0xC208AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:25 LDY WINDOW_STATS+window_stats::next,X
    case 0xC208AC: cpu.execute_instruction<0xBC>(0x008652, 3); return true;
    // src/unknown/C2/C2087C.asm:26 STY @LOCAL00
    case 0xC208AF: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    case 0xC208B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    // Overlapping static entry reached from 0xC208B1.
    case 0xC208B3: cpu.execute_instruction<0xFF>(0x2BE6D0, 4); return true;
    // src/unknown/C2/C2087C.asm:28 BNE @UNKNOWN1
    case 0xC208B4: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC208B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC208B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C208B8.asm (unresolved).
bool execute_unresolved_c2_c208b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C208B8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC208B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC208BD.
    case 0xC208BF: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC208C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:12 STX @LOCAL02
    case 0xC208C2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC208BF.
    case 0xC208C3: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C2/C208B8.asm:13 STA @LOCAL01
    case 0xC208C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C208B8.asm:13 STA @LOCAL01
    // Overlapping static entry reached from 0xC208C3.
    case 0xC208C5: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C2/C208B8.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC208C6: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C208B8.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208C5.
    case 0xC208C7: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208C7.
    case 0xC208C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C2/C208B8.asm:15 ASL
    case 0xC208C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:16 TAX
    case 0xC208CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC208CB: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C208B8.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC208CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C208B8.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208CE.
    case 0xC208D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C208B8.asm:19 JSL MULT168
    case 0xC208D1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C208B8.asm:20 CLC
    case 0xC208D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC208D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C2/C208B8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC208D6.
    case 0xC208D8: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C2/C208B8.asm:22 TAY
    case 0xC208D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:23 STY @LOCAL00
    case 0xC208DA: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C208B8.asm:24 LDA @LOCAL01
    case 0xC208DC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C208B8.asm:25 ASL
    case 0xC208DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:26 STA @VIRTUAL02
    case 0xC208DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:27 LDA a:window_stats::width,Y
    case 0xC208E1: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C2/C208B8.asm:28 TAY
    case 0xC208E4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:29 LDX @LOCAL02
    case 0xC208E5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:30 TXA
    case 0xC208E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:31 JSL MULT16
    case 0xC208E8: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C2/C208B8.asm:32 ASL
    case 0xC208EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:33 ASL
    case 0xC208ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:34 LDY @LOCAL00
    case 0xC208EE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C208B8.asm:35 CLC
    case 0xC208F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:36 ADC a:window_stats::tilemap_address,Y
    case 0xC208F1: cpu.execute_instruction<0x79>(0x000035, 3); return true;
    // src/unknown/C2/C208B8.asm:37 CLC
    case 0xC208F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:38 ADC @VIRTUAL02
    case 0xC208F5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:39 TAX
    case 0xC208F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:40 LDA __BSS_START__,X
    case 0xC208F8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C208B8.asm:41 AND #$03FF
    case 0xC208FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C2/C208B8.asm:41 AND #$03FF
    // Overlapping static entry reached from 0xC208FB.
    case 0xC208FD: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/unknown/C2/C208B8.asm:52 CMP #79
    case 0xC208FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004F, 2); else cpu.execute_instruction<0xC9>(0x00004F, 3); return true;
    // src/unknown/C2/C208B8.asm:52 CMP #79
    // Overlapping static entry reached from 0xC208FD.
    case 0xC208FF: cpu.execute_instruction<0x4F>(0x05F000, 4); return true;
    // src/unknown/C2/C208B8.asm:52 CMP #79
    // Overlapping static entry reached from 0xC208FE.
    case 0xC20900: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C208B8.asm:53 BEQ @UNKNOWN0
    case 0xC20901: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C208B8.asm:54 CMP #65
    case 0xC20903: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/unknown/C2/C208B8.asm:54 CMP #65
    // Overlapping static entry reached from 0xC20903.
    case 0xC20905: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C208B8.asm:55 BNE @UNKNOWN1
    case 0xC20906: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C208B8.asm:57 LDA #47
    case 0xC20908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/unknown/C2/C208B8.asm:57 LDA #47
    // Overlapping static entry reached from 0xC20908.
    case 0xC2090A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C208B8.asm:58 BRA @UNKNOWN2
    case 0xC2090B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C208B8.asm:60 LDA #64
    case 0xC2090D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C2/C208B8.asm:60 LDA #64
    // Overlapping static entry reached from 0xC2090D.
    case 0xC2090F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C208B8.asm:63 END_C_FUNCTION
    case 0xC20910: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C208B8.asm:63 END_C_FUNCTION
    case 0xC20911: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C209A0.asm (unresolved).
bool execute_unresolved_c2_c209a0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C209A0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC209A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC209A5.
    case 0xC209A7: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C209A0.asm:8 END_STACK_VARS
    case 0xC209A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:9 ASL
    case 0xC209AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:10 TAX
    case 0xC209AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0xC209AC: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C209A0.asm:12 CMP #$FFFF
    case 0xC209AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C209A0.asm:12 CMP #$FFFF
    // Overlapping static entry reached from 0xC209AF.
    case 0xC209B1: cpu.execute_instruction<0xFF>(0xA06AD0, 4); return true;
    // src/unknown/C2/C209A0.asm:13 BNE @UNKNOWN4
    case 0xC209B2: cpu.execute_instruction<0xD0>(0x00006A, 2); return true;
    // src/unknown/C2/C209A0.asm:14 LDY #.SIZEOF(window_stats)
    case 0xC209B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C209A0.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209B1.
    case 0xC209B5: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/unknown/C2/C209A0.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209B4.
    case 0xC209B6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C209A0.asm:15 JSL MULT168
    case 0xC209B7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C209A0.asm:16 CLC
    case 0xC209BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:17 ADC #.LOWORD(WINDOW_STATS)
    case 0xC209BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C2/C209A0.asm:17 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC209BC.
    case 0xC209BE: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C2/C209A0.asm:18 TAX
    case 0xC209BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:19 STX @LOCAL01
    case 0xC209C0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C209A0.asm:20 LDY a:window_stats::tilemap_address,X
    case 0xC209C2: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/unknown/C2/C209A0.asm:21 STY @LOCAL00
    case 0xC209C5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C209A0.asm:22 LDY a:window_stats::height,X
    case 0xC209C7: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/unknown/C2/C209A0.asm:23 LDA a:window_stats::width,X
    case 0xC209CA: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C209A0.asm:24 JSL MULT16
    case 0xC209CD: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C2/C209A0.asm:25 STA @VIRTUAL02
    case 0xC209D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C209A0.asm:26 BRA @UNKNOWN2
    case 0xC209D3: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C2/C209A0.asm:28 LDY @LOCAL00
    case 0xC209D5: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C209A0.asm:29 LDA __BSS_START__,Y
    case 0xC209D7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C209A0.asm:30 BEQ @UNKNOWN1
    case 0xC209DA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C209A0.asm:31 JSL FREE_TILE_SAFE
    case 0xC209DC: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C2/C209A0.asm:33 LDA #64
    case 0xC209E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C2/C209A0.asm:33 LDA #64
    // Overlapping static entry reached from 0xC209E0.
    case 0xC209E2: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C209A0.asm:34 LDY @LOCAL00
    case 0xC209E3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C209A0.asm:35 STA __BSS_START__,Y
    case 0xC209E5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C209A0.asm:36 INY
    case 0xC209E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:37 INY
    case 0xC209E9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:38 STY @LOCAL00
    case 0xC209EA: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C209A0.asm:39 LDA @VIRTUAL02
    case 0xC209EC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C209A0.asm:40 DEC
    case 0xC209EE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:41 STA @VIRTUAL02
    case 0xC209EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C209A0.asm:43 LDA @VIRTUAL02
    case 0xC209F1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C209A0.asm:44 BNE @UNKNOWN0
    case 0xC209F3: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C2/C209A0.asm:45 LDX @LOCAL01
    case 0xC209F5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C209A0.asm:46 LDA a:window_stats::unknown59,X
    case 0xC209F7: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/unknown/C2/C209A0.asm:47 AND #$00FF
    case 0xC209FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C209A0.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC209FA.
    case 0xC209FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C209A0.asm:48 BEQ @UNKNOWN3
    case 0xC209FD: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C209A0.asm:49 AND #$00FF
    case 0xC209FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C209A0.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC209FF.
    case 0xC20A01: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C209A0.asm:50 DEC
    case 0xC20A02: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:51 ASL
    case 0xC20A03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:52 TAX
    case 0xC20A04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C209A0.asm:53 LDA #$FFFF
    case 0xC20A05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C209A0.asm:53 LDA #$FFFF
    // Overlapping static entry reached from 0xC20A05.
    case 0xC20A07: cpu.execute_instruction<0xFF>(0x894E9D, 4); return true;
    // src/unknown/C2/C209A0.asm:54 STA TITLED_WINDOWS,X
    case 0xC20A08: cpu.execute_instruction<0x9D>(0x00894E, 3); return true;
    // src/unknown/C2/C209A0.asm:56 LDX @LOCAL01
    case 0xC20A0B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C209A0.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC20A0D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C209A0.asm:58 STZ a:window_stats::title,X
    case 0xC20A0F: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/unknown/C2/C209A0.asm:59 STZ a:window_stats::unknown59,X
    case 0xC20A12: cpu.execute_instruction<0x9E>(0x00003B, 3); return true;
    // src/unknown/C2/C209A0.asm:60 LDA #1
    case 0xC20A15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C2/C209A0.asm:61 STA REDRAW_ALL_WINDOWS
    case 0xC20A17: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C2/C209A0.asm:61 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC20A15.
    case 0xC20A18: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C2/C209A0.asm:62 JSL UNKNOWN_C07C5B
    case 0xC20A1A: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C209A0.asm:64 END_C_FUNCTION
    case 0xC20A1E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C209A0.asm:64 END_C_FUNCTION
    case 0xC20A1F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20A20.asm (unresolved).
bool execute_unresolved_c2_c20a20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20A20.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20A20: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A22: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A23: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20A25.
    case 0xC20A27: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A29: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:8 TAX
    case 0xC20A2A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:9 STX @LOCAL00
    case 0xC20A2B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A2D: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:11 STA a:window_text_attributes_copy::id,X
    case 0xC20A30: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C20A20.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A33: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    case 0xC20A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20A36.
    case 0xC20A38: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC20A39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC20A3B: cpu.execute_instruction<0x4C>(0x000ABA, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC20A38.
    case 0xC20A3C: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC20A3C.
    case 0xC20A3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A3E: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:16 ASL
    case 0xC20A41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:17 TAX
    case 0xC20A42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A43: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC20A46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A46.
    case 0xC20A48: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:20 JSL MULT168
    case 0xC20A49: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20A20.asm:21 TAX
    case 0xC20A4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:22 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC20A4E: cpu.execute_instruction<0xBD>(0x00865E, 3); return true;
    // src/unknown/C2/C20A20.asm:23 LDX @LOCAL00
    case 0xC20A51: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:24 STA a:window_text_attributes_copy::text_x,X
    case 0xC20A53: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C2/C20A20.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A56: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:26 ASL
    case 0xC20A59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:27 TAX
    case 0xC20A5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A5B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    case 0xC20A5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A5E.
    case 0xC20A60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:30 JSL MULT168
    case 0xC20A61: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20A20.asm:31 TAX
    case 0xC20A65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:32 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC20A66: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/unknown/C2/C20A20.asm:33 LDX @LOCAL00
    case 0xC20A69: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:34 STA a:window_text_attributes_copy::text_y,X
    case 0xC20A6B: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C2/C20A20.asm:35 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A6E: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:36 ASL
    case 0xC20A71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:37 TAX
    case 0xC20A72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:38 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A73: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    case 0xC20A76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A76.
    case 0xC20A78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:40 JSL MULT168
    case 0xC20A79: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20A20.asm:41 TAX
    case 0xC20A7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC20A7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C20A20.asm:43 LDA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20A80: cpu.execute_instruction<0xBD>(0x008662, 3); return true;
    // src/unknown/C2/C20A20.asm:44 LDX @LOCAL00
    case 0xC20A83: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:45 STA a:window_text_attributes_copy::number_padding,X
    case 0xC20A85: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C2/C20A20.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC20A88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C20A20.asm:47 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A8A: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:48 ASL
    case 0xC20A8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:49 TAX
    case 0xC20A8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:50 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A8F: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC20A92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A92.
    case 0xC20A94: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:52 JSL MULT168
    case 0xC20A95: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20A20.asm:53 TAX
    case 0xC20A99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:54 LDA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC20A9A: cpu.execute_instruction<0xBD>(0x008663, 3); return true;
    // src/unknown/C2/C20A20.asm:55 LDX @LOCAL00
    case 0xC20A9D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:56 STA a:window_text_attributes_copy::curr_tile_attributes,X
    case 0xC20A9F: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/unknown/C2/C20A20.asm:57 LDA CURRENT_FOCUS_WINDOW
    case 0xC20AA2: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20A20.asm:58 ASL
    case 0xC20AA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:59 TAX
    case 0xC20AA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:60 LDA OPEN_WINDOW_TABLE,X
    case 0xC20AA7: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC20AAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20AAA.
    case 0xC20AAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:62 JSL MULT168
    case 0xC20AAD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20A20.asm:63 TAX
    case 0xC20AB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:64 LDA WINDOW_STATS+window_stats::font,X
    case 0xC20AB2: cpu.execute_instruction<0xBD>(0x008665, 3); return true;
    // src/unknown/C2/C20A20.asm:65 LDX @LOCAL00
    case 0xC20AB5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:66 STA a:window_text_attributes_copy::font,X
    case 0xC20AB7: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC20ABA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC20ABB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20ABC.asm (unresolved).
bool execute_unresolved_c2_c20abc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20ABC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20ABC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20ABE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20ABF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20AC1.
    case 0xC20AC3: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:9 TAY
    case 0xC20AC6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:10 STY @LOCAL01
    case 0xC20AC7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:11 LDA __BSS_START__,Y
    case 0xC20AC9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:12 STA @LOCAL00
    case 0xC20ACC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    case 0xC20ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20ACE.
    case 0xC20AD0: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20AD1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20AD3: cpu.execute_instruction<0x4C>(0x000B63, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20AD0.
    case 0xC20AD4: cpu.execute_instruction<0x63>(0x00000B, 2); return true;
    // src/unknown/C2/C20ABC.asm:15 ASL
    case 0xC20AD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:16 CLC
    case 0xC20AD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC20AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x0088E4, 3); return true;
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC20AD8.
    case 0xC20ADA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:18 TAX
    case 0xC20ADB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    case 0xC20ADC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    case 0xC20ADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC20ADF.
    case 0xC20AE1: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20AE2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20AE4: cpu.execute_instruction<0x4C>(0x000B63, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20AE1.
    case 0xC20AE5: cpu.execute_instruction<0x63>(0x00000B, 2); return true;
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    case 0xC20AE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    case 0xC20AE9: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    case 0xC20AEC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    case 0xC20AEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20AEF.
    case 0xC20AF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:26 JSL MULT168
    case 0xC20AF2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20ABC.asm:27 TAX
    case 0xC20AF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:28 LDY @LOCAL01
    case 0xC20AF7: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:29 LDA a:window_text_attributes_copy::text_x,Y
    case 0xC20AF9: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C2/C20ABC.asm:30 STA WINDOW_STATS+window_stats::text_x,X
    case 0xC20AFC: cpu.execute_instruction<0x9D>(0x00865E, 3); return true;
    // src/unknown/C2/C20ABC.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC20AFF: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20ABC.asm:32 ASL
    case 0xC20B02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:33 TAX
    case 0xC20B03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B04: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC20B07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B07.
    case 0xC20B09: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:36 JSL MULT168
    case 0xC20B0A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20ABC.asm:37 TAX
    case 0xC20B0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:38 LDY @LOCAL01
    case 0xC20B0F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:39 LDA a:window_text_attributes_copy::text_y,Y
    case 0xC20B11: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C2/C20ABC.asm:40 STA WINDOW_STATS+window_stats::text_y,X
    case 0xC20B14: cpu.execute_instruction<0x9D>(0x008660, 3); return true;
    // src/unknown/C2/C20ABC.asm:41 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B17: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20ABC.asm:42 ASL
    case 0xC20B1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:43 TAX
    case 0xC20B1B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:44 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B1C: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    case 0xC20B1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B1F.
    case 0xC20B21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:46 JSL MULT168
    case 0xC20B22: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20ABC.asm:47 TAX
    case 0xC20B26: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:48 LDY @LOCAL01
    case 0xC20B27: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC20B29: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C20ABC.asm:50 LDA a:window_text_attributes_copy::number_padding,Y
    case 0xC20B2B: cpu.execute_instruction<0xB9>(0x000006, 3); return true;
    // src/unknown/C2/C20ABC.asm:51 STA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20B2E: cpu.execute_instruction<0x9D>(0x008662, 3); return true;
    // src/unknown/C2/C20ABC.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC20B31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C20ABC.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B33: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20ABC.asm:54 ASL
    case 0xC20B36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:55 TAX
    case 0xC20B37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:56 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B38: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC20B3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B3B.
    case 0xC20B3D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:58 JSL MULT168
    case 0xC20B3E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20ABC.asm:59 TAX
    case 0xC20B42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:60 LDY @LOCAL01
    case 0xC20B43: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:61 LDA a:window_text_attributes_copy::curr_tile_attributes,Y
    case 0xC20B45: cpu.execute_instruction<0xB9>(0x000007, 3); return true;
    // src/unknown/C2/C20ABC.asm:62 STA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC20B48: cpu.execute_instruction<0x9D>(0x008663, 3); return true;
    // src/unknown/C2/C20ABC.asm:63 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B4B: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20ABC.asm:64 ASL
    case 0xC20B4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:65 TAX
    case 0xC20B4F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:66 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B50: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    case 0xC20B53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B53.
    case 0xC20B55: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:68 JSL MULT168
    case 0xC20B56: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20ABC.asm:69 TAX
    case 0xC20B5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:70 LDY @LOCAL01
    case 0xC20B5B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:71 LDA a:window_text_attributes_copy::font,Y
    case 0xC20B5D: cpu.execute_instruction<0xB9>(0x000009, 3); return true;
    // src/unknown/C2/C20ABC.asm:72 STA WINDOW_STATS+window_stats::font,X
    case 0xC20B60: cpu.execute_instruction<0x9D>(0x008665, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC20B63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC20B64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20B65.asm (unresolved).
bool execute_unresolved_c2_c20b65_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20B65.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20B65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B67: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B68: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC20B6A.
    case 0xC20B6C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC20B6E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:19 STY @VIRTUAL04
    case 0xC20B6F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:19 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC20B6C.
    case 0xC20B70: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C2/C20B65.asm:20 STX @LOCAL06
    case 0xC20B71: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:20 STX @LOCAL06
    // Overlapping static entry reached from 0xC20B70.
    case 0xC20B72: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:21 STA @LOCAL05
    case 0xC20B73: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:22 LDX @PARAM04
    case 0xC20B75: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C2/C20B65.asm:23 STX @LOCAL04
    case 0xC20B77: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:24 LDY @PARAM03
    case 0xC20B79: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C2/C20B65.asm:25 STY @LOCAL03
    case 0xC20B7B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B7D: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C2/C20B65.asm:27 ASL
    case 0xC20B80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:28 TAX
    case 0xC20B81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:29 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B82: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C2/C20B65.asm:30 LDY #.SIZEOF(window_stats)
    case 0xC20B85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C2/C20B65.asm:30 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B85.
    case 0xC20B87: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20B65.asm:31 JSL MULT168
    case 0xC20B88: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C20B65.asm:32 CLC
    case 0xC20B8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:33 ADC #.LOWORD(WINDOW_STATS)
    case 0xC20B8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C2/C20B65.asm:33 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC20B8D.
    case 0xC20B8F: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C2/C20B65.asm:34 STA @LOCAL02
    case 0xC20B90: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:34 STA @LOCAL02
    // Overlapping static entry reached from 0xC20B8F.
    case 0xC20B91: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:35 LDA @LOCAL05
    case 0xC20B92: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:35 LDA @LOCAL05
    // Overlapping static entry reached from 0xC20B91.
    case 0xC20B93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:36 STA @VIRTUAL02
    case 0xC20B94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:37 STA @LOCAL01
    case 0xC20B96: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:38 LDY @LOCAL06
    case 0xC20B98: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:39 STY @LOCAL00
    case 0xC20B9A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:40 LDA @VIRTUAL04
    case 0xC20B9C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:41 BEQL @UNKNOWN14
    case 0xC20B9E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:41 BEQL @UNKNOWN14
    case 0xC20BA0: cpu.execute_instruction<0x4C>(0x000C70, 3); return true;
    // src/unknown/C2/C20B65.asm:42 TYA
    case 0xC20BA3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:43 CLC
    case 0xC20BA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:44 ADC @VIRTUAL04
    case 0xC20BA5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:45 TAY
    case 0xC20BA7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:46 STY @LOCAL00
    case 0xC20BA8: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:47 BRA @UNKNOWN3
    case 0xC20BAA: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:49 TYX
    case 0xC20BAC: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:50 LDA @LOCAL01
    case 0xC20BAD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:51 STA @VIRTUAL02
    case 0xC20BAF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:52 JSL UNKNOWN_C208B8
    case 0xC20BB1: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:53 CMP #$002F
    case 0xC20BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:53 CMP #$002F
    // Overlapping static entry reached from 0xC20BB5.
    case 0xC20BB7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:54 BEQL @UNKNOWN27
    case 0xC20BB8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:54 BEQL @UNKNOWN27
    case 0xC20BBA: cpu.execute_instruction<0x4C>(0x000D26, 3); return true;
    // src/unknown/C2/C20B65.asm:55 LDY @LOCAL00
    case 0xC20BBD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:56 TYA
    case 0xC20BBF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:57 CLC
    case 0xC20BC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:58 ADC @VIRTUAL04
    case 0xC20BC1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:59 TAY
    case 0xC20BC3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:60 STY @LOCAL00
    case 0xC20BC4: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:62 LDY #window_stats::height
    case 0xC20BC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:62 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20BC6.
    case 0xC20BC8: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:63 LDA (@LOCAL02),Y
    case 0xC20BC9: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:64 LSR
    case 0xC20BCB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:65 STA @VIRTUAL02
    case 0xC20BCC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:66 LDY @LOCAL00
    case 0xC20BCE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:67 TYA
    case 0xC20BD0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:68 CMP @VIRTUAL02
    case 0xC20BD1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:69 BCC @UNKNOWN1
    case 0xC20BD3: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C2/C20B65.asm:70 LDA @VIRTUAL04
    case 0xC20BD5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:71 CLC
    case 0xC20BD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:72 ADC @LOCAL06
    case 0xC20BD8: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:73 TAY
    case 0xC20BDA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:74 STY @LOCAL00
    case 0xC20BDB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:75 BRA @UNKNOWN8
    case 0xC20BDD: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/C2/C20B65.asm:77 LDA @LOCAL01
    case 0xC20BDF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:78 STA @VIRTUAL02
    case 0xC20BE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:79 DEC
    case 0xC20BE3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:80 STA @VIRTUAL02
    case 0xC20BE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:81 BRA @UNKNOWN7
    case 0xC20BE6: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:83 LDY @LOCAL00
    case 0xC20BE8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:84 TYX
    case 0xC20BEA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:85 LDA @VIRTUAL02
    case 0xC20BEB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:86 JSL UNKNOWN_C208B8
    case 0xC20BED: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:87 CMP #$002F
    case 0xC20BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:87 CMP #$002F
    // Overlapping static entry reached from 0xC20BF1.
    case 0xC20BF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:88 BEQL @UNKNOWN27
    case 0xC20BF4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:88 BEQL @UNKNOWN27
    case 0xC20BF6: cpu.execute_instruction<0x4C>(0x000D26, 3); return true;
    // src/unknown/C2/C20B65.asm:89 LDA @VIRTUAL02
    case 0xC20BF9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:90 DEC
    case 0xC20BFB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:91 STA @VIRTUAL02
    case 0xC20BFC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:93 LDY #window_stats::width
    case 0xC20BFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:93 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20BFE.
    case 0xC20C00: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:94 LDA @VIRTUAL02
    case 0xC20C01: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:95 CMP (@LOCAL02),Y
    case 0xC20C03: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:96 BCC @UNKNOWN5
    case 0xC20C05: cpu.execute_instruction<0x90>(0x0000E1, 2); return true;
    // src/unknown/C2/C20B65.asm:97 LDA @LOCAL05
    case 0xC20C07: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:98 STA @VIRTUAL02
    case 0xC20C09: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:99 STA @LOCAL01
    case 0xC20C0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:100 LDY @LOCAL00
    case 0xC20C0D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:101 TYA
    case 0xC20C0F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:102 CLC
    case 0xC20C10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:103 ADC @VIRTUAL04
    case 0xC20C11: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:104 TAY
    case 0xC20C13: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:105 STY @LOCAL00
    case 0xC20C14: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:107 LDY #window_stats::height
    case 0xC20C16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:107 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20C16.
    case 0xC20C18: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:108 LDA (@LOCAL02),Y
    case 0xC20C19: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:109 LSR
    case 0xC20C1B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:110 STA @VIRTUAL02
    case 0xC20C1C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:111 LDY @LOCAL00
    case 0xC20C1E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:112 TYA
    case 0xC20C20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:113 CMP @VIRTUAL02
    case 0xC20C21: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:114 BCC @UNKNOWN4
    case 0xC20C23: cpu.execute_instruction<0x90>(0x0000BA, 2); return true;
    // src/unknown/C2/C20B65.asm:115 LDX @LOCAL05
    case 0xC20C25: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:116 LDA @VIRTUAL04
    case 0xC20C27: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:117 CLC
    case 0xC20C29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:118 ADC @LOCAL06
    case 0xC20C2A: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:119 TAY
    case 0xC20C2C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:120 STY @LOCAL00
    case 0xC20C2D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:121 BRA @UNKNOWN13
    case 0xC20C2F: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C2/C20B65.asm:123 STX @VIRTUAL02
    case 0xC20C31: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:124 INC @VIRTUAL02
    case 0xC20C33: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:125 BRA @UNKNOWN12
    case 0xC20C35: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C20B65.asm:127 LDY @LOCAL00
    case 0xC20C37: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:128 TYX
    case 0xC20C39: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:129 LDA @VIRTUAL02
    case 0xC20C3A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:130 JSL UNKNOWN_C208B8
    case 0xC20C3C: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:131 CMP #$002F
    case 0xC20C40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:131 CMP #$002F
    // Overlapping static entry reached from 0xC20C40.
    case 0xC20C42: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:132 BEQL @UNKNOWN27
    case 0xC20C43: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:132 BEQL @UNKNOWN27
    case 0xC20C45: cpu.execute_instruction<0x4C>(0x000D26, 3); return true;
    // src/unknown/C2/C20B65.asm:133 INC @VIRTUAL02
    case 0xC20C48: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:135 LDY #window_stats::width
    case 0xC20C4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:135 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20C4A.
    case 0xC20C4C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:136 LDA @VIRTUAL02
    case 0xC20C4D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:137 CMP (@LOCAL02),Y
    case 0xC20C4F: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:138 BCC @UNKNOWN10
    case 0xC20C51: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/unknown/C2/C20B65.asm:139 LDX @LOCAL05
    case 0xC20C53: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:140 LDY @LOCAL00
    case 0xC20C55: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:141 TYA
    case 0xC20C57: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:142 CLC
    case 0xC20C58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:143 ADC @VIRTUAL04
    case 0xC20C59: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:144 TAY
    case 0xC20C5B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:145 STY @LOCAL00
    case 0xC20C5C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:147 LDY #window_stats::height
    case 0xC20C5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:147 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20C5E.
    case 0xC20C60: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:148 LDA (@LOCAL02),Y
    case 0xC20C61: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:149 LSR
    case 0xC20C63: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:150 STA @VIRTUAL02
    case 0xC20C64: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:151 LDY @LOCAL00
    case 0xC20C66: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:152 TYA
    case 0xC20C68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:153 CMP @VIRTUAL02
    case 0xC20C69: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:154 BCC @UNKNOWN9
    case 0xC20C6B: cpu.execute_instruction<0x90>(0x0000C4, 2); return true;
    // src/unknown/C2/C20B65.asm:155 JMP @UNKNOWN26
    case 0xC20C6D: cpu.execute_instruction<0x4C>(0x000D21, 3); return true;
    // src/unknown/C2/C20B65.asm:157 LDA @VIRTUAL02
    case 0xC20C70: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:158 CLC
    case 0xC20C72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:159 ADC @LOCAL03
    case 0xC20C73: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:160 STA @VIRTUAL02
    case 0xC20C75: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:161 BRA @UNKNOWN17
    case 0xC20C77: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:163 LDY @LOCAL00
    case 0xC20C79: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:164 TYX
    case 0xC20C7B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:165 LDA @VIRTUAL02
    case 0xC20C7C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:166 JSL UNKNOWN_C208B8
    case 0xC20C7E: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:167 CMP #$002F
    case 0xC20C82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:167 CMP #$002F
    // Overlapping static entry reached from 0xC20C82.
    case 0xC20C84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:168 BEQL @UNKNOWN27
    case 0xC20C85: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:168 BEQL @UNKNOWN27
    case 0xC20C87: cpu.execute_instruction<0x4C>(0x000D26, 3); return true;
    // src/unknown/C2/C20B65.asm:169 LDA @VIRTUAL02
    case 0xC20C8A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:170 CLC
    case 0xC20C8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:171 ADC @LOCAL03
    case 0xC20C8D: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:172 STA @VIRTUAL02
    case 0xC20C8F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:174 LDY #window_stats::width
    case 0xC20C91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:174 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20C91.
    case 0xC20C93: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:175 LDA @VIRTUAL02
    case 0xC20C94: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:176 CMP (@LOCAL02),Y
    case 0xC20C96: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:177 BCC @UNKNOWN15
    case 0xC20C98: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C2/C20B65.asm:178 LDA @LOCAL05
    case 0xC20C9A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:179 CLC
    case 0xC20C9C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:180 ADC @LOCAL03
    case 0xC20C9D: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:181 STA @VIRTUAL02
    case 0xC20C9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:182 BRA @UNKNOWN21
    case 0xC20CA1: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C2/C20B65.asm:184 LDY @LOCAL00
    case 0xC20CA3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:185 DEY
    case 0xC20CA5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:186 STY @LOCAL00
    case 0xC20CA6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:187 BRA @UNKNOWN20
    case 0xC20CA8: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C20B65.asm:189 TYX
    case 0xC20CAA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:190 LDA @VIRTUAL02
    case 0xC20CAB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:191 JSL UNKNOWN_C208B8
    case 0xC20CAD: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:192 CMP #$002F
    case 0xC20CB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:192 CMP #$002F
    // Overlapping static entry reached from 0xC20CB1.
    case 0xC20CB3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20B65.asm:193 BEQ @UNKNOWN27
    case 0xC20CB4: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C2/C20B65.asm:194 LDY @LOCAL00
    case 0xC20CB6: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:195 DEY
    case 0xC20CB8: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:196 STY @LOCAL00
    case 0xC20CB9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:198 LDY #window_stats::height
    case 0xC20CBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:198 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20CBB.
    case 0xC20CBD: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:199 LDA (@LOCAL02),Y
    case 0xC20CBE: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:200 LSR
    case 0xC20CC0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:201 STA @VIRTUAL04
    case 0xC20CC1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:202 LDY @LOCAL00
    case 0xC20CC3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:203 TYA
    case 0xC20CC5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:204 CMP @VIRTUAL04
    case 0xC20CC6: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:205 BCC @UNKNOWN19
    case 0xC20CC8: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C20B65.asm:206 LDY @LOCAL06
    case 0xC20CCA: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:207 STY @LOCAL00
    case 0xC20CCC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:208 LDA @VIRTUAL02
    case 0xC20CCE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:209 CLC
    case 0xC20CD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:210 ADC @LOCAL03
    case 0xC20CD1: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:211 STA @VIRTUAL02
    case 0xC20CD3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:213 LDY #window_stats::width
    case 0xC20CD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20CD5.
    case 0xC20CD7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:214 LDA @VIRTUAL02
    case 0xC20CD8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:215 CMP (@LOCAL02),Y
    case 0xC20CDA: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:216 BCC @UNKNOWN18
    case 0xC20CDC: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/unknown/C2/C20B65.asm:217 LDX @LOCAL06
    case 0xC20CDE: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:218 LDA @LOCAL05
    case 0xC20CE0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:219 CLC
    case 0xC20CE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:220 ADC @LOCAL03
    case 0xC20CE3: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:221 STA @VIRTUAL02
    case 0xC20CE5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:222 BRA @UNKNOWN25
    case 0xC20CE7: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C2/C20B65.asm:224 TXY
    case 0xC20CE9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:225 INY
    case 0xC20CEA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:226 STY @LOCAL00
    case 0xC20CEB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:227 BRA @UNKNOWN24
    case 0xC20CED: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C20B65.asm:229 TYX
    case 0xC20CEF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:230 LDA @VIRTUAL02
    case 0xC20CF0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:231 JSL UNKNOWN_C208B8
    case 0xC20CF2: cpu.execute_instruction<0x22>(0xC208B8, 4); return true;
    // src/unknown/C2/C20B65.asm:232 CMP #$002F
    case 0xC20CF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:232 CMP #$002F
    // Overlapping static entry reached from 0xC20CF6.
    case 0xC20CF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20B65.asm:233 BEQ @UNKNOWN27
    case 0xC20CF9: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C20B65.asm:234 LDY @LOCAL00
    case 0xC20CFB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:235 INY
    case 0xC20CFD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:236 STY @LOCAL00
    case 0xC20CFE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:238 LDY #window_stats::height
    case 0xC20D00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:238 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20D00.
    case 0xC20D02: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:239 LDA (@LOCAL02),Y
    case 0xC20D03: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:240 LSR
    case 0xC20D05: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:241 STA @VIRTUAL04
    case 0xC20D06: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:242 LDY @LOCAL00
    case 0xC20D08: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:243 TYA
    case 0xC20D0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:244 CMP @VIRTUAL04
    case 0xC20D0B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:245 BCC @UNKNOWN23
    case 0xC20D0D: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C20B65.asm:246 LDX @LOCAL06
    case 0xC20D0F: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:247 LDA @VIRTUAL02
    case 0xC20D11: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:248 CLC
    case 0xC20D13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:249 ADC @LOCAL03
    case 0xC20D14: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:250 STA @VIRTUAL02
    case 0xC20D16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:252 LDY #window_stats::width
    case 0xC20D18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:252 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20D18.
    case 0xC20D1A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:253 LDA @VIRTUAL02
    case 0xC20D1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:254 CMP (@LOCAL02),Y
    case 0xC20D1D: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:255 BCC @UNKNOWN22
    case 0xC20D1F: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C2/C20B65.asm:257 LDA #$FFFF
    case 0xC20D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20B65.asm:257 LDA #$FFFF
    // Overlapping static entry reached from 0xC20D21.
    case 0xC20D23: cpu.execute_instruction<0xFF>(0xA51780, 4); return true;
    // src/unknown/C2/C20B65.asm:258 BRA @UNKNOWN29
    case 0xC20D24: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C2/C20B65.asm:260 LDA @LOCAL04
    case 0xC20D26: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:260 LDA @LOCAL04
    // Overlapping static entry reached from 0xC20D23.
    case 0xC20D27: cpu.execute_instruction<0x16>(0x0000C9, 2); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    case 0xC20D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    // Overlapping static entry reached from 0xC20D27.
    case 0xC20D29: cpu.execute_instruction<0xFF>(0x06F0FF, 4); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    // Overlapping static entry reached from 0xC20D28.
    case 0xC20D2A: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C2/C20B65.asm:262 BEQ @UNKNOWN28
    case 0xC20D2B: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C2/C20B65.asm:263 LDA @LOCAL04
    case 0xC20D2D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:263 LDA @LOCAL04
    // Overlapping static entry reached from 0xC20D2A.
    case 0xC20D2E: cpu.execute_instruction<0x16>(0x000022, 2); return true;
    // src/unknown/C2/C20B65.asm:264 JSL PLAY_SOUND
    case 0xC20D2F: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C2/C20B65.asm:264 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC20D2E.
    case 0xC20D30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AB, 2); else cpu.execute_instruction<0xE0>(0x00C0AB, 3); return true;
    // src/unknown/C2/C20B65.asm:264 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC20D30.
    case 0xC20D32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x000EA4, 3); return true;
    // src/unknown/C2/C20B65.asm:266 LDY @LOCAL00
    case 0xC20D33: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:266 LDY @LOCAL00
    // Overlapping static entry reached from 0xC20D32.
    case 0xC20D34: cpu.execute_instruction<0x0E>(0x00EB98, 3); return true;
    // src/unknown/C2/C20B65.asm:267 TYA
    case 0xC20D35: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:268 XBA
    case 0xC20D36: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:269 AND #$FF00
    case 0xC20D37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C2/C20B65.asm:269 AND #$FF00
    // Overlapping static entry reached from 0xC20D37.
    case 0xC20D39: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C2/C20B65.asm:270 CLC
    case 0xC20D3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:271 ADC @VIRTUAL02
    case 0xC20D3B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20B65.asm:273 END_C_FUNCTION
    case 0xC20D3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20B65.asm:273 END_C_FUNCTION
    case 0xC20D3E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20F58.asm (unresolved).
bool execute_unresolved_c2_c20f58_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20F58.asm:3 BEGIN_C_FUNCTION
    case 0xC20F58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20F5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20F5B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F5C.
    case 0xC20F5E: cpu.execute_instruction<0xFF>(0x95AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20F5F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C20F58.asm:7 LDA HALF_HPPP_METER_SPEED
    case 0xC20F60: cpu.execute_instruction<0xAD>(0x009695, 3); return true;
    // src/unknown/C2/C20F58.asm:7 LDA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC20F5E.
    case 0xC20F62: cpu.execute_instruction<0x96>(0x000029, 2); return true;
    // src/unknown/C2/C20F58.asm:8 AND #$00FF
    case 0xC20F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C20F58.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20F62.
    case 0xC20F64: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C2/C20F58.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20F63.
    case 0xC20F65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20F58.asm:9 BEQ @UNKNOWN0
    case 0xC20F66: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C2/C20F58.asm:10 SEP #PROC_FLAGS::INDEX8
    case 0xC20F68: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C20F58.asm:11 LDY #1
    case 0xC20F6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00AD01, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F6C: cpu.execute_instruction<0xAD>(0x009627, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    // Overlapping static entry reached from 0xC20F6A.
    case 0xC20F6D: cpu.execute_instruction<0x27>(0x000096, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F6F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F71: cpu.execute_instruction<0xAD>(0x009629, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C20F58.asm:13 JSL ASR32
    case 0xC20F76: cpu.execute_instruction<0x22>(0xC09262, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F7A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F7C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F7E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F80: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C20F58.asm:15 BRA @UNKNOWN1
    case 0xC20F82: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F84: cpu.execute_instruction<0xAD>(0x009627, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F89: cpu.execute_instruction<0xAD>(0x009629, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20F8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F90: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20F94: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C20F58.asm:20 REP #PROC_FLAGS::INDEX8
    case 0xC20F96: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20F58.asm:21 END_C_FUNCTION
    case 0xC20F98: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C20F58.asm:21 END_C_FUNCTION
    case 0xC20F99: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C21034.asm (unresolved).
bool execute_unresolved_c2_c21034_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C21034.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21034: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC21036: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC21037: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC21038: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC21038.
    case 0xC2103A: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC2103B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:12 LDY #0
    case 0xC2103C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C21034.asm:12 LDY #0
    // Overlapping static entry reached from 0xC2103C.
    case 0xC2103E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C21034.asm:13 STY @LOCAL00
    case 0xC2103F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:15 BRA @UNKNOWN3
    case 0xC21041: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/C2/C21034.asm:23 LDA GAME_STATE + game_state::party_members,Y
    case 0xC21043: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/unknown/C2/C21034.asm:25 AND #$00FF
    case 0xC21046: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C21034.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC21046.
    case 0xC21048: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C21034.asm:26 DEC
    case 0xC21049: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC2104A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C21034.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2104A.
    case 0xC2104C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C21034.asm:28 JSL MULT168
    case 0xC2104D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C21034.asm:29 CLC
    case 0xC21051: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21052: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C2/C21034.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21052.
    case 0xC21054: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/unknown/C2/C21034.asm:31 TAX
    case 0xC21055: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:32 LDA a:char_struct::current_hp_fraction,X
    case 0xC21056: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/unknown/C2/C21034.asm:32 LDA a:char_struct::current_hp_fraction,X
    // Overlapping static entry reached from 0xC21054.
    case 0xC21057: cpu.execute_instruction<0x43>(0x000000, 2); return true;
    // src/unknown/C2/C21034.asm:33 BNE @UNKNOWN1
    case 0xC21059: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C2/C21034.asm:34 LDA a:char_struct::current_pp_fraction,X
    case 0xC2105B: cpu.execute_instruction<0xBD>(0x000049, 3); return true;
    // src/unknown/C2/C21034.asm:35 BNE @UNKNOWN1
    case 0xC2105E: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C21034.asm:36 LDA a:char_struct::current_hp,X
    case 0xC21060: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/unknown/C2/C21034.asm:37 CMP a:char_struct::current_hp_target,X
    case 0xC21063: cpu.execute_instruction<0xDD>(0x000047, 3); return true;
    // src/unknown/C2/C21034.asm:38 BNE @UNKNOWN1
    case 0xC21066: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C21034.asm:39 LDA a:char_struct::current_pp,X
    case 0xC21068: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/unknown/C2/C21034.asm:40 CMP a:char_struct::current_pp_target,X
    case 0xC2106B: cpu.execute_instruction<0xDD>(0x00004D, 3); return true;
    // src/unknown/C2/C21034.asm:41 BEQ @UNKNOWN2
    case 0xC2106E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C21034.asm:43 LDA #0
    case 0xC21070: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C21034.asm:43 LDA #0
    // Overlapping static entry reached from 0xC21070.
    case 0xC21072: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C21034.asm:44 BRA @UNKNOWN4
    case 0xC21073: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C21034.asm:51 LDY @LOCAL00
    case 0xC21075: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:52 INY
    case 0xC21077: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:53 STY @LOCAL00
    case 0xC21078: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC2107A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C21034.asm:57 AND #$00FF
    case 0xC2107D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C21034.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC2107D.
    case 0xC2107F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C21034.asm:58 STA @VIRTUAL02
    case 0xC21080: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C21034.asm:62 TYA
    case 0xC21082: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:64 CMP @VIRTUAL02
    case 0xC21083: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C21034.asm:65 BCC @UNKNOWN0
    case 0xC21085: cpu.execute_instruction<0x90>(0x0000BC, 2); return true;
    // src/unknown/C2/C21034.asm:66 LDA #1
    case 0xC21087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C21034.asm:66 LDA #1
    // Overlapping static entry reached from 0xC21087.
    case 0xC21089: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C21034.asm:68 END_C_FUNCTION
    case 0xC2108A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C21034.asm:68 END_C_FUNCTION
    case 0xC2108B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2108C.asm (unresolved).
bool execute_unresolved_c2_c2108c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2108C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2108C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2108C.asm:6 JSL UNKNOWN_C21034
    case 0xC2108E: cpu.execute_instruction<0x22>(0xC21034, 4); return true;
    // src/unknown/C2/C2108C.asm:7 CMP #0
    case 0xC21092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2108C.asm:7 CMP #0
    // Overlapping static entry reached from 0xC21092.
    case 0xC21094: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2108C.asm:8 BEQ @UNKNOWN0
    case 0xC21095: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2108C.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC21097: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2108C.asm:10 STZ FASTEST_HPPP_METER_SPEED
    case 0xC21099: cpu.execute_instruction<0x9C>(0x009696, 3); return true;
    // src/unknown/C2/C2108C.asm:10 STZ FASTEST_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC210EB.
    case 0xC2109A: cpu.execute_instruction<0x96>(0x000096, 2); return true;
    // src/unknown/C2/C2108C.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2109C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2108C.asm:13 END_C_FUNCTION
    case 0xC2109E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C216AD.asm (unresolved).
bool execute_unresolved_c2_c216ad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C216AD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC216AD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216AF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216B1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC216B2.
    case 0xC216B4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC216B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:8 TAX
    case 0xC216B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:9 STX @LOCAL00
    case 0xC216B8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C216AD.asm:10 TXA
    case 0xC216BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:11 JSL CHANGE_MUSIC
    case 0xC216BB: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C2/C216AD.asm:12 LDX @LOCAL00
    case 0xC216BF: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C216AD.asm:13 STX CURRENT_MAP_MUSIC_TRACK
    case 0xC216C1: cpu.execute_instruction<0x8E>(0x005DD4, 3); return true;
    // src/unknown/C2/C216AD.asm:14 STX NEXT_MAP_MUSIC_TRACK
    case 0xC216C4: cpu.execute_instruction<0x8E>(0x005DD6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C216AD.asm:15 END_C_FUNCTION
    case 0xC216C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C216AD.asm:15 END_C_FUNCTION
    case 0xC216C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C216DB.asm (unresolved).
bool execute_unresolved_c2_c216db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C216DB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC216DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC216DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC216DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC216DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC216DF.
    case 0xC216E1: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC216E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC216E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:13 STZ @LOCAL05
    case 0xC216E5: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:14 STZ @LOCAL04
    case 0xC216E7: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:15 JMP @UNKNOWN9
    case 0xC216E9: cpu.execute_instruction<0x4C>(0x0017D6, 3); return true;
    // src/unknown/C2/C216DB.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC216EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:18 LDA @LOCAL04
    case 0xC216EE: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:19 AND #$00FF
    case 0xC216F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC216F0.
    case 0xC216F2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C216DB.asm:26 TAX
    case 0xC216F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:27 LDA GAME_STATE + game_state::party_members,X
    case 0xC216F4: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C2/C216DB.asm:29 AND #$00FF
    case 0xC216F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC216F7.
    case 0xC216F9: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C216DB.asm:30 DEC
    case 0xC216FA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC216FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C216DB.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC216FB.
    case 0xC216FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:32 JSL MULT168
    case 0xC216FE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C216DB.asm:33 CLC
    case 0xC21702: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21703: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C2/C216DB.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21703.
    case 0xC21705: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/unknown/C2/C216DB.asm:35 TAX
    case 0xC21706: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:36 STX @LOCAL03
    case 0xC21707: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C2/C216DB.asm:36 STX @LOCAL03
    // Overlapping static entry reached from 0xC21705.
    case 0xC21708: cpu.execute_instruction<0x15>(0x0000E2, 2); return true;
    // src/unknown/C2/C216DB.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC21709: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:37 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC21708.
    case 0xC2170A: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C2/C216DB.asm:38 LDA #0
    case 0xC2170B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C2/C216DB.asm:39 STA @VIRTUAL01
    case 0xC2170D: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:39 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC2170B.
    case 0xC2170E: cpu.execute_instruction<0x01>(0x00004C, 2); return true;
    // src/unknown/C2/C216DB.asm:40 JMP @UNKNOWN5
    case 0xC2170F: cpu.execute_instruction<0x4C>(0x00179F, 3); return true;
    // src/unknown/C2/C216DB.asm:40 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC2170E.
    case 0xC21710: cpu.execute_instruction<0x9F>(0x00A917, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC21712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC21712.
    case 0xC21714: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC21715: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC21714.
    case 0xC21716: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC21717: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC21716.
    case 0xC21718: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC21717.
    case 0xC21719: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2171A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2171C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2171E: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC21720: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC21722: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C216DB.asm:45 LDA @VIRTUAL00
    case 0xC21724: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:46 AND #$00FF
    case 0xC21726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC21726.
    case 0xC21728: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21729: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21729.
    case 0xC2172B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2172C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C216DB.asm:48 STA @LOCAL01
    case 0xC21730: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C216DB.asm:49 CLC
    case 0xC21732: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:50 ADC #item::type
    case 0xC21733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/unknown/C2/C216DB.asm:50 ADC #item::type
    // Overlapping static entry reached from 0xC21733.
    case 0xC21735: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC21736: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC21738: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2173A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2173C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C2/C216DB.asm:52 CLC
    case 0xC2173E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:53 ADC @VIRTUAL0A
    case 0xC2173F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:54 STA @VIRTUAL0A
    case 0xC21741: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:55 LDA [@VIRTUAL0A]
    case 0xC21743: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:56 AND #$00FF
    case 0xC21745: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC21745.
    case 0xC21747: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C216DB.asm:57 CMP #4
    case 0xC21748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C216DB.asm:57 CMP #4
    // Overlapping static entry reached from 0xC21748.
    case 0xC2174A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C216DB.asm:58 BNE @UNKNOWN4
    case 0xC2174B: cpu.execute_instruction<0xD0>(0x00004E, 2); return true;
    // src/unknown/C2/C216DB.asm:59 LDA @LOCAL05
    case 0xC2174D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:60 AND #$00FF
    case 0xC2174F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC2174F.
    case 0xC21751: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C216DB.asm:61 BEQ @UNKNOWN3
    case 0xC21752: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C2/C216DB.asm:62 LDA @LOCAL01
    case 0xC21754: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C2/C216DB.asm:63 CLC
    case 0xC21756: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:64 ADC #item::params + item_parameters::ep
    case 0xC21757: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C2/C216DB.asm:64 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21757.
    case 0xC21759: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:65 CLC
    case 0xC2175A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:66 ADC @VIRTUAL06
    case 0xC2175B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:67 STA @VIRTUAL06
    case 0xC2175D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC2175F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:69 LDA [@VIRTUAL06]
    case 0xC21761: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:70 STA @VIRTUAL00
    case 0xC21763: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC21765: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:72 LDA @LOCAL05
    case 0xC21767: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:73 AND #$00FF
    case 0xC21769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC21769.
    case 0xC2176B: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2176C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2176C.
    case 0xC2176E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2176F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C216DB.asm:75 CLC
    case 0xC21773: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:76 ADC #item::params + item_parameters::ep
    case 0xC21774: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C2/C216DB.asm:76 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21774.
    case 0xC21776: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC21777: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC21779: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC2177B: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC2177D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:78 CLC
    case 0xC2177F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:79 ADC @VIRTUAL06
    case 0xC21780: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:80 STA @VIRTUAL06
    case 0xC21782: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC21784: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:82 LDA [@VIRTUAL06]
    case 0xC21786: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:83 CLC
    case 0xC21788: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:84 SBC @VIRTUAL00
    case 0xC21789: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2178B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2178D: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2178F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC21791: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC21793: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:88 LDA @LOCAL00
    case 0xC21795: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:89 STA @VIRTUAL00
    case 0xC21797: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:90 STA @LOCAL05
    case 0xC21799: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC2179B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:93 INC @VIRTUAL01
    case 0xC2179D: cpu.execute_instruction<0xE6>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC2179F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:96 LDA @VIRTUAL01
    case 0xC217A1: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:97 AND #$00FF
    case 0xC217A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC217A3.
    case 0xC217A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C216DB.asm:98 STA @VIRTUAL02
    case 0xC217A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C216DB.asm:99 LDA #14
    case 0xC217A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C2/C216DB.asm:99 LDA #14
    // Overlapping static entry reached from 0xC217A8.
    case 0xC217AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:100 CLC
    case 0xC217AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:101 SBC @VIRTUAL02
    case 0xC217AC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC217AE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC217B0: cpu.execute_instruction<0x10>(0x000020, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC217B2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC217B4: cpu.execute_instruction<0x30>(0x00001C, 2); return true;
    // src/unknown/C2/C216DB.asm:103 LDX @LOCAL03
    case 0xC217B6: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C216DB.asm:104 TXA
    case 0xC217B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:105 CLC
    case 0xC217B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:106 ADC @VIRTUAL02
    case 0xC217BA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C216DB.asm:107 TAX
    case 0xC217BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC217BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:109 LDA a:char_struct::items,X
    case 0xC217BF: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/unknown/C2/C216DB.asm:110 STA @VIRTUAL00
    case 0xC217C2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:111 STA @LOCAL00
    case 0xC217C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC217C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:113 LDA @VIRTUAL00
    case 0xC217C8: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:114 AND #$00FF
    case 0xC217CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC217CA.
    case 0xC217CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C216DB.asm:115 BNEL @UNKNOWN1
    case 0xC217CD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C216DB.asm:115 BNEL @UNKNOWN1
    case 0xC217CF: cpu.execute_instruction<0x4C>(0x001712, 3); return true;
    // src/unknown/C2/C216DB.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC217D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:118 INC @LOCAL04
    case 0xC217D4: cpu.execute_instruction<0xE6>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:120 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC217D6: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C216DB.asm:121 CMP @LOCAL04
    case 0xC217D9: cpu.execute_instruction<0xC5>(0x000017, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC217DB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC217DD: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC217DF: cpu.execute_instruction<0x4C>(0x0016EC, 3); return true;
    // src/unknown/C2/C216DB.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC217E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:124 LDA @LOCAL05
    case 0xC217E4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:125 AND #$00FF
    case 0xC217E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC217E6.
    case 0xC217E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C216DB.asm:126 BEQ @UNKNOWN11
    case 0xC217E9: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC217EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC217EB.
    case 0xC217ED: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC217EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC217ED.
    case 0xC217EF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC217F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC217EF.
    case 0xC217F1: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC217F0.
    case 0xC217F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC217F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:128 LDA @LOCAL05
    case 0xC217F5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:129 AND #$00FF
    case 0xC217F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC217F7.
    case 0xC217F9: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC217FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC217FA.
    case 0xC217FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC217FD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C216DB.asm:131 CLC
    case 0xC21801: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:132 ADC #item::params + item_parameters::strength
    case 0xC21802: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C2/C216DB.asm:132 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC21802.
    case 0xC21804: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:133 CLC
    case 0xC21805: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:134 ADC @VIRTUAL06
    case 0xC21806: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:135 STA @VIRTUAL06
    case 0xC21808: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC2180A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:137 LDA [@VIRTUAL06]
    case 0xC2180C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:138 REP #PROC_FLAGS::ACCUM8
    case 0xC2180E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:139 SEC
    case 0xC21810: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:140 AND #$00FF
    case 0xC21811: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC21811.
    case 0xC21813: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C216DB.asm:141 SBC #$0080
    case 0xC21814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C216DB.asm:141 SBC #$0080
    // Overlapping static entry reached from 0xC21814.
    case 0xC21816: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C216DB.asm:142 EOR #$FF80
    case 0xC21817: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C216DB.asm:142 EOR #$FF80
    // Overlapping static entry reached from 0xC21817.
    case 0xC21819: cpu.execute_instruction<0xFF>(0x239D22, 4); return true;
    // src/unknown/C2/C216DB.asm:143 JSL UNKNOWN_C2239D
    case 0xC2181A: cpu.execute_instruction<0x22>(0xC2239D, 4); return true;
    // src/unknown/C2/C216DB.asm:143 JSL UNKNOWN_C2239D
    // Overlapping static entry reached from 0xC21819.
    case 0xC2181D: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    case 0xC2181E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    // Overlapping static entry reached from 0xC2181D.
    case 0xC2181F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    // Overlapping static entry reached from 0xC2181E.
    case 0xC21820: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C216DB.asm:145 BNE @UNKNOWN12
    case 0xC21821: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/unknown/C2/C216DB.asm:146 LDA #PARTY_MEMBER::TEDDY_BEAR
    case 0xC21823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C216DB.asm:146 LDA #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC21823.
    case 0xC21825: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:147 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC21826: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C216DB.asm:148 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC2182A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/unknown/C2/C216DB.asm:148 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC2182A.
    case 0xC2182C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:149 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2182D: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C216DB.asm:150 SEP #PROC_FLAGS::ACCUM8
    case 0xC21831: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:151 LDA [@VIRTUAL06]
    case 0xC21833: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC21835: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:153 SEC
    case 0xC21837: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:154 AND #$00FF
    case 0xC21838: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC21838.
    case 0xC2183A: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C216DB.asm:155 SBC #$0080
    case 0xC2183B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C216DB.asm:155 SBC #$0080
    // Overlapping static entry reached from 0xC2183B.
    case 0xC2183D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C216DB.asm:156 EOR #$FF80
    case 0xC2183E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C216DB.asm:156 EOR #$FF80
    // Overlapping static entry reached from 0xC2183E.
    case 0xC21840: cpu.execute_instruction<0xFF>(0x28F822, 4); return true;
    // src/unknown/C2/C216DB.asm:157 JSL ADD_CHAR_TO_PARTY
    case 0xC21841: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/C2/C216DB.asm:157 JSL ADD_CHAR_TO_PARTY
    // Overlapping static entry reached from 0xC21840.
    case 0xC21844: cpu.execute_instruction<0xC2>(0x000080, 2); return true;
    // src/unknown/C2/C216DB.asm:158 BRA @UNKNOWN12
    case 0xC21845: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:158 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC21844.
    case 0xC21846: cpu.execute_instruction<0x0E>(0x0010A9, 3); return true;
    // src/unknown/C2/C216DB.asm:160 LDA #PARTY_MEMBER::TEDDY_BEAR
    case 0xC21847: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C216DB.asm:160 LDA #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC21847.
    case 0xC21849: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:161 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2184A: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C216DB.asm:162 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC2184E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/unknown/C2/C216DB.asm:162 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC2184E.
    case 0xC21850: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:163 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC21851: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C216DB.asm:165 END_C_FUNCTION
    case 0xC21855: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C216DB.asm:165 END_C_FUNCTION
    case 0xC21856: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22351.asm (unresolved).
bool execute_unresolved_c2_c22351_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22351.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22351: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC22353: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC22354: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC22355: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC22356: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22356.
    case 0xC22358: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC22359: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC2235A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:10 TAX
    case 0xC2235B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:11 DEX
    case 0xC2235C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:12 STX @LOCAL01
    case 0xC2235D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C22351.asm:13 LDA #0
    case 0xC2235F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C22351.asm:13 LDA #0
    // Overlapping static entry reached from 0xC2235F.
    case 0xC22361: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22351.asm:14 STA @LOCAL00
    case 0xC22362: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:15 BRA @UNKNOWN1
    case 0xC22364: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C2/C22351.asm:17 LDA @LOCAL00
    case 0xC22366: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:18 INC
    case 0xC22368: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:19 STA @LOCAL00
    case 0xC22369: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:21 STA @VIRTUAL02
    case 0xC2236B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:22 LDA #14
    case 0xC2236D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C2/C22351.asm:22 LDA #14
    // Overlapping static entry reached from 0xC2236D.
    case 0xC2236F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C22351.asm:23 CLC
    case 0xC22370: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:24 SBC @VIRTUAL02
    case 0xC22371: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22373: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22375: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22377: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22379: cpu.execute_instruction<0x30>(0x00001E, 2); return true;
    // src/unknown/C2/C22351.asm:26 LDA @LOCAL00
    case 0xC2237B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:27 STA @VIRTUAL02
    case 0xC2237D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:28 LDX @LOCAL01
    case 0xC2237F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C22351.asm:29 TXA
    case 0xC22381: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC22382: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22351.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22382.
    case 0xC22384: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22351.asm:31 JSL MULT168
    case 0xC22385: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22351.asm:32 CLC
    case 0xC22389: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC2238A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C2/C22351.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC2238A.
    case 0xC2238C: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C2/C22351.asm:34 CLC
    case 0xC2238D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:35 ADC @VIRTUAL02
    case 0xC2238E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:35 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2238C.
    case 0xC2238F: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22351.asm:36 TAX
    case 0xC22390: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:37 LDA __BSS_START__,X
    case 0xC22391: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22351.asm:38 AND #$00FF
    case 0xC22394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22351.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC22394.
    case 0xC22396: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22351.asm:39 BNE @UNKNOWN0
    case 0xC22397: cpu.execute_instruction<0xD0>(0x0000CD, 2); return true;
    // src/unknown/C2/C22351.asm:41 LDA @LOCAL00
    case 0xC22399: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22351.asm:42 END_C_FUNCTION
    case 0xC2239B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22351.asm:42 END_C_FUNCTION
    case 0xC2239C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2239D.asm (unresolved).
bool execute_unresolved_c2_c2239d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2239D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2239D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC2239F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC223A0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC223A1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC223A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC223A2.
    case 0xC223A4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC223A5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC223A6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:38 STA @LOCAL00
    case 0xC223A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:38 STA @LOCAL00
    // Overlapping static entry reached from 0xC223A4.
    case 0xC223A8: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C2/C2239D.asm:39 LDX #0
    case 0xC223A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2239D.asm:39 LDX #0
    // Overlapping static entry reached from 0xC223A9.
    case 0xC223AB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2239D.asm:40 BRA @UNKNOWN2
    case 0xC223AC: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C2239D.asm:42 LDA @LOCAL00
    case 0xC223AE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:43 STA @VIRTUAL02
    case 0xC223B0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:44 LDA GAME_STATE + game_state::party_members,X
    case 0xC223B2: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C2/C2239D.asm:45 AND #$00FF
    case 0xC223B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2239D.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC223B5.
    case 0xC223B7: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2239D.asm:46 CMP @VIRTUAL02
    case 0xC223B8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:47 BNE @UNKNOWN1
    case 0xC223BA: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C2239D.asm:48 LDA @LOCAL00
    case 0xC223BC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:49 BRA @UNKNOWN5
    case 0xC223BE: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C2/C2239D.asm:51 INX
    case 0xC223C0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:53 STX @VIRTUAL02
    case 0xC223C1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:54 LDA GAME_STATE+game_state::party_count
    case 0xC223C3: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C2/C2239D.asm:55 AND #$00FF
    case 0xC223C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2239D.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC223C6.
    case 0xC223C8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2239D.asm:56 CLC
    case 0xC223C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:57 SBC @VIRTUAL02
    case 0xC223CA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C2/C2239D.asm:58 BRANCHGTS @UNKNOWN0
    case 0xC223CC: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C2/C2239D.asm:58 BRANCHGTS @UNKNOWN0
    case 0xC223CE: cpu.execute_instruction<0x10>(0x0000DE, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C2/C2239D.asm:58 BRANCHGTS @UNKNOWN0
    case 0xC223D0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C2/C2239D.asm:58 BRANCHGTS @UNKNOWN0
    case 0xC223D2: cpu.execute_instruction<0x30>(0x0000DA, 2); return true;
    // src/unknown/C2/C2239D.asm:59 LDA #0
    case 0xC223D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2239D.asm:59 LDA #0
    // Overlapping static entry reached from 0xC223D4.
    case 0xC223D6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2239D.asm:62 END_C_FUNCTION
    case 0xC223D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2239D.asm:62 END_C_FUNCTION
    case 0xC223D8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C223D9.asm (unresolved).
bool execute_unresolved_c2_c223d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C223D9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC223D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC223DE.
    case 0xC223E0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC223E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:10 STX @VIRTUAL02
    case 0xC223E3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC223E0.
    case 0xC223E4: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C223D9.asm:11 TAY
    case 0xC223E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:12 LDA __BSS_START__,Y
    case 0xC223E6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:13 AND #$00FF
    case 0xC223E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC223E9.
    case 0xC223EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C223D9.asm:14 BEQ @UNKNOWN0
    case 0xC223EC: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C223D9.asm:15 LDA #0
    case 0xC223EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC223EE.
    case 0xC223F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:16 STA @LOCAL00
    case 0xC223F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:17 BRA @UNKNOWN5
    case 0xC223F3: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C2/C223D9.asm:19 TYX
    case 0xC223F5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:20 INX
    case 0xC223F6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:21 INX
    case 0xC223F7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:22 INX
    case 0xC223F8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:23 LDA __BSS_START__,X
    case 0xC223F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:24 AND #$00FF
    case 0xC223FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC223FC.
    case 0xC223FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C223D9.asm:25 BEQ @UNKNOWN1
    case 0xC223FF: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C223D9.asm:26 TXY
    case 0xC22401: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:27 LDA #3
    case 0xC22402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C223D9.asm:27 LDA #3
    // Overlapping static entry reached from 0xC22402.
    case 0xC22404: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:28 STA @LOCAL00
    case 0xC22405: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:29 BRA @UNKNOWN5
    case 0xC22407: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C223D9.asm:31 INY
    case 0xC22409: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:32 LDA #1
    case 0xC2240A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C223D9.asm:32 LDA #1
    // Overlapping static entry reached from 0xC2240A.
    case 0xC2240C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:33 STA @LOCAL00
    case 0xC2240D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:34 BRA @UNKNOWN3
    case 0xC2240F: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:36 LDA __BSS_START__,Y
    case 0xC22411: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:37 AND #$00FF
    case 0xC22414: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC22414.
    case 0xC22416: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C223D9.asm:38 BNE @UNKNOWN5
    case 0xC22417: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C2/C223D9.asm:39 LDA @LOCAL00
    case 0xC22419: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:40 INC
    case 0xC2241B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:41 STA @LOCAL00
    case 0xC2241C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:42 INY
    case 0xC2241E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:44 CMP #7
    case 0xC2241F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C2/C223D9.asm:44 CMP #7
    // Overlapping static entry reached from 0xC2241F.
    case 0xC22421: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C223D9.asm:45 BCC @UNKNOWN2
    case 0xC22422: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C223D9.asm:46 LDA @VIRTUAL02
    case 0xC22424: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:47 BEQ @UNKNOWN4
    case 0xC22426: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C223D9.asm:48 LDA #7
    case 0xC22428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C2/C223D9.asm:48 LDA #7
    // Overlapping static entry reached from 0xC22428.
    case 0xC2242A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C223D9.asm:49 BRA @UNKNOWN7
    case 0xC2242B: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C2/C223D9.asm:51 LDA #32
    case 0xC2242D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C223D9.asm:51 LDA #32
    // Overlapping static entry reached from 0xC2242D.
    case 0xC2242F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C223D9.asm:52 BRA @UNKNOWN7
    case 0xC22430: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C2/C223D9.asm:54 LDA @VIRTUAL02
    case 0xC22432: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:55 BEQ @UNKNOWN6
    case 0xC22434: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C223D9.asm:56 LDA __BSS_START__,Y
    case 0xC22436: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:57 AND #$00FF
    case 0xC22439: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC22439.
    case 0xC2243B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C223D9.asm:58 DEC
    case 0xC2243C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:59 ASL
    case 0xC2243D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:60 STA @VIRTUAL02
    case 0xC2243E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:61 LDA @LOCAL00
    case 0xC22440: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22442: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22444: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22445: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22447: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22448: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2244A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:63 CLC
    case 0xC2244B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:64 ADC @VIRTUAL02
    case 0xC2244C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:65 TAX
    case 0xC2244E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:66 LDA f:STATUS_EQUIP_WINDOW_TEXT,X
    case 0xC2244F: cpu.execute_instruction<0xBF>(0xC45A27, 4); return true;
    // src/unknown/C2/C223D9.asm:67 BRA @UNKNOWN7
    case 0xC22453: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C223D9.asm:69 LDA __BSS_START__,Y
    case 0xC22455: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:70 AND #$00FF
    case 0xC22458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC22458.
    case 0xC2245A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C223D9.asm:71 DEC
    case 0xC2245B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:72 ASL
    case 0xC2245C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:73 STA @VIRTUAL02
    case 0xC2245D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:74 LDA @LOCAL00
    case 0xC2245F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22461: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22463: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22464: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22466: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22467: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22469: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:76 CLC
    case 0xC2246A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:77 ADC @VIRTUAL02
    case 0xC2246B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:78 TAX
    case 0xC2246D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:79 LDA f:STATUS_EQUIP_WINDOW_TEXT_2,X
    case 0xC2246E: cpu.execute_instruction<0xBF>(0xC45A89, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C223D9.asm:81 END_C_FUNCTION
    case 0xC22472: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C223D9.asm:81 END_C_FUNCTION
    case 0xC22473: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22474.asm (unresolved).
bool execute_unresolved_c2_c22474_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22474.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22474: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22476: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22477: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22478: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22479: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22479.
    case 0xC2247B: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC2247C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC2247D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:9 TAY
    case 0xC2247E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:10 LDA __BSS_START__,Y
    case 0xC2247F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:11 AND #$00FF
    case 0xC22482: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC22482.
    case 0xC22484: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C22474.asm:12 BEQ @UNKNOWN0
    case 0xC22485: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C22474.asm:13 LDA #0
    case 0xC22487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:13 LDA #0
    // Overlapping static entry reached from 0xC22487.
    case 0xC22489: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:14 STA @LOCAL00
    case 0xC2248A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:15 BRA @UNKNOWN4
    case 0xC2248C: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C22474.asm:17 TYX
    case 0xC2248E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:18 INX
    case 0xC2248F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:19 INX
    case 0xC22490: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:20 INX
    case 0xC22491: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:21 LDA __BSS_START__,X
    case 0xC22492: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:22 AND #$00FF
    case 0xC22495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC22495.
    case 0xC22497: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C22474.asm:23 BEQ @UNKNOWN1
    case 0xC22498: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C22474.asm:24 TXY
    case 0xC2249A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:25 LDA #3
    case 0xC2249B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C22474.asm:25 LDA #3
    // Overlapping static entry reached from 0xC2249B.
    case 0xC2249D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:26 STA @LOCAL00
    case 0xC2249E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:27 BRA @UNKNOWN4
    case 0xC224A0: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C2/C22474.asm:29 INY
    case 0xC224A2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:30 LDA #1
    case 0xC224A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C22474.asm:30 LDA #1
    // Overlapping static entry reached from 0xC224A3.
    case 0xC224A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:31 STA @LOCAL00
    case 0xC224A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:32 BRA @UNKNOWN3
    case 0xC224A8: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:32 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC234A0.
    case 0xC224A9: cpu.execute_instruction<0x0E>(0x0000B9, 3); return true;
    // src/unknown/C2/C22474.asm:34 LDA __BSS_START__,Y
    case 0xC224AA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:34 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC224A9.
    case 0xC224AC: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C22474.asm:35 AND #$00FF
    case 0xC224AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC224AD.
    case 0xC224AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22474.asm:36 BNE @UNKNOWN4
    case 0xC224B0: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C22474.asm:37 LDA @LOCAL00
    case 0xC224B2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:38 INC
    case 0xC224B4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:39 STA @LOCAL00
    case 0xC224B5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:40 INY
    case 0xC224B7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:42 CMP #7
    case 0xC224B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C2/C22474.asm:42 CMP #7
    // Overlapping static entry reached from 0xC224B8.
    case 0xC224BA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C22474.asm:43 BCC @UNKNOWN2
    case 0xC224BB: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C22474.asm:44 LDA #4
    case 0xC224BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C2/C22474.asm:44 LDA #4
    // Overlapping static entry reached from 0xC224BD.
    case 0xC224BF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C22474.asm:45 BRA @UNKNOWN5
    case 0xC224C0: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C22474.asm:47 LDA __BSS_START__,Y
    case 0xC224C2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:48 AND #$00FF
    case 0xC224C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC224C5.
    case 0xC224C7: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C22474.asm:49 DEC
    case 0xC224C8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:50 ASL
    case 0xC224C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:51 STA @VIRTUAL02
    case 0xC224CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22474.asm:52 LDA @LOCAL00
    case 0xC224CC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224D1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224D4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC224D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:54 CLC
    case 0xC224D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:55 ADC @VIRTUAL02
    case 0xC224D8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22474.asm:56 TAX
    case 0xC224DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:57 LDA f:STATUS_EQUIP_WINDOW_TEXT_3,X
    case 0xC224DB: cpu.execute_instruction<0xBF>(0xC45AEB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22474.asm:59 END_C_FUNCTION
    case 0xC224DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22474.asm:59 END_C_FUNCTION
    case 0xC224E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22562.asm (unresolved).
bool execute_unresolved_c2_c22562_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22562.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22562: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22564: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22565: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22566: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22567: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22567.
    case 0xC22569: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC2256A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC2256B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:8 TAX
    case 0xC2256C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:9 CPX #$FFFF
    case 0xC2256D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C22562.asm:9 CPX #$FFFF
    // Overlapping static entry reached from 0xC2256D.
    case 0xC2256F: cpu.execute_instruction<0xFF>(0xA203D0, 4); return true;
    // src/unknown/C2/C22562.asm:10 BNE @UNKNOWN0
    case 0xC22570: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    case 0xC22572: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    // Overlapping static entry reached from 0xC2256F.
    case 0xC22573: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    // Overlapping static entry reached from 0xC22572.
    case 0xC22574: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C22562.asm:13 TXA
    case 0xC22575: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC22576: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:15 STA TEMPORARY_WEAPON
    case 0xC22578: cpu.execute_instruction<0x8D>(0x009CD0, 3); return true;
    // src/unknown/C2/C22562.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC2257B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:17 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC2257D: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C22562.asm:18 AND #$00FF
    case 0xC22580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22562.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC22580.
    case 0xC22582: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22562.asm:19 STA @LOCAL00
    case 0xC22583: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22562.asm:20 DEC
    case 0xC22585: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC22586: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22562.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22586.
    case 0xC22588: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22562.asm:22 JSL MULT168
    case 0xC22589: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22562.asm:23 TAX
    case 0xC2258D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2258E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:25 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC22590: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C2/C22562.asm:26 STA TEMPORARY_BODY_GEAR
    case 0xC22593: cpu.execute_instruction<0x8D>(0x009CD1, 3); return true;
    // src/unknown/C2/C22562.asm:27 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC22596: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C2/C22562.asm:28 STA TEMPORARY_ARMS_GEAR
    case 0xC22599: cpu.execute_instruction<0x8D>(0x009CD2, 3); return true;
    // src/unknown/C2/C22562.asm:29 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2259C: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C2/C22562.asm:30 STA TEMPORARY_OTHER_GEAR
    case 0xC2259F: cpu.execute_instruction<0x8D>(0x009CD3, 3); return true;
    // src/unknown/C2/C22562.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC225A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:32 LDA @LOCAL00
    case 0xC225A4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22562.asm:33 JSL UNKNOWN_C1A1D8
    case 0xC225A6: cpu.execute_instruction<0x22>(0xC1A1D8, 4); return true;
    // src/unknown/C2/C22562.asm:33 JSL UNKNOWN_C1A1D8
    // Overlapping static entry reached from 0xC23403.
    case 0xC225A9: cpu.execute_instruction<0xC1>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22562.asm:34 END_C_FUNCTION
    case 0xC225AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22562.asm:34 END_C_FUNCTION
    case 0xC225AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C225AC.asm (unresolved).
bool execute_unresolved_c2_c225ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C225AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC225AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225AF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC225B1.
    case 0xC225B3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225B4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC225B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:8 TAX
    case 0xC225B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:9 STX @LOCAL00
    case 0xC225B7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC225B9: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C225AC.asm:11 AND #$00FF
    case 0xC225BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C225AC.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC225BC.
    case 0xC225BE: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C225AC.asm:12 DEC
    case 0xC225BF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC225C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C225AC.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC225C0.
    case 0xC225C2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C225AC.asm:14 JSL MULT168
    case 0xC225C3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C225AC.asm:15 TAX
    case 0xC225C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC225C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:17 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC225CA: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C2/C225AC.asm:18 STA TEMPORARY_WEAPON
    case 0xC225CD: cpu.execute_instruction<0x8D>(0x009CD0, 3); return true;
    // src/unknown/C2/C225AC.asm:19 LDX @LOCAL00
    case 0xC225D0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:20 CPX #$FFFF
    case 0xC225D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C225AC.asm:20 CPX #$FFFF
    // Overlapping static entry reached from 0xC225D2.
    case 0xC225D4: cpu.execute_instruction<0xFF>(0xA203D0, 4); return true;
    // src/unknown/C2/C225AC.asm:21 BNE @UNKNOWN0
    case 0xC225D5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    case 0xC225D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    // Overlapping static entry reached from 0xC225D4.
    case 0xC225D8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    // Overlapping static entry reached from 0xC225D7.
    case 0xC225D9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C225AC.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC225DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:25 TXA
    case 0xC225DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC225DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:27 STA TEMPORARY_BODY_GEAR
    case 0xC225DF: cpu.execute_instruction<0x8D>(0x009CD1, 3); return true;
    // src/unknown/C2/C225AC.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC225E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:29 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC225E4: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C225AC.asm:30 AND #$00FF
    case 0xC225E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C225AC.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC225E7.
    case 0xC225E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C225AC.asm:31 STA @LOCAL00
    case 0xC225EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:32 DEC
    case 0xC225EC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC225ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C225AC.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC225ED.
    case 0xC225EF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C225AC.asm:34 JSL MULT168
    case 0xC225F0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C225AC.asm:35 TAX
    case 0xC225F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC225F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:37 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC225F7: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C2/C225AC.asm:38 STA TEMPORARY_ARMS_GEAR
    case 0xC225FA: cpu.execute_instruction<0x8D>(0x009CD2, 3); return true;
    // src/unknown/C2/C225AC.asm:39 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC225FD: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C2/C225AC.asm:40 STA TEMPORARY_OTHER_GEAR
    case 0xC22600: cpu.execute_instruction<0x8D>(0x009CD3, 3); return true;
    // src/unknown/C2/C225AC.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC22603: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:42 LDA @LOCAL00
    case 0xC22605: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:43 JSL UNKNOWN_C1A1D8
    case 0xC22607: cpu.execute_instruction<0x22>(0xC1A1D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C225AC.asm:44 END_C_FUNCTION
    case 0xC2260B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C225AC.asm:44 END_C_FUNCTION
    case 0xC2260C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2260D.asm (unresolved).
bool execute_unresolved_c2_c2260d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2260D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2260D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC2260F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC22610: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC22611: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC22612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22612.
    case 0xC22614: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC22615: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC22616: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:9 STA @LOCAL01
    case 0xC22617: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2260D.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC22614.
    case 0xC22618: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C2/C2260D.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC22619: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C2260D.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    // Overlapping static entry reached from 0xC22618.
    case 0xC2261A: cpu.execute_instruction<0xD6>(0x00009C, 2); return true;
    // src/unknown/C2/C2260D.asm:11 AND #$00FF
    case 0xC2261C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2260D.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC2261C.
    case 0xC2261E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2260D.asm:12 DEC
    case 0xC2261F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC22620: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2260D.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22620.
    case 0xC22622: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2260D.asm:14 JSL MULT168
    case 0xC22623: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2260D.asm:15 TAX
    case 0xC22627: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC22628: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:17 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC2262A: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C2/C2260D.asm:18 STA TEMPORARY_WEAPON
    case 0xC2262D: cpu.execute_instruction<0x8D>(0x009CD0, 3); return true;
    // src/unknown/C2/C2260D.asm:19 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC22630: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C2/C2260D.asm:20 STA TEMPORARY_BODY_GEAR
    case 0xC22633: cpu.execute_instruction<0x8D>(0x009CD1, 3); return true;
    // src/unknown/C2/C2260D.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC22636: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:22 LDA @LOCAL01
    case 0xC22638: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2260D.asm:23 CMP #$FFFF
    case 0xC2263A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2260D.asm:23 CMP #$FFFF
    // Overlapping static entry reached from 0xC2263A.
    case 0xC2263C: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C2/C2260D.asm:24 BNE @UNKNOWN0
    case 0xC2263D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    case 0xC2263F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    // Overlapping static entry reached from 0xC2263C.
    case 0xC22640: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    // Overlapping static entry reached from 0xC2263F.
    case 0xC22641: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2260D.asm:26 BRA @UNKNOWN1
    case 0xC22642: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C2/C2260D.asm:28 TAX
    case 0xC22644: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:30 TXA
    case 0xC22645: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC22646: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:32 STA TEMPORARY_ARMS_GEAR
    case 0xC22648: cpu.execute_instruction<0x8D>(0x009CD2, 3); return true;
    // src/unknown/C2/C2260D.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC2264B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:34 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC2264D: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C2260D.asm:35 AND #$00FF
    case 0xC22650: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2260D.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC22650.
    case 0xC22652: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2260D.asm:36 TAX
    case 0xC22653: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:37 STX @LOCAL00
    case 0xC22654: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2260D.asm:38 TXA
    case 0xC22656: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:39 DEC
    case 0xC22657: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC22658: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2260D.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22658.
    case 0xC2265A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2260D.asm:41 JSL MULT168
    case 0xC2265B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2260D.asm:42 TAX
    case 0xC2265F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC22660: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:44 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC22662: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C2/C2260D.asm:45 STA TEMPORARY_OTHER_GEAR
    case 0xC22665: cpu.execute_instruction<0x8D>(0x009CD3, 3); return true;
    // src/unknown/C2/C2260D.asm:46 LDX @LOCAL00
    case 0xC22668: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2260D.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC2266A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:48 TXA
    case 0xC2266C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:49 JSL UNKNOWN_C1A1D8
    case 0xC2266D: cpu.execute_instruction<0x22>(0xC1A1D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2260D.asm:50 END_C_FUNCTION
    case 0xC22671: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2260D.asm:50 END_C_FUNCTION
    case 0xC22672: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22673.asm (unresolved).
bool execute_unresolved_c2_c22673_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22673.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22673: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22675: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22676: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22677: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22678: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22678.
    case 0xC2267A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC2267B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC2267C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:8 STA @LOCAL00
    case 0xC2267D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22673.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC2267A.
    case 0xC2267E: cpu.execute_instruction<0x0E>(0x00D6AD, 3); return true;
    // src/unknown/C2/C22673.asm:9 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC2267F: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C22673.asm:9 LDA CHARACTER_FOR_EQUIP_MENU
    // Overlapping static entry reached from 0xC2267E.
    case 0xC22681: cpu.execute_instruction<0x9C>(0x00FF29, 3); return true;
    // src/unknown/C2/C22673.asm:10 AND #$00FF
    case 0xC22682: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22673.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC22682.
    case 0xC22684: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C22673.asm:11 DEC
    case 0xC22685: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC22686: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22673.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22686.
    case 0xC22688: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22673.asm:13 JSL MULT168
    case 0xC22689: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22673.asm:14 TAX
    case 0xC2268D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC2268E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC22690: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C2/C22673.asm:17 STA TEMPORARY_WEAPON
    case 0xC22693: cpu.execute_instruction<0x8D>(0x009CD0, 3); return true;
    // src/unknown/C2/C22673.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC22696: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C2/C22673.asm:19 STA TEMPORARY_BODY_GEAR
    case 0xC22699: cpu.execute_instruction<0x8D>(0x009CD1, 3); return true;
    // src/unknown/C2/C22673.asm:20 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC2269C: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C2/C22673.asm:21 STA TEMPORARY_ARMS_GEAR
    case 0xC2269F: cpu.execute_instruction<0x8D>(0x009CD2, 3); return true;
    // src/unknown/C2/C22673.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC226A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:23 LDA @LOCAL00
    case 0xC226A4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22673.asm:24 CMP #$FFFF
    case 0xC226A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C22673.asm:24 CMP #$FFFF
    // Overlapping static entry reached from 0xC226A6.
    case 0xC226A8: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C2/C22673.asm:25 BNE @UNKNOWN0
    case 0xC226A9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    case 0xC226AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    // Overlapping static entry reached from 0xC226A8.
    case 0xC226AC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    // Overlapping static entry reached from 0xC226AB.
    case 0xC226AD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C22673.asm:27 BRA @UNKNOWN1
    case 0xC226AE: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C2/C22673.asm:29 TAX
    case 0xC226B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:31 TXA
    case 0xC226B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC226B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:33 STA TEMPORARY_OTHER_GEAR
    case 0xC226B4: cpu.execute_instruction<0x8D>(0x009CD3, 3); return true;
    // src/unknown/C2/C22673.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC226B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:35 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC226B9: cpu.execute_instruction<0xAD>(0x009CD6, 3); return true;
    // src/unknown/C2/C22673.asm:36 AND #$00FF
    case 0xC226BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22673.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC226BC.
    case 0xC226BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22673.asm:37 JSL UNKNOWN_C1A1D8
    case 0xC226BF: cpu.execute_instruction<0x22>(0xC1A1D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22673.asm:38 END_C_FUNCTION
    case 0xC226C3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22673.asm:38 END_C_FUNCTION
    case 0xC226C4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226C5.asm (unresolved).
bool execute_unresolved_c2_c226c5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226C5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC226C5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226C7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC226CA.
    case 0xC226CC: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC226CE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:9 TAX
    case 0xC226CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:10 LDA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC226D0: cpu.execute_instruction<0xAD>(0x009C88, 3); return true;
    // src/unknown/C2/C226C5.asm:11 JSL SET_EVENT_FLAG
    case 0xC226D3: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/unknown/C2/C226C5.asm:12 TAX
    case 0xC226D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:13 STX @LOCAL00
    case 0xC226D8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C226C5.asm:14 LDA INTERACTING_NPC_ENTITY
    case 0xC226DA: cpu.execute_instruction<0xAD>(0x005D64, 3); return true;
    // src/unknown/C2/C226C5.asm:15 JSL UNKNOWN_C0C30C
    case 0xC226DD: cpu.execute_instruction<0x22>(0xC0C30C, 4); return true;
    // src/unknown/C2/C226C5.asm:16 LDX @LOCAL00
    case 0xC226E1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C226C5.asm:17 TXA
    case 0xC226E3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C226C5.asm:18 END_C_FUNCTION
    case 0xC226E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226C5.asm:18 END_C_FUNCTION
    case 0xC226E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226E6.asm (unresolved).
bool execute_unresolved_c2_c226e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC226E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C226E6.asm:6 LDA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC226E8: cpu.execute_instruction<0xAD>(0x009C88, 3); return true;
    // src/unknown/C2/C226E6.asm:7 JSL GET_EVENT_FLAG
    case 0xC226EB: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226E6.asm:8 END_C_FUNCTION
    case 0xC226EF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226F0.asm (unresolved).
bool execute_unresolved_c2_c226f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC226F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC226F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC226F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC226F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC226F4.
    case 0xC226F6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC226F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:8 LDA #0
    case 0xC226F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C226F0.asm:8 LDA #0
    // Overlapping static entry reached from 0xC226F8.
    case 0xC226FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C226F0.asm:9 STA @LOCAL00
    case 0xC226FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:10 BRA @UNKNOWN1
    case 0xC226FD: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C226F0.asm:12 INC
    case 0xC226FF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:13 STA @LOCAL00
    case 0xC22700: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:21 TAX
    case 0xC22702: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:22 LDA GAME_STATE + game_state::unknown96,X
    case 0xC22703: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C2/C226F0.asm:24 AND #$00FF
    case 0xC22706: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC22706.
    case 0xC22708: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C226F0.asm:25 DEC
    case 0xC22709: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:26 LDY #.SIZEOF(char_struct)
    case 0xC2270A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C226F0.asm:26 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2270A.
    case 0xC2270C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C226F0.asm:27 JSL MULT168
    case 0xC2270D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C226F0.asm:28 TAX
    case 0xC22711: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:29 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC22712: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/unknown/C2/C226F0.asm:30 AND #$00FF
    case 0xC22715: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC22715.
    case 0xC22717: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C226F0.asm:31 CMP #1
    case 0xC22718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C226F0.asm:31 CMP #1
    // Overlapping static entry reached from 0xC22718.
    case 0xC2271A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C226F0.asm:32 BEQ @UNKNOWN2
    case 0xC2271B: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:33 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC2271D: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C226F0.asm:34 AND #$00FF
    case 0xC22720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC22720.
    case 0xC22722: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C226F0.asm:35 STA @VIRTUAL02
    case 0xC22723: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C226F0.asm:36 LDA @LOCAL00
    case 0xC22725: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:37 CMP @VIRTUAL02
    case 0xC22727: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C226F0.asm:38 BCC @UNKNOWN0
    case 0xC22729: cpu.execute_instruction<0x90>(0x0000D4, 2); return true;
    // src/unknown/C2/C226F0.asm:40 LDA @LOCAL00
    case 0xC2272B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C226F0.asm:41 END_C_FUNCTION
    case 0xC2272D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226F0.asm:41 END_C_FUNCTION
    case 0xC2272E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2272F.asm (unresolved).
bool execute_unresolved_c2_c2272f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2272F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2272F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC22731: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC22732: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC22733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22733.
    case 0xC22735: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC22736: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:15 LDA #0
    case 0xC22737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2272F.asm:15 LDA #0
    // Overlapping static entry reached from 0xC22737.
    case 0xC22739: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2272F.asm:16 STA @LOCAL01
    case 0xC2273A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:17 TAY
    case 0xC2273C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:18 STY @LOCAL00
    case 0xC2273D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:20 BRA @UNKNOWN2
    case 0xC2273F: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C2/C2272F.asm:28 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC22741: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/unknown/C2/C2272F.asm:30 AND #$00FF
    case 0xC22744: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC22744.
    case 0xC22746: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2272F.asm:31 DEC
    case 0xC22747: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC22748: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2272F.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22748.
    case 0xC2274A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2272F.asm:33 JSL MULT168
    case 0xC2274B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2272F.asm:34 TAX
    case 0xC2274F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:35 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC22750: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/unknown/C2/C2272F.asm:36 AND #$00FF
    case 0xC22753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC22753.
    case 0xC22755: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2272F.asm:37 TAX
    case 0xC22756: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:38 CPX #1
    case 0xC22757: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2272F.asm:38 CPX #1
    // Overlapping static entry reached from 0xC22757.
    case 0xC22759: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2272F.asm:39 BEQ @UNKNOWN1
    case 0xC2275A: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2272F.asm:40 CPX #2
    case 0xC2275C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2272F.asm:40 CPX #2
    // Overlapping static entry reached from 0xC2275C.
    case 0xC2275E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2272F.asm:41 BEQ @UNKNOWN1
    case 0xC2275F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2272F.asm:47 LDA @LOCAL01
    case 0xC22761: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:48 INC
    case 0xC22763: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:49 STA @LOCAL01
    case 0xC22764: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:57 LDY @LOCAL00
    case 0xC22766: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:58 INY
    case 0xC22768: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:59 STY @LOCAL00
    case 0xC22769: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:62 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC2276B: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C2272F.asm:63 AND #$00FF
    case 0xC2276E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2276E.
    case 0xC22770: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2272F.asm:64 STA @VIRTUAL02
    case 0xC22771: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2272F.asm:68 TYA
    case 0xC22773: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:70 CMP @VIRTUAL02
    case 0xC22774: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2272F.asm:71 BCC @UNKNOWN0
    case 0xC22776: cpu.execute_instruction<0x90>(0x0000C9, 2); return true;
    // src/unknown/C2/C2272F.asm:76 LDA @LOCAL01
    case 0xC22778: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:78 PLD
    case 0xC2277A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:79 RTL
    case 0xC2277B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2277C.asm (unresolved).
bool execute_unresolved_c2_c2277c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2277C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2277C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC2277E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC2277F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22780: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22780.
    case 0xC22782: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22783: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:9 LDY #0
    case 0xC22784: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2277C.asm:9 LDY #0
    // Overlapping static entry reached from 0xC22784.
    case 0xC22786: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2277C.asm:10 STY @LOCAL01
    case 0xC22787: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:11 BRA @UNKNOWN2
    case 0xC22789: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C2/C2277C.asm:20 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC2278B: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/unknown/C2/C2277C.asm:22 AND #$00FF
    case 0xC2278E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2278E.
    case 0xC22790: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2277C.asm:23 STA @LOCAL00
    case 0xC22791: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2277C.asm:24 DEC
    case 0xC22793: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC22794: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2277C.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22794.
    case 0xC22796: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2277C.asm:26 JSL MULT168
    case 0xC22797: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2277C.asm:27 TAX
    case 0xC2279B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:28 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC2279C: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/unknown/C2/C2277C.asm:29 AND #$00FF
    case 0xC2279F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2279F.
    case 0xC227A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2277C.asm:30 TAX
    case 0xC227A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:31 CPX #1
    case 0xC227A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2277C.asm:31 CPX #1
    // Overlapping static entry reached from 0xC227A3.
    case 0xC227A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2277C.asm:32 BEQ @UNKNOWN1
    case 0xC227A6: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2277C.asm:33 CPX #2
    case 0xC227A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2277C.asm:33 CPX #2
    // Overlapping static entry reached from 0xC2333F.
    case 0xC227A9: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C2/C2277C.asm:33 CPX #2
    // Overlapping static entry reached from 0xC227A8.
    case 0xC227AA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2277C.asm:34 BEQ @UNKNOWN1
    case 0xC227AB: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2277C.asm:35 LDA @LOCAL00
    case 0xC227AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2277C.asm:36 BRA @UNKNOWN3
    case 0xC227AF: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C2277C.asm:38 LDY @LOCAL01
    case 0xC227B1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:39 INY
    case 0xC227B3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:40 STY @LOCAL01
    case 0xC227B4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC227B6: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C2/C2277C.asm:43 AND #$00FF
    case 0xC227B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC227B9.
    case 0xC227BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2277C.asm:44 STA @VIRTUAL02
    case 0xC227BC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2277C.asm:45 TYA
    case 0xC227BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:46 CMP @VIRTUAL02
    case 0xC227BF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2277C.asm:47 BCC @UNKNOWN0
    case 0xC227C1: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C2/C2277C.asm:48 LDA #0
    case 0xC227C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2277C.asm:48 LDA #0
    // Overlapping static entry reached from 0xC227C3.
    case 0xC227C5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2277C.asm:50 END_C_FUNCTION
    case 0xC227C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2277C.asm:50 END_C_FUNCTION
    case 0xC227C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22A3A.asm (unresolved).
bool execute_unresolved_c2_c22a3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22A3A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22A3A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A3C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A3D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A3E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC22A3F.
    case 0xC22A41: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A42: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22A43: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:17 STY @LOCAL07
    case 0xC22A44: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:17 STY @LOCAL07
    // Overlapping static entry reached from 0xC22A41.
    case 0xC22A45: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:18 STA @VIRTUAL02
    case 0xC22A46: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:19 STA @LOCAL06
    case 0xC22A48: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:20 TXA
    case 0xC22A4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:21 DEC
    case 0xC22A4B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:22 STA @VIRTUAL04
    case 0xC22A4C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:23 TYA
    case 0xC22A4E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:24 DEC
    case 0xC22A4F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:25 STA @VIRTUAL02
    case 0xC22A50: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:26 LDA @VIRTUAL04
    case 0xC22A52: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC22A54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22A54.
    case 0xC22A56: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:28 JSL MULT168
    case 0xC22A57: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:29 CLC
    case 0xC22A5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC22A5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C2/C22A3A.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC22A5C.
    case 0xC22A5E: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C2/C22A3A.asm:31 CLC
    case 0xC22A5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:32 ADC @VIRTUAL02
    case 0xC22A60: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:32 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC22A5E.
    case 0xC22A61: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:33 TAX
    case 0xC22A62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:34 LDA __BSS_START__,X
    case 0xC22A63: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:35 AND #$00FF
    case 0xC22A66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC22A66.
    case 0xC22A68: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:36 TAX
    case 0xC22A69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:37 STX @LOCAL05
    case 0xC22A6A: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:38 LDY @LOCAL07
    case 0xC22A6C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:39 TYA
    case 0xC22A6E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:40 STA @LOCAL04
    case 0xC22A6F: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:41 BRA @UNKNOWN1
    case 0xC22A71: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:43 LDA @LOCAL04
    case 0xC22A73: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:44 TAY
    case 0xC22A75: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:45 DEY
    case 0xC22A76: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A77: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:47 LDA @VIRTUAL00
    case 0xC22A79: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:48 STA (@LOCAL03),Y
    case 0xC22A7B: cpu.execute_instruction<0x91>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC22A7D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:50 LDA @LOCAL04
    case 0xC22A7F: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:51 INC
    case 0xC22A81: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:52 STA @LOCAL04
    case 0xC22A82: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:54 CMP #$000E
    case 0xC22A84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C2/C22A3A.asm:54 CMP #$000E
    // Overlapping static entry reached from 0xC22A84.
    case 0xC22A86: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C2/C22A3A.asm:55 BCS @UNKNOWN2
    case 0xC22A87: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/unknown/C2/C22A3A.asm:56 LDA @VIRTUAL04
    case 0xC22A89: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:57 LDY #.SIZEOF(char_struct)
    case 0xC22A8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:57 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22A8B.
    case 0xC22A8D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:58 JSL MULT168
    case 0xC22A8E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:59 CLC
    case 0xC22A92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC22A93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C2/C22A3A.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC22A93.
    case 0xC22A95: cpu.execute_instruction<0x99>(0x001385, 3); return true;
    // src/unknown/C2/C22A3A.asm:61 STA @LOCAL03
    case 0xC22A96: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:62 LDA @LOCAL04
    case 0xC22A98: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:63 TAY
    case 0xC22A9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:65 LDA (@LOCAL03),Y
    case 0xC22A9D: cpu.execute_instruction<0xB1>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:66 STA @VIRTUAL00
    case 0xC22A9F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC22AA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:68 LDA @VIRTUAL00
    case 0xC22AA3: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:69 AND #$00FF
    case 0xC22AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC22AA5.
    case 0xC22AA7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22A3A.asm:70 BNE @UNKNOWN0
    case 0xC22AA8: cpu.execute_instruction<0xD0>(0x0000C9, 2); return true;
    // src/unknown/C2/C22A3A.asm:72 LDA @VIRTUAL04
    case 0xC22AAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC22AAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22AAC.
    case 0xC22AAE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:74 JSL MULT168
    case 0xC22AAF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:75 STA @LOCAL02
    case 0xC22AB3: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:76 LDA @LOCAL04
    case 0xC22AB5: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:77 DEC
    case 0xC22AB7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:78 STA @VIRTUAL02
    case 0xC22AB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:79 LDA @LOCAL02
    case 0xC22ABA: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:80 CLC
    case 0xC22ABC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:81 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC22ABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C2/C22A3A.asm:81 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC22ABD.
    case 0xC22ABF: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C2/C22A3A.asm:82 CLC
    case 0xC22AC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:83 ADC @VIRTUAL02
    case 0xC22AC1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:83 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC22ABF.
    case 0xC22AC2: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:84 TAX
    case 0xC22AC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC22AC4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:86 LDA #$0000
    case 0xC22AC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C22A3A.asm:87 STA __BSS_START__,X
    case 0xC22AC8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:87 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC22AC6.
    case 0xC22AC9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:88 LDX @LOCAL05
    case 0xC22ACB: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC22ACD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:90 LDA @LOCAL06
    case 0xC22ACF: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:91 STA @VIRTUAL02
    case 0xC22AD1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:92 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC22AD3: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // src/unknown/C2/C22A3A.asm:93 LDA @VIRTUAL04
    case 0xC22AD7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:94 INC
    case 0xC22AD9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:95 STA @LOCAL03
    case 0xC22ADA: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:96 PHA
    case 0xC22ADC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:97 LDA @VIRTUAL02
    case 0xC22ADD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:98 PLY
    case 0xC22ADF: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:99 STY @VIRTUAL02
    case 0xC22AE0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:100 CMP @VIRTUAL02
    case 0xC22AE2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:101 BNEL @UNKNOWN28
    case 0xC22AE4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:101 BNEL @UNKNOWN28
    case 0xC22AE6: cpu.execute_instruction<0x4C>(0x002E14, 3); return true;
    // src/unknown/C2/C22A3A.asm:102 LDA @LOCAL02
    case 0xC22AE9: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:103 CLC
    case 0xC22AEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:104 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC22AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FF, 2); else cpu.execute_instruction<0x69>(0x0099FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:104 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22AEC.
    case 0xC22AEE: cpu.execute_instruction<0x99>(0x000F85, 3); return true;
    // src/unknown/C2/C22A3A.asm:105 STA @LOCAL01
    case 0xC22AEF: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC22AF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:107 LDA (@LOCAL01)
    case 0xC22AF3: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:108 STA @LOCAL00
    case 0xC22AF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:109 REP #PROC_FLAGS::ACCUM8
    case 0xC22AF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:110 AND #$00FF
    case 0xC22AF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC22AF9.
    case 0xC22AFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:111 STA @LOCAL05
    case 0xC22AFC: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:112 LDY @LOCAL07
    case 0xC22AFE: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:113 CPY @LOCAL05
    case 0xC22B00: cpu.execute_instruction<0xC4>(0x000017, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:114 BNEL @UNKNOWN8
    case 0xC22B02: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:114 BNEL @UNKNOWN8
    case 0xC22B04: cpu.execute_instruction<0x4C>(0x002B99, 3); return true;
    // src/unknown/C2/C22A3A.asm:115 LDA @LOCAL06
    case 0xC22B07: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:116 STA @VIRTUAL02
    case 0xC22B09: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:117 JSL UNKNOWN_C22351
    case 0xC22B0B: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // src/unknown/C2/C22A3A.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:119 STA (@LOCAL01)
    case 0xC22B11: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC22B13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:121 LDA @LOCAL02
    case 0xC22B15: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:122 CLC
    case 0xC22B17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:123 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:123 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22B18.
    case 0xC22B1A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:124 TAX
    case 0xC22B1B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:126 LDA __BSS_START__,X
    case 0xC22B1E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:127 STA @LOCAL00
    case 0xC22B21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xC22B23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:129 AND #$00FF
    case 0xC22B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC22B25.
    case 0xC22B27: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:130 STA @VIRTUAL02
    case 0xC22B28: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:131 LDY @LOCAL07
    case 0xC22B2A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:132 TYA
    case 0xC22B2C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:133 CMP @VIRTUAL02
    case 0xC22B2D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:134 BCS @UNKNOWN5
    case 0xC22B2F: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:136 LDA @LOCAL00
    case 0xC22B33: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:137 DEC
    case 0xC22B35: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:138 STA __BSS_START__,X
    case 0xC22B36: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC22B39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:141 LDA @VIRTUAL04
    case 0xC22B3B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:142 LDY #.SIZEOF(char_struct)
    case 0xC22B3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:142 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22B3D.
    case 0xC22B3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:143 JSL MULT168
    case 0xC22B40: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:144 CLC
    case 0xC22B44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:145 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22B45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:145 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22B45.
    case 0xC22B47: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:146 TAX
    case 0xC22B48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B49: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:148 LDA __BSS_START__,X
    case 0xC22B4B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:149 STA @LOCAL00
    case 0xC22B4E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC22B50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:151 AND #$00FF
    case 0xC22B52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC22B52.
    case 0xC22B54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:152 STA @VIRTUAL02
    case 0xC22B55: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:153 LDY @LOCAL07
    case 0xC22B57: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:154 TYA
    case 0xC22B59: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:155 CMP @VIRTUAL02
    case 0xC22B5A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:156 BCS @UNKNOWN6
    case 0xC22B5C: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:157 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:158 LDA @LOCAL00
    case 0xC22B60: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:159 DEC
    case 0xC22B62: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:160 STA __BSS_START__,X
    case 0xC22B63: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC22B66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:163 LDA @VIRTUAL04
    case 0xC22B68: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:164 LDY #.SIZEOF(char_struct)
    case 0xC22B6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:164 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22B6A.
    case 0xC22B6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:165 JSL MULT168
    case 0xC22B6D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:166 CLC
    case 0xC22B71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:167 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:167 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22B72.
    case 0xC22B74: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:168 TAX
    case 0xC22B75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:170 LDA __BSS_START__,X
    case 0xC22B78: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:171 STA @LOCAL00
    case 0xC22B7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC22B7D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:173 AND #$00FF
    case 0xC22B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:173 AND #$00FF
    // Overlapping static entry reached from 0xC22B7F.
    case 0xC22B81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:174 STA @VIRTUAL02
    case 0xC22B82: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:175 LDY @LOCAL07
    case 0xC22B84: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:176 TYA
    case 0xC22B86: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:177 CMP @VIRTUAL02
    case 0xC22B87: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:178 BCC @UNKNOWN7
    case 0xC22B89: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:179 JMP @UNKNOWN36
    case 0xC22B8B: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:182 LDA @LOCAL00
    case 0xC22B90: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:183 DEC
    case 0xC22B92: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:184 STA __BSS_START__,X
    case 0xC22B93: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:185 JMP @UNKNOWN36
    case 0xC22B96: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:188 LDA @LOCAL02
    case 0xC22B99: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:189 CLC
    case 0xC22B9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:190 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22B9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:190 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22B9C.
    case 0xC22B9E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:191 TAX
    case 0xC22B9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:192 STX @LOCAL03
    case 0xC22BA0: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:193 LDA __BSS_START__,X
    case 0xC22BA2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:194 AND #$00FF
    case 0xC22BA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC22BA5.
    case 0xC22BA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:195 STA @VIRTUAL02
    case 0xC22BA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:196 TYA
    case 0xC22BAA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:197 CMP @VIRTUAL02
    case 0xC22BAB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:198 BNEL @UNKNOWN13
    case 0xC22BAD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:198 BNEL @UNKNOWN13
    case 0xC22BAF: cpu.execute_instruction<0x4C>(0x002C3A, 3); return true;
    // src/unknown/C2/C22A3A.asm:199 LDA @LOCAL06
    case 0xC22BB2: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:200 STA @VIRTUAL02
    case 0xC22BB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:201 JSL UNKNOWN_C22351
    case 0xC22BB6: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // src/unknown/C2/C22A3A.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BBA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:203 LDX @LOCAL03
    case 0xC22BBC: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:204 STA __BSS_START__,X
    case 0xC22BBE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:205 LDA (@LOCAL01)
    case 0xC22BC1: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:206 STA @LOCAL00
    case 0xC22BC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC22BC5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:208 AND #$00FF
    case 0xC22BC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:208 AND #$00FF
    // Overlapping static entry reached from 0xC22BC7.
    case 0xC22BC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:209 STA @VIRTUAL02
    case 0xC22BCA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:210 LDY @LOCAL07
    case 0xC22BCC: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:211 TYA
    case 0xC22BCE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:212 CMP @VIRTUAL02
    case 0xC22BCF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:213 BCS @UNKNOWN10
    case 0xC22BD1: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:215 LDA @LOCAL00
    case 0xC22BD5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:216 DEC
    case 0xC22BD7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:217 STA (@LOCAL01)
    case 0xC22BD8: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:219 REP #PROC_FLAGS::ACCUM8
    case 0xC22BDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:220 LDA @VIRTUAL04
    case 0xC22BDC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:221 LDY #.SIZEOF(char_struct)
    case 0xC22BDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:221 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22BDE.
    case 0xC22BE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:222 JSL MULT168
    case 0xC22BE1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:223 CLC
    case 0xC22BE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:224 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22BE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:224 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22BE6.
    case 0xC22BE8: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:225 TAX
    case 0xC22BE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BEA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:227 LDA __BSS_START__,X
    case 0xC22BEC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:228 STA @LOCAL00
    case 0xC22BEF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC22BF1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:230 AND #$00FF
    case 0xC22BF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC22BF3.
    case 0xC22BF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:231 STA @VIRTUAL02
    case 0xC22BF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:232 LDY @LOCAL07
    case 0xC22BF8: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:233 TYA
    case 0xC22BFA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:234 CMP @VIRTUAL02
    case 0xC22BFB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:235 BCS @UNKNOWN11
    case 0xC22BFD: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BFF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:237 LDA @LOCAL00
    case 0xC22C01: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:238 DEC
    case 0xC22C03: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:239 STA __BSS_START__,X
    case 0xC22C04: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:241 REP #PROC_FLAGS::ACCUM8
    case 0xC22C07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:242 LDA @VIRTUAL04
    case 0xC22C09: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:243 LDY #.SIZEOF(char_struct)
    case 0xC22C0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:243 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22C0B.
    case 0xC22C0D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:244 JSL MULT168
    case 0xC22C0E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:245 CLC
    case 0xC22C12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:246 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:246 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22C13.
    case 0xC22C15: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:247 TAX
    case 0xC22C16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:249 LDA __BSS_START__,X
    case 0xC22C19: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:250 STA @LOCAL00
    case 0xC22C1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:251 REP #PROC_FLAGS::ACCUM8
    case 0xC22C1E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:252 AND #$00FF
    case 0xC22C20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC22C20.
    case 0xC22C22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:253 STA @VIRTUAL02
    case 0xC22C23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:254 LDY @LOCAL07
    case 0xC22C25: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:255 TYA
    case 0xC22C27: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:256 CMP @VIRTUAL02
    case 0xC22C28: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:257 BCC @UNKNOWN12
    case 0xC22C2A: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:258 JMP @UNKNOWN36
    case 0xC22C2C: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:261 LDA @LOCAL00
    case 0xC22C31: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:262 DEC
    case 0xC22C33: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:263 STA __BSS_START__,X
    case 0xC22C34: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:264 JMP @UNKNOWN36
    case 0xC22C37: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:267 LDA @LOCAL02
    case 0xC22C3A: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:268 CLC
    case 0xC22C3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC22C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22C3D.
    case 0xC22C3F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:270 TAX
    case 0xC22C40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:271 STX @LOCAL03
    case 0xC22C41: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:272 LDA __BSS_START__,X
    case 0xC22C43: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:273 AND #$00FF
    case 0xC22C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC22C46.
    case 0xC22C48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:274 STA @VIRTUAL02
    case 0xC22C49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:275 TYA
    case 0xC22C4B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:276 CMP @VIRTUAL02
    case 0xC22C4C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:277 BNEL @UNKNOWN18
    case 0xC22C4E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:277 BNEL @UNKNOWN18
    case 0xC22C50: cpu.execute_instruction<0x4C>(0x002CDB, 3); return true;
    // src/unknown/C2/C22A3A.asm:278 LDA @LOCAL06
    case 0xC22C53: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:279 STA @VIRTUAL02
    case 0xC22C55: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:280 JSL UNKNOWN_C22351
    case 0xC22C57: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // src/unknown/C2/C22A3A.asm:281 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C5B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:282 LDX @LOCAL03
    case 0xC22C5D: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:283 STA __BSS_START__,X
    case 0xC22C5F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:284 LDA (@LOCAL01)
    case 0xC22C62: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:285 STA @LOCAL00
    case 0xC22C64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:286 REP #PROC_FLAGS::ACCUM8
    case 0xC22C66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:287 AND #$00FF
    case 0xC22C68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:287 AND #$00FF
    // Overlapping static entry reached from 0xC22C68.
    case 0xC22C6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:288 STA @VIRTUAL02
    case 0xC22C6B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:289 LDY @LOCAL07
    case 0xC22C6D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:290 TYA
    case 0xC22C6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:291 CMP @VIRTUAL02
    case 0xC22C70: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:292 BCS @UNKNOWN15
    case 0xC22C72: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:293 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C74: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:294 LDA @LOCAL00
    case 0xC22C76: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:295 DEC
    case 0xC22C78: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:296 STA (@LOCAL01)
    case 0xC22C79: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC22C7B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:299 LDA @VIRTUAL04
    case 0xC22C7D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:300 LDY #.SIZEOF(char_struct)
    case 0xC22C7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:300 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22C7F.
    case 0xC22C81: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:301 JSL MULT168
    case 0xC22C82: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:302 CLC
    case 0xC22C86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22C87.
    case 0xC22C89: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:304 TAX
    case 0xC22C8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:306 LDA __BSS_START__,X
    case 0xC22C8D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:307 STA @LOCAL00
    case 0xC22C90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC22C92: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:309 AND #$00FF
    case 0xC22C94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC22C94.
    case 0xC22C96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:310 STA @VIRTUAL02
    case 0xC22C97: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:311 LDY @LOCAL07
    case 0xC22C99: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:312 TYA
    case 0xC22C9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:313 CMP @VIRTUAL02
    case 0xC22C9C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:314 BCS @UNKNOWN16
    case 0xC22C9E: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:315 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:316 LDA @LOCAL00
    case 0xC22CA2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:317 DEC
    case 0xC22CA4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:318 STA __BSS_START__,X
    case 0xC22CA5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:320 REP #PROC_FLAGS::ACCUM8
    case 0xC22CA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:321 LDA @VIRTUAL04
    case 0xC22CAA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:322 LDY #.SIZEOF(char_struct)
    case 0xC22CAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:322 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22CAC.
    case 0xC22CAE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:323 JSL MULT168
    case 0xC22CAF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:324 CLC
    case 0xC22CB3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:325 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:325 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22CB4.
    case 0xC22CB6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:326 TAX
    case 0xC22CB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:327 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CB8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:328 LDA __BSS_START__,X
    case 0xC22CBA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:329 STA @LOCAL00
    case 0xC22CBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:330 REP #PROC_FLAGS::ACCUM8
    case 0xC22CBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:331 AND #$00FF
    case 0xC22CC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC22CC1.
    case 0xC22CC3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:332 STA @VIRTUAL02
    case 0xC22CC4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:333 LDY @LOCAL07
    case 0xC22CC6: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:334 TYA
    case 0xC22CC8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:335 CMP @VIRTUAL02
    case 0xC22CC9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:336 BCC @UNKNOWN17
    case 0xC22CCB: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:337 JMP @UNKNOWN36
    case 0xC22CCD: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:339 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:340 LDA @LOCAL00
    case 0xC22CD2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:341 DEC
    case 0xC22CD4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:342 STA __BSS_START__,X
    case 0xC22CD5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:343 JMP @UNKNOWN36
    case 0xC22CD8: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:346 LDA @LOCAL02
    case 0xC22CDB: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:347 CLC
    case 0xC22CDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:348 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC22CDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:348 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22CDE.
    case 0xC22CE0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:349 TAX
    case 0xC22CE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:350 STX @LOCAL03
    case 0xC22CE2: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:351 LDA __BSS_START__,X
    case 0xC22CE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:352 AND #$00FF
    case 0xC22CE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:352 AND #$00FF
    // Overlapping static entry reached from 0xC22CE7.
    case 0xC22CE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:353 STA @VIRTUAL02
    case 0xC22CEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:354 TYA
    case 0xC22CEC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:355 CMP @VIRTUAL02
    case 0xC22CED: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:356 BNEL @UNKNOWN23
    case 0xC22CEF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:356 BNEL @UNKNOWN23
    case 0xC22CF1: cpu.execute_instruction<0x4C>(0x002D7C, 3); return true;
    // src/unknown/C2/C22A3A.asm:357 LDA @LOCAL06
    case 0xC22CF4: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:358 STA @VIRTUAL02
    case 0xC22CF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:359 JSL UNKNOWN_C22351
    case 0xC22CF8: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // src/unknown/C2/C22A3A.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:361 LDX @LOCAL03
    case 0xC22CFE: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:362 STA __BSS_START__,X
    case 0xC22D00: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:363 LDA (@LOCAL01)
    case 0xC22D03: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:364 STA @LOCAL00
    case 0xC22D05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC22D07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:366 AND #$00FF
    case 0xC22D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC22D09.
    case 0xC22D0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:367 STA @VIRTUAL02
    case 0xC22D0C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:368 LDY @LOCAL07
    case 0xC22D0E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:369 TYA
    case 0xC22D10: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:370 CMP @VIRTUAL02
    case 0xC22D11: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:371 BCS @UNKNOWN20
    case 0xC22D13: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:373 LDA @LOCAL00
    case 0xC22D17: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:374 DEC
    case 0xC22D19: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:375 STA (@LOCAL01)
    case 0xC22D1A: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:377 REP #PROC_FLAGS::ACCUM8
    case 0xC22D1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:378 LDA @VIRTUAL04
    case 0xC22D1E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:379 LDY #.SIZEOF(char_struct)
    case 0xC22D20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:379 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22D20.
    case 0xC22D22: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:380 JSL MULT168
    case 0xC22D23: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:381 CLC
    case 0xC22D27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:382 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:382 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22D28.
    case 0xC22D2A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:383 TAX
    case 0xC22D2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:384 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:385 LDA __BSS_START__,X
    case 0xC22D2E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:386 STA @LOCAL00
    case 0xC22D31: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:387 REP #PROC_FLAGS::ACCUM8
    case 0xC22D33: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:388 AND #$00FF
    case 0xC22D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC22D35.
    case 0xC22D37: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:389 STA @VIRTUAL02
    case 0xC22D38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:390 LDY @LOCAL07
    case 0xC22D3A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:391 TYA
    case 0xC22D3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:392 CMP @VIRTUAL02
    case 0xC22D3D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:393 BCS @UNKNOWN21
    case 0xC22D3F: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:394 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:395 LDA @LOCAL00
    case 0xC22D43: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:396 DEC
    case 0xC22D45: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:397 STA __BSS_START__,X
    case 0xC22D46: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:399 REP #PROC_FLAGS::ACCUM8
    case 0xC22D49: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:400 LDA @VIRTUAL04
    case 0xC22D4B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:401 LDY #.SIZEOF(char_struct)
    case 0xC22D4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:401 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22D4D.
    case 0xC22D4F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:402 JSL MULT168
    case 0xC22D50: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:403 CLC
    case 0xC22D54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:404 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:404 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22D55.
    case 0xC22D57: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:405 TAX
    case 0xC22D58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:406 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D59: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:407 LDA __BSS_START__,X
    case 0xC22D5B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:408 STA @LOCAL00
    case 0xC22D5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:409 REP #PROC_FLAGS::ACCUM8
    case 0xC22D60: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:410 AND #$00FF
    case 0xC22D62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:410 AND #$00FF
    // Overlapping static entry reached from 0xC22D62.
    case 0xC22D64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:411 STA @VIRTUAL02
    case 0xC22D65: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:412 LDY @LOCAL07
    case 0xC22D67: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:413 TYA
    case 0xC22D69: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:414 CMP @VIRTUAL02
    case 0xC22D6A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:415 BCC @UNKNOWN22
    case 0xC22D6C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:416 JMP @UNKNOWN36
    case 0xC22D6E: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D71: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:419 LDA @LOCAL00
    case 0xC22D73: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:420 DEC
    case 0xC22D75: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:421 STA __BSS_START__,X
    case 0xC22D76: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:422 JMP @UNKNOWN36
    case 0xC22D79: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:424 CPY @LOCAL05
    case 0xC22D7C: cpu.execute_instruction<0xC4>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:425 BCS @UNKNOWN24
    case 0xC22D7E: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:426 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:427 LDA @LOCAL00
    case 0xC22D82: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:428 DEC
    case 0xC22D84: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:429 STA (@LOCAL01)
    case 0xC22D85: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:431 REP #PROC_FLAGS::ACCUM8
    case 0xC22D87: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:432 LDA @VIRTUAL04
    case 0xC22D89: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:433 LDY #.SIZEOF(char_struct)
    case 0xC22D8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:433 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22D8B.
    case 0xC22D8D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:434 JSL MULT168
    case 0xC22D8E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:435 CLC
    case 0xC22D92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:436 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:436 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22D93.
    case 0xC22D95: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:437 TAX
    case 0xC22D96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:439 LDA __BSS_START__,X
    case 0xC22D99: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:440 STA @LOCAL00
    case 0xC22D9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:441 REP #PROC_FLAGS::ACCUM8
    case 0xC22D9E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:442 AND #$00FF
    case 0xC22DA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:442 AND #$00FF
    // Overlapping static entry reached from 0xC22DA0.
    case 0xC22DA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:443 STA @VIRTUAL02
    case 0xC22DA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:444 LDY @LOCAL07
    case 0xC22DA5: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:445 TYA
    case 0xC22DA7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:446 CMP @VIRTUAL02
    case 0xC22DA8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:447 BCS @UNKNOWN25
    case 0xC22DAA: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:449 LDA @LOCAL00
    case 0xC22DAE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:450 DEC
    case 0xC22DB0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:451 STA __BSS_START__,X
    case 0xC22DB1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:453 REP #PROC_FLAGS::ACCUM8
    case 0xC22DB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:454 LDA @VIRTUAL04
    case 0xC22DB6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:455 LDY #.SIZEOF(char_struct)
    case 0xC22DB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:455 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22DB8.
    case 0xC22DBA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:456 JSL MULT168
    case 0xC22DBB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:457 CLC
    case 0xC22DBF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:458 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22DC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:458 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22DC0.
    case 0xC22DC2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:459 TAX
    case 0xC22DC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:460 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DC4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:461 LDA __BSS_START__,X
    case 0xC22DC6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:462 STA @LOCAL00
    case 0xC22DC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:463 REP #PROC_FLAGS::ACCUM8
    case 0xC22DCB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:464 AND #$00FF
    case 0xC22DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:464 AND #$00FF
    // Overlapping static entry reached from 0xC22DCD.
    case 0xC22DCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:465 STA @VIRTUAL02
    case 0xC22DD0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:466 LDY @LOCAL07
    case 0xC22DD2: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:467 TYA
    case 0xC22DD4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:468 CMP @VIRTUAL02
    case 0xC22DD5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:469 BCS @UNKNOWN26
    case 0xC22DD7: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:470 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DD9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:471 LDA @LOCAL00
    case 0xC22DDB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:472 DEC
    case 0xC22DDD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:473 STA __BSS_START__,X
    case 0xC22DDE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC22DE1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:476 LDA @VIRTUAL04
    case 0xC22DE3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:477 LDY #.SIZEOF(char_struct)
    case 0xC22DE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:477 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22DE5.
    case 0xC22DE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:478 JSL MULT168
    case 0xC22DE8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:479 CLC
    case 0xC22DEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:480 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22DED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:480 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22DED.
    case 0xC22DEF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:481 TAX
    case 0xC22DF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:482 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:483 LDA __BSS_START__,X
    case 0xC22DF3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:484 STA @LOCAL00
    case 0xC22DF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:485 REP #PROC_FLAGS::ACCUM8
    case 0xC22DF8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:486 AND #$00FF
    case 0xC22DFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:486 AND #$00FF
    // Overlapping static entry reached from 0xC22DFA.
    case 0xC22DFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:487 STA @VIRTUAL02
    case 0xC22DFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:488 LDY @LOCAL07
    case 0xC22DFF: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:489 TYA
    case 0xC22E01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:490 CMP @VIRTUAL02
    case 0xC22E02: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:491 BCC @UNKNOWN27
    case 0xC22E04: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:492 JMP @UNKNOWN36
    case 0xC22E06: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:494 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:495 LDA @LOCAL00
    case 0xC22E0B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:496 DEC
    case 0xC22E0D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:497 STA __BSS_START__,X
    case 0xC22E0E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:498 JMP @UNKNOWN36
    case 0xC22E11: cpu.execute_instruction<0x4C>(0x002F34, 3); return true;
    // src/unknown/C2/C22A3A.asm:501 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    case 0xC22E14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x0099FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:501 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22E14.
    case 0xC22E16: cpu.execute_instruction<0x99>(0x0011B1, 3); return true;
    // src/unknown/C2/C22A3A.asm:502 LDA (@LOCAL02),Y
    case 0xC22E17: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:503 AND #$00FF
    case 0xC22E19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:503 AND #$00FF
    // Overlapping static entry reached from 0xC22E19.
    case 0xC22E1B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:504 STA @VIRTUAL02
    case 0xC22E1C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:505 LDY @LOCAL07
    case 0xC22E1E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:506 TYA
    case 0xC22E20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:507 CMP @VIRTUAL02
    case 0xC22E21: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:507 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC203A4.
    case 0xC22E22: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C2/C22A3A.asm:508 BNE @UNKNOWN29
    case 0xC22E23: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:509 LDX #$0000
    case 0xC22E25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:509 LDX #$0000
    // Overlapping static entry reached from 0xC22E25.
    case 0xC22E27: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:510 LDA @LOCAL03
    case 0xC22E28: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:511 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC22E2A: cpu.execute_instruction<0x22>(0xC4577D, 4); return true;
    // src/unknown/C2/C22A3A.asm:512 BRA @UNKNOWN32
    case 0xC22E2E: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C2/C22A3A.asm:515 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22E30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:515 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22E30.
    case 0xC22E32: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:516 LDA (@LOCAL02),Y
    case 0xC22E33: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:517 AND #$00FF
    case 0xC22E35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC22E35.
    case 0xC22E37: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:518 STA @VIRTUAL02
    case 0xC22E38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:519 LDY @LOCAL07
    case 0xC22E3A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:520 TYA
    case 0xC22E3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:521 CMP @VIRTUAL02
    case 0xC22E3D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:522 BNE @UNKNOWN30
    case 0xC22E3F: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:523 LDX #$0000
    case 0xC22E41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:523 LDX #$0000
    // Overlapping static entry reached from 0xC22E41.
    case 0xC22E43: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:524 LDA @LOCAL03
    case 0xC22E44: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:525 JSL CHANGE_EQUIPPED_BODY
    case 0xC22E46: cpu.execute_instruction<0x22>(0xC457CA, 4); return true;
    // src/unknown/C2/C22A3A.asm:526 BRA @UNKNOWN32
    case 0xC22E4A: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C2/C22A3A.asm:528 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC22E4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:528 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22E4C.
    case 0xC22E4E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:529 LDA (@LOCAL02),Y
    case 0xC22E4F: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:530 AND #$00FF
    case 0xC22E51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:530 AND #$00FF
    // Overlapping static entry reached from 0xC22E51.
    case 0xC22E53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:531 STA @VIRTUAL02
    case 0xC22E54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:532 LDY @LOCAL07
    case 0xC22E56: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:533 TYA
    case 0xC22E58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:534 CMP @VIRTUAL02
    case 0xC22E59: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:535 BNE @UNKNOWN31
    case 0xC22E5B: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:536 LDX #$0000
    case 0xC22E5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:536 LDX #$0000
    // Overlapping static entry reached from 0xC22E5D.
    case 0xC22E5F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:537 LDA @LOCAL03
    case 0xC22E60: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:538 JSL CHANGE_EQUIPPED_ARMS
    case 0xC22E62: cpu.execute_instruction<0x22>(0xC45815, 4); return true;
    // src/unknown/C2/C22A3A.asm:539 BRA @UNKNOWN32
    case 0xC22E66: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C22A3A.asm:541 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC22E68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:541 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22E68.
    case 0xC22E6A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:542 LDA (@LOCAL02),Y
    case 0xC22E6B: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:543 AND #$00FF
    case 0xC22E6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:543 AND #$00FF
    // Overlapping static entry reached from 0xC22E6D.
    case 0xC22E6F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:544 STA @VIRTUAL02
    case 0xC22E70: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:545 LDY @LOCAL07
    case 0xC22E72: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:546 TYA
    case 0xC22E74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:547 CMP @VIRTUAL02
    case 0xC22E75: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:548 BNE @UNKNOWN32
    case 0xC22E77: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C2/C22A3A.asm:549 LDX #$0000
    case 0xC22E79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:549 LDX #$0000
    // Overlapping static entry reached from 0xC22E79.
    case 0xC22E7B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:550 LDA @LOCAL03
    case 0xC22E7C: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:551 JSL CHANGE_EQUIPPED_OTHER
    case 0xC22E7E: cpu.execute_instruction<0x22>(0xC45860, 4); return true;
    // src/unknown/C2/C22A3A.asm:553 LDA @VIRTUAL04
    case 0xC22E82: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:554 LDY #.SIZEOF(char_struct)
    case 0xC22E84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:554 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22E84.
    case 0xC22E86: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:555 JSL MULT168
    case 0xC22E87: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:557 CLC
    case 0xC22E8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:558 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC22E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FF, 2); else cpu.execute_instruction<0x69>(0x0099FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:558 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22E8C.
    case 0xC22E8E: cpu.execute_instruction<0x99>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:559 TAX
    case 0xC22E8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:560 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:560 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22E8E.
    case 0xC22E91: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:561 LDA __BSS_START__,X
    case 0xC22E92: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:561 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22E91.
    case 0xC22E94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:562 STA @LOCAL00
    case 0xC22E95: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:563 REP #PROC_FLAGS::ACCUM8
    case 0xC22E97: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:564 AND #$00FF
    case 0xC22E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:564 AND #$00FF
    // Overlapping static entry reached from 0xC22E99.
    case 0xC22E9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:565 STA @VIRTUAL02
    case 0xC22E9C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:566 LDY @LOCAL07
    case 0xC22E9E: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:567 TYA
    case 0xC22EA0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:568 CMP @VIRTUAL02
    case 0xC22EA1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:569 BCS @UNKNOWN33
    case 0xC22EA3: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:570 SEP #PROC_FLAGS::ACCUM8
    case 0xC22EA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:571 LDA @LOCAL00
    case 0xC22EA7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:572 DEC
    case 0xC22EA9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:573 STA __BSS_START__,X
    case 0xC22EAA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:575 REP #PROC_FLAGS::ACCUM8
    case 0xC22EAD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:576 LDA @VIRTUAL04
    case 0xC22EAF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:577 LDY #.SIZEOF(char_struct)
    case 0xC22EB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:577 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22EB1.
    case 0xC22EB3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:578 JSL MULT168
    case 0xC22EB4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:579 CLC
    case 0xC22EB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:580 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x009A00, 3); return true;
    // src/unknown/C2/C22A3A.asm:580 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22EB9.
    case 0xC22EBB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:581 TAX
    case 0xC22EBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:582 SEP #PROC_FLAGS::ACCUM8
    case 0xC22EBD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:583 LDA __BSS_START__,X
    case 0xC22EBF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:584 STA @LOCAL00
    case 0xC22EC2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:585 REP #PROC_FLAGS::ACCUM8
    case 0xC22EC4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:586 AND #$00FF
    case 0xC22EC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:586 AND #$00FF
    // Overlapping static entry reached from 0xC22EC6.
    case 0xC22EC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:587 STA @VIRTUAL02
    case 0xC22EC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:588 LDY @LOCAL07
    case 0xC22ECB: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:589 TYA
    case 0xC22ECD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:590 CMP @VIRTUAL02
    case 0xC22ECE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:591 BCS @UNKNOWN34
    case 0xC22ED0: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:592 SEP #PROC_FLAGS::ACCUM8
    case 0xC22ED2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:593 LDA @LOCAL00
    case 0xC22ED4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:594 DEC
    case 0xC22ED6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:595 STA __BSS_START__,X
    case 0xC22ED7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:597 REP #PROC_FLAGS::ACCUM8
    case 0xC22EDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:598 LDA @VIRTUAL04
    case 0xC22EDC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:599 LDY #.SIZEOF(char_struct)
    case 0xC22EDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:599 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22EDE.
    case 0xC22EE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:600 JSL MULT168
    case 0xC22EE1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:601 CLC
    case 0xC22EE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22EE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x009A01, 3); return true;
    // src/unknown/C2/C22A3A.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22EE6.
    case 0xC22EE8: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:603 TAX
    case 0xC22EE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC22EEA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:605 LDA __BSS_START__,X
    case 0xC22EEC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:606 STA @LOCAL00
    case 0xC22EEF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:607 REP #PROC_FLAGS::ACCUM8
    case 0xC22EF1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:608 AND #$00FF
    case 0xC22EF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:608 AND #$00FF
    // Overlapping static entry reached from 0xC22EF3.
    case 0xC22EF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:609 STA @VIRTUAL02
    case 0xC22EF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:610 LDY @LOCAL07
    case 0xC22EF8: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:611 TYA
    case 0xC22EFA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:612 CMP @VIRTUAL02
    case 0xC22EFB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:613 BCS @UNKNOWN35
    case 0xC22EFD: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:614 SEP #PROC_FLAGS::ACCUM8
    case 0xC22EFF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:615 LDA @LOCAL00
    case 0xC22F01: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:616 DEC
    case 0xC22F03: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:617 STA __BSS_START__,X
    case 0xC22F04: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:619 REP #PROC_FLAGS::ACCUM8
    case 0xC22F07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:620 LDA @VIRTUAL04
    case 0xC22F09: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:621 LDY #.SIZEOF(char_struct)
    case 0xC22F0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C22A3A.asm:621 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22F0B.
    case 0xC22F0D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:622 JSL MULT168
    case 0xC22F0E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C22A3A.asm:623 CLC
    case 0xC22F12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:624 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22F13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x009A02, 3); return true;
    // src/unknown/C2/C22A3A.asm:624 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22F13.
    case 0xC22F15: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:625 TAX
    case 0xC22F16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC22F17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:627 LDA __BSS_START__,X
    case 0xC22F19: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:628 STA @LOCAL00
    case 0xC22F1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:629 REP #PROC_FLAGS::ACCUM8
    case 0xC22F1E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:630 AND #$00FF
    case 0xC22F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:630 AND #$00FF
    // Overlapping static entry reached from 0xC22F20.
    case 0xC22F22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:631 STA @VIRTUAL02
    case 0xC22F23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:632 LDY @LOCAL07
    case 0xC22F25: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:633 TYA
    case 0xC22F27: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:634 CMP @VIRTUAL02
    case 0xC22F28: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:635 BCS @UNKNOWN36
    case 0xC22F2A: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:636 SEP #PROC_FLAGS::ACCUM8
    case 0xC22F2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:637 LDA @LOCAL00
    case 0xC22F2E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:638 DEC
    case 0xC22F30: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:639 STA __BSS_START__,X
    case 0xC22F31: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:641 REP #PROC_FLAGS::ACCUM8
    case 0xC22F34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22A3A.asm:642 END_C_FUNCTION
    case 0xC22F36: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22A3A.asm:642 END_C_FUNCTION
    case 0xC22F37: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23008.asm (unresolved).
bool execute_unresolved_c2_c23008_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23008.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23008: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC2300A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC2300B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC2300C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2300C.
    case 0xC2300E: cpu.execute_instruction<0xFF>(0x3AA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC2300F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:7 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    case 0xC23010: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00983A, 3); return true;
    // src/unknown/C2/C23008.asm:7 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    // Overlapping static entry reached from 0xC23010.
    case 0xC23012: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:8 STX @LOCAL00
    case 0xC23013: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23008.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC23015: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:10 LDA __BSS_START__,X
    case 0xC23017: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:11 STA GAME_STATE+game_state::party_npc_1_id_copy
    case 0xC2301A: cpu.execute_instruction<0x8D>(0x009841, 3); return true;
    // src/unknown/C2/C23008.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2301D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:13 LDA GAME_STATE+game_state::party_npc_1_hp
    case 0xC2301F: cpu.execute_instruction<0xAD>(0x00983C, 3); return true;
    // src/unknown/C2/C23008.asm:14 STA GAME_STATE + game_state::party_npc_1_hp_copy
    case 0xC23022: cpu.execute_instruction<0x8D>(0x009843, 3); return true;
    // src/unknown/C2/C23008.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC23025: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003B, 2); else cpu.execute_instruction<0xA0>(0x00983B, 3); return true;
    // src/unknown/C2/C23008.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC23025.
    case 0xC23027: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC23028: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:17 LDA __BSS_START__,Y
    case 0xC2302A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:18 STA GAME_STATE + game_state::party_npc_2_id_copy
    case 0xC2302D: cpu.execute_instruction<0x8D>(0x009842, 3); return true;
    // src/unknown/C2/C23008.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC23030: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:20 LDA GAME_STATE+game_state::party_npc_2_hp
    case 0xC23032: cpu.execute_instruction<0xAD>(0x00983E, 3); return true;
    // src/unknown/C2/C23008.asm:21 STA GAME_STATE + game_state::party_npc_2_hp_copy
    case 0xC23035: cpu.execute_instruction<0x8D>(0x009845, 3); return true;
    // src/unknown/C2/C23008.asm:22 LDA __BSS_START__,Y
    case 0xC23038: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:23 AND #$00FF
    case 0xC2303B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23008.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2303B.
    case 0xC2303D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23008.asm:24 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2303E: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C23008.asm:25 LDX @LOCAL00
    case 0xC23042: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23008.asm:26 LDA __BSS_START__,X
    case 0xC23044: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:27 AND #$00FF
    case 0xC23047: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23008.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC23047.
    case 0xC23049: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23008.asm:28 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2304A: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C23008.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC2304E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x009831, 3); return true;
    // src/unknown/C2/C23008.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC2304E.
    case 0xC23050: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC23051: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC23054: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC23056: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC23059: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC2305B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC2305D: cpu.execute_instruction<0x8D>(0x009847, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC23060: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC23062: cpu.execute_instruction<0x8D>(0x009849, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC23065: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC23065.
    case 0xC23067: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC23068: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2306A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC2306A.
    case 0xC2306C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2306D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC2306F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC23071: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC23074: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC23076: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23008.asm:34 END_C_FUNCTION
    case 0xC23079: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23008.asm:34 END_C_FUNCTION
    case 0xC2307A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2307B.asm (unresolved).
bool execute_unresolved_c2_c2307b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2307B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2307B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC2307D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC2307E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC2307F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2307F.
    case 0xC23081: cpu.execute_instruction<0xFF>(0x3AA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC23082: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:8 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    case 0xC23083: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00983A, 3); return true;
    // src/unknown/C2/C2307B.asm:8 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    // Overlapping static entry reached from 0xC23083.
    case 0xC23085: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:9 STX @LOCAL01
    case 0xC23086: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2307B.asm:10 LDA __BSS_START__,X
    case 0xC23088: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:11 AND #$00FF
    case 0xC2308B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC2308B.
    case 0xC2308D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:12 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2308E: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C2307B.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC23092: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003B, 2); else cpu.execute_instruction<0xA0>(0x00983B, 3); return true;
    // src/unknown/C2/C2307B.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC23092.
    case 0xC23094: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:14 STY @LOCAL00
    case 0xC23095: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2307B.asm:15 LDA __BSS_START__,Y
    case 0xC23097: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:16 AND #$00FF
    case 0xC2309A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2309A.
    case 0xC2309C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:17 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC2309D: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/unknown/C2/C2307B.asm:18 LDA GAME_STATE+game_state::party_npc_1_id_copy
    case 0xC230A1: cpu.execute_instruction<0xAD>(0x009841, 3); return true;
    // src/unknown/C2/C2307B.asm:19 AND #$00FF
    case 0xC230A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC230A4.
    case 0xC230A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2307B.asm:20 BEQ @UNKNOWN0
    case 0xC230A7: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C2/C2307B.asm:21 LDX @LOCAL01
    case 0xC230A9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2307B.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC230AB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:23 STA __BSS_START__,X
    case 0xC230AD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC230B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:25 AND #$00FF
    case 0xC230B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC230B2.
    case 0xC230B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:26 JSL ADD_CHAR_TO_PARTY
    case 0xC230B5: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/C2/C2307B.asm:27 LDA GAME_STATE + game_state::party_npc_1_hp_copy
    case 0xC230B9: cpu.execute_instruction<0xAD>(0x009843, 3); return true;
    // src/unknown/C2/C2307B.asm:28 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC230BC: cpu.execute_instruction<0x8D>(0x00983C, 3); return true;
    // src/unknown/C2/C2307B.asm:29 LDA GAME_STATE + game_state::party_npc_2_id_copy
    case 0xC230BF: cpu.execute_instruction<0xAD>(0x009842, 3); return true;
    // src/unknown/C2/C2307B.asm:30 AND #$00FF
    case 0xC230C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC230C2.
    case 0xC230C4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2307B.asm:31 BEQ @UNKNOWN0
    case 0xC230C5: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C2/C2307B.asm:32 LDY @LOCAL00
    case 0xC230C7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2307B.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC230C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:34 STA __BSS_START__,Y
    case 0xC230CB: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC230CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:36 AND #$00FF
    case 0xC230D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC230D0.
    case 0xC230D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:37 JSL ADD_CHAR_TO_PARTY
    case 0xC230D3: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/C2/C2307B.asm:38 LDA GAME_STATE + game_state::party_npc_2_hp_copy
    case 0xC230D7: cpu.execute_instruction<0xAD>(0x009845, 3); return true;
    // src/unknown/C2/C2307B.asm:39 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC230DA: cpu.execute_instruction<0x8D>(0x00983E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC230DD: cpu.execute_instruction<0xAD>(0x009847, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC230E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC230E2: cpu.execute_instruction<0xAD>(0x009849, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC230E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC230E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC230E9: cpu.execute_instruction<0x8D>(0x009831, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC230EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC230EE: cpu.execute_instruction<0x8D>(0x009833, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2307B.asm:43 END_C_FUNCTION
    case 0xC230F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2307B.asm:43 END_C_FUNCTION
    case 0xC230F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23E32.asm (unresolved).
bool execute_unresolved_c2_c23e32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23E32.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E32: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23E34: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23E35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23E36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC23E36.
    case 0xC23E38: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23E39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23E3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23E3A.
    case 0xC23E3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23E3D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23E3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23E3F.
    case 0xC23E41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23E42: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23E44: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23E47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23E49: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23E4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C23E32.asm:9 CMP @VIRTUAL0A+2
    case 0xC23E4E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/unknown/C2/C23E32.asm:10 BNE @UNKNOWN0
    case 0xC23E50: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C23E32.asm:11 LDA @VIRTUAL06
    case 0xC23E52: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C2/C23E32.asm:12 CMP @VIRTUAL0A
    case 0xC23E54: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C23E32.asm:14 BEQ @UNKNOWN4
    case 0xC23E56: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C2/C23E32.asm:15 LDX #0
    case 0xC23E58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C23E32.asm:15 LDX #0
    // Overlapping static entry reached from 0xC23E58.
    case 0xC23E5A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C23E32.asm:16 STX @LOCAL00
    case 0xC23E5B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:17 BRA @UNKNOWN2
    case 0xC23E5D: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C2/C23E32.asm:19 TXA
    case 0xC23E5F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:20 JSL IS_CHAR_TARGETTED
    case 0xC23E60: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/unknown/C2/C23E32.asm:21 CMP #0
    case 0xC23E64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C23E32.asm:21 CMP #0
    // Overlapping static entry reached from 0xC23E64.
    case 0xC23E66: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C23E32.asm:22 BNE @UNKNOWN3
    case 0xC23E67: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C2/C23E32.asm:23 LDX @LOCAL00
    case 0xC23E69: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:24 INX
    case 0xC23E6B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:25 STX @LOCAL00
    case 0xC23E6C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:27 CPX #BATTLER_COUNT
    case 0xC23E6E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C23E32.asm:27 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC23E6E.
    case 0xC23E70: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C23E32.asm:28 BCC @UNKNOWN1
    case 0xC23E71: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/unknown/C2/C23E32.asm:30 LDX @LOCAL00
    case 0xC23E73: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:31 TXA
    case 0xC23E75: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:32 LDY #.SIZEOF(battler)
    case 0xC23E76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E32.asm:32 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23E76.
    case 0xC23E78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E32.asm:33 JSL MULT168
    case 0xC23E79: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C23E32.asm:34 CLC
    case 0xC23E7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:35 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC23E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/unknown/C2/C23E32.asm:35 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC23E7E.
    case 0xC23E80: cpu.execute_instruction<0x9F>(0xA9728D, 4); return true;
    // src/unknown/C2/C23E32.asm:36 STA CURRENT_TARGET
    case 0xC23E81: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/unknown/C2/C23E32.asm:37 JSL FIX_TARGET_NAME
    case 0xC23E84: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23E32.asm:39 END_C_FUNCTION
    case 0xC23E88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23E32.asm:39 END_C_FUNCTION
    case 0xC23E89: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23E8A.asm (unresolved).
bool execute_unresolved_c2_c23e8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23E8A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E8D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E8E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC23E8F.
    case 0xC23E91: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E92: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23E93: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:15 TAY
    case 0xC23E94: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:16 STY @LOCAL02
    case 0xC23E95: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC23E97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:19 STZ PRINT_ATTACKER_ARTICLE
    case 0xC23E99: cpu.execute_instruction<0x9C>(0x005E77, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C2/C23E8A.asm:21 STZ_BADOPT @LOCAL00
    case 0xC23E9C: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C2/C23E8A.asm:22 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23E9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/unknown/C2/C23E8A.asm:22 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23E9E.
    case 0xC23EA0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C23E8A.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC23EA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:24 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23EA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x00A9B9, 3); return true;
    // src/unknown/C2/C23E8A.asm:24 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23EA3.
    case 0xC23EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00FC22, 3); return true;
    // src/unknown/C2/C23E8A.asm:25 JSL MEMSET16
    case 0xC23EA6: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C2/C23E8A.asm:25 JSL MEMSET16
    // Overlapping static entry reached from 0xC23EA5.
    case 0xC23EA7: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C2/C23E8A.asm:25 JSL MEMSET16
    // Overlapping static entry reached from 0xC23EA5.
    case 0xC23EA8: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/unknown/C2/C23E8A.asm:26 LDY @LOCAL02
    case 0xC23EAA: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:26 LDY @LOCAL02
    // Overlapping static entry reached from 0xC23EA8.
    case 0xC23EAB: cpu.execute_instruction<0x14>(0x0000CC, 2); return true;
    // src/unknown/C2/C23E8A.asm:27 CPY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23EAC: cpu.execute_instruction<0xCC>(0x00AD56, 3); return true;
    // src/unknown/C2/C23E8A.asm:27 CPY NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC23EAB.
    case 0xC23EAD: cpu.execute_instruction<0x56>(0x0000AD, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C23E8A.asm:28 BLTEQ @UNKNOWN0
    case 0xC23EAF: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C23E8A.asm:28 BLTEQ @UNKNOWN0
    case 0xC23EB1: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C2/C23E8A.asm:29 TYA
    case 0xC23EB3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:30 SEC
    case 0xC23EB4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:31 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23EB5: cpu.execute_instruction<0xED>(0x00AD56, 3); return true;
    // src/unknown/C2/C23E8A.asm:32 TAX
    case 0xC23EB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:33 DEX
    case 0xC23EB9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:34 LDA BACK_ROW_BATTLERS,X
    case 0xC23EBA: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C2/C23E8A.asm:35 AND #$00FF
    case 0xC23EBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC23EBD.
    case 0xC23EBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C23E8A.asm:36 STA @VIRTUAL02
    case 0xC23EC0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:37 BRA @UNKNOWN1
    case 0xC23EC2: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C23E8A.asm:39 TYX
    case 0xC23EC4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:40 DEX
    case 0xC23EC5: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:41 LDA FRONT_ROW_BATTLERS,X
    case 0xC23EC6: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C2/C23E8A.asm:42 AND #$00FF
    case 0xC23EC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC23EC9.
    case 0xC23ECB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C23E8A.asm:43 STA @VIRTUAL02
    case 0xC23ECC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:45 LDA @VIRTUAL02
    case 0xC23ECE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:46 LDY #.SIZEOF(battler)
    case 0xC23ED0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E8A.asm:46 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23ED0.
    case 0xC23ED2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:47 JSL MULT168
    case 0xC23ED3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C23E8A.asm:48 TAY
    case 0xC23ED7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:49 STY @LOCAL02
    case 0xC23ED8: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23EDA.
    case 0xC23EDC: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23EDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23EDC.
    case 0xC23EDE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23EDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23EDE.
    case 0xC23EE0: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23EDF.
    case 0xC23EE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23EE2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C23E8A.asm:51 LDA BATTLERS_TABLE + battler::id,Y
    case 0xC23EE4: cpu.execute_instruction<0xB9>(0x009FAC, 3); return true;
    // src/unknown/C2/C23E8A.asm:52 LDY #.SIZEOF(enemy_data)
    case 0xC23EE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C23E8A.asm:52 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23EE7.
    case 0xC23EE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:53 JSL MULT168
    case 0xC23EEA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:499 INC
    // Macro caller: src/unknown/C2/C23E8A.asm:54 OPTIMIZED_ADD enemy_data::name
    case 0xC23EEE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:55 CLC
    case 0xC23EEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:56 ADC @VIRTUAL06
    case 0xC23EF0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C23E8A.asm:57 STA @VIRTUAL06
    case 0xC23EF2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C23E8A.asm:58 STA @LOCAL00
    case 0xC23EF4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C23E8A.asm:59 LDA @VIRTUAL06+2
    case 0xC23EF6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C23E8A.asm:60 STA @LOCAL00+2
    case 0xC23EF8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C23E8A.asm:61 LDX #.SIZEOF(enemy_data::name)
    case 0xC23EFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C2/C23E8A.asm:61 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23EFA.
    case 0xC23EFC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C23E8A.asm:62 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x00A9B9, 3); return true;
    // src/unknown/C2/C23E8A.asm:62 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23EFD.
    case 0xC23EFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x006620, 3); return true;
    // src/unknown/C2/C23E8A.asm:63 JSR COPY_ENEMY_NAME
    case 0xC23F00: cpu.execute_instruction<0x20>(0x003B66, 3); return true;
    // src/unknown/C2/C23E8A.asm:63 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23EFF.
    case 0xC23F01: cpu.execute_instruction<0x66>(0x00003B, 2); return true;
    // src/unknown/C2/C23E8A.asm:63 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23EFF.
    case 0xC23F02: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:64 TAX
    case 0xC23F03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:65 STX @LOCAL01
    case 0xC23F04: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C23E8A.asm:66 LDY @LOCAL02
    case 0xC23F06: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:67 LDA BATTLERS_TABLE+battler::the_flag,Y
    case 0xC23F08: cpu.execute_instruction<0xB9>(0x009FB7, 3); return true;
    // src/unknown/C2/C23E8A.asm:68 AND #$00FF
    case 0xC23F0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC23F0B.
    case 0xC23F0D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C23E8A.asm:69 CMP #1
    case 0xC23F0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C23E8A.asm:69 CMP #1
    // Overlapping static entry reached from 0xC23F0E.
    case 0xC23F10: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C23E8A.asm:70 BNE @UNKNOWN2
    case 0xC23F11: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C2/C23E8A.asm:71 LDA BATTLERS_TABLE + battler::unknown76,Y
    case 0xC23F13: cpu.execute_instruction<0xB9>(0x009FF8, 3); return true;
    // src/unknown/C2/C23E8A.asm:72 JSL UNKNOWN_C2B66A
    case 0xC23F16: cpu.execute_instruction<0x22>(0xC2B66A, 4); return true;
    // src/unknown/C2/C23E8A.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC23F1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:74 AND #$00FF
    case 0xC23F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC23F1C.
    case 0xC23F1E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C23E8A.asm:75 CMP #2
    case 0xC23F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C23E8A.asm:75 CMP #2
    // Overlapping static entry reached from 0xC23F1F.
    case 0xC23F21: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C23E8A.asm:76 BEQ @UNKNOWN3
    case 0xC23F22: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C2/C23E8A.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC23F24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:80 LDA #CHAR::SPACE
    case 0xC23F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00A650, 3); return true;
    // src/unknown/C2/C23E8A.asm:81 LDX @LOCAL01
    case 0xC23F28: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C23E8A.asm:81 LDX @LOCAL01
    // Overlapping static entry reached from 0xC23F26.
    case 0xC23F29: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C2/C23E8A.asm:82 STA __BSS_START__,X
    case 0xC23F2A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C23E8A.asm:82 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23F29.
    case 0xC23F2B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C23E8A.asm:83 INX
    case 0xC23F2D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:84 STX @LOCAL02
    case 0xC23F2E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC23F30: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:87 LDA @VIRTUAL02
    case 0xC23F32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:88 LDY #.SIZEOF(battler)
    case 0xC23F34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E8A.asm:88 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23F34.
    case 0xC23F36: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:89 JSL MULT168
    case 0xC23F37: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C23E8A.asm:90 TAX
    case 0xC23F3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC23F3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:92 LDA BATTLERS_TABLE+battler::the_flag,X
    case 0xC23F3E: cpu.execute_instruction<0xBD>(0x009FB7, 3); return true;
    // src/unknown/C2/C23E8A.asm:93 CLC
    case 0xC23F41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:94 ADC #CHAR::A_ - 1
    case 0xC23F42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x00A670, 3); return true;
    // src/unknown/C2/C23E8A.asm:95 LDX @TMP
    case 0xC23F44: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:95 LDX @TMP
    // Overlapping static entry reached from 0xC23F42.
    case 0xC23F45: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/unknown/C2/C23E8A.asm:96 STA __BSS_START__,X
    case 0xC23F46: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C23E8A.asm:96 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23F45.
    case 0xC23F47: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C23E8A.asm:98 LDA #1
    case 0xC23F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C2/C23E8A.asm:99 STA PRINT_ATTACKER_ARTICLE
    case 0xC23F4B: cpu.execute_instruction<0x8D>(0x005E77, 3); return true;
    // src/unknown/C2/C23E8A.asm:99 STA PRINT_ATTACKER_ARTICLE
    // Overlapping static entry reached from 0xC23F49.
    case 0xC23F4C: cpu.execute_instruction<0x77>(0x00005E, 2); return true;
    // src/unknown/C2/C23E8A.asm:102 LDX #.SIZEOF(enemy_data::name) + 1
    case 0xC23F4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001A, 2); else cpu.execute_instruction<0xA2>(0x00001A, 3); return true;
    // src/unknown/C2/C23E8A.asm:102 LDX #.SIZEOF(enemy_data::name) + 1
    // Overlapping static entry reached from 0xC23F4E.
    case 0xC23F50: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C23E8A.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC23F51: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:104 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23F53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x00A9B9, 3); return true;
    // src/unknown/C2/C23E8A.asm:104 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23F53.
    case 0xC23F55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x007022, 3); return true;
    // src/unknown/C2/C23E8A.asm:105 JSL REDIRECT_C1AC4A
    case 0xC23F56: cpu.execute_instruction<0x22>(0xC1DD70, 4); return true;
    // src/unknown/C2/C23E8A.asm:105 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23F55.
    case 0xC23F57: cpu.execute_instruction<0x70>(0x0000DD, 2); return true;
    // src/unknown/C2/C23E8A.asm:105 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23F55.
    case 0xC23F58: cpu.execute_instruction<0xDD>(0x00A5C1, 3); return true;
    // src/unknown/C2/C23E8A.asm:105 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23F57.
    case 0xC23F59: cpu.execute_instruction<0xC1>(0x0000A5, 2); return true;
    // src/unknown/C2/C23E8A.asm:107 LDA @VIRTUAL02
    case 0xC23F5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:107 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC23F58.
    case 0xC23F5B: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C2/C23E8A.asm:108 LDY #.SIZEOF(battler)
    case 0xC23F5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E8A.asm:108 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23F5C.
    case 0xC23F5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:109 JSL MULT168
    case 0xC23F5F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C23E8A.asm:110 TAX
    case 0xC23F63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:111 LDA BATTLERS_TABLE + battler::id,X
    case 0xC23F64: cpu.execute_instruction<0xBD>(0x009FAC, 3); return true;
    // src/unknown/C2/C23E8A.asm:112 STA ATTACKER_ENEMY_ID
    case 0xC23F67: cpu.execute_instruction<0x8D>(0x009658, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23E8A.asm:114 END_C_FUNCTION
    case 0xC23F6A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23E8A.asm:114 END_C_FUNCTION
    case 0xC23F6B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C240A4.asm (unresolved).
bool execute_unresolved_c2_c240a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C240A4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC240A4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC240A6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC240A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC240A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC240A8.
    case 0xC240AA: cpu.execute_instruction<0xFF>(0x1EA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC240AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC240AC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC240AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC240B0: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC240B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C240A4.asm:9 BRA @UNKNOWN1
    case 0xC240B4: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C240A4.asm:11 JSL WINDOW_TICK
    case 0xC240B6: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C2/C240A4.asm:13 JSL UNKNOWN_C2EACF
    case 0xC240BA: cpu.execute_instruction<0x22>(0xC2EACF, 4); return true;
    // src/unknown/C2/C240A4.asm:14 CMP #0
    case 0xC240BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:14 CMP #0
    // Overlapping static entry reached from 0xC240BE.
    case 0xC240C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C240A4.asm:15 BNE @UNKNOWN0
    case 0xC240C1: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C2/C240A4.asm:16 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC240C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/unknown/C2/C240A4.asm:16 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC240C3.
    case 0xC240C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00008D, 2); else cpu.execute_instruction<0xA2>(0x00728D, 3); return true;
    // src/unknown/C2/C240A4.asm:17 STA CURRENT_TARGET
    case 0xC240C6: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:17 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC240C5.
    case 0xC240C7: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/unknown/C2/C240A4.asm:17 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC240C5.
    case 0xC240C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x0008A2, 3); return true;
    // src/unknown/C2/C240A4.asm:18 LDX #8
    case 0xC240C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C240A4.asm:18 LDX #8
    // Overlapping static entry reached from 0xC240C8.
    case 0xC240CA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:18 LDX #8
    // Overlapping static entry reached from 0xC240C9.
    case 0xC240CB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C240A4.asm:19 STX @LOCAL00
    case 0xC240CC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:20 BRA @UNKNOWN5
    case 0xC240CE: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C2/C240A4.asm:22 TXA
    case 0xC240D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:23 JSL IS_CHAR_TARGETTED
    case 0xC240D1: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/unknown/C2/C240A4.asm:24 CMP #0
    case 0xC240D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:24 CMP #0
    // Overlapping static entry reached from 0xC240D5.
    case 0xC240D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C240A4.asm:25 BEQ @UNKNOWN4
    case 0xC240D8: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C2/C240A4.asm:26 JSL FIX_TARGET_NAME
    case 0xC240DA: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC240DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC240DE.
    case 0xC240E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC240E1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC240E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC240E3.
    case 0xC240E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC240E6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC240E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC240EA: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC240EC: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC240EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC240F0: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C240A4.asm:29 BEQ @UNKNOWN4
    case 0xC240F2: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C240A4.asm:30 PHA
    case 0xC240F4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC240F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC240F7: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC240FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC240FC: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C2/C240A4.asm:32 PLA
    case 0xC240FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:33 JSL UNKNOWN_C09279
    case 0xC24100: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/unknown/C2/C240A4.asm:35 LDA CURRENT_TARGET
    case 0xC24104: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:36 CLC
    case 0xC24107: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:37 ADC #.SIZEOF(battler)
    case 0xC24108: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C240A4.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24108.
    case 0xC2410A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:38 STA CURRENT_TARGET
    case 0xC2410B: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:39 LDX @LOCAL00
    case 0xC2410E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:40 INX
    case 0xC24110: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:41 STX @LOCAL00
    case 0xC24111: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:43 CPX #BATTLER_COUNT
    case 0xC24113: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C240A4.asm:43 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24113.
    case 0xC24115: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C240A4.asm:44 BCC @UNKNOWN2
    case 0xC24116: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // src/unknown/C2/C240A4.asm:45 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC24118: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/unknown/C2/C240A4.asm:45 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24118.
    case 0xC2411A: cpu.execute_instruction<0x9F>(0xA9728D, 4); return true;
    // src/unknown/C2/C240A4.asm:46 STA CURRENT_TARGET
    case 0xC2411B: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:47 LDX #0
    case 0xC2411E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:47 LDX #0
    // Overlapping static entry reached from 0xC2411E.
    case 0xC24120: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C240A4.asm:48 STX @LOCAL00
    case 0xC24121: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:49 BRA @UNKNOWN9
    case 0xC24123: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C2/C240A4.asm:51 TXA
    case 0xC24125: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:52 JSL IS_CHAR_TARGETTED
    case 0xC24126: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/unknown/C2/C240A4.asm:53 CMP #0
    case 0xC2412A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:53 CMP #0
    // Overlapping static entry reached from 0xC2412A.
    case 0xC2412C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C240A4.asm:54 BEQ @UNKNOWN8
    case 0xC2412D: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C2/C240A4.asm:55 JSL FIX_TARGET_NAME
    case 0xC2412F: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC24133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24133.
    case 0xC24135: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC24136: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC24138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24138.
    case 0xC2413A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2413B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2413D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2413F: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC24141: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC24143: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC24145: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C240A4.asm:58 BEQ @UNKNOWN8
    case 0xC24147: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C240A4.asm:59 PHA
    case 0xC24149: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC2414A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC2414C: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC2414F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC24151: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C2/C240A4.asm:61 PLA
    case 0xC24154: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:62 JSL UNKNOWN_C09279
    case 0xC24155: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/unknown/C2/C240A4.asm:64 LDA CURRENT_TARGET
    case 0xC24159: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:65 CLC
    case 0xC2415C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:66 ADC #.SIZEOF(battler)
    case 0xC2415D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C240A4.asm:66 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2415D.
    case 0xC2415F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:67 STA CURRENT_TARGET
    case 0xC24160: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/unknown/C2/C240A4.asm:68 LDX @LOCAL00
    case 0xC24163: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:69 INX
    case 0xC24165: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:70 STX @LOCAL00
    case 0xC24166: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:72 CPX #8
    case 0xC24168: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C2/C240A4.asm:72 CPX #8
    // Overlapping static entry reached from 0xC24168.
    case 0xC2416A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C240A4.asm:73 BCC @UNKNOWN6
    case 0xC2416B: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C240A4.asm:74 END_C_FUNCTION
    case 0xC2416D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C240A4.asm:74 END_C_FUNCTION
    case 0xC2416E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24348.asm (unresolved).
bool execute_unresolved_c2_c24348_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24348.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24348: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2434A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2434B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2434C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2434D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2434D.
    case 0xC2434F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC24350: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC24351: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:8 STA @VIRTUAL04
    case 0xC24352: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C24348.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2434F.
    case 0xC24353: cpu.execute_instruction<0x04>(0x000020, 2); return true;
    // src/unknown/C2/C24348.asm:9 JSR FIND_STEALABLE_ITEMS
    case 0xC24354: cpu.execute_instruction<0x20>(0x0041DC, 3); return true;
    // src/unknown/C2/C24348.asm:9 JSR FIND_STEALABLE_ITEMS
    // Overlapping static entry reached from 0xC24353.
    case 0xC24355: cpu.execute_instruction<0xDC>(0x008541, 3); return true;
    // src/unknown/C2/C24348.asm:10 STA @VIRTUAL02
    case 0xC24357: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C24348.asm:11 LDA #0
    case 0xC24359: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C24348.asm:11 LDA #0
    // Overlapping static entry reached from 0xC24359.
    case 0xC2435B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C24348.asm:12 STA @LOCAL00
    case 0xC2435C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:13 BRA @UNKNOWN2
    case 0xC2435E: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C24348.asm:15 TAX
    case 0xC24360: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:16 LDA STEALABLE_ITEM_CANDIDATES,X
    case 0xC24361: cpu.execute_instruction<0xBD>(0x00A9D4, 3); return true;
    // src/unknown/C2/C24348.asm:17 AND #$00FF
    case 0xC24364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24348.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC24364.
    case 0xC24366: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C24348.asm:18 CMP @VIRTUAL04
    case 0xC24367: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C24348.asm:19 BNE @UNKNOWN1
    case 0xC24369: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C24348.asm:20 LDA #1
    case 0xC2436B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C24348.asm:20 LDA #1
    // Overlapping static entry reached from 0xC2436B.
    case 0xC2436D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C24348.asm:21 BRA @UNKNOWN3
    case 0xC2436E: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C24348.asm:23 LDA @LOCAL00
    case 0xC24370: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:24 INC
    case 0xC24372: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:25 STA @LOCAL00
    case 0xC24373: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:27 CMP @VIRTUAL02
    case 0xC24375: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C24348.asm:28 BCC @UNKNOWN0
    case 0xC24377: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C2/C24348.asm:29 LDA #0
    case 0xC24379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C24348.asm:29 LDA #0
    // Overlapping static entry reached from 0xC24379.
    case 0xC2437B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24348.asm:31 END_C_FUNCTION
    case 0xC2437C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24348.asm:31 END_C_FUNCTION
    case 0xC2437D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2437E.asm (unresolved).
bool execute_unresolved_c2_c2437e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2437E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2437E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC24380: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC24381: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC24382: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC24382.
    case 0xC24384: cpu.execute_instruction<0xFF>(0x70AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC24385: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:17 LDX CURRENT_ATTACKER
    case 0xC24386: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24384.
    case 0xC24388: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x000EBD, 3); return true;
    // src/unknown/C2/C2437E.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC24389: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C2437E.asm:18 LDA a:battler::ally_or_enemy,X
    // Overlapping static entry reached from 0xC24388.
    case 0xC2438A: cpu.execute_instruction<0x0E>(0x002900, 3); return true;
    // src/unknown/C2/C2437E.asm:18 LDA a:battler::ally_or_enemy,X
    // Overlapping static entry reached from 0xC24388.
    case 0xC2438B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2437E.asm:19 AND #$00FF
    case 0xC2438C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2438A.
    case 0xC2438D: cpu.execute_instruction<0xFF>(0x03F000, 4); return true;
    // src/unknown/C2/C2437E.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2438C.
    case 0xC2438E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2437E.asm:20 BNEL @UNKNOWN3
    case 0xC2438F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:20 BNEL @UNKNOWN3
    case 0xC24391: cpu.execute_instruction<0x4C>(0x004432, 3); return true;
    // src/unknown/C2/C2437E.asm:21 LDX CURRENT_ATTACKER
    case 0xC24394: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:22 LDA a:battler::npc_id,X
    case 0xC24397: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C2/C2437E.asm:23 AND #$00FF
    case 0xC2439A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2439A.
    case 0xC2439C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2437E.asm:24 BNEL @UNKNOWN3
    case 0xC2439D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:24 BNEL @UNKNOWN3
    case 0xC2439F: cpu.execute_instruction<0x4C>(0x004432, 3); return true;
    // src/unknown/C2/C2437E.asm:25 LDX CURRENT_ATTACKER
    case 0xC243A2: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC243A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:27 LDA __BSS_START__+7,X
    case 0xC243A7: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/unknown/C2/C2437E.asm:28 STA @VIRTUAL00
    case 0xC243AA: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC243AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:30 LDA @VIRTUAL00
    case 0xC243AE: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:31 AND #$00FF
    case 0xC243B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC243B0.
    case 0xC243B2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2437E.asm:32 BEQL @UNKNOWN3
    case 0xC243B3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:32 BEQL @UNKNOWN3
    case 0xC243B5: cpu.execute_instruction<0x4C>(0x004432, 3); return true;
    // src/unknown/C2/C2437E.asm:33 LDX CURRENT_ATTACKER
    case 0xC243B8: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:34 LDA __BSS_START__,X
    case 0xC243BB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:35 TAY
    case 0xC243BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:36 STY @LOCAL01
    case 0xC243BF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2437E.asm:37 LDX CURRENT_ATTACKER
    case 0xC243C1: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:73 LDA a:battler::current_action_argument,X
    case 0xC243C4: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C2/C2437E.asm:74 AND #$00FF
    case 0xC243C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC243C7.
    case 0xC243C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2437E.asm:75 STA @LOCAL00
    case 0xC243CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:76 STA @VIRTUAL02
    case 0xC243CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2437E.asm:77 LDA @VIRTUAL00
    case 0xC243CE: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:78 AND #$00FF
    case 0xC243D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC243D0.
    case 0xC243D2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2437E.asm:79 DEC
    case 0xC243D3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:80 STA @VIRTUAL04
    case 0xC243D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2437E.asm:81 TYA
    case 0xC243D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:82 DEC
    case 0xC243D7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:83 LDY #.SIZEOF(char_struct)
    case 0xC243D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2437E.asm:83 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC243D8.
    case 0xC243DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2437E.asm:84 JSL MULT168
    case 0xC243DB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2437E.asm:85 CLC
    case 0xC243DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:86 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC243E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C2/C2437E.asm:86 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC243E0.
    case 0xC243E2: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C2/C2437E.asm:87 CLC
    case 0xC243E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:88 ADC @VIRTUAL04
    case 0xC243E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2437E.asm:88 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC243E2.
    case 0xC243E5: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C2/C2437E.asm:89 TAX
    case 0xC243E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:90 LDA __BSS_START__,X
    case 0xC243E7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:91 AND #$00FF
    case 0xC243EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC243EA.
    case 0xC243EC: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2437E.asm:92 CMP @VIRTUAL02
    case 0xC243ED: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2437E.asm:93 BNE @UNKNOWN3
    case 0xC243EF: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/unknown/C2/C2437E.asm:94 LDA @LOCAL00
    case 0xC243F1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:95 LDY #.SIZEOF(item)
    case 0xC243F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C2/C2437E.asm:95 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC243F3.
    case 0xC243F5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2437E.asm:96 JSL MULT168
    case 0xC243F6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2437E.asm:97 CLC
    case 0xC243FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:98 ADC #item::flags
    case 0xC243FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C2/C2437E.asm:98 ADC #item::flags
    // Overlapping static entry reached from 0xC243FB.
    case 0xC243FD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2437E.asm:100 TAX
    case 0xC243FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:101 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC243FF: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C2/C2437E.asm:102 AND #$00FF
    case 0xC24403: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC24403.
    case 0xC24405: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2437E.asm:103 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC24406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C2/C2437E.asm:103 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC24406.
    case 0xC24408: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2437E.asm:104 BEQ @UNKNOWN3
    case 0xC24409: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C2/C2437E.asm:105 LDA @LOCAL00
    case 0xC2440B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:106 TAX
    case 0xC2440D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:107 LDY @LOCAL01
    case 0xC2440E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2437E.asm:108 TYA
    case 0xC24410: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:109 JSL UNKNOWN_C3EE14
    case 0xC24411: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/unknown/C2/C2437E.asm:110 CMP #0
    case 0xC24415: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:110 CMP #0
    // Overlapping static entry reached from 0xC24415.
    case 0xC24417: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2437E.asm:111 BEQ @UNKNOWN3
    case 0xC24418: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C2/C2437E.asm:112 LDX CURRENT_ATTACKER
    case 0xC2441A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:113 LDA __BSS_START__+7,X
    case 0xC2441D: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/unknown/C2/C2437E.asm:114 AND #$00FF
    case 0xC24420: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC24420.
    case 0xC24422: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2437E.asm:115 TAX
    case 0xC24423: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:116 STX @LOCAL00_1
    case 0xC24424: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:117 LDX CURRENT_ATTACKER
    case 0xC24426: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C2/C2437E.asm:118 LDA __BSS_START__,X
    case 0xC24429: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:119 LDX @LOCAL00_1
    case 0xC2442C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:120 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC2442E: cpu.execute_instruction<0x22>(0xC1DDC6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2437E.asm:125 END_C_FUNCTION
    case 0xC24432: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2437E.asm:125 END_C_FUNCTION
    case 0xC24433: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24434.asm (unresolved).
bool execute_unresolved_c2_c24434_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24434.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24434: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24436: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24437: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24438: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24439: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC24439.
    case 0xC2443B: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC2443C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC2443D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:8 TAX
    case 0xC2443E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:9 STX @LOCAL00
    case 0xC2443F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:10 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24441: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C2/C24434.asm:11 CLC
    case 0xC24444: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:12 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC24445: cpu.execute_instruction<0x6D>(0x00AD58, 3); return true;
    // src/unknown/C2/C24434.asm:13 JSR RAND_LIMIT
    case 0xC24448: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/unknown/C2/C24434.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC2444B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C24434.asm:15 INC
    case 0xC2444D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:16 LDX @LOCAL00
    case 0xC2444E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:17 STA a:battler::current_target,X
    case 0xC24450: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C2/C24434.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC24453: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    case 0xC24455: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC24455.
    case 0xC24457: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C2/C24434.asm:20 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24458: cpu.execute_instruction<0xCD>(0x00AD56, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC2445B: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC2445D: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:22 SEC
    case 0xC2445F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:23 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24460: cpu.execute_instruction<0xED>(0x00AD56, 3); return true;
    // src/unknown/C2/C24434.asm:24 TAX
    case 0xC24463: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:25 DEX
    case 0xC24464: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:26 LDA BACK_ROW_BATTLERS,X
    case 0xC24465: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    case 0xC24468: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC24468.
    case 0xC2446A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C24434.asm:28 BRA @UNKNOWN1
    case 0xC2446B: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C2/C24434.asm:30 TAX
    case 0xC2446D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:31 DEX
    case 0xC2446E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:32 LDA FRONT_ROW_BATTLERS,X
    case 0xC2446F: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    case 0xC24472: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC24472.
    case 0xC24474: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24475: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24476: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24703.asm (unresolved).
bool execute_unresolved_c2_c24703_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24703.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24703: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24705: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24706: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24707: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24708: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC24708.
    case 0xC2470A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC2470B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC2470C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:8 TAX
    case 0xC2470D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:9 STX @LOCAL00
    case 0xC2470E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24710.
    case 0xC24712: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24713: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24716: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24716.
    case 0xC24718: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24719: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/unknown/C2/C24703.asm:11 LDA a:battler::action_targetting,X
    case 0xC2471C: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    case 0xC2471F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2471F.
    case 0xC24721: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C24703.asm:13 CMP #1
    case 0xC24722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C24703.asm:13 CMP #1
    // Overlapping static entry reached from 0xC24722.
    case 0xC24724: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:14 BEQ @UNKNOWN2
    case 0xC24725: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:15 CMP #2
    case 0xC24727: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C24703.asm:15 CMP #2
    // Overlapping static entry reached from 0xC24727.
    case 0xC24729: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:16 BEQ @UNKNOWN3
    case 0xC2472A: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C24703.asm:17 CMP #4
    case 0xC2472C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:17 CMP #4
    // Overlapping static entry reached from 0xC2472C.
    case 0xC2472E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:18 BEQ @UNKNOWN3
    case 0xC2472F: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C2/C24703.asm:19 CMP #17
    case 0xC24731: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/unknown/C2/C24703.asm:19 CMP #17
    // Overlapping static entry reached from 0xC24731.
    case 0xC24733: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:20 BEQ @UNKNOWN5
    case 0xC24734: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/unknown/C2/C24703.asm:21 CMP #18
    case 0xC24736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/unknown/C2/C24703.asm:21 CMP #18
    // Overlapping static entry reached from 0xC24736.
    case 0xC24738: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24739: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC2473B: cpu.execute_instruction<0x4C>(0x0047F5, 3); return true;
    // src/unknown/C2/C24703.asm:23 CMP #20
    case 0xC2473E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/unknown/C2/C24703.asm:23 CMP #20
    // Overlapping static entry reached from 0xC2473E.
    case 0xC24740: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24741: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24743: cpu.execute_instruction<0x4C>(0x004809, 3); return true;
    // src/unknown/C2/C24703.asm:25 JMP @UNKNOWN14
    case 0xC24746: cpu.execute_instruction<0x4C>(0x00481F, 3); return true;
    // src/unknown/C2/C24703.asm:27 LDA a:battler::current_target,X
    case 0xC24749: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    case 0xC2474C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC2474C.
    case 0xC2474E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C24703.asm:29 DEC
    case 0xC2474F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:30 JSL TARGET_BATTLER
    case 0xC24750: cpu.execute_instruction<0x22>(0xC26FDC, 4); return true;
    // src/unknown/C2/C24703.asm:31 JMP @UNKNOWN14
    case 0xC24754: cpu.execute_instruction<0x4C>(0x00481F, 3); return true;
    // src/unknown/C2/C24703.asm:33 JSL TARGET_ALLIES
    case 0xC24757: cpu.execute_instruction<0x22>(0xC26BFB, 4); return true;
    // src/unknown/C2/C24703.asm:34 LDX @LOCAL00
    case 0xC2475B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:35 LDA a:battler::current_action,X
    case 0xC2475D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:36 JSL GET_SHIELD_TARGETTING
    case 0xC24760: cpu.execute_instruction<0x22>(0xC23FEA, 4); return true;
    // src/unknown/C2/C24703.asm:37 CMP #0
    case 0xC24764: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C24703.asm:37 CMP #0
    // Overlapping static entry reached from 0xC24764.
    case 0xC24766: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:38 BNE @UNKNOWN4
    case 0xC24767: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:39 LDX @LOCAL00
    case 0xC24769: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:40 LDA a:battler::ally_or_enemy,X
    case 0xC2476B: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    case 0xC2476E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2476E.
    case 0xC24770: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:42 BNE @UNKNOWN4
    case 0xC24771: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C24703.asm:43 JSL REMOVE_NPC_TARGETTING
    case 0xC24773: cpu.execute_instruction<0x22>(0xC26E77, 4); return true;
    // src/unknown/C2/C24703.asm:45 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24777: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // src/unknown/C2/C24703.asm:46 JMP @UNKNOWN14
    case 0xC2477B: cpu.execute_instruction<0x4C>(0x00481F, 3); return true;
    // src/unknown/C2/C24703.asm:48 LDA a:battler::current_target,X
    case 0xC2477E: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    case 0xC24781: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC24781.
    case 0xC24783: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C2/C24703.asm:50 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24784: cpu.execute_instruction<0xCD>(0x00AD56, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24787: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24789: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C2/C24703.asm:52 SEC
    case 0xC2478B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:53 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2478C: cpu.execute_instruction<0xED>(0x00AD56, 3); return true;
    // src/unknown/C2/C24703.asm:54 TAX
    case 0xC2478F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:55 DEX
    case 0xC24790: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:56 LDA BACK_ROW_BATTLERS,X
    case 0xC24791: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    case 0xC24794: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC24794.
    case 0xC24796: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:58 JSL TARGET_BATTLER
    case 0xC24797: cpu.execute_instruction<0x22>(0xC26FDC, 4); return true;
    // src/unknown/C2/C24703.asm:59 BRA @UNKNOWN7
    case 0xC2479B: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C24703.asm:61 TAX
    case 0xC2479D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:62 DEX
    case 0xC2479E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:63 LDA FRONT_ROW_BATTLERS,X
    case 0xC2479F: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    case 0xC247A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC247A2.
    case 0xC247A4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:65 JSL TARGET_BATTLER
    case 0xC247A5: cpu.execute_instruction<0x22>(0xC26FDC, 4); return true;
    // src/unknown/C2/C24703.asm:67 LDX @LOCAL00
    case 0xC247A9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:68 LDA a:battler::current_action,X
    case 0xC247AB: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    case 0xC247AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000027, 3); return true;
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    // Overlapping static entry reached from 0xC247AE.
    case 0xC247B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:70 BNE @UNKNOWN14
    case 0xC247B1: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/unknown/C2/C24703.asm:71 LDA #8
    case 0xC247B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C24703.asm:71 LDA #8
    // Overlapping static entry reached from 0xC247B3.
    case 0xC247B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C24703.asm:72 STA @LOCAL00
    case 0xC247B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:73 BRA @UNKNOWN10
    case 0xC247B8: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    case 0xC247BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC247BA.
    case 0xC247BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:76 JSL MULT168
    case 0xC247BD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C24703.asm:77 TAX
    case 0xC247C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:78 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC247C2: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    case 0xC247C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC247C5.
    case 0xC247C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:80 BEQ @UNKNOWN9
    case 0xC247C8: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C24703.asm:81 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC247CA: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    case 0xC247CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC247CD.
    case 0xC247CF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    case 0xC247D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC247D0.
    case 0xC247D2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:84 BNE @UNKNOWN9
    case 0xC247D3: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC247D5.
    case 0xC247D7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247D8: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC247DB.
    case 0xC247DD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247DE: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/unknown/C2/C24703.asm:86 LDA @LOCAL00
    case 0xC247E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:87 JSL TARGET_BATTLER
    case 0xC247E3: cpu.execute_instruction<0x22>(0xC26FDC, 4); return true;
    // src/unknown/C2/C24703.asm:88 BRA @UNKNOWN14
    case 0xC247E7: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C2/C24703.asm:90 LDA @LOCAL00
    case 0xC247E9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:91 INC
    case 0xC247EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:92 STA @LOCAL00
    case 0xC247EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    case 0xC247EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC247EE.
    case 0xC247F0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C24703.asm:95 BCC @UNKNOWN8
    case 0xC247F1: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C2/C24703.asm:96 BRA @UNKNOWN14
    case 0xC247F3: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C2/C24703.asm:98 LDA a:battler::current_target,X
    case 0xC247F5: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    case 0xC247F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC247F8.
    case 0xC247FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:100 JSL TARGET_ROW
    case 0xC247FB: cpu.execute_instruction<0x22>(0xC26D04, 4); return true;
    // src/unknown/C2/C24703.asm:101 JSL REMOVE_NPC_TARGETTING
    case 0xC247FF: cpu.execute_instruction<0x22>(0xC26E77, 4); return true;
    // src/unknown/C2/C24703.asm:102 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24803: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // src/unknown/C2/C24703.asm:103 BRA @UNKNOWN14
    case 0xC24807: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C24703.asm:105 JSL TARGET_ALL_ENEMIES
    case 0xC24809: cpu.execute_instruction<0x22>(0xC26C82, 4); return true;
    // src/unknown/C2/C24703.asm:106 LDX @LOCAL00
    case 0xC2480D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:107 LDA a:battler::ally_or_enemy,X
    case 0xC2480F: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    case 0xC24812: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC24812.
    case 0xC24814: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:109 BNE @UNKNOWN13
    case 0xC24815: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C24703.asm:110 JSL REMOVE_NPC_TARGETTING
    case 0xC24817: cpu.execute_instruction<0x22>(0xC26E77, 4); return true;
    // src/unknown/C2/C24703.asm:112 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC2481B: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC2481F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC24820: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C26189.asm (unresolved).
bool execute_unresolved_c2_c26189_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C26189.asm:3 BEGIN_C_FUNCTION
    case 0xC26189: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC2618B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC2618C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC2618D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC2618E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2618E.
    case 0xC26190: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC26191: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC26192: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:9 TAX
    case 0xC26193: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:10 STX @LOCAL01
    case 0xC26194: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C26189.asm:11 LDA #0
    case 0xC26196: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C26189.asm:11 LDA #0
    // Overlapping static entry reached from 0xC26196.
    case 0xC26198: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C26189.asm:12 STA @LOCAL00
    case 0xC26199: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:13 BRA @UNKNOWN1
    case 0xC2619B: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:15 LDX @LOCAL01
    case 0xC2619D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C26189.asm:16 PHX
    case 0xC2619F: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:17 ASL
    case 0xC261A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:18 TAX
    case 0xC261A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:19 PLA
    case 0xC261A2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:20 STA PALETTES,X
    case 0xC261A3: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C2/C26189.asm:21 LDA @LOCAL00
    case 0xC261A6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:22 INC
    case 0xC261A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:23 STA @LOCAL00
    case 0xC261A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:25 CMP #$0100
    case 0xC261AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C26189.asm:25 CMP #$0100
    // Overlapping static entry reached from 0xC261AB.
    case 0xC261AD: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C2/C26189.asm:26 BCC @UNKNOWN0
    case 0xC261AE: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C26189.asm:26 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC261AD.
    case 0xC261AF: cpu.execute_instruction<0xED>(0x0018A9, 3); return true;
    // src/unknown/C2/C26189.asm:27 LDA #24
    case 0xC261B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C26189.asm:27 LDA #24
    // Overlapping static entry reached from 0xC261B0.
    case 0xC261B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C26189.asm:28 JSL UNKNOWN_C0856B
    case 0xC261B3: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C26189.asm:29 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC261B7: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C26189.asm:30 END_C_FUNCTION
    case 0xC261BB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C26189.asm:30 END_C_FUNCTION
    case 0xC261BC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2654C.asm (unresolved).
bool execute_unresolved_c2_c2654c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2654C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2654C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC2654E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC2654F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26550: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC26550.
    case 0xC26552: cpu.execute_instruction<0xFF>(0x24A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26553: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:12 LDA #SFX::RECOVER_HP
    case 0xC26554: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C2/C2654C.asm:12 LDA #SFX::RECOVER_HP
    // Overlapping static entry reached from 0xC26554.
    case 0xC26556: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:13 JSL PLAY_SOUND
    case 0xC26557: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C2/C2654C.asm:14 LDY #0
    case 0xC2655B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:14 LDY #0
    // Overlapping static entry reached from 0xC2655B.
    case 0xC2655D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2654C.asm:15 STY @LOCAL05
    case 0xC2655E: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:16 BRA @UNKNOWN5
    case 0xC26560: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC26562: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26562.
    case 0xC26564: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC26565: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC26567: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26567.
    case 0xC26569: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC2656A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC2656C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2656C.
    case 0xC2656E: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC2656F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC26571: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC26572: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC26574: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC26575: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC26577: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2654C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC26579: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2657B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2657D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2657F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26581: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2654C.asm:22 LDA #.LOWORD(PALETTES)
    case 0xC26583: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C2/C2654C.asm:22 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC26583.
    case 0xC26585: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:23 JSL MEMCPY24
    case 0xC26586: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C2/C2654C.asm:24 LDA #0
    case 0xC2658A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:24 LDA #0
    // Overlapping static entry reached from 0xC2658A.
    case 0xC2658C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2654C.asm:25 STA @LOCAL04
    case 0xC2658D: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:26 BRA @UNKNOWN2
    case 0xC2658F: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2654C.asm:28 ASL
    case 0xC26591: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:29 TAX
    case 0xC26592: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:30 LDA #$5D70 ; RGB (16, 11, 23), a kind of purple
    case 0xC26593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x005D70, 3); return true;
    // src/unknown/C2/C2654C.asm:30 LDA #$5D70 ; RGB (16, 11, 23), a kind of purple
    // Overlapping static entry reached from 0xC26593.
    case 0xC26595: cpu.execute_instruction<0x5D>(0x00009D, 3); return true;
    // src/unknown/C2/C2654C.asm:31 STA PALETTES,X
    case 0xC26596: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C2/C2654C.asm:31 STA PALETTES,X
    // Overlapping static entry reached from 0xC26595.
    case 0xC26598: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C2/C2654C.asm:32 LDA @LOCAL04
    case 0xC26599: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:33 INC
    case 0xC2659B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:34 STA @LOCAL04
    case 0xC2659C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:36 CMP #$0100
    case 0xC2659E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C2654C.asm:36 CMP #$0100
    // Overlapping static entry reached from 0xC2659E.
    case 0xC265A0: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:37 BCC @UNKNOWN1
    case 0xC265A1: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C2/C2654C.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC265A0.
    case 0xC265A2: cpu.execute_instruction<0xEE>(0x00FFA2, 3); return true;
    // src/unknown/C2/C2654C.asm:38 LDX #$FFFF
    case 0xC265A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2654C.asm:38 LDX #$FFFF
    // Overlapping static entry reached from 0xC265A3.
    case 0xC265A5: cpu.execute_instruction<0xFF>(0x000CA9, 4); return true;
    // src/unknown/C2/C2654C.asm:39 LDA #12
    case 0xC265A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C2/C2654C.asm:39 LDA #12
    // Overlapping static entry reached from 0xC265A6.
    case 0xC265A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:40 JSL UNKNOWN_C496E7
    case 0xC265A9: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/unknown/C2/C2654C.asm:41 LDX #0
    case 0xC265AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:41 LDX #0
    // Overlapping static entry reached from 0xC265AD.
    case 0xC265AF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2654C.asm:42 STX @LOCAL04
    case 0xC265B0: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:43 BRA @UNKNOWN4
    case 0xC265B2: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2654C.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC265B4: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/unknown/C2/C2654C.asm:46 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC265B8: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C2/C2654C.asm:47 LDX @LOCAL04
    case 0xC265BC: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:48 INX
    case 0xC265BE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:49 STX @LOCAL04
    case 0xC265BF: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:51 CPX #12
    case 0xC265C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/C2/C2654C.asm:51 CPX #12
    // Overlapping static entry reached from 0xC265C1.
    case 0xC265C3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:52 BCC @UNKNOWN3
    case 0xC265C4: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C2/C2654C.asm:53 JSL UNKNOWN_C49740
    case 0xC265C6: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/unknown/C2/C2654C.asm:54 LDY @LOCAL05
    case 0xC265CA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:55 INY
    case 0xC265CC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:56 STY @LOCAL05
    case 0xC265CD: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:58 CPY #2
    case 0xC265CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C2/C2654C.asm:58 CPY #2
    // Overlapping static entry reached from 0xC265CF.
    case 0xC265D1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:59 BCC @UNKNOWN0
    case 0xC265D2: cpu.execute_instruction<0x90>(0x00008E, 2); return true;
    // src/unknown/C2/C2654C.asm:60 LDA #0
    case 0xC265D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:60 LDA #0
    // Overlapping static entry reached from 0xC265D4.
    case 0xC265D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2654C.asm:61 STA @VIRTUAL02
    case 0xC265D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:62 BRA @UNKNOWN9
    case 0xC265D9: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C2/C2654C.asm:71 LDX @VIRTUAL02
    case 0xC265DB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:72 LDA GAME_STATE + game_state::party_members,X
    case 0xC265DD: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C2/C2654C.asm:74 AND #$00FF
    case 0xC265E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2654C.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC265E0.
    case 0xC265E2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2654C.asm:75 TAX
    case 0xC265E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:76 CPX #1
    case 0xC265E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2654C.asm:76 CPX #1
    // Overlapping static entry reached from 0xC265E4.
    case 0xC265E6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2654C.asm:77 BEQ @UNKNOWN7
    case 0xC265E7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2654C.asm:78 CPX #2
    case 0xC265E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2654C.asm:78 CPX #2
    // Overlapping static entry reached from 0xC265E9.
    case 0xC265EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2654C.asm:79 BEQ @UNKNOWN7
    case 0xC265EC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2654C.asm:80 CPX #4
    case 0xC265EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C2654C.asm:80 CPX #4
    // Overlapping static entry reached from 0xC265EE.
    case 0xC265F0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2654C.asm:81 BNE @UNKNOWN8
    case 0xC265F1: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C2/C2654C.asm:83 TXA
    case 0xC265F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:84 DEC
    case 0xC265F4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:85 LDY #.SIZEOF(char_struct)
    case 0xC265F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C2/C2654C.asm:85 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC265F5.
    case 0xC265F7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:86 JSL MULT168
    case 0xC265F8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2654C.asm:87 STA @LOCAL03
    case 0xC265FC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:88 CLC
    case 0xC265FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:89 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC265FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x009A1B, 3); return true;
    // src/unknown/C2/C2654C.asm:89 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC265FF.
    case 0xC26601: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:90 TAY
    case 0xC26602: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:91 LDA __BSS_START__,Y
    case 0xC26603: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:92 CLC
    case 0xC26606: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:93 ADC #20
    case 0xC26607: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000014, 2); else cpu.execute_instruction<0x69>(0x000014, 3); return true;
    // src/unknown/C2/C2654C.asm:93 ADC #20
    // Overlapping static entry reached from 0xC26607.
    case 0xC26609: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2654C.asm:94 TAX
    case 0xC2660A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:95 STX @LOCAL02
    case 0xC2660B: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2654C.asm:96 TXA
    case 0xC2660D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:97 STA __BSS_START__,Y
    case 0xC2660E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:98 LDA @LOCAL03
    case 0xC26611: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:99 TAX
    case 0xC26613: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:100 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC26614: cpu.execute_instruction<0xBD>(0x0099DA, 3); return true;
    // src/unknown/C2/C2654C.asm:101 STA @LOCAL03
    case 0xC26617: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:102 STA @VIRTUAL04
    case 0xC26619: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2654C.asm:103 LDX @LOCAL02
    case 0xC2661B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2654C.asm:104 TXA
    case 0xC2661D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:105 CMP @VIRTUAL04
    case 0xC2661E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2654C.asm:106 BLTEQ @UNKNOWN8
    case 0xC26620: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2654C.asm:106 BLTEQ @UNKNOWN8
    case 0xC26622: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2654C.asm:107 LDA @LOCAL03
    case 0xC26624: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:108 STA __BSS_START__,Y
    case 0xC26626: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:110 INC @VIRTUAL02
    case 0xC26629: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:112 LDA @VIRTUAL02
    case 0xC2662B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:113 CMP #6
    case 0xC2662D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C2/C2654C.asm:113 CMP #6
    // Overlapping static entry reached from 0xC2662D.
    case 0xC2662F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:114 BCC @UNKNOWN6
    case 0xC26630: cpu.execute_instruction<0x90>(0x0000A9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2654C.asm:115 END_C_FUNCTION
    case 0xC26632: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2654C.asm:115 END_C_FUNCTION
    case 0xC26633: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C269DE.asm (unresolved).
bool execute_unresolved_c2_c269de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C269DE.asm:3 BEGIN_C_FUNCTION
    case 0xC269DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C269DE.asm:5 BRA @UNKNOWN1
    case 0xC269E0: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C269DE.asm:7 JSL WINDOW_TICK
    case 0xC269E2: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C2/C269DE.asm:9 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC269E6: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C2/C269DE.asm:10 AND #$00FF
    case 0xC269E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C269DE.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC269E9.
    case 0xC269EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C269DE.asm:11 BNE @UNKNOWN0
    case 0xC269EC: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C269DE.asm:12 END_C_FUNCTION
    case 0xC269EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C290C6.asm (unresolved).
bool execute_unresolved_c2_c290c6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C290C6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC290C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC290C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC290C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC290CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC290CA.
    case 0xC290CC: cpu.execute_instruction<0xFF>(0x12AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC290CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:9 LDA MIRROR_ENEMY
    case 0xC290CE: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // src/unknown/C2/C290C6.asm:9 LDA MIRROR_ENEMY
    // Overlapping static entry reached from 0xC290CC.
    case 0xC290D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:10 BEQ @UNKNOWN3
    case 0xC290D1: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C2/C290C6.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC290D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/unknown/C2/C290C6.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC290D3.
    case 0xC290D5: cpu.execute_instruction<0x9F>(0xA01686, 4); return true;
    // src/unknown/C2/C290C6.asm:12 STX @LOCAL02
    case 0xC290D6: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    case 0xC290D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    // Overlapping static entry reached from 0xC290D5.
    case 0xC290D9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    // Overlapping static entry reached from 0xC290D8.
    case 0xC290DA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C290C6.asm:14 BRA @UNKNOWN2
    case 0xC290DB: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C2/C290C6.asm:16 LDA a:battler::consciousness,X
    case 0xC290DD: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C290C6.asm:17 AND #$00FF
    case 0xC290E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C290C6.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC290E0.
    case 0xC290E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C290C6.asm:18 BEQ @UNKNOWN1
    case 0xC290E3: cpu.execute_instruction<0xF0>(0x000058, 2); return true;
    // src/unknown/C2/C290C6.asm:19 LDA a:battler::ally_or_enemy,X
    case 0xC290E5: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C290C6.asm:20 AND #$00FF
    case 0xC290E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C290C6.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC290E8.
    case 0xC290EA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C290C6.asm:21 BNE @UNKNOWN1
    case 0xC290EB: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/unknown/C2/C290C6.asm:22 LDA a:battler::id,X
    case 0xC290ED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C290C6.asm:23 CMP #4
    case 0xC290F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C290C6.asm:23 CMP #4
    // Overlapping static entry reached from 0xC290F0.
    case 0xC290F2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C290C6.asm:24 BNE @UNKNOWN1
    case 0xC290F3: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C2/C290C6.asm:25 STZ MIRROR_ENEMY
    case 0xC290F5: cpu.execute_instruction<0x9C>(0x00AA12, 3); return true;
    // src/unknown/C2/C290C6.asm:26 TXA
    case 0xC290F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC290F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC290FB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC290FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC290FE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC290FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29101: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C290C6.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC29103: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29105: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29107: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29109: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2910B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2910D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x00AA14, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC2910D.
    case 0xC2910F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29110: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29112: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29113: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29115: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29116: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC29118: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C290C6.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC2911A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2911C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2911E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29120: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29122: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C290C6.asm:33 JSL COPY_MIRROR_DATA
    case 0xC29124: cpu.execute_instruction<0x22>(0xC2AF1F, 4); return true;
    // src/unknown/C2/C290C6.asm:34 LDX @LOCAL02
    case 0xC29128: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:35 STZ a:battler::current_action,X
    case 0xC2912A: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC2912D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x007142, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC2912D.
    case 0xC2912F: cpu.execute_instruction<0x71>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC29130: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC2912F.
    case 0xC29131: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC29132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC29132.
    case 0xC29134: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC29135: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC29137: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/unknown/C2/C290C6.asm:37 BRA @UNKNOWN3
    case 0xC2913B: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C290C6.asm:39 TXA
    case 0xC2913D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:40 CLC
    case 0xC2913E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:41 ADC #.SIZEOF(battler)
    case 0xC2913F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C290C6.asm:41 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2913F.
    case 0xC29141: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C290C6.asm:42 TAX
    case 0xC29142: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:43 STX @LOCAL02
    case 0xC29143: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:44 INY
    case 0xC29145: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:46 CPY #BATTLER_COUNT
    case 0xC29146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C290C6.asm:46 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29146.
    case 0xC29148: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C290C6.asm:47 BCC @UNKNOWN0
    case 0xC29149: cpu.execute_instruction<0x90>(0x000092, 2); return true;
    // src/unknown/C2/C290C6.asm:49 JSL TARGET_ALL
    case 0xC2914B: cpu.execute_instruction<0x22>(0xC26E00, 4); return true;
    // src/unknown/C2/C290C6.asm:50 JSR REMOVE_DEAD_TARGETTING
    case 0xC2914F: cpu.execute_instruction<0x20>(0x0070E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC29152: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x009051, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC29152.
    case 0xC29154: cpu.execute_instruction<0x90>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC29155: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC29154.
    case 0xC29156: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC29157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC29157.
    case 0xC29159: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC2915A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C290C6.asm:52 JSL UNKNOWN_C240A4
    case 0xC2915C: cpu.execute_instruction<0x22>(0xC240A4, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29160.
    case 0xC29162: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29163: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29166.
    case 0xC29168: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29169: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C290C6.asm:54 END_C_FUNCTION
    case 0xC2916C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C290C6.asm:54 END_C_FUNCTION
    case 0xC2916D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2B66A.asm (unresolved).
bool execute_unresolved_c2_c2b66a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2B66A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B66A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2B66A.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B668.
    case 0xC2B66B: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B66C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B66D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B66E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B66F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B66F.
    case 0xC2B671: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B672: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B673: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:10 TAY
    case 0xC2B674: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:11 STY @LOCAL02
    case 0xC2B675: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/unknown/C2/C2B66A.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B677: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C2/C2B66A.asm:13 STZ_BADOPT @LOCAL00
    case 0xC2B679: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C2/C2B66A.asm:14 LDX #26
    case 0xC2B67B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001A, 2); else cpu.execute_instruction<0xA2>(0x00001A, 3); return true;
    // src/unknown/C2/C2B66A.asm:14 LDX #26
    // Overlapping static entry reached from 0xC2B67B.
    case 0xC2B67D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2B66A.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2B67E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:16 LDA #.LOWORD(USED_ENEMY_LETTERS)
    case 0xC2B680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x00AA98, 3); return true;
    // src/unknown/C2/C2B66A.asm:16 LDA #.LOWORD(USED_ENEMY_LETTERS)
    // Overlapping static entry reached from 0xC2B680.
    case 0xC2B682: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:17 JSL MEMSET16
    case 0xC2B683: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C2/C2B66A.asm:18 LDA #0
    case 0xC2B687: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2B66A.asm:18 LDA #0
    // Overlapping static entry reached from 0xC2B687.
    case 0xC2B689: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2B66A.asm:19 STA @LOCAL01
    case 0xC2B68A: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:20 BRA @UNKNOWN2
    case 0xC2B68C: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C2/C2B66A.asm:22 LDY #.SIZEOF(battler)
    case 0xC2B68E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2B66A.asm:22 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B68E.
    case 0xC2B690: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2B66A.asm:23 JSL MULT168
    case 0xC2B691: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C2/C2B66A.asm:24 TAX
    case 0xC2B695: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:25 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0xC2B696: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/unknown/C2/C2B66A.asm:26 AND #$00FF
    case 0xC2B699: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B699.
    case 0xC2B69B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2B66A.asm:27 BEQ @UNKNOWN1
    case 0xC2B69C: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C2B66A.asm:28 LDA BATTLERS_TABLE + battler::ally_or_enemy,X
    case 0xC2B69E: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/unknown/C2/C2B66A.asm:29 AND #$00FF
    case 0xC2B6A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2B6A1.
    case 0xC2B6A3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2B66A.asm:30 CMP #1
    case 0xC2B6A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2B66A.asm:30 CMP #1
    // Overlapping static entry reached from 0xC2B6A4.
    case 0xC2B6A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2B66A.asm:31 BNE @UNKNOWN1
    case 0xC2B6A7: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C2/C2B66A.asm:32 LDY @LOCAL02
    case 0xC2B6A9: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C2/C2B66A.asm:33 TYA
    case 0xC2B6AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:34 CMP BATTLERS_TABLE + battler::unknown76,X
    case 0xC2B6AC: cpu.execute_instruction<0xDD>(0x009FF8, 3); return true;
    // src/unknown/C2/C2B66A.asm:35 BNE @UNKNOWN1
    case 0xC2B6AF: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:36 LDA BATTLERS_TABLE + battler::the_flag,X
    case 0xC2B6B1: cpu.execute_instruction<0xBD>(0x009FB7, 3); return true;
    // src/unknown/C2/C2B66A.asm:37 AND #$00FF
    case 0xC2B6B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC2B6B4.
    case 0xC2B6B6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2B66A.asm:38 TAX
    case 0xC2B6B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:39 DEX
    case 0xC2B6B8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B6B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:41 LDA #1
    case 0xC2B6BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C2/C2B66A.asm:42 STA USED_ENEMY_LETTERS,X
    case 0xC2B6BD: cpu.execute_instruction<0x9D>(0x00AA98, 3); return true;
    // src/unknown/C2/C2B66A.asm:42 STA USED_ENEMY_LETTERS,X
    // Overlapping static entry reached from 0xC2B6BB.
    case 0xC2B6BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:42 STA USED_ENEMY_LETTERS,X
    // Overlapping static entry reached from 0xC2B6BE.
    case 0xC2B6BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2B6C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:45 LDA @LOCAL01
    case 0xC2B6C2: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:46 INC
    case 0xC2B6C4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:47 STA @LOCAL01
    case 0xC2B6C5: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:49 CMP #BATTLER_COUNT
    case 0xC2B6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2B66A.asm:49 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2B6C7.
    case 0xC2B6C9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2B66A.asm:50 BCC @UNKNOWN0
    case 0xC2B6CA: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/unknown/C2/C2B66A.asm:51 LDX #0
    case 0xC2B6CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2B66A.asm:51 LDX #0
    // Overlapping static entry reached from 0xC2B6CC.
    case 0xC2B6CE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2B66A.asm:52 BRA @UNKNOWN5
    case 0xC2B6CF: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:54 LDA USED_ENEMY_LETTERS,X
    case 0xC2B6D1: cpu.execute_instruction<0xBD>(0x00AA98, 3); return true;
    // src/unknown/C2/C2B66A.asm:55 AND #$00FF
    case 0xC2B6D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2B6D4.
    case 0xC2B6D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2B66A.asm:56 BNE @UNKNOWN4
    case 0xC2B6D7: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C2/C2B66A.asm:57 TXA
    case 0xC2B6D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B6DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:59 INC
    case 0xC2B6DC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:60 BRA @UNKNOWN6
    case 0xC2B6DD: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C2B66A.asm:62 INX
    case 0xC2B6DF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:64 CPX #26
    case 0xC2B6E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001A, 2); else cpu.execute_instruction<0xE0>(0x00001A, 3); return true;
    // src/unknown/C2/C2B66A.asm:64 CPX #26
    // Overlapping static entry reached from 0xC2B6E0.
    case 0xC2B6E2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2B66A.asm:65 BCC @UNKNOWN3
    case 0xC2B6E3: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/unknown/C2/C2B66A.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B6E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:67 LDA #0
    case 0xC2B6E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002B00, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2B66A.asm:69 END_C_FUNCTION
    case 0xC2B6E9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2B66A.asm:69 END_C_FUNCTION
    case 0xC2B6EA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2BCB9.asm (unresolved).
bool execute_unresolved_c2_c2bcb9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2BCB9.asm:2 BEGIN_C_FUNCTION_FAR
    case 0xC2BCB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCBB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCBC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCBD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BCBE.
    case 0xC2BCC0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCC1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BCC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:8 STX @VIRTUAL02
    case 0xC2BCC3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2BCC0.
    case 0xC2BCC4: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2BCB9.asm:9 TAY
    case 0xC2BCC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:10 LDA a:battler::pp_target,Y
    case 0xC2BCC6: cpu.execute_instruction<0xB9>(0x000019, 3); return true;
    // src/unknown/C2/C2BCB9.asm:11 STA @LOCAL00
    case 0xC2BCC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2BCB9.asm:12 STA @VIRTUAL04
    case 0xC2BCCB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2BCB9.asm:13 LDA @VIRTUAL02
    case 0xC2BCCD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:14 CMP @VIRTUAL04
    case 0xC2BCCF: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2BCB9.asm:15 BLTEQ @UNKNOWN0
    case 0xC2BCD1: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2BCB9.asm:15 BLTEQ @UNKNOWN0
    case 0xC2BCD3: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2BCB9.asm:16 LDA #0
    case 0xC2BCD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2BCB9.asm:16 LDA #0
    // Overlapping static entry reached from 0xC2BCD5.
    case 0xC2BCD7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2BCB9.asm:17 BRA @UNKNOWN1
    case 0xC2BCD8: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C2/C2BCB9.asm:19 LDA @LOCAL00
    case 0xC2BCDA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2BCB9.asm:20 SEC
    case 0xC2BCDC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:21 SBC @VIRTUAL02
    case 0xC2BCDD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:23 TAX
    case 0xC2BCDF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:24 TYA
    case 0xC2BCE0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:25 JSR SET_PP
    case 0xC2BCE1: cpu.execute_instruction<0x20>(0x007191, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2BCB9.asm:26 END_C_FUNCTION
    case 0xC2BCE4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2BCB9.asm:26 END_C_FUNCTION
    case 0xC2BCE5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2BD13.asm (unresolved).
bool execute_unresolved_c2_c2bd13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2BD13.asm:3 BEGIN_C_FUNCTION
    case 0xC2BD13: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BD15: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BD16: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BD17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BD17.
    case 0xC2BD19: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BD1A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:9 LDA #0
    case 0xC2BD1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2BD13.asm:9 LDA #0
    // Overlapping static entry reached from 0xC2BD1B.
    case 0xC2BD1D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2BD13.asm:10 STA @VIRTUAL02
    case 0xC2BD1E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:11 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2BD20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/unknown/C2/C2BD13.asm:11 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2BD20.
    case 0xC2BD22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000086, 2); else cpu.execute_instruction<0xA2>(0x001086, 3); return true;
    // src/unknown/C2/C2BD13.asm:12 STX @LOCAL01
    case 0xC2BD23: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:12 STX @LOCAL01
    // Overlapping static entry reached from 0xC2BD22.
    case 0xC2BD24: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    case 0xC2BD25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    // Overlapping static entry reached from 0xC2BD24.
    case 0xC2BD26: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    // Overlapping static entry reached from 0xC2BD25.
    case 0xC2BD27: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2BD13.asm:14 STY @LOCAL00
    case 0xC2BD28: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:15 BRA @UNKNOWN2
    case 0xC2BD2A: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C2BD13.asm:17 LDA a:battler::consciousness,X
    case 0xC2BD2C: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C2BD13.asm:18 AND #$00FF
    case 0xC2BD2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2BD13.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2BD2F.
    case 0xC2BD31: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2BD13.asm:19 CMP #1
    case 0xC2BD32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2BD13.asm:19 CMP #1
    // Overlapping static entry reached from 0xC2BD32.
    case 0xC2BD34: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2BD13.asm:20 BNE @UNKNOWN1
    case 0xC2BD35: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C2/C2BD13.asm:21 LDA a:battler::sprite,X
    case 0xC2BD37: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C2/C2BD13.asm:22 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BD3A: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/unknown/C2/C2BD13.asm:23 STA @VIRTUAL04
    case 0xC2BD3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2BD13.asm:24 LDA @VIRTUAL02
    case 0xC2BD3F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:25 CLC
    case 0xC2BD41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:26 ADC @VIRTUAL04
    case 0xC2BD42: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2BD13.asm:27 STA @VIRTUAL02
    case 0xC2BD44: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:29 LDX @LOCAL01
    case 0xC2BD46: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:30 TXA
    case 0xC2BD48: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:31 CLC
    case 0xC2BD49: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:32 ADC #.SIZEOF(battler)
    case 0xC2BD4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C2BD13.asm:32 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BD4A.
    case 0xC2BD4C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2BD13.asm:33 TAX
    case 0xC2BD4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:34 STX @LOCAL01
    case 0xC2BD4E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:35 LDY @LOCAL00
    case 0xC2BD50: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:36 INY
    case 0xC2BD52: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:37 STY @LOCAL00
    case 0xC2BD53: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:39 CPY #BATTLER_COUNT
    case 0xC2BD55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2BD13.asm:39 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2BD55.
    case 0xC2BD57: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2BD13.asm:40 BCC @UNKNOWN0
    case 0xC2BD58: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/unknown/C2/C2BD13.asm:41 LDA @VIRTUAL02
    case 0xC2BD5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2BD13.asm:42 END_C_FUNCTION
    case 0xC2BD5C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2BD13.asm:42 END_C_FUNCTION
    case 0xC2BD5D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C21F.asm (unresolved).
bool execute_unresolved_c2_c2c21f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C21F.asm:3 BEGIN_C_FUNCTION
    case 0xC2C21F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C221: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C222: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C223: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C224.
    case 0xC2C226: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C227: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C228: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:16 STX @LOCAL03
    case 0xC2C229: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C2/C2C21F.asm:16 STX @LOCAL03
    // Overlapping static entry reached from 0xC2C226.
    case 0xC2C22A: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C2/C2C21F.asm:17 STA @LOCAL02
    case 0xC2C22B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC2C22A.
    case 0xC2C22C: cpu.execute_instruction<0x12>(0x000064, 2); return true;
    // src/unknown/C2/C2C21F.asm:18 STZ @LOCAL01
    case 0xC2C22D: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C2/C2C21F.asm:18 STZ @LOCAL01
    // Overlapping static entry reached from 0xC2C22C.
    case 0xC2C22E: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C2/C2C21F.asm:19 LDA BATTLE_MODE_FLAG
    case 0xC2C22F: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/unknown/C2/C2C21F.asm:19 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC2C22E.
    case 0xC2C230: cpu.execute_instruction<0x43>(0x000096, 2); return true;
    // src/unknown/C2/C2C21F.asm:20 BEQ @UNKNOWN0
    case 0xC2C232: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2C21F.asm:21 LDA @LOCAL02
    case 0xC2C234: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:22 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    case 0xC2C236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E3, 2); else cpu.execute_instruction<0xC9>(0x0001E3, 3); return true;
    // src/unknown/C2/C2C21F.asm:22 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    // Overlapping static entry reached from 0xC2C236.
    case 0xC2C238: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:23 BNE @UNKNOWN1
    case 0xC2C239: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2C21F.asm:23 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC2C238.
    case 0xC2C23A: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    case 0xC2C23B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C23A.
    case 0xC2C23C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C23B.
    case 0xC2C23D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C21F.asm:26 STA @LOCAL01
    case 0xC2C23E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C21F.asm:28 LDA @LOCAL01
    case 0xC2C240: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2C21F.asm:29 BNE @UNKNOWN4
    case 0xC2C242: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C2/C2C21F.asm:30 LDY #30
    case 0xC2C244: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/unknown/C2/C2C21F.asm:30 LDY #30
    // Overlapping static entry reached from 0xC2C244.
    case 0xC2C246: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2C21F.asm:31 LDX #1
    case 0xC2C247: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:31 LDX #1
    // Overlapping static entry reached from 0xC2C247.
    case 0xC2C249: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:32 LDA #6
    case 0xC2C24A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C2/C2C21F.asm:32 LDA #6
    // Overlapping static entry reached from 0xC2C24A.
    case 0xC2C24C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:33 JSL UNKNOWN_C2E8C4
    case 0xC2C24D: cpu.execute_instruction<0x22>(0xC2E8C4, 4); return true;
    // src/unknown/C2/C2C21F.asm:34 BRA @UNKNOWN3
    case 0xC2C251: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:36 JSL WINDOW_TICK
    case 0xC2C253: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C2/C2C21F.asm:38 JSL UNKNOWN_C2E9C8
    case 0xC2C257: cpu.execute_instruction<0x22>(0xC2E9C8, 4); return true;
    // src/unknown/C2/C2C21F.asm:39 CMP #0
    case 0xC2C25B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:39 CMP #0
    // Overlapping static entry reached from 0xC2C25B.
    case 0xC2C25D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:40 BNE @UNKNOWN2
    case 0xC2C25E: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C2/C2C21F.asm:42 LDA @LOCAL02
    case 0xC2C260: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:43 STA CURRENT_BATTLE_GROUP
    case 0xC2C262: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C265: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C265.
    case 0xC2C267: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C268: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C26A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B637.
    case 0xC2C26B: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C26A.
    case 0xC2C26C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C26D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C21F.asm:45 LDA CURRENT_BATTLE_GROUP
    case 0xC2C26F: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/unknown/C2/C2C21F.asm:46 ASL
    case 0xC2C272: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:47 ASL
    case 0xC2C273: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:48 STA @LOCAL00
    case 0xC2C274: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C276: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C278: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C27A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C27C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C2/C2C21F.asm:50 CLC
    case 0xC2C27E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:51 ADC @VIRTUAL0A
    case 0xC2C27F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:52 STA @VIRTUAL0A
    case 0xC2C281: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:53 LDA [@VIRTUAL0A]
    case 0xC2C283: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:58 STA @VIRTUAL04
    case 0xC2C285: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:59 LDA @LOCAL00
    case 0xC2C287: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2C21F.asm:61 INC
    case 0xC2C289: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:62 INC
    case 0xC2C28A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:63 CLC
    case 0xC2C28B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:64 ADC @VIRTUAL06
    case 0xC2C28C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:65 STA @VIRTUAL06
    case 0xC2C28E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:66 LDA [@VIRTUAL06]
    case 0xC2C290: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:70 STA @VIRTUAL02
    case 0xC2C292: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2C21F.asm:72 LDA CURRENT_BATTLE_GROUP
    case 0xC2C294: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/unknown/C2/C2C21F.asm:73 ASL
    case 0xC2C297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:74 ASL
    case 0xC2C298: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:75 ASL
    case 0xC2C299: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:76 CLC
    case 0xC2C29A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:77 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC2C29B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C2/C2C21F.asm:77 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC2E0F0.
    case 0xC2C29C: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/unknown/C2/C2C21F.asm:77 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC2C29B.
    case 0xC2C29D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2C21F.asm:78 TAX
    case 0xC2C29E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:79 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC2C29F: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/unknown/C2/C2C21F.asm:80 AND #$00FF
    case 0xC2C2A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C21F.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC2C2A3.
    case 0xC2C2A5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2C21F.asm:92 TAX
    case 0xC2C2A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:93 STX @LOCAL00
    case 0xC2C2A7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2C21F.asm:94 JSL UNKNOWN_C08726
    case 0xC2C2A9: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/C2/C2C21F.asm:95 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC2C2AD: cpu.execute_instruction<0x22>(0xC2C8C8, 4); return true;
    // src/unknown/C2/C2C21F.asm:96 JSL LOAD_WINDOW_GFX
    case 0xC2C2B1: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/unknown/C2/C2C21F.asm:97 LDA #1
    case 0xC2C2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:97 LDA #1
    // Overlapping static entry reached from 0xC2C2B5.
    case 0xC2C2B7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:98 JSL UNKNOWN_C44963
    case 0xC2C2B8: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/unknown/C2/C2C21F.asm:99 LDX @LOCAL00
    case 0xC2C2BC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2C21F.asm:100 TXY
    case 0xC2C2BE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:101 LDX @VIRTUAL02
    case 0xC2C2BF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C21F.asm:102 LDA @VIRTUAL04
    case 0xC2C2C1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:104 JSL LOAD_BATTLE_BG
    case 0xC2C2C3: cpu.execute_instruction<0x22>(0xC2D121, 4); return true;
    // src/unknown/C2/C2C21F.asm:105 JSL UNKNOWN_C2EEE7
    case 0xC2C2C7: cpu.execute_instruction<0x22>(0xC2EEE7, 4); return true;
    // src/unknown/C2/C2C21F.asm:106 LDA #24
    case 0xC2C2CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2C21F.asm:106 LDA #24
    // Overlapping static entry reached from 0xC2C2CB.
    case 0xC2C2CD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:107 JSL UNKNOWN_C0856B
    case 0xC2C2CE: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2C21F.asm:108 JSL UNKNOWN_C2F8F9
    case 0xC2C2D2: cpu.execute_instruction<0x22>(0xC2F8F9, 4); return true;
    // src/unknown/C2/C2C21F.asm:109 LDA #1
    case 0xC2C2D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:109 LDA #1
    // Overlapping static entry reached from 0xC2C2D6.
    case 0xC2C2D8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C21F.asm:110 STA BATTLE_MODE_FLAG
    case 0xC2C2D9: cpu.execute_instruction<0x8D>(0x009643, 3); return true;
    // src/unknown/C2/C2C21F.asm:111 LDA @LOCAL03
    case 0xC2C2DC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2C21F.asm:112 BEQ @UNKNOWN5
    case 0xC2C2DE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:113 LDA @LOCAL03
    case 0xC2C2E0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2C21F.asm:114 JSL CHANGE_MUSIC
    case 0xC2C2E2: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C2/C2C21F.asm:116 JSL UNKNOWN_C08744
    case 0xC2C2E6: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/unknown/C2/C2C21F.asm:117 LDA @LOCAL01
    case 0xC2C2EA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2C21F.asm:118 BEQ @UNKNOWN6
    case 0xC2C2EC: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C2/C2C21F.asm:119 LDX #4
    case 0xC2C2EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2C21F.asm:119 LDX #4
    // Overlapping static entry reached from 0xC2C2EE.
    case 0xC2C2F0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:120 LDA #1
    case 0xC2C2F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:120 LDA #1
    // Overlapping static entry reached from 0xC2C2F1.
    case 0xC2C2F3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:121 JSL FADE_IN
    case 0xC2C2F4: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C21F.asm:122 JSR UNKNOWN_C269DE
    case 0xC2C2F8: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C21F.asm:123 BRA @RETURN
    case 0xC2C2FB: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C2/C2C21F.asm:125 LDX #1
    case 0xC2C2FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:125 LDX #1
    // Overlapping static entry reached from 0xC2C2FD.
    case 0xC2C2FF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:126 LDA #15
    case 0xC2C300: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/C2/C2C21F.asm:126 LDA #15
    // Overlapping static entry reached from 0xC2C300.
    case 0xC2C302: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:127 JSL FADE_IN
    case 0xC2C303: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C21F.asm:128 LDA @LOCAL02
    case 0xC2C307: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:129 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    case 0xC2C309: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E3, 2); else cpu.execute_instruction<0xC9>(0x0001E3, 3); return true;
    // src/unknown/C2/C2C21F.asm:129 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    // Overlapping static entry reached from 0xC2C309.
    case 0xC2C30B: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C2/C2C21F.asm:130 BEQ @RETURN
    case 0xC2C30C: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C2/C2C21F.asm:130 BEQ @RETURN
    // Overlapping static entry reached from 0xC2C30B.
    case 0xC2C30D: cpu.execute_instruction<0x1C>(0x0005A0, 3); return true;
    // src/unknown/C2/C2C21F.asm:131 LDY #5
    case 0xC2C30E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2C21F.asm:131 LDY #5
    // Overlapping static entry reached from 0xC2C30E.
    case 0xC2C310: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2C21F.asm:132 LDX #0
    case 0xC2C311: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:132 LDX #0
    // Overlapping static entry reached from 0xC2C311.
    case 0xC2C313: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:133 LDA #6
    case 0xC2C314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C2/C2C21F.asm:133 LDA #6
    // Overlapping static entry reached from 0xC2C314.
    case 0xC2C316: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:134 JSL UNKNOWN_C2E8C4
    case 0xC2C317: cpu.execute_instruction<0x22>(0xC2E8C4, 4); return true;
    // src/unknown/C2/C2C21F.asm:135 BRA @UNKNOWN8
    case 0xC2C31B: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:137 JSL WINDOW_TICK
    case 0xC2C31D: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C2/C2C21F.asm:139 JSL UNKNOWN_C2E9C8
    case 0xC2C321: cpu.execute_instruction<0x22>(0xC2E9C8, 4); return true;
    // src/unknown/C2/C2C21F.asm:140 CMP #0
    case 0xC2C325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:140 CMP #0
    // Overlapping static entry reached from 0xC2C325.
    case 0xC2C327: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:141 BNE @UNKNOWN7
    case 0xC2C328: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C21F.asm:143 END_C_FUNCTION
    case 0xC2C32A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C21F.asm:143 END_C_FUNCTION
    case 0xC2C32B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C32C.asm (unresolved).
bool execute_unresolved_c2_c2c32c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C32C.asm:3 BEGIN_C_FUNCTION
    case 0xC2C32C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C32E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C32F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C330: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C331.
    case 0xC2C333: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C334: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C335: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C32C.asm:10 STA @LOCAL02
    case 0xC2C336: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2C32C.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC2C333.
    case 0xC2C337: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    case 0xC2C338: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x00A260, 3); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    // Overlapping static entry reached from 0xC2C337.
    case 0xC2C339: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    // Overlapping static entry reached from 0xC2C338.
    case 0xC2C33A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000285, 3); return true;
    // src/unknown/C2/C2C32C.asm:12 STA @VIRTUAL02
    case 0xC2C33B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2C33A.
    case 0xC2C33C: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C2/C2C32C.asm:13 LDX @VIRTUAL02
    case 0xC2C33D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:14 LDA __BSS_START__,X
    case 0xC2C33F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:15 AND #$00FF
    case 0xC2C342: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C32C.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2C342.
    case 0xC2C344: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C32C.asm:16 STA @LOCAL01
    case 0xC2C345: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C32C.asm:17 LDY #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_y
    case 0xC2C347: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000061, 2); else cpu.execute_instruction<0xA0>(0x00A261, 3); return true;
    // src/unknown/C2/C2C32C.asm:17 LDY #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_y
    // Overlapping static entry reached from 0xC2C347.
    case 0xC2C349: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000084, 2); else cpu.execute_instruction<0xA2>(0x000E84, 3); return true;
    // src/unknown/C2/C2C32C.asm:18 STY @LOCAL00
    case 0xC2C34A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2C32C.asm:18 STY @LOCAL00
    // Overlapping static entry reached from 0xC2C349.
    case 0xC2C34B: cpu.execute_instruction<0x0E>(0x0000B9, 3); return true;
    // src/unknown/C2/C2C32C.asm:19 LDA __BSS_START__,Y
    case 0xC2C34C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:19 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2C34B.
    case 0xC2C34E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2C32C.asm:20 AND #$00FF
    case 0xC2C34F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C32C.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2C34F.
    case 0xC2C351: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C32C.asm:21 STA @VIRTUAL04
    case 0xC2C352: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2C32C.asm:22 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/unknown/C2/C2C32C.asm:22 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C354.
    case 0xC2C356: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A5, 2); else cpu.execute_instruction<0xA2>(0x0012A5, 3); return true;
    // src/unknown/C2/C2C32C.asm:23 LDA @LOCAL02
    case 0xC2C357: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C32C.asm:23 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2C356.
    case 0xC2C358: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C359: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    // Overlapping static entry reached from 0xC2C358.
    case 0xC2C35A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    // Overlapping static entry reached from 0xC2C35A.
    case 0xC2C35B: cpu.execute_instruction<0xB6>(0x0000C2, 2); return true;
    // src/unknown/C2/C2C32C.asm:25 LDA @LOCAL01
    case 0xC2C35D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2C32C.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C35F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:27 LDX @VIRTUAL02
    case 0xC2C361: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:28 STA __BSS_START__,X
    case 0xC2C363: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2C366: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:30 LDA @VIRTUAL04
    case 0xC2C368: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2C32C.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C36A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:32 LDY @LOCAL00
    case 0xC2C36C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2C32C.asm:33 STA __BSS_START__,Y
    case 0xC2C36E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:34 LDA #1
    case 0xC2C371: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C2/C2C32C.asm:35 STA BATTLERS_TABLE + (.SIZEOF(battler) * 8) + battler::has_taken_turn
    case 0xC2C373: cpu.execute_instruction<0x8D>(0x00A229, 3); return true;
    // src/unknown/C2/C2C32C.asm:35 STA BATTLERS_TABLE + (.SIZEOF(battler) * 8) + battler::has_taken_turn
    // Overlapping static entry reached from 0xC2C371.
    case 0xC2C374: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A2, 2); else cpu.execute_instruction<0x29>(0x00C2A2, 3); return true;
    // src/unknown/C2/C2C32C.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2C376: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:36 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C374.
    case 0xC2C377: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C32C.asm:37 END_C_FUNCTION
    case 0xC2C378: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C32C.asm:37 END_C_FUNCTION
    case 0xC2C379: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C37A.asm (unresolved).
bool execute_unresolved_c2_c2c37a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C37A.asm:3 BEGIN_C_FUNCTION
    case 0xC2C37A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C37C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C37D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C37E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C37F.
    case 0xC2C381: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C382: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C383: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:11 STX @VIRTUAL02
    case 0xC2C384: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2C37A.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2C381.
    case 0xC2C385: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2C37A.asm:12 TAY
    case 0xC2C386: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:13 STY @LOCAL01
    case 0xC2C387: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C389: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C38B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C38D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C38F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C37A.asm:15 LDX #4
    case 0xC2C391: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2C37A.asm:15 LDX #4
    // Overlapping static entry reached from 0xC2C391.
    case 0xC2C393: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C37A.asm:16 LDA #1
    case 0xC2C394: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:16 LDA #1
    // Overlapping static entry reached from 0xC2C394.
    case 0xC2C396: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C37A.asm:17 JSL FADE_OUT
    case 0xC2C397: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C2/C2C37A.asm:18 JSR UNKNOWN_C269DE
    case 0xC2C39B: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C37A.asm:19 STZ BATTLE_MODE_FLAG
    case 0xC2C39E: cpu.execute_instruction<0x9C>(0x009643, 3); return true;
    // src/unknown/C2/C2C37A.asm:20 STZ CURRENT_MAP_MUSIC_TRACK
    case 0xC2C3A1: cpu.execute_instruction<0x9C>(0x005DD4, 3); return true;
    // src/unknown/C2/C2C37A.asm:21 JSL UNKNOWN_C1DD5F
    case 0xC2C3A4: cpu.execute_instruction<0x22>(0xC1DD5F, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C3A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C3AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C3AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C3AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C37A.asm:23 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2C3B0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/unknown/C2/C2C37A.asm:24 LDX #2
    case 0xC2C3B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C2/C2C37A.asm:24 LDX #2
    // Overlapping static entry reached from 0xC2C3B4.
    case 0xC2C3B6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C37A.asm:25 LDA #1
    case 0xC2C3B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C3B7.
    case 0xC2C3B9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C37A.asm:26 JSL FADE_OUT
    case 0xC2C3BA: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C2/C2C37A.asm:27 JSR UNKNOWN_C269DE
    case 0xC2C3BE: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C37A.asm:28 LDX @VIRTUAL02
    case 0xC2C3C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C37A.asm:29 LDY @LOCAL01
    case 0xC2C3C3: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2C37A.asm:30 TYA
    case 0xC2C3C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:31 JSR UNKNOWN_C2C21F
    case 0xC2C3C6: cpu.execute_instruction<0x20>(0x00C21F, 3); return true;
    // src/unknown/C2/C2C37A.asm:32 LDA #1
    case 0xC2C3C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:32 LDA #1
    // Overlapping static entry reached from 0xC2C3C9.
    case 0xC2C3CB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C37A.asm:33 STA BATTLE_MODE_FLAG
    case 0xC2C3CC: cpu.execute_instruction<0x8D>(0x009643, 3); return true;
    // src/unknown/C2/C2C37A.asm:34 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC2C3CF: cpu.execute_instruction<0x22>(0xC1DD3B, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C3D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2C3D3.
    case 0xC2C3D5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C3D6: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/unknown/C2/C2C37A.asm:36 LDA #1*SECOND
    case 0xC2C3DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C2/C2C37A.asm:36 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3DA.
    case 0xC2C3DC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C37A.asm:37 JSR WAIT
    case 0xC2C3DD: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C37A.asm:38 END_C_FUNCTION
    case 0xC2C3E0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C37A.asm:38 END_C_FUNCTION
    case 0xC2C3E1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C41F.asm (unresolved).
bool execute_unresolved_c2_c2c41f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C41F.asm:3 BEGIN_C_FUNCTION
    case 0xC2C41F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C421: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C422: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C423: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C424: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C424.
    case 0xC2C426: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C427: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C428: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:10 TAY
    case 0xC2C429: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:11 STY @LOCAL01
    case 0xC2C42A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C42C: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C42E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C430: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C432: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C41F.asm:13 LDX #1
    case 0xC2C434: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:13 LDX #1
    // Overlapping static entry reached from 0xC2C434.
    case 0xC2C436: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:14 TXA
    case 0xC2C437: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:15 JSL FADE_OUT
    case 0xC2C438: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C2/C2C41F.asm:16 LDA #2
    case 0xC2C43C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2C41F.asm:16 LDA #2
    // Overlapping static entry reached from 0xC2C43C.
    case 0xC2C43E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:17 JSL UNKNOWN_C0AC0C
    case 0xC2C43F: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/C2/C2C41F.asm:18 JSR UNKNOWN_C269DE
    case 0xC2C443: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C41F.asm:19 STZ BATTLE_MODE_FLAG
    case 0xC2C446: cpu.execute_instruction<0x9C>(0x009643, 3); return true;
    // src/unknown/C2/C2C41F.asm:20 JSL UNKNOWN_C1DD5F
    case 0xC2C449: cpu.execute_instruction<0x22>(0xC1DD5F, 4); return true;
    // src/unknown/C2/C2C41F.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C44D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:22 LDA #$04
    case 0xC2C44F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    case 0xC2C451: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C44F.
    case 0xC2C452: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C452.
    case 0xC2C453: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2C41F.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2C454: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:25 LDA #MUSIC::GIYGAS_WEAKENED
    case 0xC2C456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/C2/C2C41F.asm:25 LDA #MUSIC::GIYGAS_WEAKENED
    // Overlapping static entry reached from 0xC2C456.
    case 0xC2C458: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:26 JSL CHANGE_MUSIC
    case 0xC2C459: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C2/C2C41F.asm:27 LDX #1
    case 0xC2C45D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:27 LDX #1
    // Overlapping static entry reached from 0xC2C45D.
    case 0xC2C45F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:28 TXA
    case 0xC2C460: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:29 JSL FADE_IN
    case 0xC2C461: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C41F.asm:30 JSR UNKNOWN_C269DE
    case 0xC2C465: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C41F.asm:31 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC2C468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2C41F.asm:31 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C468.
    case 0xC2C46A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:32 JSR WAIT
    case 0xC2C46B: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C46E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C470: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C472: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C474: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C41F.asm:34 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2C476: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/unknown/C2/C2C41F.asm:35 LDA #1
    case 0xC2C47A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:35 LDA #1
    // Overlapping static entry reached from 0xC2C47A.
    case 0xC2C47C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C41F.asm:36 STA BATTLE_MODE_FLAG
    case 0xC2C47D: cpu.execute_instruction<0x8D>(0x009643, 3); return true;
    // src/unknown/C2/C2C41F.asm:37 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC2C480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2C41F.asm:37 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C480.
    case 0xC2C482: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:38 JSR WAIT
    case 0xC2C483: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/unknown/C2/C2C41F.asm:39 LDA #2
    case 0xC2C486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2C41F.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2C486.
    case 0xC2C488: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:40 JSL UNKNOWN_C0AC0C
    case 0xC2C489: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/C2/C2C41F.asm:41 LDX #1
    case 0xC2C48D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:41 LDX #1
    // Overlapping static entry reached from 0xC2C48D.
    case 0xC2C48F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:42 TXA
    case 0xC2C490: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:43 JSL FADE_OUT
    case 0xC2C491: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C2/C2C41F.asm:44 JSR UNKNOWN_C269DE
    case 0xC2C495: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // src/unknown/C2/C2C41F.asm:45 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC2C498: cpu.execute_instruction<0x22>(0xC1DD3B, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2C49C.
    case 0xC2C49E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C49F: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/unknown/C2/C2C41F.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C4A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:48 LDA #$17
    case 0xC2C4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    case 0xC2C4A7: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C4A5.
    case 0xC2C4A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C4A8.
    case 0xC2C4A9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2C41F.asm:50 LDY @LOCAL01
    case 0xC2C4AA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2C41F.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2C4AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:52 TYA
    case 0xC2C4AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:53 JSL CHANGE_MUSIC
    case 0xC2C4AF: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C2/C2C41F.asm:54 LDX #1
    case 0xC2C4B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:54 LDX #1
    // Overlapping static entry reached from 0xC2C4B3.
    case 0xC2C4B5: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:55 TXA
    case 0xC2C4B6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:56 JSL FADE_IN
    case 0xC2C4B7: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C41F.asm:57 JSR UNKNOWN_C269DE
    case 0xC2C4BB: cpu.execute_instruction<0x20>(0x0069DE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C41F.asm:58 END_C_FUNCTION
    case 0xC2C4BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C41F.asm:58 END_C_FUNCTION
    case 0xC2C4BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2CFE5.asm (unresolved).
bool execute_unresolved_c2_c2cfe5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2CFE5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2CFE5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFE7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFE8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFE9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2CFEA.
    case 0xC2CFEC: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFEE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:13 TAY
    case 0xC2CFEF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:14 STY @TARGET
    case 0xC2CFF0: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFF2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFF4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFF6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFF8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2CFE5.asm:17 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2CFFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:17 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2CFFC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:17 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2CFFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:17 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2D000: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2CFE5.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D002: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:20 STZ_BADOPT @LOCAL00
    case 0xC2D004: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C2/C2CFE5.asm:21 LDX #.SIZEOF(loaded_bg_data)
    case 0xC2D006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000077, 2); else cpu.execute_instruction<0xA2>(0x000077, 3); return true;
    // src/unknown/C2/C2CFE5.asm:21 LDX #.SIZEOF(loaded_bg_data)
    // Overlapping static entry reached from 0xC2D006.
    case 0xC2D008: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2CFE5.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC2D009: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:23 TYA
    case 0xC2D00B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:24 JSL MEMSET16
    case 0xC2D00C: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C2/C2CFE5.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D010: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:26 LDY #bg_layer_config_entry::bitdepth
    case 0xC2D012: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C2/C2CFE5.asm:26 LDY #bg_layer_config_entry::bitdepth
    // Overlapping static entry reached from 0xC2D012.
    case 0xC2D014: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:27 LDA [@VIRTUAL06],Y
    case 0xC2D015: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:28 LDY @TARGET
    case 0xC2D017: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:29 STA a:loaded_bg_data::bitdepth,Y
    case 0xC2D019: cpu.execute_instruction<0x99>(0x000001, 3); return true;
    // src/unknown/C2/C2CFE5.asm:30 LDY #bg_layer_config_entry::palette_shifting_style
    case 0xC2D01C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2CFE5.asm:30 LDY #bg_layer_config_entry::palette_shifting_style
    // Overlapping static entry reached from 0xC2D01C.
    case 0xC2D01E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:31 LDA [@VIRTUAL06],Y
    case 0xC2D01F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:32 LDY @TARGET
    case 0xC2D021: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:33 STA a:loaded_bg_data::palette_shifting_style,Y
    case 0xC2D023: cpu.execute_instruction<0x99>(0x000003, 3); return true;
    // src/unknown/C2/C2CFE5.asm:34 LDY #bg_layer_config_entry::palette_cycle_1_first
    case 0xC2D026: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:34 LDY #bg_layer_config_entry::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2D026.
    case 0xC2D028: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:35 LDA [@VIRTUAL06],Y
    case 0xC2D029: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:36 LDY @TARGET
    case 0xC2D02B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:37 STA a:loaded_bg_data::palette_cycle_1_first,Y
    case 0xC2D02D: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:38 LDY #bg_layer_config_entry::palette_cycle_1_last
    case 0xC2D030: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2CFE5.asm:38 LDY #bg_layer_config_entry::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2D030.
    case 0xC2D032: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:39 LDA [@VIRTUAL06],Y
    case 0xC2D033: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:40 LDY @TARGET
    case 0xC2D035: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:41 STA a:loaded_bg_data::palette_cycle_1_last,Y
    case 0xC2D037: cpu.execute_instruction<0x99>(0x000005, 3); return true;
    // src/unknown/C2/C2CFE5.asm:42 LDY #bg_layer_config_entry::palette_cycle_2_first
    case 0xC2D03A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C2/C2CFE5.asm:42 LDY #bg_layer_config_entry::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2D03A.
    case 0xC2D03C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:43 LDA [@VIRTUAL06],Y
    case 0xC2D03D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:44 LDY @TARGET
    case 0xC2D03F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:45 STA a:loaded_bg_data::palette_cycle_2_first,Y
    case 0xC2D041: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C2/C2CFE5.asm:46 LDY #bg_layer_config_entry::palette_cycle_2_last
    case 0xC2D044: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C2/C2CFE5.asm:46 LDY #bg_layer_config_entry::palette_cycle_2_last
    // Overlapping static entry reached from 0xC2D044.
    case 0xC2D046: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:47 LDA [@VIRTUAL06],Y
    case 0xC2D047: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:48 LDY @TARGET
    case 0xC2D049: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:49 STA a:loaded_bg_data::palette_cycle_2_last,Y
    case 0xC2D04B: cpu.execute_instruction<0x99>(0x000007, 3); return true;
    // src/unknown/C2/C2CFE5.asm:50 LDY #bg_layer_config_entry::palette_change_speed
    case 0xC2D04E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2CFE5.asm:50 LDY #bg_layer_config_entry::palette_change_speed
    // Overlapping static entry reached from 0xC2D04E.
    case 0xC2D050: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:51 LDA [@VIRTUAL06],Y
    case 0xC2D051: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:52 LDY @TARGET
    case 0xC2D053: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:53 STA a:loaded_bg_data::palette_change_speed,Y
    case 0xC2D055: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C2/C2CFE5.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC2D058: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:55 LDA #bg_layer_config_entry::scrolling_movement_1
    case 0xC2D05A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C2/C2CFE5.asm:55 LDA #bg_layer_config_entry::scrolling_movement_1
    // Overlapping static entry reached from 0xC2D05A.
    case 0xC2D05C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2CFE5.asm:65 CLC
    case 0xC2D05D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:66 ADC @VIRTUAL06
    case 0xC2D05E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:67 STA @VIRTUAL06
    case 0xC2D060: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:68 STA @LOCAL00
    case 0xC2D062: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2CFE5.asm:69 LDA @VIRTUAL06+2
    case 0xC2D064: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2CFE5.asm:70 STA @LOCAL00+2
    case 0xC2D066: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2CFE5.asm:72 LDX #.SIZEOF(loaded_bg_data::scrolling_movements)
    case 0xC2D068: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:72 LDX #.SIZEOF(loaded_bg_data::scrolling_movements)
    // Overlapping static entry reached from 0xC2D068.
    case 0xC2D06A: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C2/C2CFE5.asm:73 TYA
    case 0xC2D06B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:74 CLC
    case 0xC2D06C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:75 ADC #loaded_bg_data::scrolling_movements
    case 0xC2D06D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C2CFE5.asm:75 ADC #loaded_bg_data::scrolling_movements
    // Overlapping static entry reached from 0xC2D06D.
    case 0xC2D06F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2CFE5.asm:76 JSL MEMCPY16
    case 0xC2D070: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2CFE5.asm:77 LDA #bg_layer_config_entry::distortion_style_1
    case 0xC2D074: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C2/C2CFE5.asm:77 LDA #bg_layer_config_entry::distortion_style_1
    // Overlapping static entry reached from 0xC2D074.
    case 0xC2D076: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2CFE5.asm:79 MOVE_INTX @LOCALEB, @VIRTUAL06
    case 0xC2D077: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:79 MOVE_INTX @LOCALEB, @VIRTUAL06
    case 0xC2D079: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:79 MOVE_INTX @LOCALEB, @VIRTUAL06
    case 0xC2D07B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:79 MOVE_INTX @LOCALEB, @VIRTUAL06
    case 0xC2D07D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C2/C2CFE5.asm:81 CLC
    case 0xC2D07F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:82 ADC @VIRTUAL06
    case 0xC2D080: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:83 STA @VIRTUAL06
    case 0xC2D082: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:84 STA @LOCAL00
    case 0xC2D084: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2CFE5.asm:85 LDA @VIRTUAL06+2
    case 0xC2D086: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2CFE5.asm:86 STA @LOCAL00+2
    case 0xC2D088: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2CFE5.asm:87 LDX #.SIZEOF(loaded_bg_data::distortion_styles)
    case 0xC2D08A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:87 LDX #.SIZEOF(loaded_bg_data::distortion_styles)
    // Overlapping static entry reached from 0xC2D08A.
    case 0xC2D08C: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2CFE5.asm:88 LDY @TARGET
    case 0xC2D08D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:89 TYA
    case 0xC2D08F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:90 CLC
    case 0xC2D090: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:91 ADC #loaded_bg_data::distortion_styles
    case 0xC2D091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x000061, 3); return true;
    // src/unknown/C2/C2CFE5.asm:91 ADC #loaded_bg_data::distortion_styles
    // Overlapping static entry reached from 0xC2D091.
    case 0xC2D093: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2CFE5.asm:92 JSL MEMCPY16
    case 0xC2D094: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2CFE5.asm:93 LDA #1
    case 0xC2D098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2CFE5.asm:93 LDA #1
    // Overlapping static entry reached from 0xC2D098.
    case 0xC2D09A: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2CFE5.asm:94 LDY @TARGET
    case 0xC2D09B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C2/C2CFE5.asm:95 STA a:loaded_bg_data::scrolling_duration_left,Y
    case 0xC2D09D: cpu.execute_instruction<0x99>(0x000053, 3); return true;
    // src/unknown/C2/C2CFE5.asm:96 STA a:loaded_bg_data::distortion_duration_left,Y
    case 0xC2D0A0: cpu.execute_instruction<0x99>(0x000066, 3); return true;
    // src/unknown/C2/C2CFE5.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:98 STA a:loaded_bg_data::palette_change_duration_left,Y
    case 0xC2D0A5: cpu.execute_instruction<0x99>(0x00000B, 3); return true;
    // src/unknown/C2/C2CFE5.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:100 PLD
    case 0xC2D0AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:101 RTL
    case 0xC2D0AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2D0AC.asm (unresolved).
bool execute_unresolved_c2_c2d0ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2D0AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D0AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D0AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D0AF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D0B0.
    case 0xC2D0B2: cpu.execute_instruction<0xFF>(0xB8A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D0B3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:7 LDX #.LOWORD(LETTERBOX_HDMA_TABLE)
    case 0xC2D0B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B8, 2); else cpu.execute_instruction<0xA2>(0x00ADB8, 3); return true;
    // src/unknown/C2/C2D0AC.asm:7 LDX #.LOWORD(LETTERBOX_HDMA_TABLE)
    // Overlapping static entry reached from 0xC2D0B4.
    case 0xC2D0B6: cpu.execute_instruction<0xAD>(0x0020E2, 3); return true;
    // src/unknown/C2/C2D0AC.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:9 LDA LETTERBOX_TOP_END
    case 0xC2D0B9: cpu.execute_instruction<0xAD>(0x00ADB2, 3); return true;
    // src/unknown/C2/C2D0AC.asm:10 STA __BSS_START__,X
    case 0xC2D0BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:11 INX
    case 0xC2D0BF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:13 LDA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D0C2: cpu.execute_instruction<0xAD>(0x00ADB0, 3); return true;
    // src/unknown/C2/C2D0AC.asm:14 STA __BSS_START__,X
    case 0xC2D0C5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:15 INX
    case 0xC2D0C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:16 INX
    case 0xC2D0C9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:17 LDA LETTERBOX_BOTTOM_START
    case 0xC2D0CA: cpu.execute_instruction<0xAD>(0x00ADB4, 3); return true;
    // src/unknown/C2/C2D0AC.asm:18 SEC
    case 0xC2D0CD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:19 SBC LETTERBOX_TOP_END
    case 0xC2D0CE: cpu.execute_instruction<0xED>(0x00ADB2, 3); return true;
    // src/unknown/C2/C2D0AC.asm:20 STA @LOCAL00
    case 0xC2D0D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:21 BRA @UNKNOWN1
    case 0xC2D0D3: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C2D0AC.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:24 LDA #$007F
    case 0xC2D0D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009D7F, 3); return true;
    // src/unknown/C2/C2D0AC.asm:25 STA __BSS_START__,X
    case 0xC2D0D9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:25 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D0D7.
    case 0xC2D0DA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:26 INX
    case 0xC2D0DC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:28 LDA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D0DF: cpu.execute_instruction<0xAD>(0x00ADAE, 3); return true;
    // src/unknown/C2/C2D0AC.asm:29 STA __BSS_START__,X
    case 0xC2D0E2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:30 INX
    case 0xC2D0E5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:31 INX
    case 0xC2D0E6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:32 LDA @LOCAL00
    case 0xC2D0E7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:33 SEC
    case 0xC2D0E9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:34 SBC #$007F
    case 0xC2D0EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00007F, 3); return true;
    // src/unknown/C2/C2D0AC.asm:34 SBC #$007F
    // Overlapping static entry reached from 0xC2D0EA.
    case 0xC2D0EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2D0AC.asm:35 STA @LOCAL00
    case 0xC2D0ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:37 CMP #$0080
    case 0xC2D0EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C2/C2D0AC.asm:37 CMP #$0080
    // Overlapping static entry reached from 0xC2D0EF.
    case 0xC2D0F1: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C2/C2D0AC.asm:38 BCS @UNKNOWN0
    case 0xC2D0F2: cpu.execute_instruction<0xB0>(0x0000E1, 2); return true;
    // src/unknown/C2/C2D0AC.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:40 STA __BSS_START__,X
    case 0xC2D0F6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:41 INX
    case 0xC2D0F9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:43 LDA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D0FC: cpu.execute_instruction<0xAD>(0x00ADAE, 3); return true;
    // src/unknown/C2/C2D0AC.asm:44 STA __BSS_START__,X
    case 0xC2D0FF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:45 INX
    case 0xC2D102: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:46 INX
    case 0xC2D103: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D104: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:48 LDA #1
    case 0xC2D106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C2/C2D0AC.asm:49 STA __BSS_START__,X
    case 0xC2D108: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D106.
    case 0xC2D109: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:50 INX
    case 0xC2D10B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2D10C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:52 LDA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D10E: cpu.execute_instruction<0xAD>(0x00ADB0, 3); return true;
    // src/unknown/C2/C2D0AC.asm:53 STA __BSS_START__,X
    case 0xC2D111: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:54 INX
    case 0xC2D114: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:55 INX
    case 0xC2D115: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D116: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:57 LDA #0
    case 0xC2D118: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C2D0AC.asm:58 STA __BSS_START__,X
    case 0xC2D11A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:58 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D118.
    case 0xC2D11B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC2D11D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2D0AC.asm:60 END_C_FUNCTION
    case 0xC2D11F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2D0AC.asm:60 END_C_FUNCTION
    case 0xC2D120: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DAE3.asm (unresolved).
bool execute_unresolved_c2_c2dae3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DAE3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DAE3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DAE5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DAE6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DAE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DAE7.
    case 0xC2DAE9: cpu.execute_instruction<0xFF>(0x35A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DAEA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DAE3.asm:7 LDX #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles
    case 0xC2DAEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000035, 2); else cpu.execute_instruction<0xA2>(0x00AE35, 3); return true;
    // src/unknown/C2/C2DAE3.asm:7 LDX #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles
    // Overlapping static entry reached from 0xC2DAEB.
    case 0xC2DAED: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C2/C2DAE3.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DAEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:9 LDA __BSS_START__,X
    case 0xC2DAF0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:10 STA @LOCAL00
    case 0xC2DAF3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2DAE3.asm:11 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles + 3
    case 0xC2DAF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000038, 2); else cpu.execute_instruction<0xA0>(0x00AE38, 3); return true;
    // src/unknown/C2/C2DAE3.asm:11 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles + 3
    // Overlapping static entry reached from 0xC2DAF5.
    case 0xC2DAF7: cpu.execute_instruction<0xAE>(0x0000B9, 3); return true;
    // src/unknown/C2/C2DAE3.asm:12 LDA __BSS_START__,Y
    case 0xC2DAF8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:12 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DAF7.
    case 0xC2DAFA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C2/C2DAE3.asm:13 STA __BSS_START__,X
    case 0xC2DAFB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:14 STZ LOADED_BG_DATA_LAYER1 + loaded_bg_data::distortion_styles + 1
    case 0xC2DAFE: cpu.execute_instruction<0x9C>(0x00AE36, 3); return true;
    // src/unknown/C2/C2DAE3.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2DB01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:16 LDA #1
    case 0xC2DB03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2DAE3.asm:16 LDA #1
    // Overlapping static entry reached from 0xC2DB03.
    case 0xC2DB05: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DAE3.asm:17 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::distortion_duration_left
    case 0xC2DB06: cpu.execute_instruction<0x8D>(0x00AE3A, 3); return true;
    // src/unknown/C2/C2DAE3.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DB09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:19 LDA @LOCAL00
    case 0xC2DB0B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2DAE3.asm:20 STA __BSS_START__,Y
    case 0xC2DB0D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC2DB10: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DAE3.asm:22 END_C_FUNCTION
    case 0xC2DB12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DAE3.asm:22 END_C_FUNCTION
    case 0xC2DB13: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DB14.asm (unresolved).
bool execute_unresolved_c2_c2db14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DB14.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DB14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DB16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DB17: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DB18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DB18.
    case 0xC2DB1A: cpu.execute_instruction<0xFF>(0x20AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DB1B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DB14.asm:7 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DB1C: cpu.execute_instruction<0xAD>(0x00AE20, 3); return true;
    // src/unknown/C2/C2DB14.asm:7 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DB1A.
    case 0xC2DB1E: cpu.execute_instruction<0xAE>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB21: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB25: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DB27: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DB14.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC2DB29: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DB2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DB2D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DB2F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DB31: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DB14.asm:11 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DB33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DB14.asm:11 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DB33.
    case 0xC2DB35: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB14.asm:12 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2DB36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00ADE0, 3); return true;
    // src/unknown/C2/C2DB14.asm:12 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DB36.
    case 0xC2DB38: cpu.execute_instruction<0xAD>(0x00D222, 3); return true;
    // src/unknown/C2/C2DB14.asm:13 JSL MEMCPY16
    case 0xC2DB39: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2DB14.asm:13 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DB38.
    case 0xC2DB3B: cpu.execute_instruction<0x8E>(0x002BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DB14.asm:14 END_C_FUNCTION
    case 0xC2DB3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DB14.asm:14 END_C_FUNCTION
    case 0xC2DB3E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DB3F.asm (unresolved).
bool execute_unresolved_c2_c2db3f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DB3F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DB3F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DB41: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DB42: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DB43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DB43.
    case 0xC2DB45: cpu.execute_instruction<0xFF>(0xD0AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DB46: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:6 LDA ENABLE_BACKGROUND_DARKENING
    case 0xC2DB47: cpu.execute_instruction<0xAD>(0x00ADD0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:6 LDA ENABLE_BACKGROUND_DARKENING
    // Overlapping static entry reached from 0xC2DB45.
    case 0xC2DB49: cpu.execute_instruction<0xAD>(0x0040F0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:7 BEQ @UNKNOWN3
    case 0xC2DB4A: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C2/C2DB3F.asm:8 LDA BACKGROUND_BRIGHTNESS
    case 0xC2DB4C: cpu.execute_instruction<0xAD>(0x00ADD2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:9 SEC
    case 0xC2DB4F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:10 SBC #$0555
    case 0xC2DB50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000055, 2); else cpu.execute_instruction<0xE9>(0x000555, 3); return true;
    // src/unknown/C2/C2DB3F.asm:10 SBC #$0555
    // Overlapping static entry reached from 0xC2DB50.
    case 0xC2DB52: cpu.execute_instruction<0x05>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:11 STA BACKGROUND_BRIGHTNESS
    case 0xC2DB53: cpu.execute_instruction<0x8D>(0x00ADD2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:11 STA BACKGROUND_BRIGHTNESS
    // Overlapping static entry reached from 0xC2DB52.
    case 0xC2DB54: cpu.execute_instruction<0xD2>(0x0000AD, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:12 STORE_INT1632 @VIRTUAL0A
    case 0xC2DB56: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C2/C2DB3F.asm:12 STORE_INT1632 @VIRTUAL0A
    case 0xC2DB58: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DB5A.
    case 0xC2DB5C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DB5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DB5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DB5F.
    case 0xC2DB61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DB62: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:14 CLC
    case 0xC2DB64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:754 LDA src
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DB65: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:755 SBC dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DB67: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:756 LDA src + 2
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DB69: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:757 SBC dest + 2
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DB6B: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DB6D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DB6F: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DB71: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DB73: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:17 LDA #$6000
    case 0xC2DB75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:17 LDA #$6000
    // Overlapping static entry reached from 0xC2DB75.
    case 0xC2DB77: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:18 STA BACKGROUND_BRIGHTNESS
    case 0xC2DB78: cpu.execute_instruction<0x8D>(0x00ADD2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:19 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2DB7B: cpu.execute_instruction<0x9C>(0x00ADD0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:21 SEP #PROC_FLAGS::INDEX8
    case 0xC2DB7E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:22 LDY #$0008
    case 0xC2DB80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:23 LDA BACKGROUND_BRIGHTNESS
    case 0xC2DB82: cpu.execute_instruction<0xAD>(0x00ADD2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:23 LDA BACKGROUND_BRIGHTNESS
    // Overlapping static entry reached from 0xC2DB80.
    case 0xC2DB83: cpu.execute_instruction<0xD2>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:24 JSL ASR8_UNKNOWN1
    case 0xC2DB85: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2DB3F.asm:25 JSR UNKNOWN_C2E08E
    case 0xC2DB89: cpu.execute_instruction<0x20>(0x00E08E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:27 LDA REFLECT_FLASH_DURATION
    case 0xC2DB8C: cpu.execute_instruction<0xAD>(0x00ADA8, 3); return true;
    // src/unknown/C2/C2DB3F.asm:28 BEQ @UNKNOWN5
    case 0xC2DB8F: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DB3F.asm:29 LDA REFLECT_FLASH_DURATION
    case 0xC2DB91: cpu.execute_instruction<0xAD>(0x00ADA8, 3); return true;
    // src/unknown/C2/C2DB3F.asm:30 DEC
    case 0xC2DB94: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:31 STA REFLECT_FLASH_DURATION
    case 0xC2DB95: cpu.execute_instruction<0x8D>(0x00ADA8, 3); return true;
    // src/unknown/C2/C2DB3F.asm:32 AND #$0002
    case 0xC2DB98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:32 AND #$0002
    // Overlapping static entry reached from 0xC2DB98.
    case 0xC2DB9A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:33 BEQ @UNKNOWN4
    case 0xC2DB9B: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:34 LDA #$FFFF
    case 0xC2DB9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:34 LDA #$FFFF
    // Overlapping static entry reached from 0xC2DB9D.
    case 0xC2DB9F: cpu.execute_instruction<0xFF>(0xE08E20, 4); return true;
    // src/unknown/C2/C2DB3F.asm:35 JSR UNKNOWN_C2E08E
    case 0xC2DBA0: cpu.execute_instruction<0x20>(0x00E08E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:36 BRA @UNKNOWN5
    case 0xC2DBA3: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:38 LDA #$0100
    case 0xC2DBA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:38 LDA #$0100
    // Overlapping static entry reached from 0xC2DBA5.
    case 0xC2DBA7: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:39 JSR UNKNOWN_C2E08E
    case 0xC2DBA8: cpu.execute_instruction<0x20>(0x00E08E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:39 JSR UNKNOWN_C2E08E
    // Overlapping static entry reached from 0xC2DBA7.
    case 0xC2DBA9: cpu.execute_instruction<0x8E>(0x00ADE0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:41 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DBAB: cpu.execute_instruction<0xAD>(0x00ADAA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:41 LDA GREEN_BACKGROUND_FLASH_DURATION
    // Overlapping static entry reached from 0xC2DBA9.
    case 0xC2DBAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:41 LDA GREEN_BACKGROUND_FLASH_DURATION
    // Overlapping static entry reached from 0xC2DBAC.
    case 0xC2DBAD: cpu.execute_instruction<0xAD>(0x0039F0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:42 BEQ @UNKNOWN10
    case 0xC2DBAE: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C2/C2DB3F.asm:43 STZ PALETTES
    case 0xC2DBB0: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/unknown/C2/C2DB3F.asm:44 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DBB3: cpu.execute_instruction<0xAD>(0x00ADAA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:45 CMP #3
    case 0xC2DBB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:45 CMP #3
    // Overlapping static entry reached from 0xC2DBB6.
    case 0xC2DBB8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:46 BEQ @UNKNOWN6
    case 0xC2DBB9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2DB3F.asm:47 CMP #2
    case 0xC2DBBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:47 CMP #2
    // Overlapping static entry reached from 0xC2DBBB.
    case 0xC2DBBD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:48 BEQ @UNKNOWN7
    case 0xC2DBBE: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:49 BRA @UNKNOWN8
    case 0xC2DBC0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:51 LDA #$03E0
    case 0xC2DBC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:51 LDA #$03E0
    // Overlapping static entry reached from 0xC2DBC2.
    case 0xC2DBC4: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:52 STA PALETTES
    case 0xC2DBC5: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C2/C2DB3F.asm:52 STA PALETTES
    // Overlapping static entry reached from 0xC2DBC4.
    case 0xC2DBC6: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C2/C2DB3F.asm:54 LDA #$0018
    case 0xC2DBC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2DB3F.asm:54 LDA #$0018
    // Overlapping static entry reached from 0xC2DBC8.
    case 0xC2DBCA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:55 JSL UNKNOWN_C0856B
    case 0xC2DBCB: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:57 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DBCF: cpu.execute_instruction<0xAD>(0x00ADAA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:58 DEC
    case 0xC2DBD2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:59 STA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DBD3: cpu.execute_instruction<0x8D>(0x00ADAA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:60 AND #$0002
    case 0xC2DBD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:60 AND #$0002
    // Overlapping static entry reached from 0xC2DBD6.
    case 0xC2DBD8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:61 BEQ @UNKNOWN9
    case 0xC2DBD9: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:62 LDA #0
    case 0xC2DBDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:62 LDA #0
    // Overlapping static entry reached from 0xC2DBDB.
    case 0xC2DBDD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:63 JSR UNKNOWN_C2E08E
    case 0xC2DBDE: cpu.execute_instruction<0x20>(0x00E08E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:64 BRA @UNKNOWN10
    case 0xC2DBE1: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:66 LDA #$0100
    case 0xC2DBE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:66 LDA #$0100
    // Overlapping static entry reached from 0xC2DBE3.
    case 0xC2DBE5: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:67 JSR UNKNOWN_C2E08E
    case 0xC2DBE6: cpu.execute_instruction<0x20>(0x00E08E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:67 JSR UNKNOWN_C2E08E
    // Overlapping static entry reached from 0xC2DBE5.
    case 0xC2DBE7: cpu.execute_instruction<0x8E>(0x00ADE0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:69 LDA VERTICAL_SHAKE_DURATION
    case 0xC2DBE9: cpu.execute_instruction<0xAD>(0x00AD8C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:69 LDA VERTICAL_SHAKE_DURATION
    // Overlapping static entry reached from 0xC2DBE7.
    case 0xC2DBEA: cpu.execute_instruction<0x8C>(0x00D0AD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:70 BNE @UNKNOWN11
    case 0xC2DBEC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2DB3F.asm:70 BNE @UNKNOWN11
    // Overlapping static entry reached from 0xC2DBEA.
    case 0xC2DBED: cpu.execute_instruction<0x05>(0x00009C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:71 STZ SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DBEE: cpu.execute_instruction<0x9C>(0x00AD98, 3); return true;
    // src/unknown/C2/C2DB3F.asm:71 STZ SCREEN_EFFECT_VERTICAL_OFFSET
    // Overlapping static entry reached from 0xC2DBED.
    case 0xC2DBEF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:71 STZ SCREEN_EFFECT_VERTICAL_OFFSET
    // Overlapping static entry reached from 0xC2DBEF.
    case 0xC2DBF0: cpu.execute_instruction<0xAD>(0x003480, 3); return true;
    // src/unknown/C2/C2DB3F.asm:72 BRA @UNKNOWN12
    case 0xC2DBF1: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C2DB3F.asm:74 LDA #1*SECOND
    case 0xC2DBF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:74 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2DBF3.
    case 0xC2DBF5: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2DB3F.asm:75 SEC
    case 0xC2DBF6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:76 SBC VERTICAL_SHAKE_DURATION
    case 0xC2DBF7: cpu.execute_instruction<0xED>(0x00AD8C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:77 TAX
    case 0xC2DBFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DBFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:79 LDA f:UNKNOWN_C4A591,X
    case 0xC2DBFD: cpu.execute_instruction<0xBF>(0xC4A591, 4); return true;
    // src/unknown/C2/C2DB3F.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC2DC01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:81 SEC
    case 0xC2DC03: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:82 AND #$00FF
    case 0xC2DC04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC2DC04.
    case 0xC2DC06: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:83 SBC #$0080
    case 0xC2DC07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C2DB3F.asm:83 SBC #$0080
    // Overlapping static entry reached from 0xC2DC07.
    case 0xC2DC09: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C2DB3F.asm:84 EOR #$FF80
    case 0xC2DC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C2DB3F.asm:84 EOR #$FF80
    // Overlapping static entry reached from 0xC2DC0A.
    case 0xC2DC0C: cpu.execute_instruction<0xFF>(0xAD988D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:85 STA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DC0D: cpu.execute_instruction<0x8D>(0x00AD98, 3); return true;
    // src/unknown/C2/C2DB3F.asm:86 LDX VERTICAL_SHAKE_DURATION
    case 0xC2DC10: cpu.execute_instruction<0xAE>(0x00AD8C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:87 DEX
    case 0xC2DC13: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:88 STX VERTICAL_SHAKE_DURATION
    case 0xC2DC14: cpu.execute_instruction<0x8E>(0x00AD8C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:89 BNE @UNKNOWN12
    case 0xC2DC17: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:90 LDA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2DC19: cpu.execute_instruction<0xAD>(0x00AD8E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:91 BEQ @UNKNOWN12
    case 0xC2DC1C: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:92 DEC VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2DC1E: cpu.execute_instruction<0xCE>(0x00AD8E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:93 LDA #1*SIXTH_OF_A_SECOND
    case 0xC2DC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C2/C2DB3F.asm:93 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC2DC21.
    case 0xC2DC23: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:94 STA VERTICAL_SHAKE_DURATION
    case 0xC2DC24: cpu.execute_instruction<0x8D>(0x00AD8C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:97 STZ SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC27: cpu.execute_instruction<0x9C>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:98 LDA WOBBLE_DURATION
    case 0xC2DC2A: cpu.execute_instruction<0xAD>(0x00AD92, 3); return true;
    // src/unknown/C2/C2DB3F.asm:99 BEQ @UNKNOWN13
    case 0xC2DC2D: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C2/C2DB3F.asm:100 LDY #6*FIFTHS_OF_A_SECOND
    case 0xC2DC2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/unknown/C2/C2DB3F.asm:100 LDY #6*FIFTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2DC2F.
    case 0xC2DC31: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:101 LDA WOBBLE_DURATION
    case 0xC2DC32: cpu.execute_instruction<0xAD>(0x00AD92, 3); return true;
    // src/unknown/C2/C2DB3F.asm:102 JSL MODULUS16
    case 0xC2DC35: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C2/C2DB3F.asm:103 DEC WOBBLE_DURATION
    case 0xC2DC39: cpu.execute_instruction<0xCE>(0x00AD92, 3); return true;
    // src/unknown/C2/C2DB3F.asm:104 LDY #72
    case 0xC2DC3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/unknown/C2/C2DB3F.asm:104 LDY #72
    // Overlapping static entry reached from 0xC2DC3C.
    case 0xC2DC3E: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:105 XBA
    case 0xC2DC3F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:106 AND #$FF00
    case 0xC2DC40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C2/C2DB3F.asm:106 AND #$FF00
    // Overlapping static entry reached from 0xC2DC40.
    case 0xC2DC42: cpu.execute_instruction<0xFF>(0x915B22, 4); return true;
    // src/unknown/C2/C2DB3F.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DC43: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC2DC42.
    case 0xC2DC46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AA, 2); else cpu.execute_instruction<0xC0>(0x00A0AA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:109 TAX
    case 0xC2DC47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    case 0xC2DC48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    // Overlapping static entry reached from 0xC2DC46.
    case 0xC2DC49: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    // Overlapping static entry reached from 0xC2DC48.
    case 0xC2DC4A: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DC4B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:111 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2DC4A.
    case 0xC2DC4C: cpu.execute_instruction<0x20>(0x0025BF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:112 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC2DC4D: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/unknown/C2/C2DB3F.asm:112 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC2DC4C.
    case 0xC2DC4F: cpu.execute_instruction<0xB4>(0x0000C0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC2DC51: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:114 SEC
    case 0xC2DC53: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:115 AND #$00FF
    case 0xC2DC54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2DC54.
    case 0xC2DC56: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:116 SBC #$0080
    case 0xC2DC57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C2DB3F.asm:116 SBC #$0080
    // Overlapping static entry reached from 0xC2DC57.
    case 0xC2DC59: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C2DB3F.asm:117 EOR #$FF80
    case 0xC2DC5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C2DB3F.asm:117 EOR #$FF80
    // Overlapping static entry reached from 0xC2DC5A.
    case 0xC2DC5C: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:118 ASL
    case 0xC2DC5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:119 ASL
    case 0xC2DC5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:120 ASL
    case 0xC2DC5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:121 ASL
    case 0xC2DC60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:122 ASL
    case 0xC2DC61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:123 ASL
    case 0xC2DC62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:124 JSL DIVISION16
    case 0xC2DC63: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/unknown/C2/C2DB3F.asm:125 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC67: cpu.execute_instruction<0x8D>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:127 LDA SHAKE_DURATION
    case 0xC2DC6A: cpu.execute_instruction<0xAD>(0x00AD94, 3); return true;
    // src/unknown/C2/C2DB3F.asm:128 BEQ @UNKNOWN17
    case 0xC2DC6D: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C2/C2DB3F.asm:129 LDA SHAKE_DURATION
    case 0xC2DC6F: cpu.execute_instruction<0xAD>(0x00AD94, 3); return true;
    // src/unknown/C2/C2DB3F.asm:130 AND #$0003
    case 0xC2DC72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:130 AND #$0003
    // Overlapping static entry reached from 0xC2DC72.
    case 0xC2DC74: cpu.execute_instruction<0x00>(0x0000CE, 2); return true;
    // src/unknown/C2/C2DB3F.asm:131 DEC SHAKE_DURATION
    case 0xC2DC75: cpu.execute_instruction<0xCE>(0x00AD94, 3); return true;
    // src/unknown/C2/C2DB3F.asm:132 CMP #0
    case 0xC2DC78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2DC78.
    case 0xC2DC7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:133 BEQ @UNKNOWN14
    case 0xC2DC7B: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C2/C2DB3F.asm:134 CMP #2
    case 0xC2DC7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:134 CMP #2
    // Overlapping static entry reached from 0xC2DC7D.
    case 0xC2DC7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:135 BEQ @UNKNOWN14
    case 0xC2DC80: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:136 CMP #1
    case 0xC2DC82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:136 CMP #1
    // Overlapping static entry reached from 0xC2DC82.
    case 0xC2DC84: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:137 BEQ @UNKNOWN15
    case 0xC2DC85: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:138 CMP #3
    case 0xC2DC87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2DC87.
    case 0xC2DC89: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:139 BEQ @UNKNOWN16
    case 0xC2DC8A: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C2/C2DB3F.asm:140 BRA @UNKNOWN17
    case 0xC2DC8C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C2DB3F.asm:142 STZ SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC8E: cpu.execute_instruction<0x9C>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:143 BRA @UNKNOWN17
    case 0xC2DC91: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:145 LDA #2
    case 0xC2DC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:145 LDA #2
    // Overlapping static entry reached from 0xC2DC93.
    case 0xC2DC95: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:146 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC96: cpu.execute_instruction<0x8D>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:147 BRA @UNKNOWN17
    case 0xC2DC99: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:149 LDA #$FFFE
    case 0xC2DC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:149 LDA #$FFFE
    // Overlapping static entry reached from 0xC2DC9B.
    case 0xC2DC9D: cpu.execute_instruction<0xFF>(0xAD968D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:150 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC9E: cpu.execute_instruction<0x8D>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:152 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2DCA1: cpu.execute_instruction<0xAD>(0x00ADD5, 3); return true;
    // src/unknown/C2/C2DB3F.asm:153 AND #$00FF
    case 0xC2DCA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC2DCA4.
    case 0xC2DCA6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:154 CMP #2
    case 0xC2DCA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:154 CMP #2
    // Overlapping static entry reached from 0xC2DCA7.
    case 0xC2DCA9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:155 BNE @UNKNOWN18
    case 0xC2DCAA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:156 LDA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DCAC: cpu.execute_instruction<0xAD>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:157 STA BG1_X_POS
    case 0xC2DCAF: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/unknown/C2/C2DB3F.asm:158 LDA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DCB2: cpu.execute_instruction<0xAD>(0x00AD98, 3); return true;
    // src/unknown/C2/C2DB3F.asm:159 STA BG1_Y_POS
    case 0xC2DCB5: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C2/C2DB3F.asm:160 BRA @UNKNOWN19
    case 0xC2DCB8: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C2DB3F.asm:162 LDA BATTLE_MODE_FLAG
    case 0xC2DCBA: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/unknown/C2/C2DB3F.asm:163 BEQ @UNKNOWN19
    case 0xC2DCBD: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:164 LDA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DCBF: cpu.execute_instruction<0xAD>(0x00AD96, 3); return true;
    // src/unknown/C2/C2DB3F.asm:165 STA BG3_X_POS
    case 0xC2DCC2: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/unknown/C2/C2DB3F.asm:166 LDA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DCC5: cpu.execute_instruction<0xAD>(0x00AD98, 3); return true;
    // src/unknown/C2/C2DB3F.asm:167 STA BG3_Y_POS
    case 0xC2DCC8: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:169 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2DCCB: cpu.execute_instruction<0xAD>(0x00AD90, 3); return true;
    // src/unknown/C2/C2DB3F.asm:170 BEQ @UNKNOWN20
    case 0xC2DCCE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C2/C2DB3F.asm:171 DEC SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2DCD0: cpu.execute_instruction<0xCE>(0x00AD90, 3); return true;
    // src/unknown/C2/C2DB3F.asm:173 LDA BATTLE_MODE_FLAG
    case 0xC2DCD3: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/unknown/C2/C2DB3F.asm:174 BEQ @UNKNOWN21
    case 0xC2DCD6: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2DB3F.asm:175 JSL UNKNOWN_C2F8F9
    case 0xC2DCD8: cpu.execute_instruction<0x22>(0xC2F8F9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:177 LDX #0
    case 0xC2DCDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:177 LDX #0
    // Overlapping static entry reached from 0xC2DCDC.
    case 0xC2DCDE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:178 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2DCDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:178 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2DCDF.
    case 0xC2DCE1: cpu.execute_instruction<0xAD>(0x002D22, 3); return true;
    // src/unknown/C2/C2DB3F.asm:179 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2DCE2: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:179 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2DCE1.
    case 0xC2DCE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x00A0C2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2DCE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004B, 2); else cpu.execute_instruction<0xA0>(0x00AE4B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2DCE4.
    case 0xC2DCE7: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2DCE6.
    case 0xC2DCE8: cpu.execute_instruction<0xAE>(0x0000B9, 3); return true;
    // src/unknown/C2/C2DB3F.asm:181 LDA __BSS_START__,Y
    case 0xC2DCE9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:181 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DCE8.
    case 0xC2DCEB: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2DB3F.asm:182 AND #$00FF
    case 0xC2DCEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC2DCEC.
    case 0xC2DCEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:183 BEQ @UNKNOWN22
    case 0xC2DCEF: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:184 LDX #1
    case 0xC2DCF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:184 LDX #1
    // Overlapping static entry reached from 0xC2DCF1.
    case 0xC2DCF3: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C2/C2DB3F.asm:185 TYA
    case 0xC2DCF4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:186 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2DCF5: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:188 JSL UNKNOWN_C2E6B6
    case 0xC2DCF9: cpu.execute_instruction<0x22>(0xC2E6B6, 4); return true;
    // src/unknown/C2/C2DB3F.asm:189 LDA RED_FLASH_DURATION
    case 0xC2DCFD: cpu.execute_instruction<0xAD>(0x00ADA0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:190 BEQ @UNKNOWN24
    case 0xC2DD00: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:191 LDA RED_FLASH_DURATION
    case 0xC2DD02: cpu.execute_instruction<0xAD>(0x00ADA0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:192 DEC
    case 0xC2DD05: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:193 STA RED_FLASH_DURATION
    case 0xC2DD06: cpu.execute_instruction<0x8D>(0x00ADA0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:194 LDY #12
    case 0xC2DD09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:194 LDY #12
    // Overlapping static entry reached from 0xC2DD09.
    case 0xC2DD0B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:195 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DD0C: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:196 AND #$0001
    case 0xC2DD10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:196 AND #$0001
    // Overlapping static entry reached from 0xC2DD10.
    case 0xC2DD12: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:197 BEQ @UNKNOWN23
    case 0xC2DD13: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2DB3F.asm:198 LDY #4
    case 0xC2DD15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DB3F.asm:198 LDY #4
    // Overlapping static entry reached from 0xC2DD15.
    case 0xC2DD17: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:199 LDX #0
    case 0xC2DD18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:199 LDX #0
    // Overlapping static entry reached from 0xC2DD18.
    case 0xC2DD1A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:200 LDA #31
    case 0xC2DD1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:200 LDA #31
    // Overlapping static entry reached from 0xC2DD1B.
    case 0xC2DD1D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:201 JSL SET_COLDATA
    case 0xC2DD1E: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:202 LDX #$003F
    case 0xC2DD22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:202 LDX #$003F
    // Overlapping static entry reached from 0xC2DD22.
    case 0xC2DD24: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:203 LDA #0
    case 0xC2DD25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:203 LDA #0
    // Overlapping static entry reached from 0xC2DD25.
    case 0xC2DD27: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:204 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2DD28: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/unknown/C2/C2DB3F.asm:205 BRA @UNKNOWN24
    case 0xC2DD2C: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:207 LDY #0
    case 0xC2DD2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:207 LDY #0
    // Overlapping static entry reached from 0xC2DD2E.
    case 0xC2DD30: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:208 TYX
    case 0xC2DD31: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:209 TYA
    case 0xC2DD32: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:210 JSL SET_COLDATA
    case 0xC2DD33: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:211 LDA CURRENT_LAYER_CONFIG
    case 0xC2DD37: cpu.execute_instruction<0xAD>(0x00AD8A, 3); return true;
    // src/unknown/C2/C2DB3F.asm:212 JSL UNKNOWN_C0AFCD
    case 0xC2DD3A: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/unknown/C2/C2DB3F.asm:214 LDA GREEN_FLASH_DURATION
    case 0xC2DD3E: cpu.execute_instruction<0xAD>(0x00AD9E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:215 BEQ @UNKNOWN26
    case 0xC2DD41: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:216 LDA GREEN_FLASH_DURATION
    case 0xC2DD43: cpu.execute_instruction<0xAD>(0x00AD9E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:217 DEC
    case 0xC2DD46: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:218 STA GREEN_FLASH_DURATION
    case 0xC2DD47: cpu.execute_instruction<0x8D>(0x00AD9E, 3); return true;
    // src/unknown/C2/C2DB3F.asm:219 LDY #12
    case 0xC2DD4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:219 LDY #12
    // Overlapping static entry reached from 0xC2DD4A.
    case 0xC2DD4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:220 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DD4D: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:221 AND #$0001
    case 0xC2DD51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:221 AND #$0001
    // Overlapping static entry reached from 0xC2DD51.
    case 0xC2DD53: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:222 BEQ @UNKNOWN25
    case 0xC2DD54: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2DB3F.asm:223 LDY #4
    case 0xC2DD56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DB3F.asm:223 LDY #4
    // Overlapping static entry reached from 0xC2DD56.
    case 0xC2DD58: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:224 LDX #31
    case 0xC2DD59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:224 LDX #31
    // Overlapping static entry reached from 0xC2DD59.
    case 0xC2DD5B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:225 LDA #0
    case 0xC2DD5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:225 LDA #0
    // Overlapping static entry reached from 0xC2DD5C.
    case 0xC2DD5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:226 JSL SET_COLDATA
    case 0xC2DD5F: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:227 LDX #$003F
    case 0xC2DD63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:227 LDX #$003F
    // Overlapping static entry reached from 0xC2DD63.
    case 0xC2DD65: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:228 LDA #0
    case 0xC2DD66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:228 LDA #0
    // Overlapping static entry reached from 0xC2DD66.
    case 0xC2DD68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:229 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2DD69: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/unknown/C2/C2DB3F.asm:230 BRA @UNKNOWN26
    case 0xC2DD6D: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:232 LDY #0
    case 0xC2DD6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:232 LDY #0
    // Overlapping static entry reached from 0xC2DD6F.
    case 0xC2DD71: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:233 TYX
    case 0xC2DD72: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:234 TYA
    case 0xC2DD73: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:235 JSL SET_COLDATA
    case 0xC2DD74: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:236 LDA CURRENT_LAYER_CONFIG
    case 0xC2DD78: cpu.execute_instruction<0xAD>(0x00AD8A, 3); return true;
    // src/unknown/C2/C2DB3F.asm:237 JSL UNKNOWN_C0AFCD
    case 0xC2DD7B: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/unknown/C2/C2DB3F.asm:239 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2DD7F: cpu.execute_instruction<0xAD>(0x00ADA4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:240 BEQ @UNKNOWN28
    case 0xC2DD82: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C2/C2DB3F.asm:241 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2DD84: cpu.execute_instruction<0xAD>(0x00ADA4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:241 LDA HP_PP_BOX_BLINK_DURATION
    // Overlapping static entry reached from 0xC2DDE4.
    case 0xC2DD86: cpu.execute_instruction<0xAD>(0x008D3A, 3); return true;
    // src/unknown/C2/C2DB3F.asm:242 DEC
    case 0xC2DD87: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:243 STA HP_PP_BOX_BLINK_DURATION
    case 0xC2DD88: cpu.execute_instruction<0x8D>(0x00ADA4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:243 STA HP_PP_BOX_BLINK_DURATION
    // Overlapping static entry reached from 0xC2DD86.
    case 0xC2DD89: cpu.execute_instruction<0xA4>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:244 LDY #3
    case 0xC2DD8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:244 LDY #3
    // Overlapping static entry reached from 0xC2DD8B.
    case 0xC2DD8D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:245 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DD8E: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:246 AND #$0001
    case 0xC2DD92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:246 AND #$0001
    // Overlapping static entry reached from 0xC2DD92.
    case 0xC2DD94: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:247 BEQ @UNKNOWN27
    case 0xC2DD95: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:248 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2DD97: cpu.execute_instruction<0xAD>(0x00ADA6, 3); return true;
    // src/unknown/C2/C2DB3F.asm:249 JSL UNDRAW_HP_PP_WINDOW
    case 0xC2DD9A: cpu.execute_instruction<0x22>(0xC207E1, 4); return true;
    // src/unknown/C2/C2DB3F.asm:250 BRA @UNKNOWN28
    case 0xC2DD9E: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C2/C2DB3F.asm:252 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2DDA0: cpu.execute_instruction<0xAD>(0x00ADA6, 3); return true;
    // src/unknown/C2/C2DB3F.asm:253 JSL UNKNOWN_C207B6
    case 0xC2DDA3: cpu.execute_instruction<0x22>(0xC207B6, 4); return true;
    // src/unknown/C2/C2DB3F.asm:255 JSL UNKNOWN_C4A7B0
    case 0xC2DDA7: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/unknown/C2/C2DB3F.asm:256 JSL UNKNOWN_C2FD99
    case 0xC2DDAB: cpu.execute_instruction<0x22>(0xC2FD99, 4); return true;
    // src/unknown/C2/C2DB3F.asm:257 LDA LETTERBOX_EFFECT_ENDING
    case 0xC2DDAF: cpu.execute_instruction<0xAD>(0x00ADB6, 3); return true;
    // src/unknown/C2/C2DB3F.asm:258 BEQ @UNKNOWN33
    case 0xC2DDB2: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C2/C2DB3F.asm:259 LDA LETTERBOX_TOP_END
    case 0xC2DDB4: cpu.execute_instruction<0xAD>(0x00ADB2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:260 BEQ @UNKNOWN33
    case 0xC2DDB7: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/C2/C2DB3F.asm:261 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DDB9: cpu.execute_instruction<0xAD>(0x00ADCC, 3); return true;
    // src/unknown/C2/C2DB3F.asm:262 CMP #$03BB
    case 0xC2DDBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000BB, 2); else cpu.execute_instruction<0xC9>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:262 CMP #$03BB
    // Overlapping static entry reached from 0xC2DDBC.
    case 0xC2DDBE: cpu.execute_instruction<0x03>(0x0000B0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:263 BCS @UNKNOWN29
    case 0xC2DDBF: cpu.execute_instruction<0xB0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:263 BCS @UNKNOWN29
    // Overlapping static entry reached from 0xC2DDBE.
    case 0xC2DDC0: cpu.execute_instruction<0x0E>(0x00CC9C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:264 STZ LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DDC1: cpu.execute_instruction<0x9C>(0x00ADCC, 3); return true;
    // src/unknown/C2/C2DB3F.asm:264 STZ LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DDC0.
    case 0xC2DDC3: cpu.execute_instruction<0xAD>(0x00E0A9, 3); return true;
    // src/unknown/C2/C2DB3F.asm:265 LDA #224
    case 0xC2DDC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:265 LDA #224
    // Overlapping static entry reached from 0xC2DDC4.
    case 0xC2DDC6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:266 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DDC7: cpu.execute_instruction<0x8D>(0x00ADCE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:267 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2DDCA: cpu.execute_instruction<0x9C>(0x00ADB6, 3); return true;
    // src/unknown/C2/C2DB3F.asm:268 BRA @UNKNOWN30
    case 0xC2DDCD: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C2/C2DB3F.asm:270 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DDCF: cpu.execute_instruction<0xAD>(0x00ADCC, 3); return true;
    // src/unknown/C2/C2DB3F.asm:271 SEC
    case 0xC2DDD2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:272 SBC #$03BB
    case 0xC2DDD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000BB, 2); else cpu.execute_instruction<0xE9>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:272 SBC #$03BB
    // Overlapping static entry reached from 0xC2DDD3.
    case 0xC2DDD5: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:273 STA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DDD6: cpu.execute_instruction<0x8D>(0x00ADCC, 3); return true;
    // src/unknown/C2/C2DB3F.asm:273 STA LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DDD5.
    case 0xC2DDD7: cpu.execute_instruction<0xCC>(0x00ADAD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:274 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DDD9: cpu.execute_instruction<0xAD>(0x00ADCE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:274 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2DDD7.
    case 0xC2DDDA: cpu.execute_instruction<0xCE>(0x0018AD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:275 CLC
    case 0xC2DDDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:276 ADC #$03BB
    case 0xC2DDDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BB, 2); else cpu.execute_instruction<0x69>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:276 ADC #$03BB
    // Overlapping static entry reached from 0xC2DDDD.
    case 0xC2DDDF: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:277 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DDE0: cpu.execute_instruction<0x8D>(0x00ADCE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:277 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2DDDF.
    case 0xC2DDE1: cpu.execute_instruction<0xCE>(0x00E2AD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:279 SEP #PROC_FLAGS::INDEX8
    case 0xC2DDE3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:279 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2DDE1.
    case 0xC2DDE4: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:280 LDY #8
    case 0xC2DDE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:280 LDY #8
    // Overlapping static entry reached from 0xC2DDE4.
    case 0xC2DDE6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:281 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DDE7: cpu.execute_instruction<0xAD>(0x00ADCC, 3); return true;
    // src/unknown/C2/C2DB3F.asm:281 LDA LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DDE5.
    case 0xC2DDE8: cpu.execute_instruction<0xCC>(0x0022AD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:282 JSL ASR8_UNKNOWN1
    case 0xC2DDEA: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2DB3F.asm:282 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DDE8.
    case 0xC2DDEB: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C2/C2DB3F.asm:282 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DDEB.
    case 0xC2DDED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000CD, 2); else cpu.execute_instruction<0xC0>(0x00B2CD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:283 CMP LETTERBOX_TOP_END
    case 0xC2DDEE: cpu.execute_instruction<0xCD>(0x00ADB2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:283 CMP LETTERBOX_TOP_END
    // Overlapping static entry reached from 0xC2DDED.
    case 0xC2DDEF: cpu.execute_instruction<0xB2>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:283 CMP LETTERBOX_TOP_END
    // Overlapping static entry reached from 0xC2DDED.
    case 0xC2DDF0: cpu.execute_instruction<0xAD>(0x0003B0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:284 BCS @UNKNOWN31
    case 0xC2DDF1: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C2/C2DB3F.asm:285 STA LETTERBOX_TOP_END
    case 0xC2DDF3: cpu.execute_instruction<0x8D>(0x00ADB2, 3); return true;
    // src/unknown/C2/C2DB3F.asm:287 LDY #8
    case 0xC2DDF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:288 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DDF8: cpu.execute_instruction<0xAD>(0x00ADCE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:288 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2DDF6.
    case 0xC2DDF9: cpu.execute_instruction<0xCE>(0x0022AD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    case 0xC2DDFB: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DDF9.
    case 0xC2DDFC: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DDFC.
    case 0xC2DDFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000CD, 2); else cpu.execute_instruction<0xC0>(0x00B4CD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    case 0xC2DDFF: cpu.execute_instruction<0xCD>(0x00ADB4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    // Overlapping static entry reached from 0xC2DDFE.
    case 0xC2DE00: cpu.execute_instruction<0xB4>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    // Overlapping static entry reached from 0xC2DDFE.
    case 0xC2DE01: cpu.execute_instruction<0xAD>(0x000590, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    case 0xC2DE02: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    case 0xC2DE04: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C2/C2DB3F.asm:292 STA LETTERBOX_BOTTOM_START
    case 0xC2DE06: cpu.execute_instruction<0x8D>(0x00ADB4, 3); return true;
    // src/unknown/C2/C2DB3F.asm:294 JSL UNKNOWN_C2D0AC
    case 0xC2DE09: cpu.execute_instruction<0x22>(0xC2D0AC, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DB3F.asm:296 END_C_FUNCTION
    case 0xC2DE0D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DB3F.asm:296 END_C_FUNCTION
    case 0xC2DE0E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DE0F.asm (unresolved).
bool execute_unresolved_c2_c2de0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DE0F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DE0F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DE11: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DE12: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DE13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DE13.
    case 0xC2DE15: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DE16: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:8 LDX #0
    case 0xC2DE17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:8 LDX #0
    // Overlapping static entry reached from 0xC2DE17.
    case 0xC2DE19: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2DE0F.asm:9 BRA @UNKNOWN1
    case 0xC2DE1A: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C2DE0F.asm:11 TXA
    case 0xC2DE1C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:12 ASL
    case 0xC2DE1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:13 CLC
    case 0xC2DE1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:14 ADC #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2DE1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00ADD4, 3); return true;
    // src/unknown/C2/C2DE0F.asm:14 ADC #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2DE1F.
    case 0xC2DE21: cpu.execute_instruction<0xAD>(0x001285, 3); return true;
    // src/unknown/C2/C2DE0F.asm:15 STA @LOCAL01
    case 0xC2DE22: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2DE0F.asm:16 CLC
    case 0xC2DE24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:17 ADC #0 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    case 0xC2DE25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C2/C2DE0F.asm:17 ADC #0 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DE25.
    case 0xC2DE27: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:18 TAY
    case 0xC2DE28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:19 LDA __BSS_START__,Y
    case 0xC2DE29: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:20 LSR
    case 0xC2DE2C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:21 AND #$3DEF ;lower 4 bits of each colour channel
    case 0xC2DE2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x003DEF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:21 AND #$3DEF ;lower 4 bits of each colour channel
    // Overlapping static entry reached from 0xC2DE2D.
    case 0xC2DE2F: cpu.execute_instruction<0x3D>(0x000099, 3); return true;
    // src/unknown/C2/C2DE0F.asm:22 STA __BSS_START__,Y
    case 0xC2DE30: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:22 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DE2F.
    case 0xC2DE32: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DE0F.asm:23 LDA @LOCAL01
    case 0xC2DE33: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2DE0F.asm:24 CLC
    case 0xC2DE35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:25 ADC #1 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    case 0xC2DE36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000083, 2); else cpu.execute_instruction<0x69>(0x000083, 3); return true;
    // src/unknown/C2/C2DE0F.asm:25 ADC #1 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DE36.
    case 0xC2DE38: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:26 TAY
    case 0xC2DE39: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:27 LDA __BSS_START__,Y
    case 0xC2DE3A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:28 LSR
    case 0xC2DE3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:29 AND #$3DEF ;lower 4 bits of each colour channel
    case 0xC2DE3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x003DEF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:29 AND #$3DEF ;lower 4 bits of each colour channel
    // Overlapping static entry reached from 0xC2DE3E.
    case 0xC2DE40: cpu.execute_instruction<0x3D>(0x000099, 3); return true;
    // src/unknown/C2/C2DE0F.asm:30 STA __BSS_START__,Y
    case 0xC2DE41: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:30 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DE40.
    case 0xC2DE43: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:31 INX
    case 0xC2DE44: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:33 CPX #16
    case 0xC2DE45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C2/C2DE0F.asm:33 CPX #16
    // Overlapping static entry reached from 0xC2DE45.
    case 0xC2DE47: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2DE0F.asm:34 BCC @UNKNOWN0
    case 0xC2DE48: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00ADE0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DE4A.
    case 0xC2DE4C: cpu.execute_instruction<0xAD>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE4D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE4F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE50: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE52: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE53: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE55: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE0F.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2DE57: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE59: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE5B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE5D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE5F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE0F.asm:38 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE0F.asm:38 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE61.
    case 0xC2DE63: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE0F.asm:39 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DE64: cpu.execute_instruction<0xAD>(0x00AE20, 3); return true;
    // src/unknown/C2/C2DE0F.asm:40 JSL MEMCPY16
    case 0xC2DE67: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2DE0F.asm:41 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DE6B: cpu.execute_instruction<0xAD>(0x00AE4B, 3); return true;
    // src/unknown/C2/C2DE0F.asm:42 AND #$00FF
    case 0xC2DE6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2DE6E.
    case 0xC2DE70: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DE0F.asm:43 BEQ @UNKNOWN2
    case 0xC2DE71: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x00AE57, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DE73.
    case 0xC2DE75: cpu.execute_instruction<0xAE>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE78: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE7B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE7C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DE7E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE0F.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC2DE80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE86: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE88: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE0F.asm:47 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE0F.asm:47 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE8A.
    case 0xC2DE8C: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE0F.asm:48 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette_pointer
    case 0xC2DE8D: cpu.execute_instruction<0xAD>(0x00AE97, 3); return true;
    // src/unknown/C2/C2DE0F.asm:49 JSL MEMCPY16
    case 0xC2DE90: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DE0F.asm:51 END_C_FUNCTION
    case 0xC2DE94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DE0F.asm:51 END_C_FUNCTION
    case 0xC2DE95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DE96.asm (unresolved).
bool execute_unresolved_c2_c2de96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DE96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DE96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE98: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE99: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DE9A.
    case 0xC2DE9C: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00AE00, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DE9E.
    case 0xC2DEA0: cpu.execute_instruction<0xAE>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DEA9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE96.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2DEAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2DEAD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2DEAF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2DEB1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2DEB3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEB7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEBB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:19 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DEBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:19 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DEBD.
    case 0xC2DEBF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DE96.asm:20 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2DEC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00ADE0, 3); return true;
    // src/unknown/C2/C2DE96.asm:20 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DEC0.
    case 0xC2DEC2: cpu.execute_instruction<0xAD>(0x00D222, 3); return true;
    // src/unknown/C2/C2DE96.asm:21 JSL MEMCPY16
    case 0xC2DEC3: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2DE96.asm:21 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DEC2.
    case 0xC2DEC5: cpu.execute_instruction<0x8E>(0x00A9C0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x00AE77, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2DEC5.
    case 0xC2DEC8: cpu.execute_instruction<0x77>(0x0000AE, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2DEC7.
    case 0xC2DEC9: cpu.execute_instruction<0xAE>(0x000A85, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DECA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DECC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DECD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DECF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DED0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DED2: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C2/C2DE96.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC2DED4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DED6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DED8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DEDA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DEDC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEDE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEE0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEE2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:30 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DEE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:30 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DEE6.
    case 0xC2DEE8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DE96.asm:31 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2DEE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x00AE57, 3); return true;
    // src/unknown/C2/C2DE96.asm:31 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DEE9.
    case 0xC2DEEB: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/unknown/C2/C2DE96.asm:32 JSL MEMCPY16
    case 0xC2DEEC: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2DE96.asm:32 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DEEB.
    case 0xC2DEEE: cpu.execute_instruction<0x8E>(0x00A5C0, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2DEF0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DEEE.
    case 0xC2DEF1: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2DEF2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DEF1.
    case 0xC2DEF3: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2DEF4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DEF3.
    case 0xC2DEF5: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2DEF6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:36 MOVE_INT @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DEF5.
    case 0xC2DEF7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEF8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEFA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEFC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DEFE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:39 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DF00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:39 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DF00.
    case 0xC2DF02: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE96.asm:40 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DF03: cpu.execute_instruction<0xAD>(0x00AE20, 3); return true;
    // src/unknown/C2/C2DE96.asm:41 JSL MEMCPY16
    case 0xC2DF06: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C2/C2DE96.asm:42 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DF0A: cpu.execute_instruction<0xAD>(0x00AE4B, 3); return true;
    // src/unknown/C2/C2DE96.asm:43 AND #$00FF
    case 0xC2DF0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DE96.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2DF0D.
    case 0xC2DF0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DE96.asm:44 BEQ @UNKNOWN0
    case 0xC2DF10: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DF12: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DF14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DF16: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2DF18: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DF1A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DF1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DF1E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DF20: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:51 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DF22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:51 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DF22.
    case 0xC2DF24: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE96.asm:52 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette_pointer
    case 0xC2DF25: cpu.execute_instruction<0xAD>(0x00AE97, 3); return true;
    // src/unknown/C2/C2DE96.asm:53 JSL MEMCPY16
    case 0xC2DF28: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DE96.asm:55 END_C_FUNCTION
    case 0xC2DF2C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DE96.asm:55 END_C_FUNCTION
    case 0xC2DF2D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
