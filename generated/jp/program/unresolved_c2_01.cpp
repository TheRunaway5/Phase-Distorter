// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
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
    case 0xC200E3: cpu.execute_instruction<0x9C>(0x008D07, 3); return true;
    // src/unknown/C2/C200D9.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC200E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:11 LDA #$FFFF
    case 0xC200E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:11 LDA #$FFFF
    // Overlapping static entry reached from 0xC200E8.
    case 0xC200EA: cpu.execute_instruction<0xFF>(0x8D108D, 4); return true;
    // src/unknown/C2/C200D9.asm:12 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xC200EB: cpu.execute_instruction<0x8D>(0x008D10, 3); return true;
    // src/unknown/C2/C200D9.asm:13 STA CURRENT_FLASHING_ENEMY
    case 0xC200EE: cpu.execute_instruction<0x8D>(0x008D0E, 3); return true;
    // src/unknown/C2/C200D9.asm:14 STA CURRENT_FLASHING_ROW
    case 0xC200F1: cpu.execute_instruction<0x8D>(0x008D0C, 3); return true;
    // src/unknown/C2/C200D9.asm:15 STA UNREAD_7E89CC
    case 0xC200F4: cpu.execute_instruction<0x8D>(0x008D0A, 3); return true;
    // src/unknown/C2/C200D9.asm:16 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC200F7: cpu.execute_instruction<0x8D>(0x008D08, 3); return true;
    // src/unknown/C2/C200D9.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC200FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:18 STZ INSTANT_PRINTING
    case 0xC200FC: cpu.execute_instruction<0x9C>(0x00991A, 3); return true;
    // src/unknown/C2/C200D9.asm:19 STZ REDRAW_ALL_WINDOWS
    case 0xC200FF: cpu.execute_instruction<0x9C>(0x00991B, 3); return true;
    // src/unknown/C2/C200D9.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC20102: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:21 STZ ACTIONSCRIPT_STATE
    case 0xC20104: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/unknown/C2/C200D9.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC20107: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:23 STZ UPLOAD_HPPP_METER_TILES
    case 0xC20109: cpu.execute_instruction<0x9C>(0x00991C, 3); return true;
    // src/unknown/C2/C200D9.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2010C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:25 LDA #$FFFF
    case 0xC2010E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:25 LDA #$FFFF
    // Overlapping static entry reached from 0xC2010E.
    case 0xC20110: cpu.execute_instruction<0xFF>(0x8C228D, 4); return true;
    // src/unknown/C2/C200D9.asm:26 STA WINDOW_HEAD
    case 0xC20111: cpu.execute_instruction<0x8D>(0x008C22, 3); return true;
    // src/unknown/C2/C200D9.asm:27 STA WINDOW_TAIL
    case 0xC20114: cpu.execute_instruction<0x8D>(0x008C24, 3); return true;
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
    case 0xC2011E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C200D9.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC2011E.
    case 0xC20120: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C200D9.asm:33 JSL MULT168
    case 0xC20121: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C200D9.asm:34 TAX
    case 0xC20125: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:35 LDA #$FFFF
    case 0xC20126: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xC20126.
    case 0xC20128: cpu.execute_instruction<0xFF>(0x89C69D, 4); return true;
    // src/unknown/C2/C200D9.asm:36 STA WINDOW_STATS+window_stats::id,X
    case 0xC20129: cpu.execute_instruction<0x9D>(0x0089C6, 3); return true;
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
    case 0xC20141: cpu.execute_instruction<0xFF>(0x8C269D, 4); return true;
    // src/unknown/C2/C200D9.asm:50 STA OPEN_WINDOW_TABLE,X
    case 0xC20142: cpu.execute_instruction<0x9D>(0x008C26, 3); return true;
    // src/unknown/C2/C200D9.asm:51 LDA @LOCAL01
    case 0xC20145: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:52 INC
    case 0xC20147: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:53 STA @LOCAL01
    case 0xC20148: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:56 CMP #52
    case 0xC2014A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000034, 2); else cpu.execute_instruction<0xC9>(0x000034, 3); return true;
    // src/unknown/C2/C200D9.asm:56 CMP #52
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
    case 0xC2015A: cpu.execute_instruction<0xFF>(0x8C8E9D, 4); return true;
    // src/unknown/C2/C200D9.asm:68 STA TITLED_WINDOWS,X
    case 0xC2015B: cpu.execute_instruction<0x9D>(0x008C8E, 3); return true;
    // src/unknown/C2/C200D9.asm:69 LDA @LOCAL01
    case 0xC2015E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:70 INC
    case 0xC20160: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:71 STA @LOCAL01
    case 0xC20161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:74 CMP #4
    case 0xC20163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C200D9.asm:74 CMP #4
    // Overlapping static entry reached from 0xC20163.
    case 0xC20165: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:78 BNE @UNKNOWN4
    case 0xC20166: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/unknown/C2/C200D9.asm:79 LDA #$FFFF
    case 0xC20168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:79 LDA #$FFFF
    // Overlapping static entry reached from 0xC20168.
    case 0xC2016A: cpu.execute_instruction<0xFF>(0x61F28D, 4); return true;
    // src/unknown/C2/C200D9.asm:80 STA PAGINATION_WINDOW
    case 0xC2016B: cpu.execute_instruction<0x8D>(0x0061F2, 3); return true;
    // src/unknown/C2/C200D9.asm:81 STA PAGINATION_ANIMATION_FRAME
    case 0xC2016E: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // src/unknown/C2/C200D9.asm:82 LDY #.LOWORD(BG2_BUFFER)
    case 0xC20171: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000076, 2); else cpu.execute_instruction<0xA0>(0x008176, 3); return true;
    // src/unknown/C2/C200D9.asm:82 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20171.
    case 0xC20173: cpu.execute_instruction<0x81>(0x0000A2, 2); return true;
    // src/unknown/C2/C200D9.asm:83 LDX #$0380
    case 0xC20174: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/unknown/C2/C200D9.asm:83 LDX #$0380
    // Overlapping static entry reached from 0xC20173.
    case 0xC20175: cpu.execute_instruction<0x80>(0x000003, 2); return true;
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
    // Overlapping static entry reached from 0xC20175.
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
    case 0xC20189: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC2018F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC20191: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC20192: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC20194: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C2/C200D9.asm:97 OPTIMIZED_MULT $04, .SIZEOF(menu_option)
    case 0xC20195: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:98 TAX
    case 0xC20196: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:99 STZ MENU_OPTIONS,X
    case 0xC20197: cpu.execute_instruction<0x9E>(0x008D12, 3); return true;
    // src/unknown/C2/C200D9.asm:100 LDA @LOCAL01
    case 0xC2019A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:101 INC
    case 0xC2019C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:102 STA @LOCAL01
    case 0xC2019D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:104 CMP #70
    case 0xC2019F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000046, 2); else cpu.execute_instruction<0xC9>(0x000046, 3); return true;
    // src/unknown/C2/C200D9.asm:104 CMP #70
    // Overlapping static entry reached from 0xC2019F.
    case 0xC201A1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C200D9.asm:105 BNE @UNKNOWN8
    case 0xC201A2: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/unknown/C2/C200D9.asm:106 LDA #0
    case 0xC201A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:106 LDA #0
    // Overlapping static entry reached from 0xC201A4.
    case 0xC201A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C200D9.asm:107 STA @LOCAL00
    case 0xC201A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:108 BRA @UNKNOWN13
    case 0xC201A9: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C2/C200D9.asm:110 LDX #0
    case 0xC201AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C200D9.asm:110 LDX #0
    // Overlapping static entry reached from 0xC201AB.
    case 0xC201AD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C200D9.asm:111 STX @LOCAL01
    case 0xC201AE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:112 BRA @UNKNOWN12
    case 0xC201B0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C2/C200D9.asm:114 STX @VIRTUAL02
    case 0xC201B2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C200D9.asm:114 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC201C9.
    case 0xC201B3: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C2/C200D9.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC201B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:116 LDA @LOCAL00
    case 0xC201B6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:117 ASL
    case 0xC201B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:118 ASL
    case 0xC201B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:119 ASL
    case 0xC201BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:120 ASL
    case 0xC201BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:121 ASL
    case 0xC201BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:122 CLC
    case 0xC201BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:123 ADC @VIRTUAL02
    case 0xC201BE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C200D9.asm:124 TAX
    case 0xC201C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC201C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:126 LDA #$00FF
    case 0xC201C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C2/C200D9.asm:127 STA UNKNOWN_7E9D23,X
    case 0xC201C5: cpu.execute_instruction<0x9D>(0x009FA9, 3); return true;
    // src/unknown/C2/C200D9.asm:127 STA UNKNOWN_7E9D23,X
    // Overlapping static entry reached from 0xC201C3.
    case 0xC201C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00A69F, 3); return true;
    // src/unknown/C2/C200D9.asm:128 LDX @LOCAL01
    case 0xC201C8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:128 LDX @LOCAL01
    // Overlapping static entry reached from 0xC201C6.
    case 0xC201C9: cpu.execute_instruction<0x10>(0x0000E8, 2); return true;
    // src/unknown/C2/C200D9.asm:129 INX
    case 0xC201CA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:130 STX @LOCAL01
    case 0xC201CB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C200D9.asm:132 CPX #32
    case 0xC201CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C200D9.asm:132 CPX #32
    // Overlapping static entry reached from 0xC201CD.
    case 0xC201CF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C200D9.asm:133 BCC @UNKNOWN11
    case 0xC201D0: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C200D9.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC201D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C200D9.asm:135 LDA @LOCAL00
    case 0xC201D4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:136 INC
    case 0xC201D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C200D9.asm:137 STA @LOCAL00
    case 0xC201D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C200D9.asm:140 CMP #4
    case 0xC201D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C200D9.asm:140 CMP #4
    // Overlapping static entry reached from 0xC201D9.
    case 0xC201DB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C200D9.asm:144 BCC @UNKNOWN10
    case 0xC201DC: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/unknown/C2/C200D9.asm:145 STZ UNKNOWN_7E9E29
    case 0xC201DE: cpu.execute_instruction<0x9C>(0x00A02F, 3); return true;
    // src/unknown/C2/C200D9.asm:146 STZ UNKNOWN_7E9E27
    case 0xC201E1: cpu.execute_instruction<0x9C>(0x00A02D, 3); return true;
    // src/unknown/C2/C200D9.asm:147 STZ VWF_TILE
    case 0xC201E4: cpu.execute_instruction<0x9C>(0x00A02B, 3); return true;
    // src/unknown/C2/C200D9.asm:148 STZ VWF_X
    case 0xC201E7: cpu.execute_instruction<0x9C>(0x00A029, 3); return true;
    // src/unknown/C2/C200D9.asm:149 STZ BLINKING_TRIANGLE_FLAG
    case 0xC201EA: cpu.execute_instruction<0x9C>(0x009945, 3); return true;
    // src/unknown/C2/C200D9.asm:150 LDA #1
    case 0xC201ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C200D9.asm:150 LDA #1
    // Overlapping static entry reached from 0xC201ED.
    case 0xC201EF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C200D9.asm:151 STA TEXT_SOUND_MODE
    case 0xC201F0: cpu.execute_instruction<0x8D>(0x009947, 3); return true;
    // src/unknown/C2/C200D9.asm:151 STA TEXT_SOUND_MODE
    // Overlapping static entry reached from 0xC2020D.
    case 0xC201F2: cpu.execute_instruction<0x99>(0x003B9C, 3); return true;
    // src/unknown/C2/C200D9.asm:152 STZ BATTLE_MODE_FLAG
    case 0xC201F3: cpu.execute_instruction<0x9C>(0x00993B, 3); return true;
    // src/unknown/C2/C200D9.asm:152 STZ BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC201F2.
    case 0xC201F5: cpu.execute_instruction<0x99>(0x003D9C, 3); return true;
    // src/unknown/C2/C200D9.asm:153 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC201F6: cpu.execute_instruction<0x9C>(0x00993D, 3); return true;
    // src/unknown/C2/C200D9.asm:153 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    // Overlapping static entry reached from 0xC201F5.
    case 0xC201F8: cpu.execute_instruction<0x99>(0x00FFA9, 3); return true;
    // src/unknown/C2/C200D9.asm:154 LDA #$FFFF
    case 0xC201F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C200D9.asm:154 LDA #$FFFF
    // Overlapping static entry reached from 0xC201F9.
    case 0xC201FB: cpu.execute_instruction<0xFF>(0x8C968D, 4); return true;
    // src/unknown/C2/C200D9.asm:155 STA CURRENT_FOCUS_WINDOW
    case 0xC201FC: cpu.execute_instruction<0x8D>(0x008C96, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C200D9.asm:201 END_C_FUNCTION
    case 0xC201FF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C200D9.asm:201 END_C_FUNCTION
    case 0xC20200: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20266.asm (unresolved).
bool execute_unresolved_c2_c20266_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20266.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20201: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20203: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20204: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20205: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC20205.
    case 0xC20207: cpu.execute_instruction<0xFF>(0xEAA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20266.asm:5 END_STACK_VARS
    case 0xC20208: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:6 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    case 0xC20209: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000EA, 2); else cpu.execute_instruction<0xA0>(0x0085EA, 3); return true;
    // src/unknown/C2/C20266.asm:6 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    // Overlapping static entry reached from 0xC20209.
    case 0xC2020B: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC2020C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x00E3F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC2020B.
    case 0xC2020D: cpu.execute_instruction<0xF0>(0x0000E3, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC2020C.
    case 0xC2020E: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC2020F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC2020E.
    case 0xC20210: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20210.
    case 0xC20212: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    // Overlapping static entry reached from 0xC20211.
    case 0xC20213: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C20266.asm:7 LOADPTR UNKNOWN_C3E40E, @VIRTUAL06
    case 0xC20214: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C20266.asm:8 LDX #0
    case 0xC20216: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C20266.asm:8 LDX #0
    // Overlapping static entry reached from 0xC20216.
    case 0xC20218: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C20266.asm:9 BRA @UNKNOWN1
    case 0xC20219: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C20266.asm:11 LDA [@VIRTUAL06]
    case 0xC2021B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:12 STA __BSS_START__,Y
    case 0xC2021D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C20266.asm:13 INC @VIRTUAL06
    case 0xC20220: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:14 INC @VIRTUAL06
    case 0xC20222: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C2/C20266.asm:15 INY
    case 0xC20224: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:16 INY
    case 0xC20225: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:17 INX
    case 0xC20226: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C20266.asm:19 CPX #4
    case 0xC20227: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C20266.asm:19 CPX #4
    // Overlapping static entry reached from 0xC20227.
    case 0xC20229: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C20266.asm:20 BCC @UNKNOWN0
    case 0xC2022A: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20266.asm:21 END_C_FUNCTION
    case 0xC2022C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20266.asm:21 END_C_FUNCTION
    case 0xC2022D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20293.asm (unresolved).
bool execute_unresolved_c2_c20293_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20293.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2022E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C20293.asm:5 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    case 0xC20230: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000EA, 2); else cpu.execute_instruction<0xA0>(0x0085EA, 3); return true;
    // src/unknown/C2/C20293.asm:5 LDY #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) - 6) * 2
    // Overlapping static entry reached from 0xC20230.
    case 0xC20232: cpu.execute_instruction<0x85>(0x0000A2, 2); return true;
    // src/unknown/C2/C20293.asm:6 LDX #0
    case 0xC20233: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:6 LDX #0
    // Overlapping static entry reached from 0xC20232.
    case 0xC20234: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C20293.asm:6 LDX #0
    // Overlapping static entry reached from 0xC20233.
    case 0xC20235: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C20293.asm:7 BRA @UNKNOWN1
    case 0xC20236: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C2/C20293.asm:9 LDA #0
    case 0xC20238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:9 LDA #0
    // Overlapping static entry reached from 0xC20238.
    case 0xC2023A: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C2/C20293.asm:10 STA __BSS_START__,Y
    case 0xC2023B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C20293.asm:11 INY
    case 0xC2023E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:12 INY
    case 0xC2023F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:13 INX
    case 0xC20240: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C20293.asm:15 CPX #4
    case 0xC20241: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C20293.asm:15 CPX #4
    // Overlapping static entry reached from 0xC20241.
    case 0xC20243: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C20293.asm:16 BCC @UNKNOWN0
    case 0xC20244: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20293.asm:17 END_C_FUNCTION
    case 0xC20246: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C202AC.asm (unresolved).
bool execute_unresolved_c2_c202ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C202AC.asm:3 BEGIN_C_FUNCTION
    case 0xC20247: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC20249: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC2024A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC2024B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC2024C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2024C.
    case 0xC2024E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC2024F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C202AC.asm:12 END_STACK_VARS
    case 0xC20250: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:13 STA @VIRTUAL02
    case 0xC20251: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2024E.
    case 0xC20252: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C2/C202AC.asm:14 ASL
    case 0xC20253: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:15 TAX
    case 0xC20254: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC20255: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C202AC.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC20258: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C202AC.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20258.
    case 0xC2025A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C202AC.asm:18 JSL MULT168
    case 0xC2025B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C202AC.asm:19 CLC
    case 0xC2025F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:20 ADC #.LOWORD(WINDOW_STATS)
    case 0xC20260: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C2/C202AC.asm:20 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC20260.
    case 0xC20262: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0018A8, 3); return true;
    // src/unknown/C2/C202AC.asm:21 TAY
    case 0xC20263: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:22 CLC
    case 0xC20264: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:23 ADC #window_stats::title
    case 0xC20265: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/unknown/C2/C202AC.asm:23 ADC #window_stats::title
    // Overlapping static entry reached from 0xC20265.
    case 0xC20267: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:24 STA @VIRTUAL04
    case 0xC20268: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C202AC.asm:25 LDA a:window_stats::unknown59,Y
    case 0xC2026A: cpu.execute_instruction<0xB9>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:26 AND #$00FF
    case 0xC2026D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2026D.
    case 0xC2026F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C202AC.asm:27 BNE @UNKNOWN3
    case 0xC20270: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C2/C202AC.asm:28 LDA #0
    case 0xC20272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:28 LDA #0
    // Overlapping static entry reached from 0xC20272.
    case 0xC20274: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:29 STA @LOCAL01
    case 0xC20275: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:30 BRA @UNKNOWN1
    case 0xC20277: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:32 ASL
    case 0xC20279: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:33 CLC
    case 0xC2027A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:34 ADC #.LOWORD(TITLED_WINDOWS)
    case 0xC2027B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x008C8E, 3); return true;
    // src/unknown/C2/C202AC.asm:34 ADC #.LOWORD(TITLED_WINDOWS)
    // Overlapping static entry reached from 0xC2027B.
    case 0xC2027D: cpu.execute_instruction<0x8C>(0x0086AA, 3); return true;
    // src/unknown/C2/C202AC.asm:35 TAX
    case 0xC2027E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:36 STX @LOCAL00
    case 0xC2027F: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C202AC.asm:36 STX @LOCAL00
    // Overlapping static entry reached from 0xC2027D.
    case 0xC20280: cpu.execute_instruction<0x13>(0x0000BD, 2); return true;
    // src/unknown/C2/C202AC.asm:37 LDA __BSS_START__,X
    case 0xC20281: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC20280.
    case 0xC20282: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C202AC.asm:38 CMP #$FFFF
    case 0xC20284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C202AC.asm:38 CMP #$FFFF
    // Overlapping static entry reached from 0xC20284.
    case 0xC20286: cpu.execute_instruction<0xFF>(0xA50CF0, 4); return true;
    // src/unknown/C2/C202AC.asm:39 BEQ @UNKNOWN2
    case 0xC20287: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C202AC.asm:40 LDA @LOCAL01
    case 0xC20289: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC20286.
    case 0xC2028A: cpu.execute_instruction<0x15>(0x00001A, 2); return true;
    // src/unknown/C2/C202AC.asm:41 INC
    case 0xC2028B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:42 STA @LOCAL01
    case 0xC2028C: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:45 CMP #4
    case 0xC2028E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C202AC.asm:45 CMP #4
    // Overlapping static entry reached from 0xC2028E.
    case 0xC20290: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C202AC.asm:49 BNE @UNKNOWN0
    case 0xC20291: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C2/C202AC.asm:50 BRA @RETURN
    case 0xC20293: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/unknown/C2/C202AC.asm:52 LDA @VIRTUAL02
    case 0xC20295: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:53 ASL
    case 0xC20297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:54 TAX
    case 0xC20298: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC20299: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C202AC.asm:56 LDX @LOCAL00
    case 0xC2029C: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C202AC.asm:57 STA __BSS_START__,X
    case 0xC2029E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:58 LDA @LOCAL01
    case 0xC202A1: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C202AC.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC202A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:60 INC
    case 0xC202A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:61 STA a:window_stats::unknown59,Y
    case 0xC202A6: cpu.execute_instruction<0x99>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC202A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:64 LDA a:window_stats::unknown59,Y
    case 0xC202AB: cpu.execute_instruction<0xB9>(0x00003B, 3); return true;
    // src/unknown/C2/C202AC.asm:65 AND #$00FF
    case 0xC202AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC202AE.
    case 0xC202B0: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C202AC.asm:66 DEC
    case 0xC202B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:67 ASL
    case 0xC202B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:68 ASL
    case 0xC202B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:69 ASL
    case 0xC202B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:70 ASL
    case 0xC202B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:71 ASL
    case 0xC202B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:72 ASL
    case 0xC202B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:73 ASL
    case 0xC202B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:74 CLC
    case 0xC202B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:75 ADC #$7700
    case 0xC202BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007700, 3); return true;
    // src/unknown/C2/C202AC.asm:75 ADC #$7700
    // Overlapping static entry reached from 0xC202BA.
    case 0xC202BC: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:77 STA @VIRTUAL02
    case 0xC202BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:77 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC202BC.
    case 0xC202BE: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/unknown/C2/C202AC.asm:78 BRA @UNKNOWN5
    case 0xC202BF: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    case 0xC202C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00110E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    // Overlapping static entry reached from 0xC202C1.
    case 0xC202C3: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    case 0xC202C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    // Overlapping static entry reached from 0xC202C3.
    case 0xC202C5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    case 0xC202C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    // Overlapping static entry reached from 0xC202C5.
    case 0xC202C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    // Overlapping static entry reached from 0xC202C6.
    case 0xC202C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    case 0xC202C9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C202AC.asm:80 LOADPTR MOTHER2_ROMAJI_FONT, @VIRTUAL06
    // Overlapping static entry reached from 0xC202C7.
    case 0xC202CA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:81 LDA @LOCALM21
    case 0xC202CB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C202AC.asm:82 AND #$00FF
    case 0xC202CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC202CD.
    case 0xC202CF: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C202AC.asm:83 SEC
    case 0xC202D0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:84 SBC #32
    case 0xC202D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C2/C202AC.asm:84 SBC #32
    // Overlapping static entry reached from 0xC202D1.
    case 0xC202D3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C2/C202AC.asm:85 ASL
    case 0xC202D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:86 ASL
    case 0xC202D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:87 ASL
    case 0xC202D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:88 ASL
    case 0xC202D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:89 CLC
    case 0xC202D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:90 ADC @VIRTUAL06
    case 0xC202D9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C202AC.asm:91 STA @VIRTUAL06
    case 0xC202DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C202AC.asm:92 STA @LOCALM20
    case 0xC202DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C202AC.asm:93 LDA @VIRTUAL06+2
    case 0xC202DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C202AC.asm:94 STA @LOCALM20+2
    case 0xC202E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C202AC.asm:95 LDY @VIRTUAL02
    case 0xC202E3: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:96 LDX #16
    case 0xC202E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C2/C202AC.asm:96 LDX #16
    // Overlapping static entry reached from 0xC202E5.
    case 0xC202E7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C2/C202AC.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC202E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:98 LDA #0
    case 0xC202EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C2/C202AC.asm:99 JSL PREPARE_VRAM_COPY
    case 0xC202EC: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C2/C202AC.asm:99 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC202EA.
    case 0xC202ED: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C2/C202AC.asm:99 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC202ED.
    case 0xC202EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C2/C202AC.asm:101 LDA @VIRTUAL02
    case 0xC202F0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:101 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC202EF.
    case 0xC202F1: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C2/C202AC.asm:102 CLC
    case 0xC202F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C202AC.asm:103 ADC #8
    case 0xC202F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C2/C202AC.asm:103 ADC #8
    // Overlapping static entry reached from 0xC202F3.
    case 0xC202F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C202AC.asm:104 STA @VIRTUAL02
    case 0xC202F6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C202AC.asm:105 INC @VIRTUAL04
    case 0xC202F8: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C2/C202AC.asm:107 LDX @VIRTUAL04
    case 0xC202FA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C202AC.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC202FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:109 LDA __BSS_START__,X
    case 0xC202FE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C202AC.asm:110 STA @LOCALM21
    case 0xC20301: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C202AC.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC20303: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C202AC.asm:112 AND #$00FF
    case 0xC20305: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C202AC.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC20305.
    case 0xC20307: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C202AC.asm:113 BNE @UNKNOWN4
    case 0xC20308: cpu.execute_instruction<0xD0>(0x0000B7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C202AC.asm:120 END_C_FUNCTION
    case 0xC2030A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C202AC.asm:120 END_C_FUNCTION
    case 0xC2030B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2038B.asm (unresolved).
bool execute_unresolved_c2_c2038b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2038B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2036C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC2036E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC2036F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC20370: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20370.
    case 0xC20372: cpu.execute_instruction<0xFF>(0x7EA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2038B.asm:6 END_STACK_VARS
    case 0xC20373: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20374: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20374.
    case 0xC20376: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1184 STA $0E
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20377: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20379.
    case 0xC2037B: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // include/macros.asm:1186 STA $10
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC2037C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC2037E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000076, 2); else cpu.execute_instruction<0xA0>(0x008176, 3); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC2037E.
    case 0xC20380: cpu.execute_instruction<0x81>(0x0000A2, 2); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20381: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20380.
    case 0xC20382: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20381.
    case 0xC20383: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20384: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20383.
    case 0xC20385: cpu.execute_instruction<0x20>(0x002E22, 3); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    case 0xC20386: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C2/C2038B.asm:7 COPY_TO_VRAM2 BG2_BUFFER, $7C00, $700, $00
    // Overlapping static entry reached from 0xC20385.
    case 0xC20388: cpu.execute_instruction<0x86>(0x0000C0, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2038A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC2038A.
    case 0xC2038C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2038D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2038F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC2038F.
    case 0xC20391: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC20392: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC20394: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x007F80, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC20394.
    case 0xC20396: cpu.execute_instruction<0x7F>(0x0040A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC20397: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC20397.
    case 0xC20399: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2039A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2039C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    case 0xC2039E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC2039C.
    case 0xC2039F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2038B.asm:9 COPY_TO_VRAM1 UNKNOWN_C40BE8, $7F80, $40, $00
    // Overlapping static entry reached from 0xC2039F.
    case 0xC203A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2038B.asm:10 END_C_FUNCTION
    case 0xC203A2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2038B.asm:10 END_C_FUNCTION
    case 0xC203A3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2077D.asm (unresolved).
bool execute_unresolved_c2_c2077d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2077D.asm:3 BEGIN_C_FUNCTION
    case 0xC2071E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20720: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20721: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20722: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20722.
    case 0xC20724: cpu.execute_instruction<0xFF>(0x3FAC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2077D.asm:7 END_STACK_VARS
    case 0xC20725: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:8 LDY CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC20726: cpu.execute_instruction<0xAC>(0x00993F, 3); return true;
    // src/unknown/C2/C2077D.asm:8 LDY CURRENTLY_DRAWN_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC20724.
    case 0xC20728: cpu.execute_instruction<0x99>(0x001084, 3); return true;
    // src/unknown/C2/C2077D.asm:9 STY @LOCAL01
    case 0xC20729: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:10 LDX #0
    case 0xC2072B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2077D.asm:10 LDX #0
    // Overlapping static entry reached from 0xC2072B.
    case 0xC2072D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2077D.asm:11 STX @LOCAL00
    case 0xC2072E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:12 BRA @UNKNOWN2
    case 0xC20730: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C2077D.asm:14 TYA
    case 0xC20732: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:15 AND #$0001
    case 0xC20733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2077D.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC20733.
    case 0xC20735: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2077D.asm:16 BEQ @UNKNOWN1
    case 0xC20736: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2077D.asm:17 TXA
    case 0xC20738: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:18 JSR DRAW_HP_PP_WINDOW
    case 0xC20739: cpu.execute_instruction<0x20>(0x0003A4, 3); return true;
    // src/unknown/C2/C2077D.asm:20 LDY @LOCAL01
    case 0xC2073C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:21 TYA
    case 0xC2073E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:22 LSR
    case 0xC2073F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:23 TAY
    case 0xC20740: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:24 STY @LOCAL01
    case 0xC20741: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2077D.asm:25 LDX @LOCAL00
    case 0xC20743: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:26 INX
    case 0xC20745: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:27 STX @LOCAL00
    case 0xC20746: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2077D.asm:29 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20748: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C2077D.asm:30 AND #$00FF
    case 0xC2074B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2077D.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2074B.
    case 0xC2074D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2077D.asm:31 STA @VIRTUAL02
    case 0xC2074E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2077D.asm:32 TXA
    case 0xC20750: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2077D.asm:33 CMP @VIRTUAL02
    case 0xC20751: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2077D.asm:34 BNE @UNKNOWN0
    case 0xC20753: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2077D.asm:35 END_C_FUNCTION
    case 0xC20755: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2077D.asm:35 END_C_FUNCTION
    case 0xC20756: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C207B6.asm (unresolved).
bool execute_unresolved_c2_c207b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C207B6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20757: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC20759: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC2075A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC2075B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC2075C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2075C.
    case 0xC2075E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC2075F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C207B6.asm:7 END_STACK_VARS
    case 0xC20760: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C207B6.asm:8 STA @LOCAL00
    case 0xC20761: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C207B6.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC2075E.
    case 0xC20762: cpu.execute_instruction<0x0E>(0x0030E2, 3); return true;
    // src/unknown/C2/C207B6.asm:9 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC20763: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C2/C207B6.asm:10 TAY
    case 0xC20765: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C207B6.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC20766: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C207B6.asm:12 LDA #1
    case 0xC20768: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C207B6.asm:12 LDA #1
    // Overlapping static entry reached from 0xC20768.
    case 0xC2076A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C207B6.asm:13 JSL ASL16_ENTRY2
    case 0xC2076B: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C2/C207B6.asm:14 ORA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC2076F: cpu.execute_instruction<0x0D>(0x00993F, 3); return true;
    // src/unknown/C2/C207B6.asm:15 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC20772: cpu.execute_instruction<0x8D>(0x00993F, 3); return true;
    // src/unknown/C2/C207B6.asm:16 LDA @LOCAL00
    case 0xC20775: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C207B6.asm:17 JSR DRAW_HP_PP_WINDOW
    case 0xC20777: cpu.execute_instruction<0x20>(0x0003A4, 3); return true;
    // src/unknown/C2/C207B6.asm:18 LDA #1
    case 0xC2077A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C207B6.asm:18 LDA #1
    // Overlapping static entry reached from 0xC2077A.
    case 0xC2077C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C207B6.asm:19 STA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC2077D: cpu.execute_instruction<0x8D>(0x009941, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C207B6.asm:20 END_C_FUNCTION
    case 0xC20780: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C207B6.asm:20 END_C_FUNCTION
    case 0xC20781: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2087C.asm (unresolved).
bool execute_unresolved_c2_c2087c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2087C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2081D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC2081F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20820: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20821: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20821.
    case 0xC20823: cpu.execute_instruction<0xFF>(0x07AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20824: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    case 0xC20825: cpu.execute_instruction<0xAD>(0x008D07, 3); return true;
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC20823.
    case 0xC20827: cpu.execute_instruction<0x8D>(0x00FF29, 3); return true;
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    case 0xC20828: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20828.
    case 0xC2082A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2087C.asm:9 BEQ @UNKNOWN0
    case 0xC2082B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C2/C2087C.asm:10 JSR UNKNOWN_C2077D
    case 0xC2082D: cpu.execute_instruction<0x20>(0x00071E, 3); return true;
    // src/unknown/C2/C2087C.asm:12 LDA WINDOW_HEAD
    case 0xC20830: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    case 0xC20833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20833.
    case 0xC20835: cpu.execute_instruction<0xFF>(0xAC1FF0, 4); return true;
    // src/unknown/C2/C2087C.asm:14 BEQ @UNKNOWN2
    case 0xC20836: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    case 0xC20838: cpu.execute_instruction<0xAC>(0x008C22, 3); return true;
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    // Overlapping static entry reached from 0xC20835.
    case 0xC20839: cpu.execute_instruction<0x22>(0x0E848C, 4); return true;
    // src/unknown/C2/C2087C.asm:16 STY @LOCAL00
    case 0xC2083B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:18 TYA
    case 0xC2083D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:19 JSL UNKNOWN_C107AF
    case 0xC2083E: cpu.execute_instruction<0x22>(0xC10996, 4); return true;
    // src/unknown/C2/C2087C.asm:20 LDY @LOCAL00
    case 0xC20842: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:21 TYA
    case 0xC20844: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    case 0xC20845: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20845.
    case 0xC20847: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2087C.asm:23 JSL MULT168
    case 0xC20848: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2087C.asm:24 TAX
    case 0xC2084C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2087C.asm:25 LDY WINDOW_STATS+window_stats::next,X
    case 0xC2084D: cpu.execute_instruction<0xBC>(0x0089C4, 3); return true;
    // src/unknown/C2/C2087C.asm:26 STY @LOCAL00
    case 0xC20850: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    case 0xC20852: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    // Overlapping static entry reached from 0xC20852.
    case 0xC20854: cpu.execute_instruction<0xFF>(0x2BE6D0, 4); return true;
    // src/unknown/C2/C2087C.asm:28 BNE @UNKNOWN1
    case 0xC20855: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC20857: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC20858: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C208B8.asm (unresolved).
bool execute_unresolved_c2_c208b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C208B8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20859: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC2085B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC2085C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC2085D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC2085E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2085E.
    case 0xC20860: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC20861: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C208B8.asm:11 END_STACK_VARS
    case 0xC20862: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:12 STX @LOCAL02
    case 0xC20863: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC20860.
    case 0xC20864: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C2/C208B8.asm:13 STA @LOCAL01
    case 0xC20865: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C208B8.asm:13 STA @LOCAL01
    // Overlapping static entry reached from 0xC20864.
    case 0xC20866: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C2/C208B8.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC20867: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C208B8.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC20866.
    case 0xC20868: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C2/C208B8.asm:15 ASL
    case 0xC2086A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:16 TAX
    case 0xC2086B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC2086C: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C208B8.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC2086F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C208B8.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC2086F.
    case 0xC20871: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C208B8.asm:19 JSL MULT168
    case 0xC20872: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C208B8.asm:20 CLC
    case 0xC20876: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC20877: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C2/C208B8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC20877.
    case 0xC20879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C2/C208B8.asm:22 TAY
    case 0xC2087A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:23 STY @LOCAL00
    case 0xC2087B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C208B8.asm:23 STY @LOCAL00
    // Overlapping static entry reached from 0xC20879.
    case 0xC2087C: cpu.execute_instruction<0x0E>(0x0010A5, 3); return true;
    // src/unknown/C2/C208B8.asm:24 LDA @LOCAL01
    case 0xC2087D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C208B8.asm:25 ASL
    case 0xC2087F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:26 STA @VIRTUAL02
    case 0xC20880: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:27 LDA a:window_stats::width,Y
    case 0xC20882: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C2/C208B8.asm:28 TAY
    case 0xC20885: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:29 LDX @LOCAL02
    case 0xC20886: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:30 TXA
    case 0xC20888: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:31 JSL MULT16
    case 0xC20889: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C2/C208B8.asm:32 ASL
    case 0xC2088D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:33 ASL
    case 0xC2088E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:34 LDY @LOCAL00
    case 0xC2088F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C208B8.asm:35 CLC
    case 0xC20891: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:36 ADC a:window_stats::tilemap_address,Y
    case 0xC20892: cpu.execute_instruction<0x79>(0x000035, 3); return true;
    // src/unknown/C2/C208B8.asm:37 CLC
    case 0xC20895: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:38 ADC @VIRTUAL02
    case 0xC20896: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:39 TAX
    case 0xC20898: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:40 LDA __BSS_START__,X
    case 0xC20899: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C208B8.asm:41 AND #$03FF
    case 0xC2089C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C2/C208B8.asm:41 AND #$03FF
    // Overlapping static entry reached from 0xC2089C.
    case 0xC2089E: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C2/C208B8.asm:43 STA @LOCAL02
    case 0xC2089F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:43 STA @LOCAL02
    // Overlapping static entry reached from 0xC2089E.
    case 0xC208A0: cpu.execute_instruction<0x12>(0x000029, 2); return true;
    // src/unknown/C2/C208B8.asm:44 AND #$000F
    case 0xC208A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C2/C208B8.asm:44 AND #$000F
    // Overlapping static entry reached from 0xC208A0.
    case 0xC208A2: cpu.execute_instruction<0x0F>(0x028500, 4); return true;
    // src/unknown/C2/C208B8.asm:44 AND #$000F
    // Overlapping static entry reached from 0xC208A1.
    case 0xC208A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C208B8.asm:45 STA @VIRTUAL02
    case 0xC208A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:46 LDA @LOCAL02
    case 0xC208A6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C208B8.asm:47 AND #$FFF0
    case 0xC208A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C2/C208B8.asm:47 AND #$FFF0
    // Overlapping static entry reached from 0xC208A8.
    case 0xC208AA: cpu.execute_instruction<0xFF>(0x65184A, 4); return true;
    // src/unknown/C2/C208B8.asm:48 LSR
    case 0xC208AB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:49 CLC
    case 0xC208AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C208B8.asm:50 ADC @VIRTUAL02
    case 0xC208AD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C208B8.asm:50 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC208AA.
    case 0xC208AE: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C208B8.asm:63 END_C_FUNCTION
    case 0xC208AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C208B8.asm:63 END_C_FUNCTION
    case 0xC208B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20A20.asm (unresolved).
bool execute_unresolved_c2_c20a20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20A20.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC208B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC208B6.
    case 0xC208B8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208BA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:8 TAX
    case 0xC208BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:9 STX @LOCAL00
    case 0xC208BC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC208BE: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:11 STA a:window_text_attributes_copy::id,X
    case 0xC208C1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C20A20.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC208C4: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    case 0xC208C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC208C7.
    case 0xC208C9: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC208CA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC208CC: cpu.execute_instruction<0x4C>(0x00094B, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC208C9.
    case 0xC208CD: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC208CD.
    case 0xC208CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AD, 2); else cpu.execute_instruction<0x09>(0x0096AD, 3); return true;
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC208CF: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208CE.
    case 0xC208D0: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208CE.
    case 0xC208D1: cpu.execute_instruction<0x8C>(0x00AA0A, 3); return true;
    // src/unknown/C2/C20A20.asm:16 ASL
    case 0xC208D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:17 TAX
    case 0xC208D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC208D4: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC208D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208D7.
    case 0xC208D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:20 JSL MULT168
    case 0xC208DA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20A20.asm:21 TAX
    case 0xC208DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:22 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC208DF: cpu.execute_instruction<0xBD>(0x0089D0, 3); return true;
    // src/unknown/C2/C20A20.asm:23 LDX @LOCAL00
    case 0xC208E2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:24 STA a:window_text_attributes_copy::text_x,X
    case 0xC208E4: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C2/C20A20.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC208E7: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:26 ASL
    case 0xC208EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:27 TAX
    case 0xC208EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC208EC: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    case 0xC208EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208EF.
    case 0xC208F1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:30 JSL MULT168
    case 0xC208F2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20A20.asm:31 TAX
    case 0xC208F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:32 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC208F7: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // src/unknown/C2/C20A20.asm:33 LDX @LOCAL00
    case 0xC208FA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:34 STA a:window_text_attributes_copy::text_y,X
    case 0xC208FC: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C2/C20A20.asm:35 LDA CURRENT_FOCUS_WINDOW
    case 0xC208FF: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:36 ASL
    case 0xC20902: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:37 TAX
    case 0xC20903: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:38 LDA OPEN_WINDOW_TABLE,X
    case 0xC20904: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    case 0xC20907: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20907.
    case 0xC20909: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:40 JSL MULT168
    case 0xC2090A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20A20.asm:41 TAX
    case 0xC2090E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC2090F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C20A20.asm:43 LDA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20911: cpu.execute_instruction<0xBD>(0x0089D4, 3); return true;
    // src/unknown/C2/C20A20.asm:44 LDX @LOCAL00
    case 0xC20914: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:45 STA a:window_text_attributes_copy::number_padding,X
    case 0xC20916: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C2/C20A20.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC20919: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C20A20.asm:47 LDA CURRENT_FOCUS_WINDOW
    case 0xC2091B: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:48 ASL
    case 0xC2091E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:49 TAX
    case 0xC2091F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:50 LDA OPEN_WINDOW_TABLE,X
    case 0xC20920: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC20923: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20923.
    case 0xC20925: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:52 JSL MULT168
    case 0xC20926: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20A20.asm:53 TAX
    case 0xC2092A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:54 LDA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC2092B: cpu.execute_instruction<0xBD>(0x0089D5, 3); return true;
    // src/unknown/C2/C20A20.asm:55 LDX @LOCAL00
    case 0xC2092E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:56 STA a:window_text_attributes_copy::curr_tile_attributes,X
    case 0xC20930: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/unknown/C2/C20A20.asm:57 LDA CURRENT_FOCUS_WINDOW
    case 0xC20933: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20A20.asm:58 ASL
    case 0xC20936: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:59 TAX
    case 0xC20937: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:60 LDA OPEN_WINDOW_TABLE,X
    case 0xC20938: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC2093B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC2093B.
    case 0xC2093D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20A20.asm:62 JSL MULT168
    case 0xC2093E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20A20.asm:63 TAX
    case 0xC20942: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20A20.asm:64 LDA WINDOW_STATS+window_stats::font,X
    case 0xC20943: cpu.execute_instruction<0xBD>(0x0089D7, 3); return true;
    // src/unknown/C2/C20A20.asm:65 LDX @LOCAL00
    case 0xC20946: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C20A20.asm:66 STA a:window_text_attributes_copy::font,X
    case 0xC20948: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC2094B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC2094C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20ABC.asm (unresolved).
bool execute_unresolved_c2_c20abc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20ABC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2094D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC2094F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20950: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20951: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20952: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20952.
    case 0xC20954: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20955: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20956: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:9 TAY
    case 0xC20957: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:10 STY @LOCAL01
    case 0xC20958: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:11 LDA __BSS_START__,Y
    case 0xC2095A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:12 STA @LOCAL00
    case 0xC2095D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    case 0xC2095F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC2095F.
    case 0xC20961: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20962: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20964: cpu.execute_instruction<0x4C>(0x0009F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20961.
    case 0xC20965: cpu.execute_instruction<0xF4>(0x000A09, 3); return true;
    // src/unknown/C2/C20ABC.asm:15 ASL
    case 0xC20967: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:16 CLC
    case 0xC20968: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC20969: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x008C26, 3); return true;
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC20969.
    case 0xC2096B: cpu.execute_instruction<0x8C>(0x00BDAA, 3); return true;
    // src/unknown/C2/C20ABC.asm:18 TAX
    case 0xC2096C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    case 0xC2096D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2096B.
    case 0xC2096E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    case 0xC20970: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC20970.
    case 0xC20972: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20973: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20975: cpu.execute_instruction<0x4C>(0x0009F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20972.
    case 0xC20976: cpu.execute_instruction<0xF4>(0x00A509, 3); return true;
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    case 0xC20978: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    // Overlapping static entry reached from 0xC20976.
    case 0xC20979: cpu.execute_instruction<0x0E>(0x00968D, 3); return true;
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    case 0xC2097A: cpu.execute_instruction<0x8D>(0x008C96, 3); return true;
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC20979.
    case 0xC2097C: cpu.execute_instruction<0x8C>(0x0000BD, 3); return true;
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    case 0xC2097D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2097C.
    case 0xC2097F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    case 0xC20980: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20980.
    case 0xC20982: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:26 JSL MULT168
    case 0xC20983: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20ABC.asm:27 TAX
    case 0xC20987: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:28 LDY @LOCAL01
    case 0xC20988: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:29 LDA a:window_text_attributes_copy::text_x,Y
    case 0xC2098A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C2/C20ABC.asm:30 STA WINDOW_STATS+window_stats::text_x,X
    case 0xC2098D: cpu.execute_instruction<0x9D>(0x0089D0, 3); return true;
    // src/unknown/C2/C20ABC.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC20990: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20ABC.asm:32 ASL
    case 0xC20993: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:33 TAX
    case 0xC20994: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC20995: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC20998: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20998.
    case 0xC2099A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:36 JSL MULT168
    case 0xC2099B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20ABC.asm:37 TAX
    case 0xC2099F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:38 LDY @LOCAL01
    case 0xC209A0: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:39 LDA a:window_text_attributes_copy::text_y,Y
    case 0xC209A2: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C2/C20ABC.asm:40 STA WINDOW_STATS+window_stats::text_y,X
    case 0xC209A5: cpu.execute_instruction<0x9D>(0x0089D2, 3); return true;
    // src/unknown/C2/C20ABC.asm:41 LDA CURRENT_FOCUS_WINDOW
    case 0xC209A8: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20ABC.asm:42 ASL
    case 0xC209AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:43 TAX
    case 0xC209AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:44 LDA OPEN_WINDOW_TABLE,X
    case 0xC209AD: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    case 0xC209B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209B0.
    case 0xC209B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:46 JSL MULT168
    case 0xC209B3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20ABC.asm:47 TAX
    case 0xC209B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:48 LDY @LOCAL01
    case 0xC209B8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC209BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C20ABC.asm:50 LDA a:window_text_attributes_copy::number_padding,Y
    case 0xC209BC: cpu.execute_instruction<0xB9>(0x000006, 3); return true;
    // src/unknown/C2/C20ABC.asm:51 STA WINDOW_STATS+window_stats::number_padding,X
    case 0xC209BF: cpu.execute_instruction<0x9D>(0x0089D4, 3); return true;
    // src/unknown/C2/C20ABC.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC209C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C20ABC.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC209C4: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20ABC.asm:54 ASL
    case 0xC209C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:55 TAX
    case 0xC209C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:56 LDA OPEN_WINDOW_TABLE,X
    case 0xC209C9: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC209CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209CC.
    case 0xC209CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:58 JSL MULT168
    case 0xC209CF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20ABC.asm:59 TAX
    case 0xC209D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:60 LDY @LOCAL01
    case 0xC209D4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:61 LDA a:window_text_attributes_copy::curr_tile_attributes,Y
    case 0xC209D6: cpu.execute_instruction<0xB9>(0x000007, 3); return true;
    // src/unknown/C2/C20ABC.asm:62 STA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC209D9: cpu.execute_instruction<0x9D>(0x0089D5, 3); return true;
    // src/unknown/C2/C20ABC.asm:63 LDA CURRENT_FOCUS_WINDOW
    case 0xC209DC: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20ABC.asm:64 ASL
    case 0xC209DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:65 TAX
    case 0xC209E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:66 LDA OPEN_WINDOW_TABLE,X
    case 0xC209E1: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    case 0xC209E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209E4.
    case 0xC209E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20ABC.asm:68 JSL MULT168
    case 0xC209E7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20ABC.asm:69 TAX
    case 0xC209EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20ABC.asm:70 LDY @LOCAL01
    case 0xC209EC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C20ABC.asm:71 LDA a:window_text_attributes_copy::font,Y
    case 0xC209EE: cpu.execute_instruction<0xB9>(0x000009, 3); return true;
    // src/unknown/C2/C20ABC.asm:72 STA WINDOW_STATS+window_stats::font,X
    case 0xC209F1: cpu.execute_instruction<0x9D>(0x0089D7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC209F4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC209F5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20B65.asm (unresolved).
bool execute_unresolved_c2_c20b65_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20B65.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC209F6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209F8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209F9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC209FB.
    case 0xC209FD: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20B65.asm:18 END_STACK_VARS
    case 0xC209FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:19 STY @VIRTUAL04
    case 0xC20A00: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:19 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC209FD.
    case 0xC20A01: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C2/C20B65.asm:20 STX @LOCAL06
    case 0xC20A02: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:20 STX @LOCAL06
    // Overlapping static entry reached from 0xC20A01.
    case 0xC20A03: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:21 STA @LOCAL05
    case 0xC20A04: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:22 LDX @PARAM04
    case 0xC20A06: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C2/C20B65.asm:23 STX @LOCAL04
    case 0xC20A08: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:24 LDY @PARAM03
    case 0xC20A0A: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C2/C20B65.asm:25 STY @LOCAL03
    case 0xC20A0C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A0E: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C2/C20B65.asm:27 ASL
    case 0xC20A11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:28 TAX
    case 0xC20A12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:29 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A13: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C2/C20B65.asm:30 LDY #.SIZEOF(window_stats)
    case 0xC20A16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C2/C20B65.asm:30 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A16.
    case 0xC20A18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C20B65.asm:31 JSL MULT168
    case 0xC20A19: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C20B65.asm:32 CLC
    case 0xC20A1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:33 ADC #.LOWORD(WINDOW_STATS)
    case 0xC20A1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C2/C20B65.asm:33 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC20A1E.
    case 0xC20A20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x001285, 3); return true;
    // src/unknown/C2/C20B65.asm:34 STA @LOCAL02
    case 0xC20A21: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:34 STA @LOCAL02
    // Overlapping static entry reached from 0xC20A20.
    case 0xC20A22: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:35 LDA @LOCAL05
    case 0xC20A23: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:35 LDA @LOCAL05
    // Overlapping static entry reached from 0xC20A22.
    case 0xC20A24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:36 STA @VIRTUAL02
    case 0xC20A25: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:37 STA @LOCAL01
    case 0xC20A27: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:38 LDY @LOCAL06
    case 0xC20A29: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:39 STY @LOCAL00
    case 0xC20A2B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:40 LDA @VIRTUAL04
    case 0xC20A2D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:41 BEQL @UNKNOWN14
    case 0xC20A2F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:41 BEQL @UNKNOWN14
    case 0xC20A31: cpu.execute_instruction<0x4C>(0x000B01, 3); return true;
    // src/unknown/C2/C20B65.asm:42 TYA
    case 0xC20A34: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:43 CLC
    case 0xC20A35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:44 ADC @VIRTUAL04
    case 0xC20A36: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:45 TAY
    case 0xC20A38: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:46 STY @LOCAL00
    case 0xC20A39: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:47 BRA @UNKNOWN3
    case 0xC20A3B: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:49 TYX
    case 0xC20A3D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:50 LDA @LOCAL01
    case 0xC20A3E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:51 STA @VIRTUAL02
    case 0xC20A40: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:52 JSL UNKNOWN_C208B8
    case 0xC20A42: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:53 CMP #$002F
    case 0xC20A46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:53 CMP #$002F
    // Overlapping static entry reached from 0xC20A46.
    case 0xC20A48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:54 BEQL @UNKNOWN27
    case 0xC20A49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:54 BEQL @UNKNOWN27
    case 0xC20A4B: cpu.execute_instruction<0x4C>(0x000BB7, 3); return true;
    // src/unknown/C2/C20B65.asm:55 LDY @LOCAL00
    case 0xC20A4E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:56 TYA
    case 0xC20A50: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:57 CLC
    case 0xC20A51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:58 ADC @VIRTUAL04
    case 0xC20A52: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:59 TAY
    case 0xC20A54: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:60 STY @LOCAL00
    case 0xC20A55: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:62 LDY #window_stats::height
    case 0xC20A57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:62 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20A57.
    case 0xC20A59: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:63 LDA (@LOCAL02),Y
    case 0xC20A5A: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:64 LSR
    case 0xC20A5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:65 STA @VIRTUAL02
    case 0xC20A5D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:66 LDY @LOCAL00
    case 0xC20A5F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:67 TYA
    case 0xC20A61: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:68 CMP @VIRTUAL02
    case 0xC20A62: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:69 BCC @UNKNOWN1
    case 0xC20A64: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C2/C20B65.asm:70 LDA @VIRTUAL04
    case 0xC20A66: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:71 CLC
    case 0xC20A68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:72 ADC @LOCAL06
    case 0xC20A69: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:73 TAY
    case 0xC20A6B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:74 STY @LOCAL00
    case 0xC20A6C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:75 BRA @UNKNOWN8
    case 0xC20A6E: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/unknown/C2/C20B65.asm:77 LDA @LOCAL01
    case 0xC20A70: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:78 STA @VIRTUAL02
    case 0xC20A72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:79 DEC
    case 0xC20A74: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:80 STA @VIRTUAL02
    case 0xC20A75: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:81 BRA @UNKNOWN7
    case 0xC20A77: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:83 LDY @LOCAL00
    case 0xC20A79: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:84 TYX
    case 0xC20A7B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:85 LDA @VIRTUAL02
    case 0xC20A7C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:86 JSL UNKNOWN_C208B8
    case 0xC20A7E: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:87 CMP #$002F
    case 0xC20A82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:87 CMP #$002F
    // Overlapping static entry reached from 0xC20A82.
    case 0xC20A84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:88 BEQL @UNKNOWN27
    case 0xC20A85: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:88 BEQL @UNKNOWN27
    case 0xC20A87: cpu.execute_instruction<0x4C>(0x000BB7, 3); return true;
    // src/unknown/C2/C20B65.asm:89 LDA @VIRTUAL02
    case 0xC20A8A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:90 DEC
    case 0xC20A8C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:91 STA @VIRTUAL02
    case 0xC20A8D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:93 LDY #window_stats::width
    case 0xC20A8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:93 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20A8F.
    case 0xC20A91: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:94 LDA @VIRTUAL02
    case 0xC20A92: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:95 CMP (@LOCAL02),Y
    case 0xC20A94: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:96 BCC @UNKNOWN5
    case 0xC20A96: cpu.execute_instruction<0x90>(0x0000E1, 2); return true;
    // src/unknown/C2/C20B65.asm:97 LDA @LOCAL05
    case 0xC20A98: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:98 STA @VIRTUAL02
    case 0xC20A9A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:99 STA @LOCAL01
    case 0xC20A9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C20B65.asm:100 LDY @LOCAL00
    case 0xC20A9E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:101 TYA
    case 0xC20AA0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:102 CLC
    case 0xC20AA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:103 ADC @VIRTUAL04
    case 0xC20AA2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:104 TAY
    case 0xC20AA4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:105 STY @LOCAL00
    case 0xC20AA5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:107 LDY #window_stats::height
    case 0xC20AA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:107 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20AA7.
    case 0xC20AA9: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:108 LDA (@LOCAL02),Y
    case 0xC20AAA: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:109 LSR
    case 0xC20AAC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:110 STA @VIRTUAL02
    case 0xC20AAD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:111 LDY @LOCAL00
    case 0xC20AAF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:112 TYA
    case 0xC20AB1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:113 CMP @VIRTUAL02
    case 0xC20AB2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:114 BCC @UNKNOWN4
    case 0xC20AB4: cpu.execute_instruction<0x90>(0x0000BA, 2); return true;
    // src/unknown/C2/C20B65.asm:115 LDX @LOCAL05
    case 0xC20AB6: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:116 LDA @VIRTUAL04
    case 0xC20AB8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:117 CLC
    case 0xC20ABA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:118 ADC @LOCAL06
    case 0xC20ABB: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:119 TAY
    case 0xC20ABD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:120 STY @LOCAL00
    case 0xC20ABE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:121 BRA @UNKNOWN13
    case 0xC20AC0: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C2/C20B65.asm:123 STX @VIRTUAL02
    case 0xC20AC2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:124 INC @VIRTUAL02
    case 0xC20AC4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:125 BRA @UNKNOWN12
    case 0xC20AC6: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C20B65.asm:127 LDY @LOCAL00
    case 0xC20AC8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:128 TYX
    case 0xC20ACA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:129 LDA @VIRTUAL02
    case 0xC20ACB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:130 JSL UNKNOWN_C208B8
    case 0xC20ACD: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:131 CMP #$002F
    case 0xC20AD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:131 CMP #$002F
    // Overlapping static entry reached from 0xC20AD1.
    case 0xC20AD3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:132 BEQL @UNKNOWN27
    case 0xC20AD4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:132 BEQL @UNKNOWN27
    case 0xC20AD6: cpu.execute_instruction<0x4C>(0x000BB7, 3); return true;
    // src/unknown/C2/C20B65.asm:133 INC @VIRTUAL02
    case 0xC20AD9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:135 LDY #window_stats::width
    case 0xC20ADB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:135 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20ADB.
    case 0xC20ADD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:136 LDA @VIRTUAL02
    case 0xC20ADE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:137 CMP (@LOCAL02),Y
    case 0xC20AE0: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:138 BCC @UNKNOWN10
    case 0xC20AE2: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/unknown/C2/C20B65.asm:139 LDX @LOCAL05
    case 0xC20AE4: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:140 LDY @LOCAL00
    case 0xC20AE6: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:141 TYA
    case 0xC20AE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:142 CLC
    case 0xC20AE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:143 ADC @VIRTUAL04
    case 0xC20AEA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:144 TAY
    case 0xC20AEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:145 STY @LOCAL00
    case 0xC20AED: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:147 LDY #window_stats::height
    case 0xC20AEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:147 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20AEF.
    case 0xC20AF1: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:148 LDA (@LOCAL02),Y
    case 0xC20AF2: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:149 LSR
    case 0xC20AF4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:150 STA @VIRTUAL02
    case 0xC20AF5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:151 LDY @LOCAL00
    case 0xC20AF7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:152 TYA
    case 0xC20AF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:153 CMP @VIRTUAL02
    case 0xC20AFA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:154 BCC @UNKNOWN9
    case 0xC20AFC: cpu.execute_instruction<0x90>(0x0000C4, 2); return true;
    // src/unknown/C2/C20B65.asm:155 JMP @UNKNOWN26
    case 0xC20AFE: cpu.execute_instruction<0x4C>(0x000BB2, 3); return true;
    // src/unknown/C2/C20B65.asm:157 LDA @VIRTUAL02
    case 0xC20B01: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:158 CLC
    case 0xC20B03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:159 ADC @LOCAL03
    case 0xC20B04: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:160 STA @VIRTUAL02
    case 0xC20B06: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:161 BRA @UNKNOWN17
    case 0xC20B08: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:163 LDY @LOCAL00
    case 0xC20B0A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:164 TYX
    case 0xC20B0C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:165 LDA @VIRTUAL02
    case 0xC20B0D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:166 JSL UNKNOWN_C208B8
    case 0xC20B0F: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:167 CMP #$002F
    case 0xC20B13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:167 CMP #$002F
    // Overlapping static entry reached from 0xC20B13.
    case 0xC20B15: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20B65.asm:168 BEQL @UNKNOWN27
    case 0xC20B16: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20B65.asm:168 BEQL @UNKNOWN27
    case 0xC20B18: cpu.execute_instruction<0x4C>(0x000BB7, 3); return true;
    // src/unknown/C2/C20B65.asm:169 LDA @VIRTUAL02
    case 0xC20B1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:170 CLC
    case 0xC20B1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:171 ADC @LOCAL03
    case 0xC20B1E: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:172 STA @VIRTUAL02
    case 0xC20B20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:174 LDY #window_stats::width
    case 0xC20B22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:174 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20B22.
    case 0xC20B24: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:175 LDA @VIRTUAL02
    case 0xC20B25: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:176 CMP (@LOCAL02),Y
    case 0xC20B27: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:177 BCC @UNKNOWN15
    case 0xC20B29: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C2/C20B65.asm:178 LDA @LOCAL05
    case 0xC20B2B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:179 CLC
    case 0xC20B2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:180 ADC @LOCAL03
    case 0xC20B2E: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:181 STA @VIRTUAL02
    case 0xC20B30: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:182 BRA @UNKNOWN21
    case 0xC20B32: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C2/C20B65.asm:184 LDY @LOCAL00
    case 0xC20B34: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:185 DEY
    case 0xC20B36: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:186 STY @LOCAL00
    case 0xC20B37: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:187 BRA @UNKNOWN20
    case 0xC20B39: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C20B65.asm:189 TYX
    case 0xC20B3B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:190 LDA @VIRTUAL02
    case 0xC20B3C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:191 JSL UNKNOWN_C208B8
    case 0xC20B3E: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:192 CMP #$002F
    case 0xC20B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:192 CMP #$002F
    // Overlapping static entry reached from 0xC20B42.
    case 0xC20B44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20B65.asm:193 BEQ @UNKNOWN27
    case 0xC20B45: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C2/C20B65.asm:194 LDY @LOCAL00
    case 0xC20B47: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:195 DEY
    case 0xC20B49: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:196 STY @LOCAL00
    case 0xC20B4A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:198 LDY #window_stats::height
    case 0xC20B4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:198 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20B4C.
    case 0xC20B4E: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:199 LDA (@LOCAL02),Y
    case 0xC20B4F: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:200 LSR
    case 0xC20B51: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:201 STA @VIRTUAL04
    case 0xC20B52: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:202 LDY @LOCAL00
    case 0xC20B54: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:203 TYA
    case 0xC20B56: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:204 CMP @VIRTUAL04
    case 0xC20B57: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:205 BCC @UNKNOWN19
    case 0xC20B59: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C20B65.asm:206 LDY @LOCAL06
    case 0xC20B5B: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:207 STY @LOCAL00
    case 0xC20B5D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:208 LDA @VIRTUAL02
    case 0xC20B5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:209 CLC
    case 0xC20B61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:210 ADC @LOCAL03
    case 0xC20B62: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:211 STA @VIRTUAL02
    case 0xC20B64: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:213 LDY #window_stats::width
    case 0xC20B66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20B66.
    case 0xC20B68: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:214 LDA @VIRTUAL02
    case 0xC20B69: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:215 CMP (@LOCAL02),Y
    case 0xC20B6B: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:216 BCC @UNKNOWN18
    case 0xC20B6D: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/unknown/C2/C20B65.asm:217 LDX @LOCAL06
    case 0xC20B6F: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:218 LDA @LOCAL05
    case 0xC20B71: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C20B65.asm:219 CLC
    case 0xC20B73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:220 ADC @LOCAL03
    case 0xC20B74: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:221 STA @VIRTUAL02
    case 0xC20B76: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:222 BRA @UNKNOWN25
    case 0xC20B78: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C2/C20B65.asm:224 TXY
    case 0xC20B7A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:225 INY
    case 0xC20B7B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:226 STY @LOCAL00
    case 0xC20B7C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:227 BRA @UNKNOWN24
    case 0xC20B7E: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C20B65.asm:229 TYX
    case 0xC20B80: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:230 LDA @VIRTUAL02
    case 0xC20B81: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:231 JSL UNKNOWN_C208B8
    case 0xC20B83: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C2/C20B65.asm:232 CMP #$002F
    case 0xC20B87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C2/C20B65.asm:232 CMP #$002F
    // Overlapping static entry reached from 0xC20B87.
    case 0xC20B89: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20B65.asm:233 BEQ @UNKNOWN27
    case 0xC20B8A: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C20B65.asm:234 LDY @LOCAL00
    case 0xC20B8C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:235 INY
    case 0xC20B8E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:236 STY @LOCAL00
    case 0xC20B8F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:238 LDY #window_stats::height
    case 0xC20B91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C20B65.asm:238 LDY #window_stats::height
    // Overlapping static entry reached from 0xC20B91.
    case 0xC20B93: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C2/C20B65.asm:239 LDA (@LOCAL02),Y
    case 0xC20B94: cpu.execute_instruction<0xB1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:240 LSR
    case 0xC20B96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:241 STA @VIRTUAL04
    case 0xC20B97: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:242 LDY @LOCAL00
    case 0xC20B99: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:243 TYA
    case 0xC20B9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:244 CMP @VIRTUAL04
    case 0xC20B9C: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C20B65.asm:245 BCC @UNKNOWN23
    case 0xC20B9E: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C2/C20B65.asm:246 LDX @LOCAL06
    case 0xC20BA0: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C20B65.asm:247 LDA @VIRTUAL02
    case 0xC20BA2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:248 CLC
    case 0xC20BA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:249 ADC @LOCAL03
    case 0xC20BA5: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C2/C20B65.asm:250 STA @VIRTUAL02
    case 0xC20BA7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:252 LDY #window_stats::width
    case 0xC20BA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C2/C20B65.asm:252 LDY #window_stats::width
    // Overlapping static entry reached from 0xC20BA9.
    case 0xC20BAB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C20B65.asm:253 LDA @VIRTUAL02
    case 0xC20BAC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C20B65.asm:254 CMP (@LOCAL02),Y
    case 0xC20BAE: cpu.execute_instruction<0xD1>(0x000012, 2); return true;
    // src/unknown/C2/C20B65.asm:255 BCC @UNKNOWN22
    case 0xC20BB0: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C2/C20B65.asm:257 LDA #$FFFF
    case 0xC20BB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20B65.asm:257 LDA #$FFFF
    // Overlapping static entry reached from 0xC20BB2.
    case 0xC20BB4: cpu.execute_instruction<0xFF>(0xA51780, 4); return true;
    // src/unknown/C2/C20B65.asm:258 BRA @UNKNOWN29
    case 0xC20BB5: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C2/C20B65.asm:260 LDA @LOCAL04
    case 0xC20BB7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:260 LDA @LOCAL04
    // Overlapping static entry reached from 0xC20BB4.
    case 0xC20BB8: cpu.execute_instruction<0x16>(0x0000C9, 2); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    case 0xC20BB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    // Overlapping static entry reached from 0xC20BB8.
    case 0xC20BBA: cpu.execute_instruction<0xFF>(0x06F0FF, 4); return true;
    // src/unknown/C2/C20B65.asm:261 CMP #$FFFF
    // Overlapping static entry reached from 0xC20BB9.
    case 0xC20BBB: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C2/C20B65.asm:262 BEQ @UNKNOWN28
    case 0xC20BBC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C2/C20B65.asm:263 LDA @LOCAL04
    case 0xC20BBE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C20B65.asm:263 LDA @LOCAL04
    // Overlapping static entry reached from 0xC20BBB.
    case 0xC20BBF: cpu.execute_instruction<0x16>(0x000022, 2); return true;
    // src/unknown/C2/C20B65.asm:264 JSL PLAY_SOUND
    case 0xC20BC0: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C2/C20B65.asm:264 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC20BBF.
    case 0xC20BC1: cpu.execute_instruction<0xBF>(0xA4C0AB, 4); return true;
    // src/unknown/C2/C20B65.asm:266 LDY @LOCAL00
    case 0xC20BC4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C20B65.asm:266 LDY @LOCAL00
    // Overlapping static entry reached from 0xC20BC1.
    case 0xC20BC5: cpu.execute_instruction<0x0E>(0x00EB98, 3); return true;
    // src/unknown/C2/C20B65.asm:267 TYA
    case 0xC20BC6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:268 XBA
    case 0xC20BC7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:269 AND #$FF00
    case 0xC20BC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C2/C20B65.asm:269 AND #$FF00
    // Overlapping static entry reached from 0xC20BC8.
    case 0xC20BCA: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C2/C20B65.asm:270 CLC
    case 0xC20BCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C20B65.asm:271 ADC @VIRTUAL02
    case 0xC20BCC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20B65.asm:273 END_C_FUNCTION
    case 0xC20BCE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20B65.asm:273 END_C_FUNCTION
    case 0xC20BCF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C20F58.asm (unresolved).
bool execute_unresolved_c2_c20f58_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20F58.asm:3 BEGIN_C_FUNCTION
    case 0xC20DE9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20DEB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20DEC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20DED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20DED.
    case 0xC20DEF: cpu.execute_instruction<0xFF>(0x49AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20F58.asm:6 END_STACK_VARS
    case 0xC20DF0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C20F58.asm:7 LDA HALF_HPPP_METER_SPEED
    case 0xC20DF1: cpu.execute_instruction<0xAD>(0x009949, 3); return true;
    // src/unknown/C2/C20F58.asm:7 LDA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC20DEF.
    case 0xC20DF3: cpu.execute_instruction<0x99>(0x00FF29, 3); return true;
    // src/unknown/C2/C20F58.asm:8 AND #$00FF
    case 0xC20DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C20F58.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20DF4.
    case 0xC20DF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C20F58.asm:9 BEQ @UNKNOWN0
    case 0xC20DF7: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C2/C20F58.asm:10 SEP #PROC_FLAGS::INDEX8
    case 0xC20DF9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C20F58.asm:11 LDY #1
    case 0xC20DFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00AD01, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20DFD: cpu.execute_instruction<0xAD>(0x00991F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    // Overlapping static entry reached from 0xC20DFB.
    case 0xC20DFE: cpu.execute_instruction<0x1F>(0x068599, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E02: cpu.execute_instruction<0xAD>(0x009921, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:12 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E05: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C20F58.asm:13 JSL ASR32
    case 0xC20E07: cpu.execute_instruction<0x22>(0xC09244, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E0B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E0D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E0F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E11: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C20F58.asm:15 BRA @UNKNOWN1
    case 0xC20E13: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E15: cpu.execute_instruction<0xAD>(0x00991F, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E1A: cpu.execute_instruction<0xAD>(0x009921, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:17 MOVE_INT HP_METER_SPEED, @VIRTUAL06
    case 0xC20E1D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E1F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E21: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E23: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C20F58.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC20E25: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C20F58.asm:20 REP #PROC_FLAGS::INDEX8
    case 0xC20E27: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20F58.asm:21 END_C_FUNCTION
    case 0xC20E29: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C20F58.asm:21 END_C_FUNCTION
    case 0xC20E2A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C21034.asm (unresolved).
bool execute_unresolved_c2_c21034_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C21034.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20ECA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC20ECC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC20ECD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC20ECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20ECE.
    case 0xC20ED0: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C21034.asm:7 END_STACK_VARS
    case 0xC20ED1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:9 LDA #0
    case 0xC20ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C21034.asm:9 LDA #0
    // Overlapping static entry reached from 0xC20ED2.
    case 0xC20ED4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C21034.asm:10 STA @LOCAL00
    case 0xC20ED5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:15 BRA @UNKNOWN3
    case 0xC20ED7: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C2/C21034.asm:18 CLC
    case 0xC20ED9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:19 ADC #.LOWORD(GAME_STATE)
    case 0xC20EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C21034.asm:19 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC20EDA.
    case 0xC20EDC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:20 TAX
    case 0xC20EDD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:21 LDA a:game_state::party_members,X
    case 0xC20EDE: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C2/C21034.asm:25 AND #$00FF
    case 0xC20EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C21034.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC20EE1.
    case 0xC20EE3: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C21034.asm:26 DEC
    case 0xC20EE4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC20EE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C21034.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC20EE5.
    case 0xC20EE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C21034.asm:28 JSL MULT168
    case 0xC20EE8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C21034.asm:29 CLC
    case 0xC20EEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC20EED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C2/C21034.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC20EED.
    case 0xC20EEF: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C2/C21034.asm:31 TAX
    case 0xC20EF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:32 LDA a:char_struct::current_hp_fraction,X
    case 0xC20EF1: cpu.execute_instruction<0xBD>(0x000042, 3); return true;
    // src/unknown/C2/C21034.asm:32 LDA a:char_struct::current_hp_fraction,X
    // Overlapping static entry reached from 0xC20EEF.
    case 0xC20EF2: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/unknown/C2/C21034.asm:33 BNE @UNKNOWN1
    case 0xC20EF4: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C2/C21034.asm:34 LDA a:char_struct::current_pp_fraction,X
    case 0xC20EF6: cpu.execute_instruction<0xBD>(0x000048, 3); return true;
    // src/unknown/C2/C21034.asm:35 BNE @UNKNOWN1
    case 0xC20EF9: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C21034.asm:36 LDA a:char_struct::current_hp,X
    case 0xC20EFB: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/unknown/C2/C21034.asm:37 CMP a:char_struct::current_hp_target,X
    case 0xC20EFE: cpu.execute_instruction<0xDD>(0x000046, 3); return true;
    // src/unknown/C2/C21034.asm:38 BNE @UNKNOWN1
    case 0xC20F01: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C2/C21034.asm:39 LDA a:char_struct::current_pp,X
    case 0xC20F03: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/unknown/C2/C21034.asm:40 CMP a:char_struct::current_pp_target,X
    case 0xC20F06: cpu.execute_instruction<0xDD>(0x00004C, 3); return true;
    // src/unknown/C2/C21034.asm:41 BEQ @UNKNOWN2
    case 0xC20F09: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C21034.asm:43 LDA #0
    case 0xC20F0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C21034.asm:43 LDA #0
    // Overlapping static entry reached from 0xC20F0B.
    case 0xC20F0D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C21034.asm:44 BRA @UNKNOWN4
    case 0xC20F0E: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C21034.asm:47 LDA @LOCAL00
    case 0xC20F10: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:48 INC
    case 0xC20F12: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C21034.asm:49 STA @LOCAL00
    case 0xC20F13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20F15: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C21034.asm:57 AND #$00FF
    case 0xC20F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C21034.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC20F18.
    case 0xC20F1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C21034.asm:58 STA @VIRTUAL02
    case 0xC20F1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C21034.asm:60 LDA @LOCAL00
    case 0xC20F1D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C21034.asm:64 CMP @VIRTUAL02
    case 0xC20F1F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C21034.asm:65 BCC @UNKNOWN0
    case 0xC20F21: cpu.execute_instruction<0x90>(0x0000B6, 2); return true;
    // src/unknown/C2/C21034.asm:66 LDA #1
    case 0xC20F23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C21034.asm:66 LDA #1
    // Overlapping static entry reached from 0xC20F23.
    case 0xC20F25: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C21034.asm:68 END_C_FUNCTION
    case 0xC20F26: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C21034.asm:68 END_C_FUNCTION
    case 0xC20F27: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2108C.asm (unresolved).
bool execute_unresolved_c2_c2108c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2108C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20F28: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C2108C.asm:6 JSL UNKNOWN_C21034
    case 0xC20F2A: cpu.execute_instruction<0x22>(0xC20ECA, 4); return true;
    // src/unknown/C2/C2108C.asm:7 CMP #0
    case 0xC20F2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2108C.asm:7 CMP #0
    // Overlapping static entry reached from 0xC20F2E.
    case 0xC20F30: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2108C.asm:8 BEQ @UNKNOWN0
    case 0xC20F31: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2108C.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC20F33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2108C.asm:10 STZ FASTEST_HPPP_METER_SPEED
    case 0xC20F35: cpu.execute_instruction<0x9C>(0x00994A, 3); return true;
    // src/unknown/C2/C2108C.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC20F38: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2108C.asm:13 END_C_FUNCTION
    case 0xC20F3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C216AD.asm (unresolved).
bool execute_unresolved_c2_c216ad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C216AD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21555: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC21557: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC21558: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC21559: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC2155A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2155A.
    case 0xC2155C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC2155D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C216AD.asm:7 END_STACK_VARS
    case 0xC2155E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:8 TAX
    case 0xC2155F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:9 STX @LOCAL00
    case 0xC21560: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C216AD.asm:10 TXA
    case 0xC21562: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C216AD.asm:11 JSL CHANGE_MUSIC
    case 0xC21563: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C2/C216AD.asm:12 LDX @LOCAL00
    case 0xC21567: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C216AD.asm:13 STX CURRENT_MAP_MUSIC_TRACK
    case 0xC21569: cpu.execute_instruction<0x8E>(0x00615A, 3); return true;
    // src/unknown/C2/C216AD.asm:14 STX NEXT_MAP_MUSIC_TRACK
    case 0xC2156C: cpu.execute_instruction<0x8E>(0x00615C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C216AD.asm:15 END_C_FUNCTION
    case 0xC2156F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C216AD.asm:15 END_C_FUNCTION
    case 0xC21570: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C216DB.asm (unresolved).
bool execute_unresolved_c2_c216db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C216DB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21583: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC21585: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC21586: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC21587: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC21587.
    case 0xC21589: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C216DB.asm:11 END_STACK_VARS
    case 0xC2158A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC2158B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:13 STZ @LOCAL05
    case 0xC2158D: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:14 STZ @LOCAL04
    case 0xC2158F: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:15 JMP @UNKNOWN9
    case 0xC21591: cpu.execute_instruction<0x4C>(0x001684, 3); return true;
    // src/unknown/C2/C216DB.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC21594: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:18 LDA @LOCAL04
    case 0xC21596: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:19 AND #$00FF
    case 0xC21598: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC21598.
    case 0xC2159A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:21 CLC
    case 0xC2159B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC2159C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C216DB.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2159C.
    case 0xC2159E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:23 TAX
    case 0xC2159F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:24 LDA a:game_state::party_members,X
    case 0xC215A0: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C2/C216DB.asm:29 AND #$00FF
    case 0xC215A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC215A3.
    case 0xC215A5: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C216DB.asm:30 DEC
    case 0xC215A6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC215A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C216DB.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC215A7.
    case 0xC215A9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:32 JSL MULT168
    case 0xC215AA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C216DB.asm:33 CLC
    case 0xC215AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC215AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C2/C216DB.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC215AF.
    case 0xC215B1: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C2/C216DB.asm:35 TAX
    case 0xC215B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:36 STX @LOCAL03
    case 0xC215B3: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C2/C216DB.asm:36 STX @LOCAL03
    // Overlapping static entry reached from 0xC215B1.
    case 0xC215B4: cpu.execute_instruction<0x15>(0x0000E2, 2); return true;
    // src/unknown/C2/C216DB.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC215B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:37 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC215B4.
    case 0xC215B6: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C2/C216DB.asm:38 LDA #0
    case 0xC215B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C2/C216DB.asm:39 STA @VIRTUAL01
    case 0xC215B9: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:39 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC215B7.
    case 0xC215BA: cpu.execute_instruction<0x01>(0x00004C, 2); return true;
    // src/unknown/C2/C216DB.asm:40 JMP @UNKNOWN5
    case 0xC215BB: cpu.execute_instruction<0x4C>(0x00164D, 3); return true;
    // src/unknown/C2/C216DB.asm:40 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC215BA.
    case 0xC215BC: cpu.execute_instruction<0x4D>(0x00A916, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC215BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC215BC.
    case 0xC215BF: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC215BE.
    case 0xC215C0: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC215C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC215C0.
    case 0xC215C2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC215C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC215C2.
    case 0xC215C4: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC215C3.
    case 0xC215C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C216DB.asm:43 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC215C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC215C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC215CA: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC215CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:44 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC215CE: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C216DB.asm:45 LDA @VIRTUAL00
    case 0xC215D0: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:46 AND #$00FF
    case 0xC215D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC215D2.
    case 0xC215D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215D5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215D8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC215DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:48 STA @LOCAL01
    case 0xC215DD: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C216DB.asm:49 CLC
    case 0xC215DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:50 ADC #item::type
    case 0xC215E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C2/C216DB.asm:50 ADC #item::type
    // Overlapping static entry reached from 0xC215E0.
    case 0xC215E2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC215E3: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC215E5: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC215E7: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:51 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC215E9: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C2/C216DB.asm:52 CLC
    case 0xC215EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:53 ADC @VIRTUAL0A
    case 0xC215EC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:54 STA @VIRTUAL0A
    case 0xC215EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:55 LDA [@VIRTUAL0A]
    case 0xC215F0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C216DB.asm:56 AND #$00FF
    case 0xC215F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC215F2.
    case 0xC215F4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C216DB.asm:57 CMP #4
    case 0xC215F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C216DB.asm:57 CMP #4
    // Overlapping static entry reached from 0xC215F5.
    case 0xC215F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C216DB.asm:58 BNE @UNKNOWN4
    case 0xC215F8: cpu.execute_instruction<0xD0>(0x00004F, 2); return true;
    // src/unknown/C2/C216DB.asm:59 LDA @LOCAL05
    case 0xC215FA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:60 AND #$00FF
    case 0xC215FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC215FC.
    case 0xC215FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C216DB.asm:61 BEQ @UNKNOWN3
    case 0xC215FF: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C2/C216DB.asm:62 LDA @LOCAL01
    case 0xC21601: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C2/C216DB.asm:63 CLC
    case 0xC21603: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:64 ADC #item::params + item_parameters::ep
    case 0xC21604: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C2/C216DB.asm:64 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21604.
    case 0xC21606: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:65 CLC
    case 0xC21607: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:66 ADC @VIRTUAL06
    case 0xC21608: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:67 STA @VIRTUAL06
    case 0xC2160A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC2160C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:69 LDA [@VIRTUAL06]
    case 0xC2160E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:70 STA @VIRTUAL00
    case 0xC21610: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC21612: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:72 LDA @LOCAL05
    case 0xC21614: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:73 AND #$00FF
    case 0xC21616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC21616.
    case 0xC21618: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21619: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2161B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2161C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2161E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2161F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21620: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:75 CLC
    case 0xC21621: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:76 ADC #item::params + item_parameters::ep
    case 0xC21622: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C2/C216DB.asm:76 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC21622.
    case 0xC21624: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC21625: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC21627: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC21629: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C216DB.asm:77 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC2162B: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:78 CLC
    case 0xC2162D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:79 ADC @VIRTUAL06
    case 0xC2162E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:80 STA @VIRTUAL06
    case 0xC21630: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC21632: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:82 LDA [@VIRTUAL06]
    case 0xC21634: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:83 CLC
    case 0xC21636: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:84 SBC @VIRTUAL00
    case 0xC21637: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC21639: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2163B: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2163D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C216DB.asm:85 BRANCHLTEQS @UNKNOWN4
    case 0xC2163F: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC21641: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:88 LDA @LOCAL00
    case 0xC21643: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:89 STA @VIRTUAL00
    case 0xC21645: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:90 STA @LOCAL05
    case 0xC21647: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC21649: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:93 INC @VIRTUAL01
    case 0xC2164B: cpu.execute_instruction<0xE6>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC2164D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:96 LDA @VIRTUAL01
    case 0xC2164F: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C2/C216DB.asm:97 AND #$00FF
    case 0xC21651: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC21651.
    case 0xC21653: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C216DB.asm:98 STA @VIRTUAL02
    case 0xC21654: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C216DB.asm:99 LDA #14
    case 0xC21656: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C2/C216DB.asm:99 LDA #14
    // Overlapping static entry reached from 0xC21656.
    case 0xC21658: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:100 CLC
    case 0xC21659: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:101 SBC @VIRTUAL02
    case 0xC2165A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC2165C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC2165E: cpu.execute_instruction<0x10>(0x000020, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC21660: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C216DB.asm:102 BRANCHLTEQS @UNKNOWN8
    case 0xC21662: cpu.execute_instruction<0x30>(0x00001C, 2); return true;
    // src/unknown/C2/C216DB.asm:103 LDX @LOCAL03
    case 0xC21664: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C2/C216DB.asm:104 TXA
    case 0xC21666: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:105 CLC
    case 0xC21667: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:106 ADC @VIRTUAL02
    case 0xC21668: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C216DB.asm:107 TAX
    case 0xC2166A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC2166B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:109 LDA a:char_struct::items,X
    case 0xC2166D: cpu.execute_instruction<0xBD>(0x000022, 3); return true;
    // src/unknown/C2/C216DB.asm:110 STA @VIRTUAL00
    case 0xC21670: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:111 STA @LOCAL00
    case 0xC21672: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC21674: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:113 LDA @VIRTUAL00
    case 0xC21676: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:114 AND #$00FF
    case 0xC21678: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC21678.
    case 0xC2167A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C216DB.asm:115 BNEL @UNKNOWN1
    case 0xC2167B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C216DB.asm:115 BNEL @UNKNOWN1
    case 0xC2167D: cpu.execute_instruction<0x4C>(0x0015BE, 3); return true;
    // src/unknown/C2/C216DB.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC21680: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:118 INC @LOCAL04
    case 0xC21682: cpu.execute_instruction<0xE6>(0x000017, 2); return true;
    // src/unknown/C2/C216DB.asm:120 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC21684: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C216DB.asm:121 CMP @LOCAL04
    case 0xC21687: cpu.execute_instruction<0xC5>(0x000017, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC21689: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC2168B: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C2/C216DB.asm:122 BGTL @UNKNOWN0
    case 0xC2168D: cpu.execute_instruction<0x4C>(0x001594, 3); return true;
    // src/unknown/C2/C216DB.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC21690: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:124 LDA @LOCAL05
    case 0xC21692: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:125 AND #$00FF
    case 0xC21694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC21694.
    case 0xC21696: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C216DB.asm:126 BEQ @UNKNOWN11
    case 0xC21697: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC21699: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC21699.
    case 0xC2169B: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2169C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2169B.
    case 0xC2169D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2169E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2169D.
    case 0xC2169F: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2169E.
    case 0xC216A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C216DB.asm:127 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC216A1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C216DB.asm:128 LDA @LOCAL05
    case 0xC216A3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:129 AND #$00FF
    case 0xC216A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC216A5.
    case 0xC216A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216A8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216AB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C2/C216DB.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC216AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:131 CLC
    case 0xC216B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:132 ADC #item::params + item_parameters::strength
    case 0xC216B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C2/C216DB.asm:132 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC216B1.
    case 0xC216B3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C216DB.asm:133 CLC
    case 0xC216B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:134 ADC @VIRTUAL06
    case 0xC216B5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:135 STA @VIRTUAL06
    case 0xC216B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC216B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:137 LDA [@VIRTUAL06]
    case 0xC216BB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:138 REP #PROC_FLAGS::ACCUM8
    case 0xC216BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:139 SEC
    case 0xC216BF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:140 AND #$00FF
    case 0xC216C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC216C0.
    case 0xC216C2: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C216DB.asm:141 SBC #$0080
    case 0xC216C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C216DB.asm:141 SBC #$0080
    // Overlapping static entry reached from 0xC216C3.
    case 0xC216C5: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C216DB.asm:142 EOR #$FF80
    case 0xC216C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C216DB.asm:142 EOR #$FF80
    // Overlapping static entry reached from 0xC216C6.
    case 0xC216C8: cpu.execute_instruction<0xFF>(0x223B22, 4); return true;
    // src/unknown/C2/C216DB.asm:143 JSL UNKNOWN_C2239D
    case 0xC216C9: cpu.execute_instruction<0x22>(0xC2223B, 4); return true;
    // src/unknown/C2/C216DB.asm:143 JSL UNKNOWN_C2239D
    // Overlapping static entry reached from 0xC216C8.
    case 0xC216CC: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    case 0xC216CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    // Overlapping static entry reached from 0xC216CC.
    case 0xC216CE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C216DB.asm:144 CMP #$0000
    // Overlapping static entry reached from 0xC216CD.
    case 0xC216CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C216DB.asm:145 BNE @UNKNOWN12
    case 0xC216D0: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/unknown/C2/C216DB.asm:146 LDA #PARTY_MEMBER::TEDDY_BEAR
    case 0xC216D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C216DB.asm:146 LDA #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC216D2.
    case 0xC216D4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:147 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC216D5: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C216DB.asm:148 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC216D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/unknown/C2/C216DB.asm:148 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC216D9.
    case 0xC216DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:149 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC216DC: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C216DB.asm:150 SEP #PROC_FLAGS::ACCUM8
    case 0xC216E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:151 LDA [@VIRTUAL06]
    case 0xC216E2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C216DB.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC216E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C216DB.asm:153 SEC
    case 0xC216E6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C216DB.asm:154 AND #$00FF
    case 0xC216E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C216DB.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC216E7.
    case 0xC216E9: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C216DB.asm:155 SBC #$0080
    case 0xC216EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C216DB.asm:155 SBC #$0080
    // Overlapping static entry reached from 0xC216EA.
    case 0xC216EC: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C216DB.asm:156 EOR #$FF80
    case 0xC216ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C216DB.asm:156 EOR #$FF80
    // Overlapping static entry reached from 0xC216ED.
    case 0xC216EF: cpu.execute_instruction<0xFF>(0x27C422, 4); return true;
    // src/unknown/C2/C216DB.asm:157 JSL ADD_CHAR_TO_PARTY
    case 0xC216F0: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/C2/C216DB.asm:157 JSL ADD_CHAR_TO_PARTY
    // Overlapping static entry reached from 0xC216EF.
    case 0xC216F3: cpu.execute_instruction<0xC2>(0x000080, 2); return true;
    // src/unknown/C2/C216DB.asm:158 BRA @UNKNOWN12
    case 0xC216F4: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C216DB.asm:158 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC216F3.
    case 0xC216F5: cpu.execute_instruction<0x0E>(0x0010A9, 3); return true;
    // src/unknown/C2/C216DB.asm:160 LDA #PARTY_MEMBER::TEDDY_BEAR
    case 0xC216F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C2/C216DB.asm:160 LDA #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC216F6.
    case 0xC216F8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:161 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC216F9: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C216DB.asm:162 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC216FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/unknown/C2/C216DB.asm:162 LDA #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC216FD.
    case 0xC216FF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C216DB.asm:163 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC21700: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C216DB.asm:165 END_C_FUNCTION
    case 0xC21704: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C216DB.asm:165 END_C_FUNCTION
    case 0xC21705: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22351.asm (unresolved).
bool execute_unresolved_c2_c22351_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22351.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC221EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC221F4.
    case 0xC221F6: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22351.asm:9 END_STACK_VARS
    case 0xC221F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:10 TAX
    case 0xC221F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:11 DEX
    case 0xC221FA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:12 STX @LOCAL01
    case 0xC221FB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C22351.asm:13 LDA #0
    case 0xC221FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C22351.asm:13 LDA #0
    // Overlapping static entry reached from 0xC221FD.
    case 0xC221FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22351.asm:14 STA @LOCAL00
    case 0xC22200: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:15 BRA @UNKNOWN1
    case 0xC22202: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C2/C22351.asm:17 LDA @LOCAL00
    case 0xC22204: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:18 INC
    case 0xC22206: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:19 STA @LOCAL00
    case 0xC22207: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:21 STA @VIRTUAL02
    case 0xC22209: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:22 LDA #14
    case 0xC2220B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C2/C22351.asm:22 LDA #14
    // Overlapping static entry reached from 0xC2220B.
    case 0xC2220D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C22351.asm:23 CLC
    case 0xC2220E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:24 SBC @VIRTUAL02
    case 0xC2220F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22211: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22213: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22215: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C22351.asm:25 BRANCHLTEQS @UNKNOWN4
    case 0xC22217: cpu.execute_instruction<0x30>(0x00001E, 2); return true;
    // src/unknown/C2/C22351.asm:26 LDA @LOCAL00
    case 0xC22219: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22351.asm:27 STA @VIRTUAL02
    case 0xC2221B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:28 LDX @LOCAL01
    case 0xC2221D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C22351.asm:29 TXA
    case 0xC2221F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC22220: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22351.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22220.
    case 0xC22222: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22351.asm:31 JSL MULT168
    case 0xC22223: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22351.asm:32 CLC
    case 0xC22227: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC22228: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C2/C22351.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC22228.
    case 0xC2222A: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C2/C22351.asm:34 CLC
    case 0xC2222B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:35 ADC @VIRTUAL02
    case 0xC2222C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22351.asm:35 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2222A.
    case 0xC2222D: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22351.asm:36 TAX
    case 0xC2222E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22351.asm:37 LDA __BSS_START__,X
    case 0xC2222F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22351.asm:38 AND #$00FF
    case 0xC22232: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22351.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC22232.
    case 0xC22234: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22351.asm:39 BNE @UNKNOWN0
    case 0xC22235: cpu.execute_instruction<0xD0>(0x0000CD, 2); return true;
    // src/unknown/C2/C22351.asm:41 LDA @LOCAL00
    case 0xC22237: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22351.asm:42 END_C_FUNCTION
    case 0xC22239: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22351.asm:42 END_C_FUNCTION
    case 0xC2223A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2239D.asm (unresolved).
bool execute_unresolved_c2_c2239d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2239D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2223B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC2223D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC2223E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC2223F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC22240: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22240.
    case 0xC22242: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC22243: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2239D.asm:8 END_STACK_VARS
    case 0xC22244: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:10 STA @VIRTUAL02
    case 0xC22245: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC22242.
    case 0xC22246: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C2/C2239D.asm:11 LDA #0
    case 0xC22247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2239D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC22247.
    case 0xC22249: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2239D.asm:12 STA @LOCAL00
    case 0xC2224A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:13 BRA @UNKNOWN2
    case 0xC2224C: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C2239D.asm:15 LDA @LOCAL00
    case 0xC2224E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:16 CLC
    case 0xC22250: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC22251: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C2239D.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC22251.
    case 0xC22253: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:18 TAX
    case 0xC22254: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:19 LDA a:game_state::party_members,X
    case 0xC22255: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C2/C2239D.asm:20 AND #$00FF
    case 0xC22258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2239D.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC22258.
    case 0xC2225A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C2239D.asm:21 CMP @VIRTUAL02
    case 0xC2225B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:22 BNE @UNKNOWN1
    case 0xC2225D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C2239D.asm:23 LDA @VIRTUAL02
    case 0xC2225F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2239D.asm:24 BRA @UNKNOWN5
    case 0xC22261: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C2/C2239D.asm:26 LDA @LOCAL00
    case 0xC22263: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:27 INC
    case 0xC22265: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:28 STA @LOCAL00
    case 0xC22266: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2239D.asm:30 STA @VIRTUAL04
    case 0xC22268: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2239D.asm:31 LDA GAME_STATE+game_state::party_count
    case 0xC2226A: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C2/C2239D.asm:32 AND #$00FF
    case 0xC2226D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2239D.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC2226D.
    case 0xC2226F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2239D.asm:33 CLC
    case 0xC22270: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2239D.asm:34 SBC @VIRTUAL04
    case 0xC22271: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C2/C2239D.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC22273: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C2/C2239D.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC22275: cpu.execute_instruction<0x10>(0x0000D7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C2/C2239D.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC22277: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C2/C2239D.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC22279: cpu.execute_instruction<0x30>(0x0000D3, 2); return true;
    // src/unknown/C2/C2239D.asm:36 LDA #0
    case 0xC2227B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2239D.asm:36 LDA #0
    // Overlapping static entry reached from 0xC2227B.
    case 0xC2227D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2239D.asm:62 END_C_FUNCTION
    case 0xC2227E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2239D.asm:62 END_C_FUNCTION
    case 0xC2227F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C223D9.asm (unresolved).
bool execute_unresolved_c2_c223d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C223D9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22280: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22282: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22283: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22284: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22285: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22285.
    case 0xC22287: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22288: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C223D9.asm:9 END_STACK_VARS
    case 0xC22289: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:10 STX @VIRTUAL02
    case 0xC2228A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC22287.
    case 0xC2228B: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C223D9.asm:11 TAY
    case 0xC2228C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:12 LDA __BSS_START__,Y
    case 0xC2228D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:13 AND #$00FF
    case 0xC22290: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC22290.
    case 0xC22292: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C223D9.asm:14 BEQ @UNKNOWN0
    case 0xC22293: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C223D9.asm:15 LDA #0
    case 0xC22295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC22295.
    case 0xC22297: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:16 STA @LOCAL00
    case 0xC22298: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:17 BRA @UNKNOWN5
    case 0xC2229A: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C2/C223D9.asm:19 TYX
    case 0xC2229C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:20 INX
    case 0xC2229D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:21 INX
    case 0xC2229E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:22 INX
    case 0xC2229F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:23 LDA __BSS_START__,X
    case 0xC222A0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:24 AND #$00FF
    case 0xC222A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC222A3.
    case 0xC222A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C223D9.asm:25 BEQ @UNKNOWN1
    case 0xC222A6: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C223D9.asm:26 TXY
    case 0xC222A8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:27 LDA #3
    case 0xC222A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C223D9.asm:27 LDA #3
    // Overlapping static entry reached from 0xC222A9.
    case 0xC222AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:28 STA @LOCAL00
    case 0xC222AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:29 BRA @UNKNOWN5
    case 0xC222AE: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C223D9.asm:31 INY
    case 0xC222B0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:32 LDA #1
    case 0xC222B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C223D9.asm:32 LDA #1
    // Overlapping static entry reached from 0xC222B1.
    case 0xC222B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C223D9.asm:33 STA @LOCAL00
    case 0xC222B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:34 BRA @UNKNOWN3
    case 0xC222B6: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:36 LDA __BSS_START__,Y
    case 0xC222B8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:37 AND #$00FF
    case 0xC222BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC222BB.
    case 0xC222BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C223D9.asm:38 BNE @UNKNOWN5
    case 0xC222BE: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C2/C223D9.asm:39 LDA @LOCAL00
    case 0xC222C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:40 INC
    case 0xC222C2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:41 STA @LOCAL00
    case 0xC222C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C223D9.asm:42 INY
    case 0xC222C5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:44 CMP #7
    case 0xC222C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C2/C223D9.asm:44 CMP #7
    // Overlapping static entry reached from 0xC222C6.
    case 0xC222C8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C223D9.asm:45 BCC @UNKNOWN2
    case 0xC222C9: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C223D9.asm:46 LDA @VIRTUAL02
    case 0xC222CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:47 BEQ @UNKNOWN4
    case 0xC222CD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C223D9.asm:48 LDA #7
    case 0xC222CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C2/C223D9.asm:48 LDA #7
    // Overlapping static entry reached from 0xC222CF.
    case 0xC222D1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C223D9.asm:49 BRA @UNKNOWN7
    case 0xC222D2: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C2/C223D9.asm:51 LDA #32
    case 0xC222D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C2/C223D9.asm:51 LDA #32
    // Overlapping static entry reached from 0xC222D4.
    case 0xC222D6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C223D9.asm:52 BRA @UNKNOWN7
    case 0xC222D7: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C2/C223D9.asm:54 LDA @VIRTUAL02
    case 0xC222D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:55 BEQ @UNKNOWN6
    case 0xC222DB: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C223D9.asm:56 LDA __BSS_START__,Y
    case 0xC222DD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:57 AND #$00FF
    case 0xC222E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC222E0.
    case 0xC222E2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C223D9.asm:58 DEC
    case 0xC222E3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:59 ASL
    case 0xC222E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:60 STA @VIRTUAL02
    case 0xC222E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:61 LDA @LOCAL00
    case 0xC222E7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222E9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222EC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222EF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:62 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC222F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:63 CLC
    case 0xC222F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:64 ADC @VIRTUAL02
    case 0xC222F3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:65 TAX
    case 0xC222F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:66 LDA f:STATUS_EQUIP_WINDOW_TEXT,X
    case 0xC222F6: cpu.execute_instruction<0xBF>(0xC43806, 4); return true;
    // src/unknown/C2/C223D9.asm:67 BRA @UNKNOWN7
    case 0xC222FA: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C223D9.asm:69 LDA __BSS_START__,Y
    case 0xC222FC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C223D9.asm:70 AND #$00FF
    case 0xC222FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C223D9.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC222FF.
    case 0xC22301: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C223D9.asm:71 DEC
    case 0xC22302: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:72 ASL
    case 0xC22303: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:73 STA @VIRTUAL02
    case 0xC22304: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:74 LDA @LOCAL00
    case 0xC22306: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22308: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2230A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2230B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2230D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2230E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C223D9.asm:75 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22310: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:76 CLC
    case 0xC22311: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:77 ADC @VIRTUAL02
    case 0xC22312: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C223D9.asm:78 TAX
    case 0xC22314: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C223D9.asm:79 LDA f:STATUS_EQUIP_WINDOW_TEXT_2,X
    case 0xC22315: cpu.execute_instruction<0xBF>(0xC43868, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C223D9.asm:81 END_C_FUNCTION
    case 0xC22319: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C223D9.asm:81 END_C_FUNCTION
    case 0xC2231A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22474.asm (unresolved).
bool execute_unresolved_c2_c22474_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22474.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2231B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC2231D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC2231E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC2231F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22320: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22320.
    case 0xC22322: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22323: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22474.asm:8 END_STACK_VARS
    case 0xC22324: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:9 TAY
    case 0xC22325: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:10 LDA __BSS_START__,Y
    case 0xC22326: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:11 AND #$00FF
    case 0xC22329: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC22329.
    case 0xC2232B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C22474.asm:12 BEQ @UNKNOWN0
    case 0xC2232C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C22474.asm:13 LDA #0
    case 0xC2232E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:13 LDA #0
    // Overlapping static entry reached from 0xC2232E.
    case 0xC22330: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:14 STA @LOCAL00
    case 0xC22331: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:15 BRA @UNKNOWN4
    case 0xC22333: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C22474.asm:17 TYX
    case 0xC22335: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:18 INX
    case 0xC22336: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:19 INX
    case 0xC22337: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:20 INX
    case 0xC22338: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:21 LDA __BSS_START__,X
    case 0xC22339: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:22 AND #$00FF
    case 0xC2233C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2233C.
    case 0xC2233E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C22474.asm:23 BEQ @UNKNOWN1
    case 0xC2233F: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C22474.asm:24 TXY
    case 0xC22341: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:25 LDA #3
    case 0xC22342: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C2/C22474.asm:25 LDA #3
    // Overlapping static entry reached from 0xC22342.
    case 0xC22344: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:26 STA @LOCAL00
    case 0xC22345: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:27 BRA @UNKNOWN4
    case 0xC22347: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C2/C22474.asm:29 INY
    case 0xC22349: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:30 LDA #1
    case 0xC2234A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C22474.asm:30 LDA #1
    // Overlapping static entry reached from 0xC2234A.
    case 0xC2234C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22474.asm:31 STA @LOCAL00
    case 0xC2234D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:32 BRA @UNKNOWN3
    case 0xC2234F: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:34 LDA __BSS_START__,Y
    case 0xC22351: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:35 AND #$00FF
    case 0xC22354: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC22354.
    case 0xC22356: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22474.asm:36 BNE @UNKNOWN4
    case 0xC22357: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C2/C22474.asm:37 LDA @LOCAL00
    case 0xC22359: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:38 INC
    case 0xC2235B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:39 STA @LOCAL00
    case 0xC2235C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22474.asm:40 INY
    case 0xC2235E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:42 CMP #7
    case 0xC2235F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C2/C22474.asm:42 CMP #7
    // Overlapping static entry reached from 0xC2235F.
    case 0xC22361: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C22474.asm:43 BCC @UNKNOWN2
    case 0xC22362: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C22474.asm:44 LDA #4
    case 0xC22364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C2/C22474.asm:44 LDA #4
    // Overlapping static entry reached from 0xC22364.
    case 0xC22366: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C22474.asm:45 BRA @UNKNOWN5
    case 0xC22367: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C2/C22474.asm:47 LDA __BSS_START__,Y
    case 0xC22369: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C22474.asm:48 AND #$00FF
    case 0xC2236C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22474.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC2236C.
    case 0xC2236E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C22474.asm:49 DEC
    case 0xC2236F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:50 ASL
    case 0xC22370: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:51 STA @VIRTUAL02
    case 0xC22371: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22474.asm:52 LDA @LOCAL00
    case 0xC22373: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22375: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22377: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC22378: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2237A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2237B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C2/C22474.asm:53 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC2237D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:54 CLC
    case 0xC2237E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:55 ADC @VIRTUAL02
    case 0xC2237F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22474.asm:56 TAX
    case 0xC22381: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22474.asm:57 LDA f:STATUS_EQUIP_WINDOW_TEXT_3,X
    case 0xC22382: cpu.execute_instruction<0xBF>(0xC438CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22474.asm:59 END_C_FUNCTION
    case 0xC22386: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22474.asm:59 END_C_FUNCTION
    case 0xC22387: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22562.asm (unresolved).
bool execute_unresolved_c2_c22562_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22562.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2241D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC2241F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22420: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22421: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22422.
    case 0xC22424: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22425: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22562.asm:7 END_STACK_VARS
    case 0xC22426: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:8 TAX
    case 0xC22427: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:9 CPX #$FFFF
    case 0xC22428: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C22562.asm:9 CPX #$FFFF
    // Overlapping static entry reached from 0xC22428.
    case 0xC2242A: cpu.execute_instruction<0xFF>(0xA203D0, 4); return true;
    // src/unknown/C2/C22562.asm:10 BNE @UNKNOWN0
    case 0xC2242B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    case 0xC2242D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    // Overlapping static entry reached from 0xC2242A.
    case 0xC2242E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22562.asm:11 LDX #0
    // Overlapping static entry reached from 0xC2242D.
    case 0xC2242F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C22562.asm:13 TXA
    case 0xC22430: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC22431: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:15 STA TEMPORARY_WEAPON
    case 0xC22433: cpu.execute_instruction<0x8D>(0x009F7B, 3); return true;
    // src/unknown/C2/C22562.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC22436: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:17 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC22438: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C22562.asm:18 AND #$00FF
    case 0xC2243B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22562.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2243B.
    case 0xC2243D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22562.asm:19 STA @LOCAL00
    case 0xC2243E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22562.asm:20 DEC
    case 0xC22440: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC22441: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22562.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22441.
    case 0xC22443: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22562.asm:22 JSL MULT168
    case 0xC22444: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22562.asm:23 TAX
    case 0xC22448: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22562.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC22449: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:25 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC2244B: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C2/C22562.asm:26 STA TEMPORARY_BODY_GEAR
    case 0xC2244E: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C2/C22562.asm:27 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC22451: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C2/C22562.asm:28 STA TEMPORARY_ARMS_GEAR
    case 0xC22454: cpu.execute_instruction<0x8D>(0x009F7D, 3); return true;
    // src/unknown/C2/C22562.asm:29 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC22457: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C2/C22562.asm:30 STA TEMPORARY_OTHER_GEAR
    case 0xC2245A: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C2/C22562.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC2245D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22562.asm:32 LDA @LOCAL00
    case 0xC2245F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22562.asm:33 JSL UNKNOWN_C1A1D8
    case 0xC22461: cpu.execute_instruction<0x22>(0xC1A129, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22562.asm:34 END_C_FUNCTION
    case 0xC22465: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22562.asm:34 END_C_FUNCTION
    case 0xC22466: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C225AC.asm (unresolved).
bool execute_unresolved_c2_c225ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C225AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22467: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC22469: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC2246A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC2246B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC2246C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2246C.
    case 0xC2246E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC2246F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C225AC.asm:7 END_STACK_VARS
    case 0xC22470: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:8 TAX
    case 0xC22471: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:9 STX @LOCAL00
    case 0xC22472: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC22474: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C225AC.asm:11 AND #$00FF
    case 0xC22477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C225AC.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC22477.
    case 0xC22479: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C225AC.asm:12 DEC
    case 0xC2247A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC2247B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C225AC.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2247B.
    case 0xC2247D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C225AC.asm:14 JSL MULT168
    case 0xC2247E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C225AC.asm:15 TAX
    case 0xC22482: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC22483: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:17 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC22485: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C2/C225AC.asm:18 STA TEMPORARY_WEAPON
    case 0xC22488: cpu.execute_instruction<0x8D>(0x009F7B, 3); return true;
    // src/unknown/C2/C225AC.asm:19 LDX @LOCAL00
    case 0xC2248B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:20 CPX #$FFFF
    case 0xC2248D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C2/C225AC.asm:20 CPX #$FFFF
    // Overlapping static entry reached from 0xC2248D.
    case 0xC2248F: cpu.execute_instruction<0xFF>(0xA203D0, 4); return true;
    // src/unknown/C2/C225AC.asm:21 BNE @UNKNOWN0
    case 0xC22490: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    case 0xC22492: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    // Overlapping static entry reached from 0xC2248F.
    case 0xC22493: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C225AC.asm:22 LDX #0
    // Overlapping static entry reached from 0xC22492.
    case 0xC22494: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C225AC.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC22495: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:25 TXA
    case 0xC22497: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC22498: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:27 STA TEMPORARY_BODY_GEAR
    case 0xC2249A: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C2/C225AC.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2249D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:29 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC2249F: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C225AC.asm:30 AND #$00FF
    case 0xC224A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C225AC.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC224A2.
    case 0xC224A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C225AC.asm:31 STA @LOCAL00
    case 0xC224A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:32 DEC
    case 0xC224A7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC224A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C225AC.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC224A8.
    case 0xC224AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C225AC.asm:34 JSL MULT168
    case 0xC224AB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C225AC.asm:35 TAX
    case 0xC224AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C225AC.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC224B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:37 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC224B2: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C2/C225AC.asm:38 STA TEMPORARY_ARMS_GEAR
    case 0xC224B5: cpu.execute_instruction<0x8D>(0x009F7D, 3); return true;
    // src/unknown/C2/C225AC.asm:39 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC224B8: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C2/C225AC.asm:40 STA TEMPORARY_OTHER_GEAR
    case 0xC224BB: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C2/C225AC.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC224BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C225AC.asm:42 LDA @LOCAL00
    case 0xC224C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C225AC.asm:43 JSL UNKNOWN_C1A1D8
    case 0xC224C2: cpu.execute_instruction<0x22>(0xC1A129, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C225AC.asm:44 END_C_FUNCTION
    case 0xC224C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C225AC.asm:44 END_C_FUNCTION
    case 0xC224C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2260D.asm (unresolved).
bool execute_unresolved_c2_c2260d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2260D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC224C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224CB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224CC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC224CD.
    case 0xC224CF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224D0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2260D.asm:8 END_STACK_VARS
    case 0xC224D1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:9 STA @LOCAL01
    case 0xC224D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2260D.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC224CF.
    case 0xC224D3: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C2/C2260D.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC224D4: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C2260D.asm:10 LDA CHARACTER_FOR_EQUIP_MENU
    // Overlapping static entry reached from 0xC224D3.
    case 0xC224D5: cpu.execute_instruction<0x81>(0x00009F, 2); return true;
    // src/unknown/C2/C2260D.asm:11 AND #$00FF
    case 0xC224D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2260D.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC224D7.
    case 0xC224D9: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2260D.asm:12 DEC
    case 0xC224DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC224DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2260D.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC224DB.
    case 0xC224DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2260D.asm:14 JSL MULT168
    case 0xC224DE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2260D.asm:15 TAX
    case 0xC224E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC224E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:17 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC224E5: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C2/C2260D.asm:18 STA TEMPORARY_WEAPON
    case 0xC224E8: cpu.execute_instruction<0x8D>(0x009F7B, 3); return true;
    // src/unknown/C2/C2260D.asm:19 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC224EB: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C2/C2260D.asm:20 STA TEMPORARY_BODY_GEAR
    case 0xC224EE: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C2/C2260D.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC224F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:22 LDA @LOCAL01
    case 0xC224F3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2260D.asm:23 CMP #$FFFF
    case 0xC224F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2260D.asm:23 CMP #$FFFF
    // Overlapping static entry reached from 0xC224F5.
    case 0xC224F7: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C2/C2260D.asm:24 BNE @UNKNOWN0
    case 0xC224F8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    case 0xC224FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    // Overlapping static entry reached from 0xC224F7.
    case 0xC224FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2260D.asm:25 LDX #0
    // Overlapping static entry reached from 0xC224FA.
    case 0xC224FC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2260D.asm:26 BRA @UNKNOWN1
    case 0xC224FD: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C2/C2260D.asm:28 TAX
    case 0xC224FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:30 TXA
    case 0xC22500: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC22501: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:32 STA TEMPORARY_ARMS_GEAR
    case 0xC22503: cpu.execute_instruction<0x8D>(0x009F7D, 3); return true;
    // src/unknown/C2/C2260D.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC22506: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:34 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC22508: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C2260D.asm:35 AND #$00FF
    case 0xC2250B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2260D.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2250B.
    case 0xC2250D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2260D.asm:36 TAX
    case 0xC2250E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:37 STX @LOCAL00
    case 0xC2250F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2260D.asm:38 TXA
    case 0xC22511: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:39 DEC
    case 0xC22512: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC22513: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2260D.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22513.
    case 0xC22515: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2260D.asm:41 JSL MULT168
    case 0xC22516: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2260D.asm:42 TAX
    case 0xC2251A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC2251B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:44 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2251D: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C2/C2260D.asm:45 STA TEMPORARY_OTHER_GEAR
    case 0xC22520: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C2/C2260D.asm:46 LDX @LOCAL00
    case 0xC22523: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2260D.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC22525: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2260D.asm:48 TXA
    case 0xC22527: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2260D.asm:49 JSL UNKNOWN_C1A1D8
    case 0xC22528: cpu.execute_instruction<0x22>(0xC1A129, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2260D.asm:50 END_C_FUNCTION
    case 0xC2252C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2260D.asm:50 END_C_FUNCTION
    case 0xC2252D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22673.asm (unresolved).
bool execute_unresolved_c2_c22673_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22673.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2252E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22530: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22531: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22532: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22533: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22533.
    case 0xC22535: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22536: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22673.asm:7 END_STACK_VARS
    case 0xC22537: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:8 STA @LOCAL00
    case 0xC22538: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22673.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC22535.
    case 0xC22539: cpu.execute_instruction<0x0E>(0x0081AD, 3); return true;
    // src/unknown/C2/C22673.asm:9 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC2253A: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C22673.asm:9 LDA CHARACTER_FOR_EQUIP_MENU
    // Overlapping static entry reached from 0xC22539.
    case 0xC2253C: cpu.execute_instruction<0x9F>(0x00FF29, 4); return true;
    // src/unknown/C2/C22673.asm:10 AND #$00FF
    case 0xC2253D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22673.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2253D.
    case 0xC2253F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C22673.asm:11 DEC
    case 0xC22540: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC22541: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22673.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22541.
    case 0xC22543: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22673.asm:13 JSL MULT168
    case 0xC22544: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22673.asm:14 TAX
    case 0xC22548: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC22549: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC2254B: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C2/C22673.asm:17 STA TEMPORARY_WEAPON
    case 0xC2254E: cpu.execute_instruction<0x8D>(0x009F7B, 3); return true;
    // src/unknown/C2/C22673.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC22551: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C2/C22673.asm:19 STA TEMPORARY_BODY_GEAR
    case 0xC22554: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C2/C22673.asm:20 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC22557: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C2/C22673.asm:21 STA TEMPORARY_ARMS_GEAR
    case 0xC2255A: cpu.execute_instruction<0x8D>(0x009F7D, 3); return true;
    // src/unknown/C2/C22673.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC2255D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:23 LDA @LOCAL00
    case 0xC2255F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22673.asm:24 CMP #$FFFF
    case 0xC22561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C22673.asm:24 CMP #$FFFF
    // Overlapping static entry reached from 0xC22561.
    case 0xC22563: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C2/C22673.asm:25 BNE @UNKNOWN0
    case 0xC22564: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    case 0xC22566: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    // Overlapping static entry reached from 0xC22563.
    case 0xC22567: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22673.asm:26 LDX #0
    // Overlapping static entry reached from 0xC22566.
    case 0xC22568: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C22673.asm:27 BRA @UNKNOWN1
    case 0xC22569: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C2/C22673.asm:29 TAX
    case 0xC2256B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:31 TXA
    case 0xC2256C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22673.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC2256D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:33 STA TEMPORARY_OTHER_GEAR
    case 0xC2256F: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C2/C22673.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC22572: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22673.asm:35 LDA CHARACTER_FOR_EQUIP_MENU
    case 0xC22574: cpu.execute_instruction<0xAD>(0x009F81, 3); return true;
    // src/unknown/C2/C22673.asm:36 AND #$00FF
    case 0xC22577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22673.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC22577.
    case 0xC22579: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22673.asm:37 JSL UNKNOWN_C1A1D8
    case 0xC2257A: cpu.execute_instruction<0x22>(0xC1A129, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22673.asm:38 END_C_FUNCTION
    case 0xC2257E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22673.asm:38 END_C_FUNCTION
    case 0xC2257F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226C5.asm (unresolved).
bool execute_unresolved_c2_c226c5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226C5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22580: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22582: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22583: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22584: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22585.
    case 0xC22587: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22588: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C226C5.asm:8 END_STACK_VARS
    case 0xC22589: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:9 TAX
    case 0xC2258A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:10 LDA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC2258B: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/C2/C226C5.asm:11 JSL SET_EVENT_FLAG
    case 0xC2258E: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/unknown/C2/C226C5.asm:12 TAX
    case 0xC22592: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226C5.asm:13 STX @LOCAL00
    case 0xC22593: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C226C5.asm:14 LDA INTERACTING_NPC_ENTITY
    case 0xC22595: cpu.execute_instruction<0xAD>(0x0060EA, 3); return true;
    // src/unknown/C2/C226C5.asm:15 JSL UNKNOWN_C0C30C
    case 0xC22598: cpu.execute_instruction<0x22>(0xC0C2EE, 4); return true;
    // src/unknown/C2/C226C5.asm:16 LDX @LOCAL00
    case 0xC2259C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C226C5.asm:17 TXA
    case 0xC2259E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C226C5.asm:18 END_C_FUNCTION
    case 0xC2259F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226C5.asm:18 END_C_FUNCTION
    case 0xC225A0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226E6.asm (unresolved).
bool execute_unresolved_c2_c226e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC225A1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C226E6.asm:6 LDA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC225A3: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/C2/C226E6.asm:7 JSL GET_EVENT_FLAG
    case 0xC225A6: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226E6.asm:8 END_C_FUNCTION
    case 0xC225AA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C226F0.asm (unresolved).
bool execute_unresolved_c2_c226f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C226F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC225AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC225AD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC225AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC225AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC225AF.
    case 0xC225B1: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C226F0.asm:7 END_STACK_VARS
    case 0xC225B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:8 LDA #0
    case 0xC225B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C226F0.asm:8 LDA #0
    // Overlapping static entry reached from 0xC225B3.
    case 0xC225B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C226F0.asm:9 STA @LOCAL00
    case 0xC225B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:10 BRA @UNKNOWN1
    case 0xC225B8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C2/C226F0.asm:12 INC
    case 0xC225BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:13 STA @LOCAL00
    case 0xC225BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:16 CLC
    case 0xC225BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC225BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C226F0.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC225BE.
    case 0xC225C0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:18 TAX
    case 0xC225C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:19 LDA a:game_state::unknown96,X
    case 0xC225C2: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C2/C226F0.asm:24 AND #$00FF
    case 0xC225C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC225C5.
    case 0xC225C7: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C226F0.asm:25 DEC
    case 0xC225C8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:26 LDY #.SIZEOF(char_struct)
    case 0xC225C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C226F0.asm:26 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC225C9.
    case 0xC225CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C226F0.asm:27 JSL MULT168
    case 0xC225CC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C226F0.asm:28 TAX
    case 0xC225D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C226F0.asm:29 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC225D1: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/unknown/C2/C226F0.asm:30 AND #$00FF
    case 0xC225D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC225D4.
    case 0xC225D6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C226F0.asm:31 CMP #1
    case 0xC225D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C226F0.asm:31 CMP #1
    // Overlapping static entry reached from 0xC225D7.
    case 0xC225D9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C226F0.asm:32 BEQ @UNKNOWN2
    case 0xC225DA: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:33 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC225DC: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C226F0.asm:34 AND #$00FF
    case 0xC225DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C226F0.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC225DF.
    case 0xC225E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C226F0.asm:35 STA @VIRTUAL02
    case 0xC225E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C226F0.asm:36 LDA @LOCAL00
    case 0xC225E4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C226F0.asm:37 CMP @VIRTUAL02
    case 0xC225E6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C226F0.asm:38 BCC @UNKNOWN0
    case 0xC225E8: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // src/unknown/C2/C226F0.asm:40 LDA @LOCAL00
    case 0xC225EA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C226F0.asm:41 END_C_FUNCTION
    case 0xC225EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C226F0.asm:41 END_C_FUNCTION
    case 0xC225ED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2272F.asm (unresolved).
bool execute_unresolved_c2_c2272f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2272F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC225EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC225F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC225F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC225F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC225F2.
    case 0xC225F4: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2272F.asm:8 END_STACK_VARS
    case 0xC225F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:10 LDY #0
    case 0xC225F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2272F.asm:10 LDY #0
    // Overlapping static entry reached from 0xC225F6.
    case 0xC225F8: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2272F.asm:11 STY @LOCAL01
    case 0xC225F9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:12 TYA
    case 0xC225FB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:13 STA @LOCAL00
    case 0xC225FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:20 BRA @UNKNOWN2
    case 0xC225FE: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C2/C2272F.asm:23 CLC
    case 0xC22600: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC22601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C2272F.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC22601.
    case 0xC22603: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:25 TAX
    case 0xC22604: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:26 LDA a:game_state::unknown96,X
    case 0xC22605: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C2/C2272F.asm:30 AND #$00FF
    case 0xC22608: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC22608.
    case 0xC2260A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2272F.asm:31 DEC
    case 0xC2260B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC2260C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2272F.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2260C.
    case 0xC2260E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2272F.asm:33 JSL MULT168
    case 0xC2260F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2272F.asm:34 TAX
    case 0xC22613: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:35 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC22614: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/unknown/C2/C2272F.asm:36 AND #$00FF
    case 0xC22617: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC22617.
    case 0xC22619: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2272F.asm:37 TAX
    case 0xC2261A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:38 CPX #1
    case 0xC2261B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2272F.asm:38 CPX #1
    // Overlapping static entry reached from 0xC2261B.
    case 0xC2261D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2272F.asm:39 BEQ @UNKNOWN1
    case 0xC2261E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2272F.asm:40 CPX #2
    case 0xC22620: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2272F.asm:40 CPX #2
    // Overlapping static entry reached from 0xC22620.
    case 0xC22622: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2272F.asm:41 BEQ @UNKNOWN1
    case 0xC22623: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2272F.asm:43 LDY @LOCAL01
    case 0xC22625: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:44 INY
    case 0xC22627: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:45 STY @LOCAL01
    case 0xC22628: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:53 LDA @LOCAL00
    case 0xC2262A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:54 INC
    case 0xC2262C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:55 STA @LOCAL00
    case 0xC2262D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:62 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC2262F: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C2272F.asm:63 AND #$00FF
    case 0xC22632: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2272F.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC22632.
    case 0xC22634: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2272F.asm:64 STA @VIRTUAL02
    case 0xC22635: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2272F.asm:66 LDA @LOCAL00
    case 0xC22637: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2272F.asm:70 CMP @VIRTUAL02
    case 0xC22639: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2272F.asm:71 BCC @UNKNOWN0
    case 0xC2263B: cpu.execute_instruction<0x90>(0x0000C3, 2); return true;
    // src/unknown/C2/C2272F.asm:73 LDY @LOCAL01
    case 0xC2263D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2272F.asm:74 TYA
    case 0xC2263F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:78 PLD
    case 0xC22640: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C2/C2272F.asm:79 RTL
    case 0xC22641: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2277C.asm (unresolved).
bool execute_unresolved_c2_c2277c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2277C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22642: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22644: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22645: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22646: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22646.
    case 0xC22648: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2277C.asm:8 END_STACK_VARS
    case 0xC22649: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:9 LDY #0
    case 0xC2264A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2277C.asm:9 LDY #0
    // Overlapping static entry reached from 0xC2264A.
    case 0xC2264C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2277C.asm:10 STY @LOCAL01
    case 0xC2264D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:11 BRA @UNKNOWN2
    case 0xC2264F: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C2/C2277C.asm:14 TYA
    case 0xC22651: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:15 CLC
    case 0xC22652: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC22653: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C2277C.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC22653.
    case 0xC22655: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:17 TAX
    case 0xC22656: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:18 LDA a:game_state::unknown96,X
    case 0xC22657: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C2/C2277C.asm:22 AND #$00FF
    case 0xC2265A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2265A.
    case 0xC2265C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2277C.asm:23 STA @LOCAL00
    case 0xC2265D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2277C.asm:24 DEC
    case 0xC2265F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC22660: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2277C.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22660.
    case 0xC22662: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2277C.asm:26 JSL MULT168
    case 0xC22663: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2277C.asm:27 TAX
    case 0xC22667: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:28 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC22668: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/unknown/C2/C2277C.asm:29 AND #$00FF
    case 0xC2266B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2266B.
    case 0xC2266D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2277C.asm:30 TAX
    case 0xC2266E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:31 CPX #1
    case 0xC2266F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2277C.asm:31 CPX #1
    // Overlapping static entry reached from 0xC2266F.
    case 0xC22671: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2277C.asm:32 BEQ @UNKNOWN1
    case 0xC22672: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2277C.asm:33 CPX #2
    case 0xC22674: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2277C.asm:33 CPX #2
    // Overlapping static entry reached from 0xC22674.
    case 0xC22676: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2277C.asm:34 BEQ @UNKNOWN1
    case 0xC22677: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2277C.asm:35 LDA @LOCAL00
    case 0xC22679: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2277C.asm:36 BRA @UNKNOWN3
    case 0xC2267B: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C2277C.asm:38 LDY @LOCAL01
    case 0xC2267D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:39 INY
    case 0xC2267F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:40 STY @LOCAL01
    case 0xC22680: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C2/C2277C.asm:42 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC22682: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C2/C2277C.asm:43 AND #$00FF
    case 0xC22685: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2277C.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC22685.
    case 0xC22687: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2277C.asm:44 STA @VIRTUAL02
    case 0xC22688: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2277C.asm:45 TYA
    case 0xC2268A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2277C.asm:46 CMP @VIRTUAL02
    case 0xC2268B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C2277C.asm:47 BCC @UNKNOWN0
    case 0xC2268D: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/unknown/C2/C2277C.asm:48 LDA #0
    case 0xC2268F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2277C.asm:48 LDA #0
    // Overlapping static entry reached from 0xC2268F.
    case 0xC22691: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2277C.asm:50 END_C_FUNCTION
    case 0xC22692: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2277C.asm:50 END_C_FUNCTION
    case 0xC22693: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C22A3A.asm (unresolved).
bool execute_unresolved_c2_c22a3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C22A3A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2295F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22961: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22962: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22963: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22964: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC22964.
    case 0xC22966: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22967: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C22A3A.asm:16 END_STACK_VARS
    case 0xC22968: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:17 STY @LOCAL07
    case 0xC22969: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:17 STY @LOCAL07
    // Overlapping static entry reached from 0xC22966.
    case 0xC2296A: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:18 STA @VIRTUAL02
    case 0xC2296B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:19 STA @LOCAL06
    case 0xC2296D: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:20 TXA
    case 0xC2296F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:21 DEC
    case 0xC22970: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:22 STA @VIRTUAL04
    case 0xC22971: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:23 TYA
    case 0xC22973: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:24 DEC
    case 0xC22974: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:25 STA @VIRTUAL02
    case 0xC22975: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:26 LDA @VIRTUAL04
    case 0xC22977: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC22979: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22979.
    case 0xC2297B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:28 JSL MULT168
    case 0xC2297C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:29 CLC
    case 0xC22980: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC22981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C2/C22A3A.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC22981.
    case 0xC22983: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C2/C22A3A.asm:31 CLC
    case 0xC22984: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:32 ADC @VIRTUAL02
    case 0xC22985: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:32 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC22983.
    case 0xC22986: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:33 TAX
    case 0xC22987: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:34 LDA __BSS_START__,X
    case 0xC22988: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:35 AND #$00FF
    case 0xC2298B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2298B.
    case 0xC2298D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:36 TAX
    case 0xC2298E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:37 STX @LOCAL05
    case 0xC2298F: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:38 LDY @LOCAL07
    case 0xC22991: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:39 TYA
    case 0xC22993: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:40 STA @LOCAL04
    case 0xC22994: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:41 BRA @UNKNOWN1
    case 0xC22996: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:43 LDA @LOCAL04
    case 0xC22998: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:44 TAY
    case 0xC2299A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:45 DEY
    case 0xC2299B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC2299C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:47 LDA @VIRTUAL00
    case 0xC2299E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:48 STA (@LOCAL03),Y
    case 0xC229A0: cpu.execute_instruction<0x91>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC229A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:50 LDA @LOCAL04
    case 0xC229A4: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:51 INC
    case 0xC229A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:52 STA @LOCAL04
    case 0xC229A7: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:54 CMP #$000E
    case 0xC229A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C2/C22A3A.asm:54 CMP #$000E
    // Overlapping static entry reached from 0xC229A9.
    case 0xC229AB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C2/C22A3A.asm:55 BCS @UNKNOWN2
    case 0xC229AC: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/unknown/C2/C22A3A.asm:56 LDA @VIRTUAL04
    case 0xC229AE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:57 LDY #.SIZEOF(char_struct)
    case 0xC229B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:57 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC229B0.
    case 0xC229B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:58 JSL MULT168
    case 0xC229B3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:59 CLC
    case 0xC229B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC229B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C2/C22A3A.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC229B8.
    case 0xC229BA: cpu.execute_instruction<0x9C>(0x001385, 3); return true;
    // src/unknown/C2/C22A3A.asm:61 STA @LOCAL03
    case 0xC229BB: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:62 LDA @LOCAL04
    case 0xC229BD: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:63 TAY
    case 0xC229BF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC229C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:65 LDA (@LOCAL03),Y
    case 0xC229C2: cpu.execute_instruction<0xB1>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:66 STA @VIRTUAL00
    case 0xC229C4: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC229C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:68 LDA @VIRTUAL00
    case 0xC229C8: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:69 AND #$00FF
    case 0xC229CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC229CA.
    case 0xC229CC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C22A3A.asm:70 BNE @UNKNOWN0
    case 0xC229CD: cpu.execute_instruction<0xD0>(0x0000C9, 2); return true;
    // src/unknown/C2/C22A3A.asm:72 LDA @VIRTUAL04
    case 0xC229CF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC229D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC229D1.
    case 0xC229D3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:74 JSL MULT168
    case 0xC229D4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:75 STA @LOCAL02
    case 0xC229D8: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:76 LDA @LOCAL04
    case 0xC229DA: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C2/C22A3A.asm:77 DEC
    case 0xC229DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:78 STA @VIRTUAL02
    case 0xC229DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:79 LDA @LOCAL02
    case 0xC229DF: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:80 CLC
    case 0xC229E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:81 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC229E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C2/C22A3A.asm:81 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC229E2.
    case 0xC229E4: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C2/C22A3A.asm:82 CLC
    case 0xC229E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:83 ADC @VIRTUAL02
    case 0xC229E6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:83 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC229E4.
    case 0xC229E7: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C22A3A.asm:84 TAX
    case 0xC229E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC229E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:86 LDA #$0000
    case 0xC229EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C22A3A.asm:87 STA __BSS_START__,X
    case 0xC229ED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:87 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC229EB.
    case 0xC229EE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:88 LDX @LOCAL05
    case 0xC229F0: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC229F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:90 LDA @LOCAL06
    case 0xC229F4: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:91 STA @VIRTUAL02
    case 0xC229F6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:92 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC229F8: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // src/unknown/C2/C22A3A.asm:93 LDA @VIRTUAL04
    case 0xC229FC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:94 INC
    case 0xC229FE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:95 STA @LOCAL03
    case 0xC229FF: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:96 PHA
    case 0xC22A01: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:97 LDA @VIRTUAL02
    case 0xC22A02: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:98 PLY
    case 0xC22A04: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:99 STY @VIRTUAL02
    case 0xC22A05: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:100 CMP @VIRTUAL02
    case 0xC22A07: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:101 BNEL @UNKNOWN28
    case 0xC22A09: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:101 BNEL @UNKNOWN28
    case 0xC22A0B: cpu.execute_instruction<0x4C>(0x002D39, 3); return true;
    // src/unknown/C2/C22A3A.asm:102 LDA @LOCAL02
    case 0xC22A0E: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:103 CLC
    case 0xC22A10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:104 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC22A11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x009CAF, 3); return true;
    // src/unknown/C2/C22A3A.asm:104 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22A11.
    case 0xC22A13: cpu.execute_instruction<0x9C>(0x000F85, 3); return true;
    // src/unknown/C2/C22A3A.asm:105 STA @LOCAL01
    case 0xC22A14: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:107 LDA (@LOCAL01)
    case 0xC22A18: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:108 STA @LOCAL00
    case 0xC22A1A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:109 REP #PROC_FLAGS::ACCUM8
    case 0xC22A1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:110 AND #$00FF
    case 0xC22A1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC22A1E.
    case 0xC22A20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:111 STA @LOCAL05
    case 0xC22A21: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:112 LDY @LOCAL07
    case 0xC22A23: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:113 CPY @LOCAL05
    case 0xC22A25: cpu.execute_instruction<0xC4>(0x000017, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:114 BNEL @UNKNOWN8
    case 0xC22A27: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:114 BNEL @UNKNOWN8
    case 0xC22A29: cpu.execute_instruction<0x4C>(0x002ABE, 3); return true;
    // src/unknown/C2/C22A3A.asm:115 LDA @LOCAL06
    case 0xC22A2C: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:116 STA @VIRTUAL02
    case 0xC22A2E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:117 JSL UNKNOWN_C22351
    case 0xC22A30: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // src/unknown/C2/C22A3A.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:119 STA (@LOCAL01)
    case 0xC22A36: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC22A38: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:121 LDA @LOCAL02
    case 0xC22A3A: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:122 CLC
    case 0xC22A3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:123 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22A3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:123 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22A3D.
    case 0xC22A3F: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:124 TAX
    case 0xC22A40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:125 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22A3F.
    case 0xC22A42: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:126 LDA __BSS_START__,X
    case 0xC22A43: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:126 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22A42.
    case 0xC22A45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:127 STA @LOCAL00
    case 0xC22A46: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xC22A48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:129 AND #$00FF
    case 0xC22A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC22A4A.
    case 0xC22A4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:130 STA @VIRTUAL02
    case 0xC22A4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:131 LDY @LOCAL07
    case 0xC22A4F: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:132 TYA
    case 0xC22A51: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:133 CMP @VIRTUAL02
    case 0xC22A52: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:134 BCS @UNKNOWN5
    case 0xC22A54: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A56: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:136 LDA @LOCAL00
    case 0xC22A58: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:137 DEC
    case 0xC22A5A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:138 STA __BSS_START__,X
    case 0xC22A5B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC22A5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:141 LDA @VIRTUAL04
    case 0xC22A60: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:142 LDY #.SIZEOF(char_struct)
    case 0xC22A62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:142 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22A62.
    case 0xC22A64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:143 JSL MULT168
    case 0xC22A65: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:144 CLC
    case 0xC22A69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:145 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:145 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22A6A.
    case 0xC22A6C: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:146 TAX
    case 0xC22A6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A6E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:147 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22A6C.
    case 0xC22A6F: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:148 LDA __BSS_START__,X
    case 0xC22A70: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:148 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22A6F.
    case 0xC22A72: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:149 STA @LOCAL00
    case 0xC22A73: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC22A75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:151 AND #$00FF
    case 0xC22A77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC22A77.
    case 0xC22A79: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:152 STA @VIRTUAL02
    case 0xC22A7A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:153 LDY @LOCAL07
    case 0xC22A7C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:154 TYA
    case 0xC22A7E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:155 CMP @VIRTUAL02
    case 0xC22A7F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:156 BCS @UNKNOWN6
    case 0xC22A81: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:157 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A83: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:158 LDA @LOCAL00
    case 0xC22A85: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:159 DEC
    case 0xC22A87: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:160 STA __BSS_START__,X
    case 0xC22A88: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC22A8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:163 LDA @VIRTUAL04
    case 0xC22A8D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:164 LDY #.SIZEOF(char_struct)
    case 0xC22A8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:164 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22A8F.
    case 0xC22A91: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:165 JSL MULT168
    case 0xC22A92: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:166 CLC
    case 0xC22A96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:167 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22A97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:167 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22A97.
    case 0xC22A99: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:168 TAX
    case 0xC22A9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC22A9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:169 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22A99.
    case 0xC22A9C: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:170 LDA __BSS_START__,X
    case 0xC22A9D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:170 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22A9C.
    case 0xC22A9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:171 STA @LOCAL00
    case 0xC22AA0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC22AA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:173 AND #$00FF
    case 0xC22AA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:173 AND #$00FF
    // Overlapping static entry reached from 0xC22AA4.
    case 0xC22AA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:174 STA @VIRTUAL02
    case 0xC22AA7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:175 LDY @LOCAL07
    case 0xC22AA9: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:176 TYA
    case 0xC22AAB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:177 CMP @VIRTUAL02
    case 0xC22AAC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:178 BCC @UNKNOWN7
    case 0xC22AAE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:179 JMP @UNKNOWN36
    case 0xC22AB0: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC22AB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:182 LDA @LOCAL00
    case 0xC22AB5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:183 DEC
    case 0xC22AB7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:184 STA __BSS_START__,X
    case 0xC22AB8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:185 JMP @UNKNOWN36
    case 0xC22ABB: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:188 LDA @LOCAL02
    case 0xC22ABE: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:189 CLC
    case 0xC22AC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:190 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:190 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22AC1.
    case 0xC22AC3: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:191 TAX
    case 0xC22AC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:192 STX @LOCAL03
    case 0xC22AC5: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:192 STX @LOCAL03
    // Overlapping static entry reached from 0xC22AC3.
    case 0xC22AC6: cpu.execute_instruction<0x13>(0x0000BD, 2); return true;
    // src/unknown/C2/C22A3A.asm:193 LDA __BSS_START__,X
    case 0xC22AC7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:193 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22AC6.
    case 0xC22AC8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:194 AND #$00FF
    case 0xC22ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC22ACA.
    case 0xC22ACC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:195 STA @VIRTUAL02
    case 0xC22ACD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:196 TYA
    case 0xC22ACF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:197 CMP @VIRTUAL02
    case 0xC22AD0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:198 BNEL @UNKNOWN13
    case 0xC22AD2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:198 BNEL @UNKNOWN13
    case 0xC22AD4: cpu.execute_instruction<0x4C>(0x002B5F, 3); return true;
    // src/unknown/C2/C22A3A.asm:199 LDA @LOCAL06
    case 0xC22AD7: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:200 STA @VIRTUAL02
    case 0xC22AD9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:201 JSL UNKNOWN_C22351
    case 0xC22ADB: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // src/unknown/C2/C22A3A.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC22ADF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:203 LDX @LOCAL03
    case 0xC22AE1: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:204 STA __BSS_START__,X
    case 0xC22AE3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:205 LDA (@LOCAL01)
    case 0xC22AE6: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:206 STA @LOCAL00
    case 0xC22AE8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC22AEA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:208 AND #$00FF
    case 0xC22AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:208 AND #$00FF
    // Overlapping static entry reached from 0xC22AEC.
    case 0xC22AEE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:209 STA @VIRTUAL02
    case 0xC22AEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:210 LDY @LOCAL07
    case 0xC22AF1: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:211 TYA
    case 0xC22AF3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:212 CMP @VIRTUAL02
    case 0xC22AF4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:213 BCS @UNKNOWN10
    case 0xC22AF6: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC22AF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:215 LDA @LOCAL00
    case 0xC22AFA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:216 DEC
    case 0xC22AFC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:217 STA (@LOCAL01)
    case 0xC22AFD: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:219 REP #PROC_FLAGS::ACCUM8
    case 0xC22AFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:219 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC21248.
    case 0xC22B00: cpu.execute_instruction<0x20>(0x0004A5, 3); return true;
    // src/unknown/C2/C22A3A.asm:220 LDA @VIRTUAL04
    case 0xC22B01: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:221 LDY #.SIZEOF(char_struct)
    case 0xC22B03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:221 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22B03.
    case 0xC22B05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:222 JSL MULT168
    case 0xC22B06: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:223 CLC
    case 0xC22B0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:224 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22B0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:224 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22B0B.
    case 0xC22B0D: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:225 TAX
    case 0xC22B0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:226 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22B0D.
    case 0xC22B10: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:227 LDA __BSS_START__,X
    case 0xC22B11: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:227 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22B10.
    case 0xC22B13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:228 STA @LOCAL00
    case 0xC22B14: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC22B16: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:230 AND #$00FF
    case 0xC22B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC22B18.
    case 0xC22B1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:231 STA @VIRTUAL02
    case 0xC22B1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:232 LDY @LOCAL07
    case 0xC22B1D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:233 TYA
    case 0xC22B1F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:234 CMP @VIRTUAL02
    case 0xC22B20: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:235 BCS @UNKNOWN11
    case 0xC22B22: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:237 LDA @LOCAL00
    case 0xC22B26: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:238 DEC
    case 0xC22B28: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:239 STA __BSS_START__,X
    case 0xC22B29: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:241 REP #PROC_FLAGS::ACCUM8
    case 0xC22B2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:242 LDA @VIRTUAL04
    case 0xC22B2E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:243 LDY #.SIZEOF(char_struct)
    case 0xC22B30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:243 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22B30.
    case 0xC22B32: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:244 JSL MULT168
    case 0xC22B33: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:245 CLC
    case 0xC22B37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:246 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:246 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22B38.
    case 0xC22B3A: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:247 TAX
    case 0xC22B3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:248 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22B3A.
    case 0xC22B3D: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:249 LDA __BSS_START__,X
    case 0xC22B3E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:249 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22B3D.
    case 0xC22B40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:250 STA @LOCAL00
    case 0xC22B41: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:251 REP #PROC_FLAGS::ACCUM8
    case 0xC22B43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:252 AND #$00FF
    case 0xC22B45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC22B45.
    case 0xC22B47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:253 STA @VIRTUAL02
    case 0xC22B48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:254 LDY @LOCAL07
    case 0xC22B4A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:255 TYA
    case 0xC22B4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:256 CMP @VIRTUAL02
    case 0xC22B4D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:257 BCC @UNKNOWN12
    case 0xC22B4F: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:258 JMP @UNKNOWN36
    case 0xC22B51: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:261 LDA @LOCAL00
    case 0xC22B56: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:262 DEC
    case 0xC22B58: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:263 STA __BSS_START__,X
    case 0xC22B59: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:264 JMP @UNKNOWN36
    case 0xC22B5C: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:267 LDA @LOCAL02
    case 0xC22B5F: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:268 CLC
    case 0xC22B61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC22B62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22B62.
    case 0xC22B64: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:270 TAX
    case 0xC22B65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:271 STX @LOCAL03
    case 0xC22B66: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:271 STX @LOCAL03
    // Overlapping static entry reached from 0xC22B64.
    case 0xC22B67: cpu.execute_instruction<0x13>(0x0000BD, 2); return true;
    // src/unknown/C2/C22A3A.asm:272 LDA __BSS_START__,X
    case 0xC22B68: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:272 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22B67.
    case 0xC22B69: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:273 AND #$00FF
    case 0xC22B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC22B6B.
    case 0xC22B6D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:274 STA @VIRTUAL02
    case 0xC22B6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:275 TYA
    case 0xC22B70: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:276 CMP @VIRTUAL02
    case 0xC22B71: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:277 BNEL @UNKNOWN18
    case 0xC22B73: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:277 BNEL @UNKNOWN18
    case 0xC22B75: cpu.execute_instruction<0x4C>(0x002C00, 3); return true;
    // src/unknown/C2/C22A3A.asm:278 LDA @LOCAL06
    case 0xC22B78: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:279 STA @VIRTUAL02
    case 0xC22B7A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:280 JSL UNKNOWN_C22351
    case 0xC22B7C: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // src/unknown/C2/C22A3A.asm:281 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:282 LDX @LOCAL03
    case 0xC22B82: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:283 STA __BSS_START__,X
    case 0xC22B84: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:284 LDA (@LOCAL01)
    case 0xC22B87: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:285 STA @LOCAL00
    case 0xC22B89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:286 REP #PROC_FLAGS::ACCUM8
    case 0xC22B8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:287 AND #$00FF
    case 0xC22B8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:287 AND #$00FF
    // Overlapping static entry reached from 0xC22B8D.
    case 0xC22B8F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:288 STA @VIRTUAL02
    case 0xC22B90: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:289 LDY @LOCAL07
    case 0xC22B92: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:290 TYA
    case 0xC22B94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:291 CMP @VIRTUAL02
    case 0xC22B95: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:292 BCS @UNKNOWN15
    case 0xC22B97: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:293 SEP #PROC_FLAGS::ACCUM8
    case 0xC22B99: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:294 LDA @LOCAL00
    case 0xC22B9B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:295 DEC
    case 0xC22B9D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:296 STA (@LOCAL01)
    case 0xC22B9E: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC22BA0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:299 LDA @VIRTUAL04
    case 0xC22BA2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:300 LDY #.SIZEOF(char_struct)
    case 0xC22BA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:300 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22BA4.
    case 0xC22BA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:301 JSL MULT168
    case 0xC22BA7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:302 CLC
    case 0xC22BAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22BAC.
    case 0xC22BAE: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:304 TAX
    case 0xC22BAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BB0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:305 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22BAE.
    case 0xC22BB1: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:306 LDA __BSS_START__,X
    case 0xC22BB2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:306 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22BB1.
    case 0xC22BB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:307 STA @LOCAL00
    case 0xC22BB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC22BB7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:309 AND #$00FF
    case 0xC22BB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC22BB9.
    case 0xC22BBB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:310 STA @VIRTUAL02
    case 0xC22BBC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:311 LDY @LOCAL07
    case 0xC22BBE: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:312 TYA
    case 0xC22BC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:313 CMP @VIRTUAL02
    case 0xC22BC1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:314 BCS @UNKNOWN16
    case 0xC22BC3: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:315 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:316 LDA @LOCAL00
    case 0xC22BC7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:317 DEC
    case 0xC22BC9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:318 STA __BSS_START__,X
    case 0xC22BCA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:320 REP #PROC_FLAGS::ACCUM8
    case 0xC22BCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:321 LDA @VIRTUAL04
    case 0xC22BCF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:322 LDY #.SIZEOF(char_struct)
    case 0xC22BD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:322 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22BD1.
    case 0xC22BD3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:323 JSL MULT168
    case 0xC22BD4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:324 CLC
    case 0xC22BD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:325 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:325 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22BD9.
    case 0xC22BDB: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:326 TAX
    case 0xC22BDC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:327 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:327 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22BDB.
    case 0xC22BDE: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:328 LDA __BSS_START__,X
    case 0xC22BDF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:328 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22BDE.
    case 0xC22BE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:329 STA @LOCAL00
    case 0xC22BE2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:330 REP #PROC_FLAGS::ACCUM8
    case 0xC22BE4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:331 AND #$00FF
    case 0xC22BE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC22BE6.
    case 0xC22BE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:332 STA @VIRTUAL02
    case 0xC22BE9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:333 LDY @LOCAL07
    case 0xC22BEB: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:334 TYA
    case 0xC22BED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:335 CMP @VIRTUAL02
    case 0xC22BEE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:336 BCC @UNKNOWN17
    case 0xC22BF0: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:337 JMP @UNKNOWN36
    case 0xC22BF2: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:339 SEP #PROC_FLAGS::ACCUM8
    case 0xC22BF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:340 LDA @LOCAL00
    case 0xC22BF7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:341 DEC
    case 0xC22BF9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:342 STA __BSS_START__,X
    case 0xC22BFA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:343 JMP @UNKNOWN36
    case 0xC22BFD: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:346 LDA @LOCAL02
    case 0xC22C00: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:347 CLC
    case 0xC22C02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:348 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC22C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:348 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22C03.
    case 0xC22C05: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:349 TAX
    case 0xC22C06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:350 STX @LOCAL03
    case 0xC22C07: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:350 STX @LOCAL03
    // Overlapping static entry reached from 0xC22C05.
    case 0xC22C08: cpu.execute_instruction<0x13>(0x0000BD, 2); return true;
    // src/unknown/C2/C22A3A.asm:351 LDA __BSS_START__,X
    case 0xC22C09: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:351 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22C08.
    case 0xC22C0A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C22A3A.asm:352 AND #$00FF
    case 0xC22C0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:352 AND #$00FF
    // Overlapping static entry reached from 0xC22C0C.
    case 0xC22C0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:353 STA @VIRTUAL02
    case 0xC22C0F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:354 TYA
    case 0xC22C11: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:355 CMP @VIRTUAL02
    case 0xC22C12: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C22A3A.asm:356 BNEL @UNKNOWN23
    case 0xC22C14: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C22A3A.asm:356 BNEL @UNKNOWN23
    case 0xC22C16: cpu.execute_instruction<0x4C>(0x002CA1, 3); return true;
    // src/unknown/C2/C22A3A.asm:357 LDA @LOCAL06
    case 0xC22C19: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/unknown/C2/C22A3A.asm:358 STA @VIRTUAL02
    case 0xC22C1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:359 JSL UNKNOWN_C22351
    case 0xC22C1D: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // src/unknown/C2/C22A3A.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C21: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:361 LDX @LOCAL03
    case 0xC22C23: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:362 STA __BSS_START__,X
    case 0xC22C25: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:363 LDA (@LOCAL01)
    case 0xC22C28: cpu.execute_instruction<0xB2>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:364 STA @LOCAL00
    case 0xC22C2A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC22C2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:366 AND #$00FF
    case 0xC22C2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC22C2E.
    case 0xC22C30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:367 STA @VIRTUAL02
    case 0xC22C31: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:368 LDY @LOCAL07
    case 0xC22C33: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:369 TYA
    case 0xC22C35: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:370 CMP @VIRTUAL02
    case 0xC22C36: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:371 BCS @UNKNOWN20
    case 0xC22C38: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:373 LDA @LOCAL00
    case 0xC22C3C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:374 DEC
    case 0xC22C3E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:375 STA (@LOCAL01)
    case 0xC22C3F: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:377 REP #PROC_FLAGS::ACCUM8
    case 0xC22C41: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:378 LDA @VIRTUAL04
    case 0xC22C43: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:379 LDY #.SIZEOF(char_struct)
    case 0xC22C45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:379 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22C45.
    case 0xC22C47: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:380 JSL MULT168
    case 0xC22C48: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:381 CLC
    case 0xC22C4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:382 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22C4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:382 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22C4D.
    case 0xC22C4F: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:383 TAX
    case 0xC22C50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:384 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:384 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22C4F.
    case 0xC22C52: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:385 LDA __BSS_START__,X
    case 0xC22C53: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:385 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22C52.
    case 0xC22C55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:386 STA @LOCAL00
    case 0xC22C56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:387 REP #PROC_FLAGS::ACCUM8
    case 0xC22C58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:388 AND #$00FF
    case 0xC22C5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC22C5A.
    case 0xC22C5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:389 STA @VIRTUAL02
    case 0xC22C5D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:390 LDY @LOCAL07
    case 0xC22C5F: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:391 TYA
    case 0xC22C61: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:392 CMP @VIRTUAL02
    case 0xC22C62: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:393 BCS @UNKNOWN21
    case 0xC22C64: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:394 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:395 LDA @LOCAL00
    case 0xC22C68: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:396 DEC
    case 0xC22C6A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:397 STA __BSS_START__,X
    case 0xC22C6B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:399 REP #PROC_FLAGS::ACCUM8
    case 0xC22C6E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:400 LDA @VIRTUAL04
    case 0xC22C70: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:401 LDY #.SIZEOF(char_struct)
    case 0xC22C72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:401 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22C72.
    case 0xC22C74: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:402 JSL MULT168
    case 0xC22C75: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:403 CLC
    case 0xC22C79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:404 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:404 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22C7A.
    case 0xC22C7C: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:405 TAX
    case 0xC22C7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:406 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:406 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22C7C.
    case 0xC22C7F: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:407 LDA __BSS_START__,X
    case 0xC22C80: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:407 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22C7F.
    case 0xC22C82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:408 STA @LOCAL00
    case 0xC22C83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:409 REP #PROC_FLAGS::ACCUM8
    case 0xC22C85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:410 AND #$00FF
    case 0xC22C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:410 AND #$00FF
    // Overlapping static entry reached from 0xC22C87.
    case 0xC22C89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:411 STA @VIRTUAL02
    case 0xC22C8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:412 LDY @LOCAL07
    case 0xC22C8C: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:413 TYA
    case 0xC22C8E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:414 CMP @VIRTUAL02
    case 0xC22C8F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:415 BCC @UNKNOWN22
    case 0xC22C91: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:416 JMP @UNKNOWN36
    case 0xC22C93: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC22C96: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:419 LDA @LOCAL00
    case 0xC22C98: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:420 DEC
    case 0xC22C9A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:421 STA __BSS_START__,X
    case 0xC22C9B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:422 JMP @UNKNOWN36
    case 0xC22C9E: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:424 CPY @LOCAL05
    case 0xC22CA1: cpu.execute_instruction<0xC4>(0x000017, 2); return true;
    // src/unknown/C2/C22A3A.asm:425 BCS @UNKNOWN24
    case 0xC22CA3: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C2/C22A3A.asm:426 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:427 LDA @LOCAL00
    case 0xC22CA7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:428 DEC
    case 0xC22CA9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:429 STA (@LOCAL01)
    case 0xC22CAA: cpu.execute_instruction<0x92>(0x00000F, 2); return true;
    // src/unknown/C2/C22A3A.asm:431 REP #PROC_FLAGS::ACCUM8
    case 0xC22CAC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:432 LDA @VIRTUAL04
    case 0xC22CAE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:433 LDY #.SIZEOF(char_struct)
    case 0xC22CB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:433 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22CB0.
    case 0xC22CB2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:434 JSL MULT168
    case 0xC22CB3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:435 CLC
    case 0xC22CB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:436 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:436 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22CB8.
    case 0xC22CBA: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:437 TAX
    case 0xC22CBB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CBC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:438 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22CBA.
    case 0xC22CBD: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:439 LDA __BSS_START__,X
    case 0xC22CBE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:439 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22CBD.
    case 0xC22CC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:440 STA @LOCAL00
    case 0xC22CC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:441 REP #PROC_FLAGS::ACCUM8
    case 0xC22CC3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:442 AND #$00FF
    case 0xC22CC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:442 AND #$00FF
    // Overlapping static entry reached from 0xC22CC5.
    case 0xC22CC7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:443 STA @VIRTUAL02
    case 0xC22CC8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:444 LDY @LOCAL07
    case 0xC22CCA: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:445 TYA
    case 0xC22CCC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:446 CMP @VIRTUAL02
    case 0xC22CCD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:447 BCS @UNKNOWN25
    case 0xC22CCF: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CD1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:449 LDA @LOCAL00
    case 0xC22CD3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:450 DEC
    case 0xC22CD5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:451 STA __BSS_START__,X
    case 0xC22CD6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:453 REP #PROC_FLAGS::ACCUM8
    case 0xC22CD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:454 LDA @VIRTUAL04
    case 0xC22CDB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:455 LDY #.SIZEOF(char_struct)
    case 0xC22CDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:455 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22CDD.
    case 0xC22CDF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:456 JSL MULT168
    case 0xC22CE0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:457 CLC
    case 0xC22CE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:458 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22CE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:458 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22CE5.
    case 0xC22CE7: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:459 TAX
    case 0xC22CE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:460 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:460 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22CE7.
    case 0xC22CEA: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:461 LDA __BSS_START__,X
    case 0xC22CEB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:461 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22CEA.
    case 0xC22CED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:462 STA @LOCAL00
    case 0xC22CEE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:463 REP #PROC_FLAGS::ACCUM8
    case 0xC22CF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:464 AND #$00FF
    case 0xC22CF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:464 AND #$00FF
    // Overlapping static entry reached from 0xC22CF2.
    case 0xC22CF4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:465 STA @VIRTUAL02
    case 0xC22CF5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:466 LDY @LOCAL07
    case 0xC22CF7: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:467 TYA
    case 0xC22CF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:468 CMP @VIRTUAL02
    case 0xC22CFA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:469 BCS @UNKNOWN26
    case 0xC22CFC: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:470 SEP #PROC_FLAGS::ACCUM8
    case 0xC22CFE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:471 LDA @LOCAL00
    case 0xC22D00: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:472 DEC
    case 0xC22D02: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:473 STA __BSS_START__,X
    case 0xC22D03: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC22D06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:476 LDA @VIRTUAL04
    case 0xC22D08: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:477 LDY #.SIZEOF(char_struct)
    case 0xC22D0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:477 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22D0A.
    case 0xC22D0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:478 JSL MULT168
    case 0xC22D0D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:479 CLC
    case 0xC22D11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:480 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22D12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:480 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22D12.
    case 0xC22D14: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:481 TAX
    case 0xC22D15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:482 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:482 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22D14.
    case 0xC22D17: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:483 LDA __BSS_START__,X
    case 0xC22D18: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:483 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22D17.
    case 0xC22D1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:484 STA @LOCAL00
    case 0xC22D1B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:485 REP #PROC_FLAGS::ACCUM8
    case 0xC22D1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:486 AND #$00FF
    case 0xC22D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:486 AND #$00FF
    // Overlapping static entry reached from 0xC22D1F.
    case 0xC22D21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:487 STA @VIRTUAL02
    case 0xC22D22: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:488 LDY @LOCAL07
    case 0xC22D24: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:489 TYA
    case 0xC22D26: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:490 CMP @VIRTUAL02
    case 0xC22D27: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:491 BCC @UNKNOWN27
    case 0xC22D29: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C2/C22A3A.asm:492 JMP @UNKNOWN36
    case 0xC22D2B: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:494 SEP #PROC_FLAGS::ACCUM8
    case 0xC22D2E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:495 LDA @LOCAL00
    case 0xC22D30: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:496 DEC
    case 0xC22D32: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:497 STA __BSS_START__,X
    case 0xC22D33: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:498 JMP @UNKNOWN36
    case 0xC22D36: cpu.execute_instruction<0x4C>(0x002E59, 3); return true;
    // src/unknown/C2/C22A3A.asm:501 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    case 0xC22D39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AF, 2); else cpu.execute_instruction<0xA0>(0x009CAF, 3); return true;
    // src/unknown/C2/C22A3A.asm:501 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22D39.
    case 0xC22D3B: cpu.execute_instruction<0x9C>(0x0011B1, 3); return true;
    // src/unknown/C2/C22A3A.asm:502 LDA (@LOCAL02),Y
    case 0xC22D3C: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:503 AND #$00FF
    case 0xC22D3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:503 AND #$00FF
    // Overlapping static entry reached from 0xC22D3E.
    case 0xC22D40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:504 STA @VIRTUAL02
    case 0xC22D41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:505 LDY @LOCAL07
    case 0xC22D43: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:506 TYA
    case 0xC22D45: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:507 CMP @VIRTUAL02
    case 0xC22D46: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:508 BNE @UNKNOWN29
    case 0xC22D48: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:509 LDX #$0000
    case 0xC22D4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:509 LDX #$0000
    // Overlapping static entry reached from 0xC22D4A.
    case 0xC22D4C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:510 LDA @LOCAL03
    case 0xC22D4D: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:511 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC22D4F: cpu.execute_instruction<0x22>(0xC4357B, 4); return true;
    // src/unknown/C2/C22A3A.asm:512 BRA @UNKNOWN32
    case 0xC22D53: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C2/C22A3A.asm:515 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    case 0xC22D55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B0, 2); else cpu.execute_instruction<0xA0>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:515 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22D55.
    case 0xC22D57: cpu.execute_instruction<0x9C>(0x0011B1, 3); return true;
    // src/unknown/C2/C22A3A.asm:516 LDA (@LOCAL02),Y
    case 0xC22D58: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:517 AND #$00FF
    case 0xC22D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC22D5A.
    case 0xC22D5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:518 STA @VIRTUAL02
    case 0xC22D5D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:519 LDY @LOCAL07
    case 0xC22D5F: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:520 TYA
    case 0xC22D61: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:521 CMP @VIRTUAL02
    case 0xC22D62: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:522 BNE @UNKNOWN30
    case 0xC22D64: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:523 LDX #$0000
    case 0xC22D66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:523 LDX #$0000
    // Overlapping static entry reached from 0xC22D66.
    case 0xC22D68: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:524 LDA @LOCAL03
    case 0xC22D69: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:525 JSL CHANGE_EQUIPPED_BODY
    case 0xC22D6B: cpu.execute_instruction<0x22>(0xC435C8, 4); return true;
    // src/unknown/C2/C22A3A.asm:526 BRA @UNKNOWN32
    case 0xC22D6F: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C2/C22A3A.asm:528 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    case 0xC22D71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B1, 2); else cpu.execute_instruction<0xA0>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:528 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22D71.
    case 0xC22D73: cpu.execute_instruction<0x9C>(0x0011B1, 3); return true;
    // src/unknown/C2/C22A3A.asm:529 LDA (@LOCAL02),Y
    case 0xC22D74: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:530 AND #$00FF
    case 0xC22D76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:530 AND #$00FF
    // Overlapping static entry reached from 0xC22D76.
    case 0xC22D78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:531 STA @VIRTUAL02
    case 0xC22D79: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:532 LDY @LOCAL07
    case 0xC22D7B: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:533 TYA
    case 0xC22D7D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:534 CMP @VIRTUAL02
    case 0xC22D7E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:535 BNE @UNKNOWN31
    case 0xC22D80: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C2/C22A3A.asm:536 LDX #$0000
    case 0xC22D82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:536 LDX #$0000
    // Overlapping static entry reached from 0xC22D82.
    case 0xC22D84: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:537 LDA @LOCAL03
    case 0xC22D85: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:538 JSL CHANGE_EQUIPPED_ARMS
    case 0xC22D87: cpu.execute_instruction<0x22>(0xC43613, 4); return true;
    // src/unknown/C2/C22A3A.asm:539 BRA @UNKNOWN32
    case 0xC22D8B: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C22A3A.asm:541 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    case 0xC22D8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B2, 2); else cpu.execute_instruction<0xA0>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:541 LDY #.LOWORD(PARTY_CHARACTERS) + char_struct::equipment + EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22D8D.
    case 0xC22D8F: cpu.execute_instruction<0x9C>(0x0011B1, 3); return true;
    // src/unknown/C2/C22A3A.asm:542 LDA (@LOCAL02),Y
    case 0xC22D90: cpu.execute_instruction<0xB1>(0x000011, 2); return true;
    // src/unknown/C2/C22A3A.asm:543 AND #$00FF
    case 0xC22D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:543 AND #$00FF
    // Overlapping static entry reached from 0xC22D92.
    case 0xC22D94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:544 STA @VIRTUAL02
    case 0xC22D95: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:545 LDY @LOCAL07
    case 0xC22D97: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:546 TYA
    case 0xC22D99: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:547 CMP @VIRTUAL02
    case 0xC22D9A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:548 BNE @UNKNOWN32
    case 0xC22D9C: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C2/C22A3A.asm:549 LDX #$0000
    case 0xC22D9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:549 LDX #$0000
    // Overlapping static entry reached from 0xC22D9E.
    case 0xC22DA0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C22A3A.asm:550 LDA @LOCAL03
    case 0xC22DA1: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C2/C22A3A.asm:551 JSL CHANGE_EQUIPPED_OTHER
    case 0xC22DA3: cpu.execute_instruction<0x22>(0xC4365E, 4); return true;
    // src/unknown/C2/C22A3A.asm:553 LDA @VIRTUAL04
    case 0xC22DA7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:554 LDY #.SIZEOF(char_struct)
    case 0xC22DA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:554 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22DA9.
    case 0xC22DAB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:555 JSL MULT168
    case 0xC22DAC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:557 CLC
    case 0xC22DB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:558 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC22DB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x009CAF, 3); return true;
    // src/unknown/C2/C22A3A.asm:558 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC22DB1.
    case 0xC22DB3: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:559 TAX
    case 0xC22DB4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:560 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:560 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22DB3.
    case 0xC22DB6: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:561 LDA __BSS_START__,X
    case 0xC22DB7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:561 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22DB6.
    case 0xC22DB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:562 STA @LOCAL00
    case 0xC22DBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:563 REP #PROC_FLAGS::ACCUM8
    case 0xC22DBC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:564 AND #$00FF
    case 0xC22DBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:564 AND #$00FF
    // Overlapping static entry reached from 0xC22DBE.
    case 0xC22DC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:565 STA @VIRTUAL02
    case 0xC22DC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:566 LDY @LOCAL07
    case 0xC22DC3: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:567 TYA
    case 0xC22DC5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:568 CMP @VIRTUAL02
    case 0xC22DC6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:569 BCS @UNKNOWN33
    case 0xC22DC8: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:570 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DCA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:571 LDA @LOCAL00
    case 0xC22DCC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:572 DEC
    case 0xC22DCE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:573 STA __BSS_START__,X
    case 0xC22DCF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:575 REP #PROC_FLAGS::ACCUM8
    case 0xC22DD2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:576 LDA @VIRTUAL04
    case 0xC22DD4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:577 LDY #.SIZEOF(char_struct)
    case 0xC22DD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:577 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22DD6.
    case 0xC22DD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:578 JSL MULT168
    case 0xC22DD9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:579 CLC
    case 0xC22DDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:580 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    case 0xC22DDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x009CB0, 3); return true;
    // src/unknown/C2/C22A3A.asm:580 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::BODY
    // Overlapping static entry reached from 0xC22DDE.
    case 0xC22DE0: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:581 TAX
    case 0xC22DE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:582 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:582 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22DE0.
    case 0xC22DE3: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:583 LDA __BSS_START__,X
    case 0xC22DE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:583 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22DE3.
    case 0xC22DE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:584 STA @LOCAL00
    case 0xC22DE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:585 REP #PROC_FLAGS::ACCUM8
    case 0xC22DE9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:586 AND #$00FF
    case 0xC22DEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:586 AND #$00FF
    // Overlapping static entry reached from 0xC22DEB.
    case 0xC22DED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:587 STA @VIRTUAL02
    case 0xC22DEE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:588 LDY @LOCAL07
    case 0xC22DF0: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:589 TYA
    case 0xC22DF2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:590 CMP @VIRTUAL02
    case 0xC22DF3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:591 BCS @UNKNOWN34
    case 0xC22DF5: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:592 SEP #PROC_FLAGS::ACCUM8
    case 0xC22DF7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:593 LDA @LOCAL00
    case 0xC22DF9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:594 DEC
    case 0xC22DFB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:595 STA __BSS_START__,X
    case 0xC22DFC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:597 REP #PROC_FLAGS::ACCUM8
    case 0xC22DFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:598 LDA @VIRTUAL04
    case 0xC22E01: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:599 LDY #.SIZEOF(char_struct)
    case 0xC22E03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:599 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22E03.
    case 0xC22E05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:600 JSL MULT168
    case 0xC22E06: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:601 CLC
    case 0xC22E0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    case 0xC22E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B1, 2); else cpu.execute_instruction<0x69>(0x009CB1, 3); return true;
    // src/unknown/C2/C22A3A.asm:602 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::ARMS
    // Overlapping static entry reached from 0xC22E0B.
    case 0xC22E0D: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:603 TAX
    case 0xC22E0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:604 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22E0D.
    case 0xC22E10: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:605 LDA __BSS_START__,X
    case 0xC22E11: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:605 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22E10.
    case 0xC22E13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:606 STA @LOCAL00
    case 0xC22E14: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:607 REP #PROC_FLAGS::ACCUM8
    case 0xC22E16: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:608 AND #$00FF
    case 0xC22E18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:608 AND #$00FF
    // Overlapping static entry reached from 0xC22E18.
    case 0xC22E1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:609 STA @VIRTUAL02
    case 0xC22E1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:610 LDY @LOCAL07
    case 0xC22E1D: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:611 TYA
    case 0xC22E1F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:612 CMP @VIRTUAL02
    case 0xC22E20: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:613 BCS @UNKNOWN35
    case 0xC22E22: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:614 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:615 LDA @LOCAL00
    case 0xC22E26: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:616 DEC
    case 0xC22E28: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:617 STA __BSS_START__,X
    case 0xC22E29: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:619 REP #PROC_FLAGS::ACCUM8
    case 0xC22E2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:620 LDA @VIRTUAL04
    case 0xC22E2E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C22A3A.asm:621 LDY #.SIZEOF(char_struct)
    case 0xC22E30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C22A3A.asm:621 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22E30.
    case 0xC22E32: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C22A3A.asm:622 JSL MULT168
    case 0xC22E33: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C22A3A.asm:623 CLC
    case 0xC22E37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:624 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    case 0xC22E38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x009CB2, 3); return true;
    // src/unknown/C2/C22A3A.asm:624 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::equipment+EQUIPMENT_SLOT::OTHER
    // Overlapping static entry reached from 0xC22E38.
    case 0xC22E3A: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/unknown/C2/C22A3A.asm:625 TAX
    case 0xC22E3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:626 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22E3A.
    case 0xC22E3D: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C22A3A.asm:627 LDA __BSS_START__,X
    case 0xC22E3E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:627 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC22E3D.
    case 0xC22E40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:628 STA @LOCAL00
    case 0xC22E41: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:629 REP #PROC_FLAGS::ACCUM8
    case 0xC22E43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:630 AND #$00FF
    case 0xC22E45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C22A3A.asm:630 AND #$00FF
    // Overlapping static entry reached from 0xC22E45.
    case 0xC22E47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C22A3A.asm:631 STA @VIRTUAL02
    case 0xC22E48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:632 LDY @LOCAL07
    case 0xC22E4A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unknown/C2/C22A3A.asm:633 TYA
    case 0xC22E4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:634 CMP @VIRTUAL02
    case 0xC22E4D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C22A3A.asm:635 BCS @UNKNOWN36
    case 0xC22E4F: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C2/C22A3A.asm:636 SEP #PROC_FLAGS::ACCUM8
    case 0xC22E51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C22A3A.asm:637 LDA @LOCAL00
    case 0xC22E53: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C22A3A.asm:638 DEC
    case 0xC22E55: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C22A3A.asm:639 STA __BSS_START__,X
    case 0xC22E56: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C22A3A.asm:641 REP #PROC_FLAGS::ACCUM8
    case 0xC22E59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C22A3A.asm:642 END_C_FUNCTION
    case 0xC22E5B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C22A3A.asm:642 END_C_FUNCTION
    case 0xC22E5C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23008.asm (unresolved).
bool execute_unresolved_c2_c23008_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23008.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22F2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC22F2F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC22F30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC22F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC22F31.
    case 0xC22F33: cpu.execute_instruction<0xFF>(0xEBA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23008.asm:6 END_STACK_VARS
    case 0xC22F34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:7 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    case 0xC22F35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EB, 2); else cpu.execute_instruction<0xA2>(0x009AEB, 3); return true;
    // src/unknown/C2/C23008.asm:7 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    // Overlapping static entry reached from 0xC22F35.
    case 0xC22F37: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:8 STX @LOCAL00
    case 0xC22F38: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23008.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC22F3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:10 LDA __BSS_START__,X
    case 0xC22F3C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:11 STA GAME_STATE+game_state::party_npc_1_id_copy
    case 0xC22F3F: cpu.execute_instruction<0x8D>(0x009AF2, 3); return true;
    // src/unknown/C2/C23008.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC22F42: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:13 LDA GAME_STATE+game_state::party_npc_1_hp
    case 0xC22F44: cpu.execute_instruction<0xAD>(0x009AED, 3); return true;
    // src/unknown/C2/C23008.asm:14 STA GAME_STATE + game_state::party_npc_1_hp_copy
    case 0xC22F47: cpu.execute_instruction<0x8D>(0x009AF4, 3); return true;
    // src/unknown/C2/C23008.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC22F4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000EC, 2); else cpu.execute_instruction<0xA0>(0x009AEC, 3); return true;
    // src/unknown/C2/C23008.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC22F4A.
    case 0xC22F4C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C23008.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC22F4D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:17 LDA __BSS_START__,Y
    case 0xC22F4F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:18 STA GAME_STATE + game_state::party_npc_2_id_copy
    case 0xC22F52: cpu.execute_instruction<0x8D>(0x009AF3, 3); return true;
    // src/unknown/C2/C23008.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC22F55: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23008.asm:20 LDA GAME_STATE+game_state::party_npc_2_hp
    case 0xC22F57: cpu.execute_instruction<0xAD>(0x009AEF, 3); return true;
    // src/unknown/C2/C23008.asm:21 STA GAME_STATE + game_state::party_npc_2_hp_copy
    case 0xC22F5A: cpu.execute_instruction<0x8D>(0x009AF6, 3); return true;
    // src/unknown/C2/C23008.asm:22 LDA __BSS_START__,Y
    case 0xC22F5D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:23 AND #$00FF
    case 0xC22F60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23008.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC22F60.
    case 0xC22F62: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23008.asm:24 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC22F63: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C23008.asm:25 LDX @LOCAL00
    case 0xC22F67: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23008.asm:26 LDA __BSS_START__,X
    case 0xC22F69: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C23008.asm:27 AND #$00FF
    case 0xC22F6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23008.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC22F6C.
    case 0xC22F6E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23008.asm:28 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC22F6F: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C23008.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC22F73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E2, 2); else cpu.execute_instruction<0xA0>(0x009AE2, 3); return true;
    // src/unknown/C2/C23008.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC22F73.
    case 0xC22F75: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC22F76: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC22F79: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC22F7B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC22F7E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC22F80: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC22F82: cpu.execute_instruction<0x8D>(0x009AF8, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC22F85: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:31 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::wallet_backup
    case 0xC22F87: cpu.execute_instruction<0x8D>(0x009AFA, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC22F8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC22F8A.
    case 0xC22F8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC22F8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC22F8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC22F8F.
    case 0xC22F91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C23008.asm:32 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC22F92: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC22F94: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC22F96: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC22F99: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C2/C23008.asm:33 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC22F9B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23008.asm:34 END_C_FUNCTION
    case 0xC22F9E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23008.asm:34 END_C_FUNCTION
    case 0xC22F9F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2307B.asm (unresolved).
bool execute_unresolved_c2_c2307b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2307B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22FA0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC22FA2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC22FA3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC22FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC22FA4.
    case 0xC22FA6: cpu.execute_instruction<0xFF>(0xEBA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2307B.asm:7 END_STACK_VARS
    case 0xC22FA7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:8 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    case 0xC22FA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EB, 2); else cpu.execute_instruction<0xA2>(0x009AEB, 3); return true;
    // src/unknown/C2/C2307B.asm:8 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_1
    // Overlapping static entry reached from 0xC22FA8.
    case 0xC22FAA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:9 STX @LOCAL01
    case 0xC22FAB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2307B.asm:10 LDA __BSS_START__,X
    case 0xC22FAD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:11 AND #$00FF
    case 0xC22FB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC22FB0.
    case 0xC22FB2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:12 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC22FB3: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C2307B.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC22FB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000EC, 2); else cpu.execute_instruction<0xA0>(0x009AEC, 3); return true;
    // src/unknown/C2/C2307B.asm:13 LDY #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC22FB7.
    case 0xC22FB9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2307B.asm:14 STY @LOCAL00
    case 0xC22FBA: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2307B.asm:15 LDA __BSS_START__,Y
    case 0xC22FBC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:16 AND #$00FF
    case 0xC22FBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC22FBF.
    case 0xC22FC1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:17 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC22FC2: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/unknown/C2/C2307B.asm:18 LDA GAME_STATE+game_state::party_npc_1_id_copy
    case 0xC22FC6: cpu.execute_instruction<0xAD>(0x009AF2, 3); return true;
    // src/unknown/C2/C2307B.asm:19 AND #$00FF
    case 0xC22FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC22FC9.
    case 0xC22FCB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2307B.asm:20 BEQ @UNKNOWN0
    case 0xC22FCC: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C2/C2307B.asm:21 LDX @LOCAL01
    case 0xC22FCE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2307B.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC22FD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:23 STA __BSS_START__,X
    case 0xC22FD2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC22FD5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:25 AND #$00FF
    case 0xC22FD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC22FD7.
    case 0xC22FD9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:26 JSL ADD_CHAR_TO_PARTY
    case 0xC22FDA: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/C2/C2307B.asm:27 LDA GAME_STATE + game_state::party_npc_1_hp_copy
    case 0xC22FDE: cpu.execute_instruction<0xAD>(0x009AF4, 3); return true;
    // src/unknown/C2/C2307B.asm:28 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC22FE1: cpu.execute_instruction<0x8D>(0x009AED, 3); return true;
    // src/unknown/C2/C2307B.asm:29 LDA GAME_STATE + game_state::party_npc_2_id_copy
    case 0xC22FE4: cpu.execute_instruction<0xAD>(0x009AF3, 3); return true;
    // src/unknown/C2/C2307B.asm:30 AND #$00FF
    case 0xC22FE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC22FE7.
    case 0xC22FE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2307B.asm:31 BEQ @UNKNOWN0
    case 0xC22FEA: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C2/C2307B.asm:32 LDY @LOCAL00
    case 0xC22FEC: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2307B.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC22FEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:34 STA __BSS_START__,Y
    case 0xC22FF0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2307B.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC22FF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2307B.asm:36 AND #$00FF
    case 0xC22FF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2307B.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC22FF5.
    case 0xC22FF7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2307B.asm:37 JSL ADD_CHAR_TO_PARTY
    case 0xC22FF8: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/C2/C2307B.asm:38 LDA GAME_STATE + game_state::party_npc_2_hp_copy
    case 0xC22FFC: cpu.execute_instruction<0xAD>(0x009AF6, 3); return true;
    // src/unknown/C2/C2307B.asm:39 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC22FFF: cpu.execute_instruction<0x8D>(0x009AEF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC23002: cpu.execute_instruction<0xAD>(0x009AF8, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC23005: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC23007: cpu.execute_instruction<0xAD>(0x009AFA, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2307B.asm:41 MOVE_INT GAME_STATE+game_state::wallet_backup, @VIRTUAL06
    case 0xC2300A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC2300C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC2300E: cpu.execute_instruction<0x8D>(0x009AE2, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC23011: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2307B.asm:42 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC23013: cpu.execute_instruction<0x8D>(0x009AE4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2307B.asm:43 END_C_FUNCTION
    case 0xC23016: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2307B.asm:43 END_C_FUNCTION
    case 0xC23017: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23E32.asm (unresolved).
bool execute_unresolved_c2_c23e32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23E32.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23D07: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23D09: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23D0A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC23D0B.
    case 0xC23D0D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23E32.asm:6 END_STACK_VARS
    case 0xC23D0E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23D0F.
    case 0xC23D11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23D12: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23D14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23D14.
    case 0xC23D16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C23E32.asm:7 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23D17: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23D19: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23D1C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23D1E: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C23E32.asm:8 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23D21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C23E32.asm:9 CMP @VIRTUAL0A+2
    case 0xC23D23: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/unknown/C2/C23E32.asm:10 BNE @UNKNOWN0
    case 0xC23D25: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C23E32.asm:11 LDA @VIRTUAL06
    case 0xC23D27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C2/C23E32.asm:12 CMP @VIRTUAL0A
    case 0xC23D29: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C23E32.asm:14 BEQ @UNKNOWN4
    case 0xC23D2B: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C2/C23E32.asm:15 LDX #0
    case 0xC23D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C23E32.asm:15 LDX #0
    // Overlapping static entry reached from 0xC23D2D.
    case 0xC23D2F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C23E32.asm:16 STX @LOCAL00
    case 0xC23D30: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:17 BRA @UNKNOWN2
    case 0xC23D32: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C2/C23E32.asm:19 TXA
    case 0xC23D34: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:20 JSL IS_CHAR_TARGETTED
    case 0xC23D35: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/unknown/C2/C23E32.asm:21 CMP #0
    case 0xC23D39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C23E32.asm:21 CMP #0
    // Overlapping static entry reached from 0xC23D39.
    case 0xC23D3B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C23E32.asm:22 BNE @UNKNOWN3
    case 0xC23D3C: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C2/C23E32.asm:23 LDX @LOCAL00
    case 0xC23D3E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:24 INX
    case 0xC23D40: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:25 STX @LOCAL00
    case 0xC23D41: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:27 CPX #BATTLER_COUNT
    case 0xC23D43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C23E32.asm:27 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC23D43.
    case 0xC23D45: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C23E32.asm:28 BCC @UNKNOWN1
    case 0xC23D46: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/unknown/C2/C23E32.asm:30 LDX @LOCAL00
    case 0xC23D48: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C23E32.asm:31 TXA
    case 0xC23D4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:32 LDY #.SIZEOF(battler)
    case 0xC23D4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E32.asm:32 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23D4B.
    case 0xC23D4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E32.asm:33 JSL MULT168
    case 0xC23D4E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C23E32.asm:34 CLC
    case 0xC23D52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E32.asm:35 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC23D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/unknown/C2/C23E32.asm:35 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC23D53.
    case 0xC23D55: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/unknown/C2/C23E32.asm:36 STA CURRENT_TARGET
    case 0xC23D56: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/unknown/C2/C23E32.asm:36 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC23D55.
    case 0xC23D57: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/unknown/C2/C23E32.asm:37 JSL FIX_TARGET_NAME
    case 0xC23D59: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23E32.asm:39 END_C_FUNCTION
    case 0xC23D5D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23E32.asm:39 END_C_FUNCTION
    case 0xC23D5E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C23E8A.asm (unresolved).
bool execute_unresolved_c2_c23e8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C23E8A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23D5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D61: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D62: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D63: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC23D64.
    case 0xC23D66: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D67: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C23E8A.asm:9 END_STACK_VARS
    case 0xC23D68: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:15 TAY
    case 0xC23D69: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:16 STY @LOCAL02
    case 0xC23D6A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC23D6C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C2/C23E8A.asm:21 STZ_BADOPT @LOCAL00
    case 0xC23D6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C23E8A.asm:21 STZ_BADOPT @LOCAL00
    case 0xC23D70: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C23E8A.asm:21 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC23D6E.
    case 0xC23D71: cpu.execute_instruction<0x0E>(0x000CA2, 3); return true;
    // src/unknown/C2/C23E8A.asm:22 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23D72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C2/C23E8A.asm:22 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23D72.
    case 0xC23D74: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C23E8A.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC23D75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:24 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23D77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00AB9D, 3); return true;
    // src/unknown/C2/C23E8A.asm:24 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23D77.
    case 0xC23D79: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:25 JSL MEMSET16
    case 0xC23D7A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C2/C23E8A.asm:26 LDY @LOCAL02
    case 0xC23D7E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:27 CPY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23D80: cpu.execute_instruction<0xCC>(0x00AF2B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C23E8A.asm:28 BLTEQ @UNKNOWN0
    case 0xC23D83: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C23E8A.asm:28 BLTEQ @UNKNOWN0
    case 0xC23D85: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C2/C23E8A.asm:29 TYA
    case 0xC23D87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:30 SEC
    case 0xC23D88: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:31 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23D89: cpu.execute_instruction<0xED>(0x00AF2B, 3); return true;
    // src/unknown/C2/C23E8A.asm:32 TAX
    case 0xC23D8C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:33 DEX
    case 0xC23D8D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:34 LDA BACK_ROW_BATTLERS,X
    case 0xC23D8E: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C2/C23E8A.asm:35 AND #$00FF
    case 0xC23D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC23D91.
    case 0xC23D93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C23E8A.asm:36 STA @VIRTUAL02
    case 0xC23D94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:37 BRA @UNKNOWN1
    case 0xC23D96: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C23E8A.asm:39 TYX
    case 0xC23D98: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:40 DEX
    case 0xC23D99: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:41 LDA FRONT_ROW_BATTLERS,X
    case 0xC23D9A: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C2/C23E8A.asm:42 AND #$00FF
    case 0xC23D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC23D9D.
    case 0xC23D9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C23E8A.asm:43 STA @VIRTUAL02
    case 0xC23DA0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:45 LDA @VIRTUAL02
    case 0xC23DA2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:46 LDY #.SIZEOF(battler)
    case 0xC23DA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E8A.asm:46 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23DA4.
    case 0xC23DA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:47 JSL MULT168
    case 0xC23DA7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C23E8A.asm:48 TAY
    case 0xC23DAB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:49 STY @LOCAL02
    case 0xC23DAC: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DAE.
    case 0xC23DB0: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23DB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DB0.
    case 0xC23DB2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23DB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DB2.
    case 0xC23DB4: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DB3.
    case 0xC23DB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C23E8A.asm:50 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23DB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C23E8A.asm:51 LDA BATTLERS_TABLE + battler::id,Y
    case 0xC23DB8: cpu.execute_instruction<0xB9>(0x00A1AE, 3); return true;
    // src/unknown/C2/C23E8A.asm:52 LDY #.SIZEOF(enemy_data)
    case 0xC23DBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C2/C23E8A.asm:52 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23DBB.
    case 0xC23DBD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:53 JSL MULT168
    case 0xC23DBE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C23E8A.asm:55 CLC
    case 0xC23DC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:56 ADC @VIRTUAL06
    case 0xC23DC3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C23E8A.asm:57 STA @VIRTUAL06
    case 0xC23DC5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C23E8A.asm:58 STA @LOCAL00
    case 0xC23DC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C23E8A.asm:59 LDA @VIRTUAL06+2
    case 0xC23DC9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C23E8A.asm:60 STA @LOCAL00+2
    case 0xC23DCB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C23E8A.asm:61 LDX #.SIZEOF(enemy_data::name)
    case 0xC23DCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C2/C23E8A.asm:61 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23DCD.
    case 0xC23DCF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C23E8A.asm:62 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23DD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00AB9D, 3); return true;
    // src/unknown/C2/C23E8A.asm:62 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23DD0.
    case 0xC23DD2: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:63 JSR COPY_ENEMY_NAME
    case 0xC23DD3: cpu.execute_instruction<0x20>(0x003A50, 3); return true;
    // src/unknown/C2/C23E8A.asm:64 TAX
    case 0xC23DD6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:65 STX @LOCAL01
    case 0xC23DD7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C2/C23E8A.asm:66 LDY @LOCAL02
    case 0xC23DD9: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C2/C23E8A.asm:67 LDA BATTLERS_TABLE+battler::the_flag,Y
    case 0xC23DDB: cpu.execute_instruction<0xB9>(0x00A1B9, 3); return true;
    // src/unknown/C2/C23E8A.asm:68 AND #$00FF
    case 0xC23DDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC23DDE.
    case 0xC23DE0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C23E8A.asm:69 CMP #1
    case 0xC23DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C23E8A.asm:69 CMP #1
    // Overlapping static entry reached from 0xC23DE1.
    case 0xC23DE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C23E8A.asm:70 BNE @UNKNOWN2
    case 0xC23DE4: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C2/C23E8A.asm:71 LDA BATTLERS_TABLE + battler::unknown76,Y
    case 0xC23DE6: cpu.execute_instruction<0xB9>(0x00A1FA, 3); return true;
    // src/unknown/C2/C23E8A.asm:72 JSL UNKNOWN_C2B66A
    case 0xC23DE9: cpu.execute_instruction<0x22>(0xC2B60F, 4); return true;
    // src/unknown/C2/C23E8A.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC23DED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:74 AND #$00FF
    case 0xC23DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C23E8A.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC23DEF.
    case 0xC23DF1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C23E8A.asm:75 CMP #2
    case 0xC23DF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C23E8A.asm:75 CMP #2
    // Overlapping static entry reached from 0xC23DF2.
    case 0xC23DF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C23E8A.asm:76 BEQ @UNKNOWN3
    case 0xC23DF5: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C2/C23E8A.asm:87 LDA @VIRTUAL02
    case 0xC23DF7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C23E8A.asm:88 LDY #.SIZEOF(battler)
    case 0xC23DF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C23E8A.asm:88 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23DF9.
    case 0xC23DFB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C23E8A.asm:89 JSL MULT168
    case 0xC23DFC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C23E8A.asm:90 TAX
    case 0xC23E00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC23E01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:92 LDA BATTLERS_TABLE+battler::the_flag,X
    case 0xC23E03: cpu.execute_instruction<0xBD>(0x00A1B9, 3); return true;
    // src/unknown/C2/C23E8A.asm:93 CLC
    case 0xC23E06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:94 ADC #CHAR::A_ - 1
    case 0xC23E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x00A640, 3); return true;
    // src/unknown/C2/C23E8A.asm:95 LDX @TMP
    case 0xC23E09: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C2/C23E8A.asm:95 LDX @TMP
    // Overlapping static entry reached from 0xC23E07.
    case 0xC23E0A: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C2/C23E8A.asm:96 STA __BSS_START__,X
    case 0xC23E0B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C23E8A.asm:96 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23E0A.
    case 0xC23E0C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C23E8A.asm:102 LDX #.SIZEOF(enemy_data::name) + 1
    case 0xC23E0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/unknown/C2/C23E8A.asm:102 LDX #.SIZEOF(enemy_data::name) + 1
    // Overlapping static entry reached from 0xC23E0E.
    case 0xC23E10: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C23E8A.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC23E11: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C23E8A.asm:104 LDA #.LOWORD(TARGET_NAME_BUFFER)
    case 0xC23E13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00AB9D, 3); return true;
    // src/unknown/C2/C23E8A.asm:104 LDA #.LOWORD(TARGET_NAME_BUFFER)
    // Overlapping static entry reached from 0xC23E13.
    case 0xC23E15: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C23E8A.asm:105 JSL REDIRECT_C1AC4A
    case 0xC23E16: cpu.execute_instruction<0x22>(0xC1DB4D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C23E8A.asm:114 END_C_FUNCTION
    case 0xC23E1A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C23E8A.asm:114 END_C_FUNCTION
    case 0xC23E1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C240A4.asm (unresolved).
bool execute_unresolved_c2_c240a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C240A4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23F58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC23F5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC23F5B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC23F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC23F5C.
    case 0xC23F5E: cpu.execute_instruction<0xFF>(0x1EA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C240A4.asm:7 END_STACK_VARS
    case 0xC23F5F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23F60: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23F62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23F64: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23F66: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C240A4.asm:9 BRA @UNKNOWN1
    case 0xC23F68: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C240A4.asm:11 JSL WINDOW_TICK
    case 0xC23F6A: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C2/C240A4.asm:13 JSL UNKNOWN_C2EACF
    case 0xC23F6E: cpu.execute_instruction<0x22>(0xC2E9E8, 4); return true;
    // src/unknown/C2/C240A4.asm:14 CMP #0
    case 0xC23F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:14 CMP #0
    // Overlapping static entry reached from 0xC23F72.
    case 0xC23F74: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C240A4.asm:15 BNE @UNKNOWN0
    case 0xC23F75: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C2/C240A4.asm:16 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC23F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/unknown/C2/C240A4.asm:16 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC23F77.
    case 0xC23F79: cpu.execute_instruction<0xA4>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:17 STA CURRENT_TARGET
    case 0xC23F7A: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:17 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC23F79.
    case 0xC23F7B: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/unknown/C2/C240A4.asm:18 LDX #8
    case 0xC23F7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C2/C240A4.asm:18 LDX #8
    // Overlapping static entry reached from 0xC23F7D.
    case 0xC23F7F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C240A4.asm:19 STX @LOCAL00
    case 0xC23F80: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:20 BRA @UNKNOWN5
    case 0xC23F82: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C2/C240A4.asm:22 TXA
    case 0xC23F84: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:23 JSL IS_CHAR_TARGETTED
    case 0xC23F85: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/unknown/C2/C240A4.asm:24 CMP #0
    case 0xC23F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:24 CMP #0
    // Overlapping static entry reached from 0xC23F89.
    case 0xC23F8B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C240A4.asm:25 BEQ @UNKNOWN4
    case 0xC23F8C: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C2/C240A4.asm:26 JSL FIX_TARGET_NAME
    case 0xC23F8E: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23F92.
    case 0xC23F94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23F95: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23F97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23F97.
    case 0xC23F99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23F9A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23F9C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23F9E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FA0: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C2/C240A4.asm:28 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FA4: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C240A4.asm:29 BEQ @UNKNOWN4
    case 0xC23FA6: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C240A4.asm:30 PHA
    case 0xC23FA8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC23FA9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC23FAB: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC23FAE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:31 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC23FB0: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/unknown/C2/C240A4.asm:32 PLA
    case 0xC23FB3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:33 JSL UNKNOWN_C09279
    case 0xC23FB4: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/unknown/C2/C240A4.asm:35 LDA CURRENT_TARGET
    case 0xC23FB8: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:36 CLC
    case 0xC23FBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:37 ADC #.SIZEOF(battler)
    case 0xC23FBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C240A4.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23FBC.
    case 0xC23FBE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:38 STA CURRENT_TARGET
    case 0xC23FBF: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:39 LDX @LOCAL00
    case 0xC23FC2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:40 INX
    case 0xC23FC4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:41 STX @LOCAL00
    case 0xC23FC5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:43 CPX #BATTLER_COUNT
    case 0xC23FC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C2/C240A4.asm:43 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC23FC7.
    case 0xC23FC9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C240A4.asm:44 BCC @UNKNOWN2
    case 0xC23FCA: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // src/unknown/C2/C240A4.asm:45 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC23FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/unknown/C2/C240A4.asm:45 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC23FCC.
    case 0xC23FCE: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:46 STA CURRENT_TARGET
    case 0xC23FCF: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:46 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC23FCE.
    case 0xC23FD0: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/unknown/C2/C240A4.asm:47 LDX #0
    case 0xC23FD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:47 LDX #0
    // Overlapping static entry reached from 0xC23FD2.
    case 0xC23FD4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C240A4.asm:48 STX @LOCAL00
    case 0xC23FD5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:49 BRA @UNKNOWN9
    case 0xC23FD7: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C2/C240A4.asm:51 TXA
    case 0xC23FD9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:52 JSL IS_CHAR_TARGETTED
    case 0xC23FDA: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/unknown/C2/C240A4.asm:53 CMP #0
    case 0xC23FDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C240A4.asm:53 CMP #0
    // Overlapping static entry reached from 0xC23FDE.
    case 0xC23FE0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C240A4.asm:54 BEQ @UNKNOWN8
    case 0xC23FE1: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C2/C240A4.asm:55 JSL FIX_TARGET_NAME
    case 0xC23FE3: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23FE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23FE7.
    case 0xC23FE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23FEA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23FEC.
    case 0xC23FEE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:56 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23FEF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FF1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FF3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FF5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FF7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C2/C240A4.asm:57 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC23FF9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C2/C240A4.asm:58 BEQ @UNKNOWN8
    case 0xC23FFB: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C2/C240A4.asm:59 PHA
    case 0xC23FFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC23FFE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC24000: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC24003: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C240A4.asm:60 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC24005: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/unknown/C2/C240A4.asm:61 PLA
    case 0xC24008: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:62 JSL UNKNOWN_C09279
    case 0xC24009: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/unknown/C2/C240A4.asm:64 LDA CURRENT_TARGET
    case 0xC2400D: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:65 CLC
    case 0xC24010: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:66 ADC #.SIZEOF(battler)
    case 0xC24011: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C240A4.asm:66 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24011.
    case 0xC24013: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C240A4.asm:67 STA CURRENT_TARGET
    case 0xC24014: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/unknown/C2/C240A4.asm:68 LDX @LOCAL00
    case 0xC24017: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:69 INX
    case 0xC24019: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C240A4.asm:70 STX @LOCAL00
    case 0xC2401A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C240A4.asm:72 CPX #8
    case 0xC2401C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C2/C240A4.asm:72 CPX #8
    // Overlapping static entry reached from 0xC2401C.
    case 0xC2401E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C240A4.asm:73 BCC @UNKNOWN6
    case 0xC2401F: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C240A4.asm:74 END_C_FUNCTION
    case 0xC24021: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C240A4.asm:74 END_C_FUNCTION
    case 0xC24022: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24348.asm (unresolved).
bool execute_unresolved_c2_c24348_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24348.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24205: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC24207: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC24208: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC24209: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2420A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2420A.
    case 0xC2420C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2420D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24348.asm:7 END_STACK_VARS
    case 0xC2420E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:8 STA @VIRTUAL04
    case 0xC2420F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C24348.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2420C.
    case 0xC24210: cpu.execute_instruction<0x04>(0x000020, 2); return true;
    // src/unknown/C2/C24348.asm:9 JSR FIND_STEALABLE_ITEMS
    case 0xC24211: cpu.execute_instruction<0x20>(0x004090, 3); return true;
    // src/unknown/C2/C24348.asm:9 JSR FIND_STEALABLE_ITEMS
    // Overlapping static entry reached from 0xC24210.
    case 0xC24212: cpu.execute_instruction<0x90>(0x000040, 2); return true;
    // src/unknown/C2/C24348.asm:10 STA @VIRTUAL02
    case 0xC24214: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C24348.asm:11 LDA #0
    case 0xC24216: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C24348.asm:11 LDA #0
    // Overlapping static entry reached from 0xC24216.
    case 0xC24218: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C24348.asm:12 STA @LOCAL00
    case 0xC24219: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:13 BRA @UNKNOWN2
    case 0xC2421B: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C2/C24348.asm:15 TAX
    case 0xC2421D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:16 LDA STEALABLE_ITEM_CANDIDATES,X
    case 0xC2421E: cpu.execute_instruction<0xBD>(0x00ABA9, 3); return true;
    // src/unknown/C2/C24348.asm:17 AND #$00FF
    case 0xC24221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24348.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC24221.
    case 0xC24223: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C2/C24348.asm:18 CMP @VIRTUAL04
    case 0xC24224: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C2/C24348.asm:19 BNE @UNKNOWN1
    case 0xC24226: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C24348.asm:20 LDA #1
    case 0xC24228: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C24348.asm:20 LDA #1
    // Overlapping static entry reached from 0xC24228.
    case 0xC2422A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C24348.asm:21 BRA @UNKNOWN3
    case 0xC2422B: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C24348.asm:23 LDA @LOCAL00
    case 0xC2422D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:24 INC
    case 0xC2422F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24348.asm:25 STA @LOCAL00
    case 0xC24230: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24348.asm:27 CMP @VIRTUAL02
    case 0xC24232: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C2/C24348.asm:28 BCC @UNKNOWN0
    case 0xC24234: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C2/C24348.asm:29 LDA #0
    case 0xC24236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C24348.asm:29 LDA #0
    // Overlapping static entry reached from 0xC24236.
    case 0xC24238: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24348.asm:31 END_C_FUNCTION
    case 0xC24239: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24348.asm:31 END_C_FUNCTION
    case 0xC2423A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2437E.asm (unresolved).
bool execute_unresolved_c2_c2437e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2437E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2423B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC2423D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC2423E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC2423F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2423F.
    case 0xC24241: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2437E.asm:13 END_STACK_VARS
    case 0xC24242: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:17 LDX CURRENT_ATTACKER
    case 0xC24243: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24241.
    case 0xC24245: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC24246: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C2437E.asm:19 AND #$00FF
    case 0xC24249: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC24249.
    case 0xC2424B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2437E.asm:20 BNEL @UNKNOWN3
    case 0xC2424C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:20 BNEL @UNKNOWN3
    case 0xC2424E: cpu.execute_instruction<0x4C>(0x0042FD, 3); return true;
    // src/unknown/C2/C2437E.asm:21 LDX CURRENT_ATTACKER
    case 0xC24251: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:22 LDA a:battler::npc_id,X
    case 0xC24254: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C2/C2437E.asm:23 AND #$00FF
    case 0xC24257: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC24257.
    case 0xC24259: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C2/C2437E.asm:24 BNEL @UNKNOWN3
    case 0xC2425A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:24 BNEL @UNKNOWN3
    case 0xC2425C: cpu.execute_instruction<0x4C>(0x0042FD, 3); return true;
    // src/unknown/C2/C2437E.asm:25 LDX CURRENT_ATTACKER
    case 0xC2425F: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC24262: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:27 LDA __BSS_START__+7,X
    case 0xC24264: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/unknown/C2/C2437E.asm:28 STA @VIRTUAL00
    case 0xC24267: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC24269: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:30 LDA @VIRTUAL00
    case 0xC2426B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:31 AND #$00FF
    case 0xC2426D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2426D.
    case 0xC2426F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C2437E.asm:32 BEQL @UNKNOWN3
    case 0xC24270: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C2437E.asm:32 BEQL @UNKNOWN3
    case 0xC24272: cpu.execute_instruction<0x4C>(0x0042FD, 3); return true;
    // src/unknown/C2/C2437E.asm:33 LDX CURRENT_ATTACKER
    case 0xC24275: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:34 LDA __BSS_START__,X
    case 0xC24278: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:35 TAY
    case 0xC2427B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:36 STY @LOCAL01
    case 0xC2427C: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C2/C2437E.asm:37 LDX CURRENT_ATTACKER
    case 0xC2427E: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC24281: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:40 LDA a:battler::current_action_argument,X
    case 0xC24283: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C2/C2437E.asm:41 STA @LOCAL01_1
    case 0xC24286: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2437E.asm:42 PHA
    case 0xC24288: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC24289: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:44 LDA @VIRTUAL00
    case 0xC2428B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:45 AND #$00FF
    case 0xC2428D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC2428D.
    case 0xC2428F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C2437E.asm:46 DEC
    case 0xC24290: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:47 STA @VIRTUAL02
    case 0xC24291: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2437E.asm:48 TYA
    case 0xC24293: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:49 DEC
    case 0xC24294: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:50 LDY #.SIZEOF(char_struct)
    case 0xC24295: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2437E.asm:50 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24295.
    case 0xC24297: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2437E.asm:51 JSL MULT168
    case 0xC24298: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2437E.asm:52 CLC
    case 0xC2429C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:53 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC2429D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C2/C2437E.asm:53 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC2429D.
    case 0xC2429F: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C2/C2437E.asm:54 CLC
    case 0xC242A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:55 ADC @VIRTUAL02
    case 0xC242A1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C2/C2437E.asm:55 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2429F.
    case 0xC242A2: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C2/C2437E.asm:56 TAX
    case 0xC242A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC242A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:58 LDA __BSS_START__,X
    case 0xC242A6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:59 SEP #PROC_FLAGS::INDEX8
    case 0xC242A9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2437E.asm:60 PLX
    case 0xC242AB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:61 STX @VIRTUAL00
    case 0xC242AC: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:62 CMP @VIRTUAL00
    case 0xC242AE: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C2/C2437E.asm:63 BNE @UNKNOWN3
    case 0xC242B0: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/unknown/C2/C2437E.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC242B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2437E.asm:65 LDA @LOCAL01_1
    case 0xC242B4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2437E.asm:66 AND #$00FF
    case 0xC242B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC242B6.
    case 0xC242B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2437E.asm:67 STA @LOCAL00
    case 0xC242B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242BB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242BE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C2/C2437E.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC242C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:69 CLC
    case 0xC242C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:70 ADC #item::flags
    case 0xC242C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/unknown/C2/C2437E.asm:70 ADC #item::flags
    // Overlapping static entry reached from 0xC242C4.
    case 0xC242C6: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2437E.asm:71 REP #PROC_FLAGS::INDEX8
    case 0xC242C7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C2/C2437E.asm:100 TAX
    case 0xC242C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:101 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC242CA: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C2/C2437E.asm:102 AND #$00FF
    case 0xC242CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC242CE.
    case 0xC242D0: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2437E.asm:103 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC242D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C2/C2437E.asm:103 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC242D1.
    case 0xC242D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2437E.asm:104 BEQ @UNKNOWN3
    case 0xC242D4: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C2/C2437E.asm:105 LDA @LOCAL00
    case 0xC242D6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2437E.asm:106 TAX
    case 0xC242D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:107 LDY @LOCAL01
    case 0xC242D9: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C2/C2437E.asm:108 TYA
    case 0xC242DB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:109 JSL UNKNOWN_C3EE14
    case 0xC242DC: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/unknown/C2/C2437E.asm:110 CMP #0
    case 0xC242E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:110 CMP #0
    // Overlapping static entry reached from 0xC242E0.
    case 0xC242E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2437E.asm:111 BEQ @UNKNOWN3
    case 0xC242E3: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C2/C2437E.asm:112 LDX CURRENT_ATTACKER
    case 0xC242E5: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:113 LDA __BSS_START__+7,X
    case 0xC242E8: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/unknown/C2/C2437E.asm:114 AND #$00FF
    case 0xC242EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2437E.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC242EB.
    case 0xC242ED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2437E.asm:115 TAX
    case 0xC242EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2437E.asm:116 STX @LOCAL00_1
    case 0xC242EF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:117 LDX CURRENT_ATTACKER
    case 0xC242F1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C2/C2437E.asm:118 LDA __BSS_START__,X
    case 0xC242F4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2437E.asm:119 LDX @LOCAL00_1
    case 0xC242F7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C2437E.asm:120 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC242F9: cpu.execute_instruction<0x22>(0xC1DBA3, 4); return true;
    // src/unknown/C2/C2437E.asm:123 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC242FD: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2437E.asm:125 END_C_FUNCTION
    case 0xC242FF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2437E.asm:125 END_C_FUNCTION
    case 0xC24300: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24434.asm (unresolved).
bool execute_unresolved_c2_c24434_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24434.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24301: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24303: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24304: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24305: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24306: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC24306.
    case 0xC24308: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24309: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC2430A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:8 TAX
    case 0xC2430B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:9 STX @LOCAL00
    case 0xC2430C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:10 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2430E: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C2/C24434.asm:11 CLC
    case 0xC24311: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:12 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC24312: cpu.execute_instruction<0x6D>(0x00AF2D, 3); return true;
    // src/unknown/C2/C24434.asm:13 JSR RAND_LIMIT
    case 0xC24315: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/unknown/C2/C24434.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC24318: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C24434.asm:15 INC
    case 0xC2431A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:16 LDX @LOCAL00
    case 0xC2431B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:17 STA a:battler::current_target,X
    case 0xC2431D: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C2/C24434.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC24320: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    case 0xC24322: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC24322.
    case 0xC24324: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C2/C24434.asm:20 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24325: cpu.execute_instruction<0xCD>(0x00AF2B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC24328: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC2432A: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C2/C24434.asm:22 SEC
    case 0xC2432C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:23 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2432D: cpu.execute_instruction<0xED>(0x00AF2B, 3); return true;
    // src/unknown/C2/C24434.asm:24 TAX
    case 0xC24330: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:25 DEX
    case 0xC24331: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:26 LDA BACK_ROW_BATTLERS,X
    case 0xC24332: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    case 0xC24335: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC24335.
    case 0xC24337: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C24434.asm:28 BRA @UNKNOWN1
    case 0xC24338: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C2/C24434.asm:30 TAX
    case 0xC2433A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:31 DEX
    case 0xC2433B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24434.asm:32 LDA FRONT_ROW_BATTLERS,X
    case 0xC2433C: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    case 0xC2433F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC2433F.
    case 0xC24341: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24342: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24343: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C24703.asm (unresolved).
bool execute_unresolved_c2_c24703_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24703.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC245D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC245D5.
    case 0xC245D7: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:8 TAX
    case 0xC245DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:9 STX @LOCAL00
    case 0xC245DB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC245DD.
    case 0xC245DF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E0: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC245E3.
    case 0xC245E5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E6: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/unknown/C2/C24703.asm:11 LDA a:battler::action_targetting,X
    case 0xC245E9: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    case 0xC245EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC245EC.
    case 0xC245EE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C24703.asm:13 CMP #1
    case 0xC245EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C24703.asm:13 CMP #1
    // Overlapping static entry reached from 0xC245EF.
    case 0xC245F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:14 BEQ @UNKNOWN2
    case 0xC245F2: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:15 CMP #2
    case 0xC245F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C24703.asm:15 CMP #2
    // Overlapping static entry reached from 0xC245F4.
    case 0xC245F6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:16 BEQ @UNKNOWN3
    case 0xC245F7: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C2/C24703.asm:17 CMP #4
    case 0xC245F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:17 CMP #4
    // Overlapping static entry reached from 0xC245F9.
    case 0xC245FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:18 BEQ @UNKNOWN3
    case 0xC245FC: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C2/C24703.asm:19 CMP #17
    case 0xC245FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/unknown/C2/C24703.asm:19 CMP #17
    // Overlapping static entry reached from 0xC245FE.
    case 0xC24600: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:20 BEQ @UNKNOWN5
    case 0xC24601: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/unknown/C2/C24703.asm:21 CMP #18
    case 0xC24603: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/unknown/C2/C24703.asm:21 CMP #18
    // Overlapping static entry reached from 0xC24603.
    case 0xC24605: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24606: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24608: cpu.execute_instruction<0x4C>(0x0046C2, 3); return true;
    // src/unknown/C2/C24703.asm:23 CMP #20
    case 0xC2460B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/unknown/C2/C24703.asm:23 CMP #20
    // Overlapping static entry reached from 0xC2460B.
    case 0xC2460D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC2460E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24610: cpu.execute_instruction<0x4C>(0x0046D6, 3); return true;
    // src/unknown/C2/C24703.asm:25 JMP @UNKNOWN14
    case 0xC24613: cpu.execute_instruction<0x4C>(0x0046EC, 3); return true;
    // src/unknown/C2/C24703.asm:27 LDA a:battler::current_target,X
    case 0xC24616: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    case 0xC24619: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC24619.
    case 0xC2461B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C2/C24703.asm:29 DEC
    case 0xC2461C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:30 JSL TARGET_BATTLER
    case 0xC2461D: cpu.execute_instruction<0x22>(0xC26F1B, 4); return true;
    // src/unknown/C2/C24703.asm:31 JMP @UNKNOWN14
    case 0xC24621: cpu.execute_instruction<0x4C>(0x0046EC, 3); return true;
    // src/unknown/C2/C24703.asm:33 JSL TARGET_ALLIES
    case 0xC24624: cpu.execute_instruction<0x22>(0xC26B3A, 4); return true;
    // src/unknown/C2/C24703.asm:34 LDX @LOCAL00
    case 0xC24628: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:35 LDA a:battler::current_action,X
    case 0xC2462A: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:36 JSL GET_SHIELD_TARGETTING
    case 0xC2462D: cpu.execute_instruction<0x22>(0xC23E9E, 4); return true;
    // src/unknown/C2/C24703.asm:37 CMP #0
    case 0xC24631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C24703.asm:37 CMP #0
    // Overlapping static entry reached from 0xC24631.
    case 0xC24633: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:38 BNE @UNKNOWN4
    case 0xC24634: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:39 LDX @LOCAL00
    case 0xC24636: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:40 LDA a:battler::ally_or_enemy,X
    case 0xC24638: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    case 0xC2463B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2463B.
    case 0xC2463D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:42 BNE @UNKNOWN4
    case 0xC2463E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C24703.asm:43 JSL REMOVE_NPC_TARGETTING
    case 0xC24640: cpu.execute_instruction<0x22>(0xC26DB6, 4); return true;
    // src/unknown/C2/C24703.asm:45 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24644: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // src/unknown/C2/C24703.asm:46 JMP @UNKNOWN14
    case 0xC24648: cpu.execute_instruction<0x4C>(0x0046EC, 3); return true;
    // src/unknown/C2/C24703.asm:48 LDA a:battler::current_target,X
    case 0xC2464B: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    case 0xC2464E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2464E.
    case 0xC24650: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C2/C24703.asm:50 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24651: cpu.execute_instruction<0xCD>(0x00AF2B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24654: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24656: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C2/C24703.asm:52 SEC
    case 0xC24658: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:53 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24659: cpu.execute_instruction<0xED>(0x00AF2B, 3); return true;
    // src/unknown/C2/C24703.asm:54 TAX
    case 0xC2465C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:55 DEX
    case 0xC2465D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:56 LDA BACK_ROW_BATTLERS,X
    case 0xC2465E: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    case 0xC24661: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC24661.
    case 0xC24663: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:58 JSL TARGET_BATTLER
    case 0xC24664: cpu.execute_instruction<0x22>(0xC26F1B, 4); return true;
    // src/unknown/C2/C24703.asm:59 BRA @UNKNOWN7
    case 0xC24668: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C2/C24703.asm:61 TAX
    case 0xC2466A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:62 DEX
    case 0xC2466B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:63 LDA FRONT_ROW_BATTLERS,X
    case 0xC2466C: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    case 0xC2466F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2466F.
    case 0xC24671: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:65 JSL TARGET_BATTLER
    case 0xC24672: cpu.execute_instruction<0x22>(0xC26F1B, 4); return true;
    // src/unknown/C2/C24703.asm:67 LDX @LOCAL00
    case 0xC24676: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:68 LDA a:battler::current_action,X
    case 0xC24678: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    case 0xC2467B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000027, 3); return true;
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    // Overlapping static entry reached from 0xC2467B.
    case 0xC2467D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:70 BNE @UNKNOWN14
    case 0xC2467E: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/unknown/C2/C24703.asm:71 LDA #8
    case 0xC24680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C2/C24703.asm:71 LDA #8
    // Overlapping static entry reached from 0xC24680.
    case 0xC24682: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C24703.asm:72 STA @LOCAL00
    case 0xC24683: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:73 BRA @UNKNOWN10
    case 0xC24685: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    case 0xC24687: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24687.
    case 0xC24689: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:76 JSL MULT168
    case 0xC2468A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C24703.asm:77 TAX
    case 0xC2468E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:78 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2468F: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    case 0xC24692: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC24692.
    case 0xC24694: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C24703.asm:80 BEQ @UNKNOWN9
    case 0xC24695: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C2/C24703.asm:81 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC24697: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    case 0xC2469A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC2469A.
    case 0xC2469C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2469D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2469D.
    case 0xC2469F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:84 BNE @UNKNOWN9
    case 0xC246A0: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC246A2.
    case 0xC246A4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A5: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC246A8.
    case 0xC246AA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246AB: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/unknown/C2/C24703.asm:86 LDA @LOCAL00
    case 0xC246AE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:87 JSL TARGET_BATTLER
    case 0xC246B0: cpu.execute_instruction<0x22>(0xC26F1B, 4); return true;
    // src/unknown/C2/C24703.asm:88 BRA @UNKNOWN14
    case 0xC246B4: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C2/C24703.asm:90 LDA @LOCAL00
    case 0xC246B6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:91 INC
    case 0xC246B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C24703.asm:92 STA @LOCAL00
    case 0xC246B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    case 0xC246BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC246BB.
    case 0xC246BD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C24703.asm:95 BCC @UNKNOWN8
    case 0xC246BE: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C2/C24703.asm:96 BRA @UNKNOWN14
    case 0xC246C0: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C2/C24703.asm:98 LDA a:battler::current_target,X
    case 0xC246C2: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    case 0xC246C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC246C5.
    case 0xC246C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C24703.asm:100 JSL TARGET_ROW
    case 0xC246C8: cpu.execute_instruction<0x22>(0xC26C43, 4); return true;
    // src/unknown/C2/C24703.asm:101 JSL REMOVE_NPC_TARGETTING
    case 0xC246CC: cpu.execute_instruction<0x22>(0xC26DB6, 4); return true;
    // src/unknown/C2/C24703.asm:102 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC246D0: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // src/unknown/C2/C24703.asm:103 BRA @UNKNOWN14
    case 0xC246D4: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C2/C24703.asm:105 JSL TARGET_ALL_ENEMIES
    case 0xC246D6: cpu.execute_instruction<0x22>(0xC26BC1, 4); return true;
    // src/unknown/C2/C24703.asm:106 LDX @LOCAL00
    case 0xC246DA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C2/C24703.asm:107 LDA a:battler::ally_or_enemy,X
    case 0xC246DC: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    case 0xC246DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC246DF.
    case 0xC246E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C24703.asm:109 BNE @UNKNOWN13
    case 0xC246E2: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C2/C24703.asm:110 JSL REMOVE_NPC_TARGETTING
    case 0xC246E4: cpu.execute_instruction<0x22>(0xC26DB6, 4); return true;
    // src/unknown/C2/C24703.asm:112 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC246E8: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC246EC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC246ED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C26189.asm (unresolved).
bool execute_unresolved_c2_c26189_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C26189.asm:3 BEGIN_C_FUNCTION
    case 0xC260B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC260BA.
    case 0xC260BC: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C26189.asm:8 END_STACK_VARS
    case 0xC260BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:9 TAX
    case 0xC260BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:10 STX @LOCAL01
    case 0xC260C0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C26189.asm:11 LDA #0
    case 0xC260C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C26189.asm:11 LDA #0
    // Overlapping static entry reached from 0xC260C2.
    case 0xC260C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C26189.asm:12 STA @LOCAL00
    case 0xC260C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:13 BRA @UNKNOWN1
    case 0xC260C7: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:15 LDX @LOCAL01
    case 0xC260C9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C26189.asm:16 PHX
    case 0xC260CB: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:17 ASL
    case 0xC260CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:18 TAX
    case 0xC260CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:19 PLA
    case 0xC260CE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:20 STA PALETTES,X
    case 0xC260CF: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C2/C26189.asm:21 LDA @LOCAL00
    case 0xC260D2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:22 INC
    case 0xC260D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C26189.asm:23 STA @LOCAL00
    case 0xC260D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C26189.asm:25 CMP #$0100
    case 0xC260D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C26189.asm:25 CMP #$0100
    // Overlapping static entry reached from 0xC260D7.
    case 0xC260D9: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C2/C26189.asm:26 BCC @UNKNOWN0
    case 0xC260DA: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C2/C26189.asm:26 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC260D9.
    case 0xC260DB: cpu.execute_instruction<0xED>(0x0018A9, 3); return true;
    // src/unknown/C2/C26189.asm:27 LDA #24
    case 0xC260DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C26189.asm:27 LDA #24
    // Overlapping static entry reached from 0xC260DC.
    case 0xC260DE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C26189.asm:28 JSL UNKNOWN_C0856B
    case 0xC260DF: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C26189.asm:29 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC260E3: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C26189.asm:30 END_C_FUNCTION
    case 0xC260E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C26189.asm:30 END_C_FUNCTION
    case 0xC260E8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2654C.asm (unresolved).
bool execute_unresolved_c2_c2654c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2654C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26480: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26482: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26483: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26484: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC26484.
    case 0xC26486: cpu.execute_instruction<0xFF>(0x24A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2654C.asm:11 END_STACK_VARS
    case 0xC26487: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:12 LDA #SFX::RECOVER_HP
    case 0xC26488: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C2/C2654C.asm:12 LDA #SFX::RECOVER_HP
    // Overlapping static entry reached from 0xC26488.
    case 0xC2648A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:13 JSL PLAY_SOUND
    case 0xC2648B: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C2/C2654C.asm:14 LDY #0
    case 0xC2648F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:14 LDY #0
    // Overlapping static entry reached from 0xC2648F.
    case 0xC26491: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2654C.asm:15 STY @LOCAL05
    case 0xC26492: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:16 BRA @UNKNOWN5
    case 0xC26494: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC26496: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26496.
    case 0xC26498: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC26499: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC2649B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2649B.
    case 0xC2649D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2654C.asm:18 LOADPTR BUFFER, @LOCAL00
    case 0xC2649E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC264A0.
    case 0xC264A2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A5: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2654C.asm:19 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC264AB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2654C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC264AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC264AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC264B1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC264B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2654C.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC264B5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C2654C.asm:22 LDA #.LOWORD(PALETTES)
    case 0xC264B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C2/C2654C.asm:22 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC264B7.
    case 0xC264B9: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:23 JSL MEMCPY24
    case 0xC264BA: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C2/C2654C.asm:24 LDA #0
    case 0xC264BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:24 LDA #0
    // Overlapping static entry reached from 0xC264BE.
    case 0xC264C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2654C.asm:25 STA @LOCAL04
    case 0xC264C1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:26 BRA @UNKNOWN2
    case 0xC264C3: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2654C.asm:28 ASL
    case 0xC264C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:29 TAX
    case 0xC264C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:30 LDA #$5D70 ; RGB (16, 11, 23), a kind of purple
    case 0xC264C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x005D70, 3); return true;
    // src/unknown/C2/C2654C.asm:30 LDA #$5D70 ; RGB (16, 11, 23), a kind of purple
    // Overlapping static entry reached from 0xC264C7.
    case 0xC264C9: cpu.execute_instruction<0x5D>(0x00009D, 3); return true;
    // src/unknown/C2/C2654C.asm:31 STA PALETTES,X
    case 0xC264CA: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C2/C2654C.asm:31 STA PALETTES,X
    // Overlapping static entry reached from 0xC264C9.
    case 0xC264CC: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C2/C2654C.asm:32 LDA @LOCAL04
    case 0xC264CD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:33 INC
    case 0xC264CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:34 STA @LOCAL04
    case 0xC264D0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:36 CMP #$0100
    case 0xC264D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C2/C2654C.asm:36 CMP #$0100
    // Overlapping static entry reached from 0xC264D2.
    case 0xC264D4: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:37 BCC @UNKNOWN1
    case 0xC264D5: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C2/C2654C.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC264D4.
    case 0xC264D6: cpu.execute_instruction<0xEE>(0x00FFA2, 3); return true;
    // src/unknown/C2/C2654C.asm:38 LDX #$FFFF
    case 0xC264D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2654C.asm:38 LDX #$FFFF
    // Overlapping static entry reached from 0xC264D7.
    case 0xC264D9: cpu.execute_instruction<0xFF>(0x000CA9, 4); return true;
    // src/unknown/C2/C2654C.asm:39 LDA #12
    case 0xC264DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C2/C2654C.asm:39 LDA #12
    // Overlapping static entry reached from 0xC264DA.
    case 0xC264DC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:40 JSL UNKNOWN_C496E7
    case 0xC264DD: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/unknown/C2/C2654C.asm:41 LDX #0
    case 0xC264E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:41 LDX #0
    // Overlapping static entry reached from 0xC264E1.
    case 0xC264E3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C2/C2654C.asm:42 STX @LOCAL04
    case 0xC264E4: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:43 BRA @UNKNOWN4
    case 0xC264E6: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2654C.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC264E8: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/unknown/C2/C2654C.asm:46 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC264EC: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C2/C2654C.asm:47 LDX @LOCAL04
    case 0xC264F0: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:48 INX
    case 0xC264F2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:49 STX @LOCAL04
    case 0xC264F3: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C2654C.asm:51 CPX #12
    case 0xC264F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/C2/C2654C.asm:51 CPX #12
    // Overlapping static entry reached from 0xC264F5.
    case 0xC264F7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:52 BCC @UNKNOWN3
    case 0xC264F8: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C2/C2654C.asm:53 JSL UNKNOWN_C49740
    case 0xC264FA: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/unknown/C2/C2654C.asm:54 LDY @LOCAL05
    case 0xC264FE: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:55 INY
    case 0xC26500: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:56 STY @LOCAL05
    case 0xC26501: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C2/C2654C.asm:58 CPY #2
    case 0xC26503: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C2/C2654C.asm:58 CPY #2
    // Overlapping static entry reached from 0xC26503.
    case 0xC26505: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:59 BCC @UNKNOWN0
    case 0xC26506: cpu.execute_instruction<0x90>(0x00008E, 2); return true;
    // src/unknown/C2/C2654C.asm:60 LDA #0
    case 0xC26508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:60 LDA #0
    // Overlapping static entry reached from 0xC26508.
    case 0xC2650A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2654C.asm:61 STA @VIRTUAL02
    case 0xC2650B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:62 BRA @UNKNOWN9
    case 0xC2650D: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C2/C2654C.asm:65 LDA @VIRTUAL02
    case 0xC2650F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:66 CLC
    case 0xC26511: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:67 ADC #.LOWORD(GAME_STATE)
    case 0xC26512: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C2/C2654C.asm:67 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC26512.
    case 0xC26514: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:68 TAX
    case 0xC26515: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:69 LDA a:game_state::party_members,X
    case 0xC26516: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C2/C2654C.asm:74 AND #$00FF
    case 0xC26519: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2654C.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC26519.
    case 0xC2651B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2654C.asm:75 TAX
    case 0xC2651C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:76 CPX #1
    case 0xC2651D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C2/C2654C.asm:76 CPX #1
    // Overlapping static entry reached from 0xC2651D.
    case 0xC2651F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2654C.asm:77 BEQ @UNKNOWN7
    case 0xC26520: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C2/C2654C.asm:78 CPX #2
    case 0xC26522: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C2/C2654C.asm:78 CPX #2
    // Overlapping static entry reached from 0xC26522.
    case 0xC26524: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2654C.asm:79 BEQ @UNKNOWN7
    case 0xC26525: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2654C.asm:80 CPX #4
    case 0xC26527: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C2/C2654C.asm:80 CPX #4
    // Overlapping static entry reached from 0xC26527.
    case 0xC26529: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2654C.asm:81 BNE @UNKNOWN8
    case 0xC2652A: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C2/C2654C.asm:83 TXA
    case 0xC2652C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:84 DEC
    case 0xC2652D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:85 LDY #.SIZEOF(char_struct)
    case 0xC2652E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C2/C2654C.asm:85 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2652E.
    case 0xC26530: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2654C.asm:86 JSL MULT168
    case 0xC26531: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2654C.asm:87 STA @LOCAL03
    case 0xC26535: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:88 CLC
    case 0xC26537: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:89 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC26538: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x009CCB, 3); return true;
    // src/unknown/C2/C2654C.asm:89 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC26538.
    case 0xC2653A: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/unknown/C2/C2654C.asm:90 TAY
    case 0xC2653B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:91 LDA __BSS_START__,Y
    case 0xC2653C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:91 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2653A.
    case 0xC2653D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2654C.asm:92 CLC
    case 0xC2653F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:93 ADC #20
    case 0xC26540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000014, 2); else cpu.execute_instruction<0x69>(0x000014, 3); return true;
    // src/unknown/C2/C2654C.asm:93 ADC #20
    // Overlapping static entry reached from 0xC26540.
    case 0xC26542: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2654C.asm:94 TAX
    case 0xC26543: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:95 STX @LOCAL02
    case 0xC26544: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C2654C.asm:96 TXA
    case 0xC26546: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:97 STA __BSS_START__,Y
    case 0xC26547: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:98 LDA @LOCAL03
    case 0xC2654A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:99 TAX
    case 0xC2654C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:100 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC2654D: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // src/unknown/C2/C2654C.asm:101 STA @LOCAL03
    case 0xC26550: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:102 STA @VIRTUAL04
    case 0xC26552: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2654C.asm:103 LDX @LOCAL02
    case 0xC26554: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C2654C.asm:104 TXA
    case 0xC26556: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2654C.asm:105 CMP @VIRTUAL04
    case 0xC26557: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2654C.asm:106 BLTEQ @UNKNOWN8
    case 0xC26559: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2654C.asm:106 BLTEQ @UNKNOWN8
    case 0xC2655B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2654C.asm:107 LDA @LOCAL03
    case 0xC2655D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2654C.asm:108 STA __BSS_START__,Y
    case 0xC2655F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2654C.asm:110 INC @VIRTUAL02
    case 0xC26562: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:112 LDA @VIRTUAL02
    case 0xC26564: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2654C.asm:113 CMP #6
    case 0xC26566: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C2/C2654C.asm:113 CMP #6
    // Overlapping static entry reached from 0xC26566.
    case 0xC26568: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2654C.asm:114 BCC @UNKNOWN6
    case 0xC26569: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2654C.asm:115 END_C_FUNCTION
    case 0xC2656B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2654C.asm:115 END_C_FUNCTION
    case 0xC2656C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C269DE.asm (unresolved).
bool execute_unresolved_c2_c269de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C269DE.asm:3 BEGIN_C_FUNCTION
    case 0xC2691D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C2/C269DE.asm:5 BRA @UNKNOWN1
    case 0xC2691F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C269DE.asm:7 JSL WINDOW_TICK
    case 0xC26921: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C2/C269DE.asm:9 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC26925: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C2/C269DE.asm:10 AND #$00FF
    case 0xC26928: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C269DE.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC26928.
    case 0xC2692A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C269DE.asm:11 BNE @UNKNOWN0
    case 0xC2692B: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C269DE.asm:12 END_C_FUNCTION
    case 0xC2692D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C290C6.asm (unresolved).
bool execute_unresolved_c2_c290c6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C290C6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2905D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC2905F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC29060: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC29061: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29061.
    case 0xC29063: cpu.execute_instruction<0xFF>(0xE7AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C290C6.asm:8 END_STACK_VARS
    case 0xC29064: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:9 LDA MIRROR_ENEMY
    case 0xC29065: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // src/unknown/C2/C290C6.asm:9 LDA MIRROR_ENEMY
    // Overlapping static entry reached from 0xC29063.
    case 0xC29067: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:10 BEQ @UNKNOWN3
    case 0xC29068: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C2/C290C6.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2906A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/unknown/C2/C290C6.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2906A.
    case 0xC2906C: cpu.execute_instruction<0xA1>(0x000086, 2); return true;
    // src/unknown/C2/C290C6.asm:12 STX @LOCAL02
    case 0xC2906D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC2906C.
    case 0xC2906E: cpu.execute_instruction<0x16>(0x0000A0, 2); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    case 0xC2906F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    // Overlapping static entry reached from 0xC2906E.
    case 0xC29070: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C290C6.asm:13 LDY #0
    // Overlapping static entry reached from 0xC2906F.
    case 0xC29071: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C290C6.asm:14 BRA @UNKNOWN2
    case 0xC29072: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C2/C290C6.asm:16 LDA a:battler::consciousness,X
    case 0xC29074: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C290C6.asm:17 AND #$00FF
    case 0xC29077: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C290C6.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC29077.
    case 0xC29079: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C290C6.asm:18 BEQ @UNKNOWN1
    case 0xC2907A: cpu.execute_instruction<0xF0>(0x000058, 2); return true;
    // src/unknown/C2/C290C6.asm:19 LDA a:battler::ally_or_enemy,X
    case 0xC2907C: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C2/C290C6.asm:20 AND #$00FF
    case 0xC2907F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C290C6.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2907F.
    case 0xC29081: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C290C6.asm:21 BNE @UNKNOWN1
    case 0xC29082: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/unknown/C2/C290C6.asm:22 LDA a:battler::id,X
    case 0xC29084: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C290C6.asm:23 CMP #4
    case 0xC29087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C2/C290C6.asm:23 CMP #4
    // Overlapping static entry reached from 0xC29087.
    case 0xC29089: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C290C6.asm:24 BNE @UNKNOWN1
    case 0xC2908A: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C2/C290C6.asm:25 STZ MIRROR_ENEMY
    case 0xC2908C: cpu.execute_instruction<0x9C>(0x00ABE7, 3); return true;
    // src/unknown/C2/C290C6.asm:26 TXA
    case 0xC2908F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29090: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29092: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29093: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29095: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29096: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C290C6.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC29098: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C290C6.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2909A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2909C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2909E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC290A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC290A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x00ABE9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC290A4.
    case 0xC290A6: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290A9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C290C6.asm:30 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC290AF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C290C6.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC290B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC290B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC290B5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC290B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC290B9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C2/C290C6.asm:33 JSL COPY_MIRROR_DATA
    case 0xC290BB: cpu.execute_instruction<0x22>(0xC2AED3, 4); return true;
    // src/unknown/C2/C290C6.asm:34 LDX @LOCAL02
    case 0xC290BF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:35 STZ a:battler::current_action,X
    case 0xC290C1: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC290C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x003611, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC290C4.
    case 0xC290C6: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC290C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC290C6.
    case 0xC290C8: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC290C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC290C9.
    case 0xC290CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC290CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/unknown/C2/C290C6.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC290CE: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/unknown/C2/C290C6.asm:37 BRA @UNKNOWN3
    case 0xC290D2: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C290C6.asm:39 TXA
    case 0xC290D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:40 CLC
    case 0xC290D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:41 ADC #.SIZEOF(battler)
    case 0xC290D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C290C6.asm:41 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC290D6.
    case 0xC290D8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C290C6.asm:42 TAX
    case 0xC290D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:43 STX @LOCAL02
    case 0xC290DA: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C2/C290C6.asm:44 INY
    case 0xC290DC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C290C6.asm:46 CPY #BATTLER_COUNT
    case 0xC290DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C290C6.asm:46 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC290DD.
    case 0xC290DF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C290C6.asm:47 BCC @UNKNOWN0
    case 0xC290E0: cpu.execute_instruction<0x90>(0x000092, 2); return true;
    // src/unknown/C2/C290C6.asm:49 JSL TARGET_ALL
    case 0xC290E2: cpu.execute_instruction<0x22>(0xC26D3F, 4); return true;
    // src/unknown/C2/C290C6.asm:50 JSR REMOVE_DEAD_TARGETTING
    case 0xC290E6: cpu.execute_instruction<0x20>(0x007023, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC290E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x008FE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC290E9.
    case 0xC290EB: cpu.execute_instruction<0x8F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC290EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC290EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC290EB.
    case 0xC290EF: cpu.execute_instruction<0xC2>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    // Overlapping static entry reached from 0xC290EE.
    case 0xC290F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C290C6.asm:51 LOADPTR BTLACT_NEUTRALIZE, @LOCAL00
    case 0xC290F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C290C6.asm:52 JSL UNKNOWN_C240A4
    case 0xC290F3: cpu.execute_instruction<0x22>(0xC23F58, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC290F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC290F7.
    case 0xC290F9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC290FA: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC290FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC290FD.
    case 0xC290FF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C290C6.asm:53 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29100: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C290C6.asm:54 END_C_FUNCTION
    case 0xC29103: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C290C6.asm:54 END_C_FUNCTION
    case 0xC29104: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2B66A.asm (unresolved).
bool execute_unresolved_c2_c2b66a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2B66A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B60F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2B66A.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B60D.
    case 0xC2B610: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B611: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B612: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B613: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B614: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B614.
    case 0xC2B616: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B617: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2B66A.asm:9 END_STACK_VARS
    case 0xC2B618: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:10 TAY
    case 0xC2B619: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:11 STY @LOCAL02
    case 0xC2B61A: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/unknown/C2/C2B66A.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B61C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C2/C2B66A.asm:13 STZ_BADOPT @LOCAL00
    case 0xC2B61E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2B66A.asm:13 STZ_BADOPT @LOCAL00
    case 0xC2B620: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2B66A.asm:13 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2B61E.
    case 0xC2B621: cpu.execute_instruction<0x0E>(0x001AA2, 3); return true;
    // src/unknown/C2/C2B66A.asm:14 LDX #26
    case 0xC2B622: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001A, 2); else cpu.execute_instruction<0xA2>(0x00001A, 3); return true;
    // src/unknown/C2/C2B66A.asm:14 LDX #26
    // Overlapping static entry reached from 0xC2B622.
    case 0xC2B624: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2B66A.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2B625: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:16 LDA #.LOWORD(USED_ENEMY_LETTERS)
    case 0xC2B627: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006D, 2); else cpu.execute_instruction<0xA9>(0x00AC6D, 3); return true;
    // src/unknown/C2/C2B66A.asm:16 LDA #.LOWORD(USED_ENEMY_LETTERS)
    // Overlapping static entry reached from 0xC2B627.
    case 0xC2B629: cpu.execute_instruction<0xAC>(0x00ED22, 3); return true;
    // src/unknown/C2/C2B66A.asm:17 JSL MEMSET16
    case 0xC2B62A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C2/C2B66A.asm:17 JSL MEMSET16
    // Overlapping static entry reached from 0xC2B629.
    case 0xC2B62C: cpu.execute_instruction<0x8E>(0x00A9C0, 3); return true;
    // src/unknown/C2/C2B66A.asm:18 LDA #0
    case 0xC2B62E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2B66A.asm:18 LDA #0
    // Overlapping static entry reached from 0xC2B62C.
    case 0xC2B62F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2B66A.asm:18 LDA #0
    // Overlapping static entry reached from 0xC2B62E.
    case 0xC2B630: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2B66A.asm:19 STA @LOCAL01
    case 0xC2B631: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:20 BRA @UNKNOWN2
    case 0xC2B633: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C2/C2B66A.asm:22 LDY #.SIZEOF(battler)
    case 0xC2B635: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C2/C2B66A.asm:22 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B635.
    case 0xC2B637: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2B66A.asm:23 JSL MULT168
    case 0xC2B638: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C2/C2B66A.asm:24 TAX
    case 0xC2B63C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:25 LDA BATTLERS_TABLE + battler::consciousness,X
    case 0xC2B63D: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/unknown/C2/C2B66A.asm:26 AND #$00FF
    case 0xC2B640: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B640.
    case 0xC2B642: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2B66A.asm:27 BEQ @UNKNOWN1
    case 0xC2B643: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C2/C2B66A.asm:28 LDA BATTLERS_TABLE + battler::ally_or_enemy,X
    case 0xC2B645: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/unknown/C2/C2B66A.asm:29 AND #$00FF
    case 0xC2B648: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2B648.
    case 0xC2B64A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2B66A.asm:30 CMP #1
    case 0xC2B64B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2B66A.asm:30 CMP #1
    // Overlapping static entry reached from 0xC2B64B.
    case 0xC2B64D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2B66A.asm:31 BNE @UNKNOWN1
    case 0xC2B64E: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C2/C2B66A.asm:32 LDY @LOCAL02
    case 0xC2B650: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C2/C2B66A.asm:33 TYA
    case 0xC2B652: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:34 CMP BATTLERS_TABLE + battler::unknown76,X
    case 0xC2B653: cpu.execute_instruction<0xDD>(0x00A1FA, 3); return true;
    // src/unknown/C2/C2B66A.asm:35 BNE @UNKNOWN1
    case 0xC2B656: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:36 LDA BATTLERS_TABLE + battler::the_flag,X
    case 0xC2B658: cpu.execute_instruction<0xBD>(0x00A1B9, 3); return true;
    // src/unknown/C2/C2B66A.asm:37 AND #$00FF
    case 0xC2B65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC2B65B.
    case 0xC2B65D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2B66A.asm:38 TAX
    case 0xC2B65E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:39 DEX
    case 0xC2B65F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B660: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:41 LDA #1
    case 0xC2B662: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C2/C2B66A.asm:42 STA USED_ENEMY_LETTERS,X
    case 0xC2B664: cpu.execute_instruction<0x9D>(0x00AC6D, 3); return true;
    // src/unknown/C2/C2B66A.asm:42 STA USED_ENEMY_LETTERS,X
    // Overlapping static entry reached from 0xC2B662.
    case 0xC2B665: cpu.execute_instruction<0x6D>(0x00C2AC, 3); return true;
    // src/unknown/C2/C2B66A.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2B667: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B665.
    case 0xC2B668: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C2/C2B66A.asm:45 LDA @LOCAL01
    case 0xC2B669: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:46 INC
    case 0xC2B66B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:47 STA @LOCAL01
    case 0xC2B66C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:49 CMP #BATTLER_COUNT
    case 0xC2B66E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C2/C2B66A.asm:49 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2B66E.
    case 0xC2B670: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2B66A.asm:50 BCC @UNKNOWN0
    case 0xC2B671: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/unknown/C2/C2B66A.asm:51 LDX #0
    case 0xC2B673: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2B66A.asm:51 LDX #0
    // Overlapping static entry reached from 0xC2B673.
    case 0xC2B675: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2B66A.asm:52 BRA @UNKNOWN5
    case 0xC2B676: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C2/C2B66A.asm:54 LDA USED_ENEMY_LETTERS,X
    case 0xC2B678: cpu.execute_instruction<0xBD>(0x00AC6D, 3); return true;
    // src/unknown/C2/C2B66A.asm:55 AND #$00FF
    case 0xC2B67B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2B66A.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2B67B.
    case 0xC2B67D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2B66A.asm:56 BNE @UNKNOWN4
    case 0xC2B67E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C2/C2B66A.asm:57 TXA
    case 0xC2B680: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B681: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:59 INC
    case 0xC2B683: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:60 BRA @UNKNOWN6
    case 0xC2B684: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C2/C2B66A.asm:62 INX
    case 0xC2B686: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2B66A.asm:64 CPX #26
    case 0xC2B687: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001A, 2); else cpu.execute_instruction<0xE0>(0x00001A, 3); return true;
    // src/unknown/C2/C2B66A.asm:64 CPX #26
    // Overlapping static entry reached from 0xC2B687.
    case 0xC2B689: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2B66A.asm:65 BCC @UNKNOWN3
    case 0xC2B68A: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/unknown/C2/C2B66A.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B68C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2B66A.asm:67 LDA #0
    case 0xC2B68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002B00, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2B66A.asm:69 END_C_FUNCTION
    case 0xC2B690: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2B66A.asm:69 END_C_FUNCTION
    case 0xC2B691: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2BCB9.asm (unresolved).
bool execute_unresolved_c2_c2bcb9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2BCB9.asm:2 BEGIN_C_FUNCTION_FAR
    case 0xC2BC64: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC66: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC67: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC68: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC69.
    case 0xC2BC6B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC6C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2BCB9.asm:7 END_STACK_VARS
    case 0xC2BC6D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:8 STX @VIRTUAL02
    case 0xC2BC6E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2BC6B.
    case 0xC2BC6F: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2BCB9.asm:9 TAY
    case 0xC2BC70: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:10 LDA a:battler::pp_target,Y
    case 0xC2BC71: cpu.execute_instruction<0xB9>(0x000019, 3); return true;
    // src/unknown/C2/C2BCB9.asm:11 STA @LOCAL00
    case 0xC2BC74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2BCB9.asm:12 STA @VIRTUAL04
    case 0xC2BC76: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2BCB9.asm:13 LDA @VIRTUAL02
    case 0xC2BC78: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:14 CMP @VIRTUAL04
    case 0xC2BC7A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2BCB9.asm:15 BLTEQ @UNKNOWN0
    case 0xC2BC7C: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2BCB9.asm:15 BLTEQ @UNKNOWN0
    case 0xC2BC7E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C2/C2BCB9.asm:16 LDA #0
    case 0xC2BC80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2BCB9.asm:16 LDA #0
    // Overlapping static entry reached from 0xC2BC80.
    case 0xC2BC82: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2BCB9.asm:17 BRA @UNKNOWN1
    case 0xC2BC83: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C2/C2BCB9.asm:19 LDA @LOCAL00
    case 0xC2BC85: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2BCB9.asm:20 SEC
    case 0xC2BC87: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:21 SBC @VIRTUAL02
    case 0xC2BC88: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C2/C2BCB9.asm:23 TAX
    case 0xC2BC8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:24 TYA
    case 0xC2BC8B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2BCB9.asm:25 JSR SET_PP
    case 0xC2BC8C: cpu.execute_instruction<0x20>(0x0070D4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2BCB9.asm:26 END_C_FUNCTION
    case 0xC2BC8F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2BCB9.asm:26 END_C_FUNCTION
    case 0xC2BC90: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2BD13.asm (unresolved).
bool execute_unresolved_c2_c2bd13_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2BD13.asm:3 BEGIN_C_FUNCTION
    case 0xC2BCBE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BCC0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BCC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BCC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BCC2.
    case 0xC2BCC4: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2BD13.asm:8 END_STACK_VARS
    case 0xC2BCC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:9 LDA #0
    case 0xC2BCC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2BD13.asm:9 LDA #0
    // Overlapping static entry reached from 0xC2BCC6.
    case 0xC2BCC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2BD13.asm:10 STA @VIRTUAL02
    case 0xC2BCC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:11 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2BCCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/unknown/C2/C2BD13.asm:11 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2BCCB.
    case 0xC2BCCD: cpu.execute_instruction<0xA4>(0x000086, 2); return true;
    // src/unknown/C2/C2BD13.asm:12 STX @LOCAL01
    case 0xC2BCCE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:12 STX @LOCAL01
    // Overlapping static entry reached from 0xC2BCCD.
    case 0xC2BCCF: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    case 0xC2BCD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    // Overlapping static entry reached from 0xC2BCCF.
    case 0xC2BCD1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:13 LDY #8
    // Overlapping static entry reached from 0xC2BCD0.
    case 0xC2BCD2: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C2/C2BD13.asm:14 STY @LOCAL00
    case 0xC2BCD3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:15 BRA @UNKNOWN2
    case 0xC2BCD5: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C2BD13.asm:17 LDA a:battler::consciousness,X
    case 0xC2BCD7: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C2/C2BD13.asm:18 AND #$00FF
    case 0xC2BCDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2BD13.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2BCDA.
    case 0xC2BCDC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2BD13.asm:19 CMP #1
    case 0xC2BCDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2BD13.asm:19 CMP #1
    // Overlapping static entry reached from 0xC2BCDD.
    case 0xC2BCDF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2BD13.asm:20 BNE @UNKNOWN1
    case 0xC2BCE0: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C2/C2BD13.asm:21 LDA a:battler::sprite,X
    case 0xC2BCE2: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C2/C2BD13.asm:22 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BCE5: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/unknown/C2/C2BD13.asm:23 STA @VIRTUAL04
    case 0xC2BCE8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2BD13.asm:24 LDA @VIRTUAL02
    case 0xC2BCEA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:25 CLC
    case 0xC2BCEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:26 ADC @VIRTUAL04
    case 0xC2BCED: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C2/C2BD13.asm:27 STA @VIRTUAL02
    case 0xC2BCEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2BD13.asm:29 LDX @LOCAL01
    case 0xC2BCF1: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:30 TXA
    case 0xC2BCF3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:31 CLC
    case 0xC2BCF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:32 ADC #.SIZEOF(battler)
    case 0xC2BCF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C2BD13.asm:32 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BCF5.
    case 0xC2BCF7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2BD13.asm:33 TAX
    case 0xC2BCF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:34 STX @LOCAL01
    case 0xC2BCF9: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C2/C2BD13.asm:35 LDY @LOCAL00
    case 0xC2BCFB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:36 INY
    case 0xC2BCFD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C2/C2BD13.asm:37 STY @LOCAL00
    case 0xC2BCFE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2BD13.asm:39 CPY #BATTLER_COUNT
    case 0xC2BD00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C2/C2BD13.asm:39 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2BD00.
    case 0xC2BD02: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2BD13.asm:40 BCC @UNKNOWN0
    case 0xC2BD03: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/unknown/C2/C2BD13.asm:41 LDA @VIRTUAL02
    case 0xC2BD05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2BD13.asm:42 END_C_FUNCTION
    case 0xC2BD07: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2BD13.asm:42 END_C_FUNCTION
    case 0xC2BD08: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C21F.asm (unresolved).
bool execute_unresolved_c2_c2c21f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C21F.asm:3 BEGIN_C_FUNCTION
    case 0xC2C1CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C1CF.
    case 0xC2C1D1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C21F.asm:15 END_STACK_VARS
    case 0xC2C1D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:16 STX @LOCAL03
    case 0xC2C1D4: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C2/C2C21F.asm:16 STX @LOCAL03
    // Overlapping static entry reached from 0xC2C1D1.
    case 0xC2C1D5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:17 STA @LOCAL02
    case 0xC2C1D6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C2/C2C21F.asm:18 STZ @LOCAL01
    case 0xC2C1D8: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/unknown/C2/C2C21F.asm:19 LDA BATTLE_MODE_FLAG
    case 0xC2C1DA: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/unknown/C2/C2C21F.asm:20 BEQ @UNKNOWN0
    case 0xC2C1DD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2C21F.asm:21 LDA @LOCAL02
    case 0xC2C1DF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2C21F.asm:22 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    case 0xC2C1E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E3, 2); else cpu.execute_instruction<0xC9>(0x0001E3, 3); return true;
    // src/unknown/C2/C2C21F.asm:22 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    // Overlapping static entry reached from 0xC2C1E1.
    case 0xC2C1E3: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:23 BNE @UNKNOWN1
    case 0xC2C1E4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2C21F.asm:23 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC2C1E3.
    case 0xC2C1E5: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    case 0xC2C1E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C1E5.
    case 0xC2C1E7: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C2/C2C21F.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C1E6.
    case 0xC2C1E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C21F.asm:26 STA @LOCAL01
    case 0xC2C1E9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C2/C2C21F.asm:28 LDA @LOCAL01
    case 0xC2C1EB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2C21F.asm:29 BNE @UNKNOWN4
    case 0xC2C1ED: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C2/C2C21F.asm:30 LDY #30
    case 0xC2C1EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/unknown/C2/C2C21F.asm:30 LDY #30
    // Overlapping static entry reached from 0xC2C1EF.
    case 0xC2C1F1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2C21F.asm:31 LDX #1
    case 0xC2C1F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:31 LDX #1
    // Overlapping static entry reached from 0xC2C1F2.
    case 0xC2C1F4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:32 LDA #6
    case 0xC2C1F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C2/C2C21F.asm:32 LDA #6
    // Overlapping static entry reached from 0xC2C1F5.
    case 0xC2C1F7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:33 JSL UNKNOWN_C2E8C4
    case 0xC2C1F8: cpu.execute_instruction<0x22>(0xC2E7DD, 4); return true;
    // src/unknown/C2/C2C21F.asm:34 BRA @UNKNOWN3
    case 0xC2C1FC: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:36 JSL WINDOW_TICK
    case 0xC2C1FE: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C2/C2C21F.asm:38 JSL UNKNOWN_C2E9C8
    case 0xC2C202: cpu.execute_instruction<0x22>(0xC2E8E1, 4); return true;
    // src/unknown/C2/C2C21F.asm:39 CMP #0
    case 0xC2C206: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:39 CMP #0
    // Overlapping static entry reached from 0xC2C206.
    case 0xC2C208: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:40 BNE @UNKNOWN2
    case 0xC2C209: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C2/C2C21F.asm:42 LDA @LOCAL02
    case 0xC2C20B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2C21F.asm:43 STA CURRENT_BATTLE_GROUP
    case 0xC2C20D: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C210.
    case 0xC2C212: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C213: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C215.
    case 0xC2C217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2C21F.asm:44 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2C218: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C21F.asm:45 LDA CURRENT_BATTLE_GROUP
    case 0xC2C21A: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/unknown/C2/C2C21F.asm:46 ASL
    case 0xC2C21D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:47 ASL
    case 0xC2C21E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:48 STA @LOCAL00
    case 0xC2C21F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C221: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C223: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C225: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2C21F.asm:49 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C227: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C2/C2C21F.asm:50 CLC
    case 0xC2C229: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:51 ADC @VIRTUAL0A
    case 0xC2C22A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:52 STA @VIRTUAL0A
    case 0xC2C22C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:53 LDA [@VIRTUAL0A]
    case 0xC2C22E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C2/C2C21F.asm:55 STA @LOCALM22
    case 0xC2C230: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:56 LDA @LOCAL00
    case 0xC2C232: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C2/C2C21F.asm:61 INC
    case 0xC2C234: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:62 INC
    case 0xC2C235: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:63 CLC
    case 0xC2C236: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:64 ADC @VIRTUAL06
    case 0xC2C237: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:65 STA @VIRTUAL06
    case 0xC2C239: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:66 LDA [@VIRTUAL06]
    case 0xC2C23B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:68 STA @VIRTUAL04
    case 0xC2C23D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:72 LDA CURRENT_BATTLE_GROUP
    case 0xC2C23F: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/unknown/C2/C2C21F.asm:73 ASL
    case 0xC2C242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:74 ASL
    case 0xC2C243: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:75 ASL
    case 0xC2C244: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:76 CLC
    case 0xC2C245: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:77 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC2C246: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C2/C2C21F.asm:77 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC2C246.
    case 0xC2C248: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C2/C2C21F.asm:78 TAX
    case 0xC2C249: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:79 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC2C24A: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/unknown/C2/C2C21F.asm:80 AND #$00FF
    case 0xC2C24E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C21F.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC2C24E.
    case 0xC2C250: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C21F.asm:82 STA @VIRTUAL02
    case 0xC2C251: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2C21F.asm:83 JSL UNKNOWN_C08726
    case 0xC2C253: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/C2/C2C21F.asm:84 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC2C257: cpu.execute_instruction<0x22>(0xC2C882, 4); return true;
    // src/unknown/C2/C2C21F.asm:85 JSL LOAD_WINDOW_GFX
    case 0xC2C25B: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C25F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C25F.
    case 0xC2C261: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C262: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C264: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C264.
    case 0xC2C266: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C267: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C269: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C269.
    case 0xC2C26B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C26C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C26C.
    case 0xC2C26E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C26F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    case 0xC2C273: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C271.
    case 0xC2C274: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C2/C2C21F.asm:86 COPY_TO_VRAM1 BUFFER, $6000, $3800, 0
    // Overlapping static entry reached from 0xC2C274.
    case 0xC2C276: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0002A4, 3); return true;
    // src/unknown/C2/C2C21F.asm:87 LDY @VIRTUAL02
    case 0xC2C277: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C2/C2C21F.asm:87 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC2C276.
    case 0xC2C278: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C2/C2C21F.asm:88 LDX @VIRTUAL04
    case 0xC2C279: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:89 LDA @LOCALM22
    case 0xC2C27B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C21F.asm:104 JSL LOAD_BATTLE_BG
    case 0xC2C27D: cpu.execute_instruction<0x22>(0xC2D0D5, 4); return true;
    // src/unknown/C2/C2C21F.asm:105 JSL UNKNOWN_C2EEE7
    case 0xC2C281: cpu.execute_instruction<0x22>(0xC2EE00, 4); return true;
    // src/unknown/C2/C2C21F.asm:106 LDA #24
    case 0xC2C285: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2C21F.asm:106 LDA #24
    // Overlapping static entry reached from 0xC2C285.
    case 0xC2C287: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:107 JSL UNKNOWN_C0856B
    case 0xC2C288: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2C21F.asm:108 JSL UNKNOWN_C2F8F9
    case 0xC2C28C: cpu.execute_instruction<0x22>(0xC2F812, 4); return true;
    // src/unknown/C2/C2C21F.asm:109 LDA #1
    case 0xC2C290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:109 LDA #1
    // Overlapping static entry reached from 0xC2C290.
    case 0xC2C292: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C21F.asm:110 STA BATTLE_MODE_FLAG
    case 0xC2C293: cpu.execute_instruction<0x8D>(0x00993B, 3); return true;
    // src/unknown/C2/C2C21F.asm:111 LDA @LOCAL03
    case 0xC2C296: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2C21F.asm:112 BEQ @UNKNOWN5
    case 0xC2C298: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C2/C2C21F.asm:113 LDA @LOCAL03
    case 0xC2C29A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C2/C2C21F.asm:113 LDA @LOCAL03
    // Overlapping static entry reached from 0xC24B80.
    case 0xC2C29B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C21F.asm:114 JSL CHANGE_MUSIC
    case 0xC2C29C: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C2/C2C21F.asm:116 JSL UNKNOWN_C08744
    case 0xC2C2A0: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/unknown/C2/C2C21F.asm:117 LDA @LOCAL01
    case 0xC2C2A4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C2/C2C21F.asm:118 BEQ @UNKNOWN6
    case 0xC2C2A6: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C2/C2C21F.asm:119 LDX #4
    case 0xC2C2A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2C21F.asm:119 LDX #4
    // Overlapping static entry reached from 0xC2C2A8.
    case 0xC2C2AA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:120 LDA #1
    case 0xC2C2AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:120 LDA #1
    // Overlapping static entry reached from 0xC2C2AB.
    case 0xC2C2AD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:121 JSL FADE_IN
    case 0xC2C2AE: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C2/C2C21F.asm:122 JSR UNKNOWN_C269DE
    case 0xC2C2B2: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C21F.asm:123 BRA @RETURN
    case 0xC2C2B5: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C2/C2C21F.asm:125 LDX #1
    case 0xC2C2B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C21F.asm:125 LDX #1
    // Overlapping static entry reached from 0xC2C2B7.
    case 0xC2C2B9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:126 LDA #15
    case 0xC2C2BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/C2/C2C21F.asm:126 LDA #15
    // Overlapping static entry reached from 0xC2C2BA.
    case 0xC2C2BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:127 JSL FADE_IN
    case 0xC2C2BD: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C2/C2C21F.asm:128 LDA @LOCAL02
    case 0xC2C2C1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C2/C2C21F.asm:129 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    case 0xC2C2C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E3, 2); else cpu.execute_instruction<0xC9>(0x0001E3, 3); return true;
    // src/unknown/C2/C2C21F.asm:129 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    // Overlapping static entry reached from 0xC2C2C3.
    case 0xC2C2C5: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C2/C2C21F.asm:130 BEQ @RETURN
    case 0xC2C2C6: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C2/C2C21F.asm:130 BEQ @RETURN
    // Overlapping static entry reached from 0xC2C2C5.
    case 0xC2C2C7: cpu.execute_instruction<0x1C>(0x0005A0, 3); return true;
    // src/unknown/C2/C2C21F.asm:131 LDY #5
    case 0xC2C2C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2C21F.asm:131 LDY #5
    // Overlapping static entry reached from 0xC2C2C8.
    case 0xC2C2CA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2C21F.asm:132 LDX #0
    case 0xC2C2CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:132 LDX #0
    // Overlapping static entry reached from 0xC2C2CB.
    case 0xC2C2CD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C21F.asm:133 LDA #6
    case 0xC2C2CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C2/C2C21F.asm:133 LDA #6
    // Overlapping static entry reached from 0xC2C2CE.
    case 0xC2C2D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C21F.asm:134 JSL UNKNOWN_C2E8C4
    case 0xC2C2D1: cpu.execute_instruction<0x22>(0xC2E7DD, 4); return true;
    // src/unknown/C2/C2C21F.asm:135 BRA @UNKNOWN8
    case 0xC2C2D5: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C2/C2C21F.asm:137 JSL WINDOW_TICK
    case 0xC2C2D7: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C2/C2C21F.asm:139 JSL UNKNOWN_C2E9C8
    case 0xC2C2DB: cpu.execute_instruction<0x22>(0xC2E8E1, 4); return true;
    // src/unknown/C2/C2C21F.asm:140 CMP #0
    case 0xC2C2DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2C21F.asm:140 CMP #0
    // Overlapping static entry reached from 0xC2C2DF.
    case 0xC2C2E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2C21F.asm:141 BNE @UNKNOWN7
    case 0xC2C2E2: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C21F.asm:143 END_C_FUNCTION
    case 0xC2C2E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C21F.asm:143 END_C_FUNCTION
    case 0xC2C2E5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C32C.asm (unresolved).
bool execute_unresolved_c2_c2c32c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C32C.asm:3 BEGIN_C_FUNCTION
    case 0xC2C2E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2E9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C2EB.
    case 0xC2C2ED: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C32C.asm:9 END_STACK_VARS
    case 0xC2C2EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C32C.asm:10 STA @LOCAL02
    case 0xC2C2F0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2C32C.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC2C2ED.
    case 0xC2C2F1: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    case 0xC2C2F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x00A462, 3); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    // Overlapping static entry reached from 0xC2C2F1.
    case 0xC2C2F3: cpu.execute_instruction<0x62>(0x0085A4, 3); return true;
    // src/unknown/C2/C2C32C.asm:11 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_x
    // Overlapping static entry reached from 0xC2C2F2.
    case 0xC2C2F4: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // src/unknown/C2/C2C32C.asm:12 STA @VIRTUAL02
    case 0xC2C2F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2C2F4.
    case 0xC2C2F6: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C2/C2C32C.asm:13 LDX @VIRTUAL02
    case 0xC2C2F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:14 LDA __BSS_START__,X
    case 0xC2C2F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:15 AND #$00FF
    case 0xC2C2FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C32C.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2C2FC.
    case 0xC2C2FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C32C.asm:16 STA @LOCAL01
    case 0xC2C2FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C32C.asm:17 LDY #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_y
    case 0xC2C301: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000063, 2); else cpu.execute_instruction<0xA0>(0x00A463, 3); return true;
    // src/unknown/C2/C2C32C.asm:17 LDY #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8) + battler::sprite_y
    // Overlapping static entry reached from 0xC2C301.
    case 0xC2C303: cpu.execute_instruction<0xA4>(0x000084, 2); return true;
    // src/unknown/C2/C2C32C.asm:18 STY @LOCAL00
    case 0xC2C304: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C2/C2C32C.asm:18 STY @LOCAL00
    // Overlapping static entry reached from 0xC2C303.
    case 0xC2C305: cpu.execute_instruction<0x0E>(0x0000B9, 3); return true;
    // src/unknown/C2/C2C32C.asm:19 LDA __BSS_START__,Y
    case 0xC2C306: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:19 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2C305.
    case 0xC2C308: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C2/C2C32C.asm:20 AND #$00FF
    case 0xC2C309: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2C32C.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2C309.
    case 0xC2C30B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2C32C.asm:21 STA @VIRTUAL04
    case 0xC2C30C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C2/C2C32C.asm:22 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C30E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/unknown/C2/C2C32C.asm:22 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C30E.
    case 0xC2C310: cpu.execute_instruction<0xA4>(0x0000A5, 2); return true;
    // src/unknown/C2/C2C32C.asm:23 LDA @LOCAL02
    case 0xC2C311: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2C32C.asm:23 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2C310.
    case 0xC2C312: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C313: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    // Overlapping static entry reached from 0xC2C312.
    case 0xC2C314: cpu.execute_instruction<0x92>(0x0000B6, 2); return true;
    // src/unknown/C2/C2C32C.asm:24 JSL BATTLE_INIT_ENEMY_STATS
    // Overlapping static entry reached from 0xC2C314.
    case 0xC2C316: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/unknown/C2/C2C32C.asm:25 LDA @LOCAL01
    case 0xC2C317: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C2/C2C32C.asm:25 LDA @LOCAL01
    // Overlapping static entry reached from 0xC2C316.
    case 0xC2C318: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/unknown/C2/C2C32C.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C319: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:26 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C318.
    case 0xC2C31A: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C2/C2C32C.asm:27 LDX @VIRTUAL02
    case 0xC2C31B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C32C.asm:28 STA __BSS_START__,X
    case 0xC2C31D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2C320: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:30 LDA @VIRTUAL04
    case 0xC2C322: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C2/C2C32C.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C324: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:32 LDY @LOCAL00
    case 0xC2C326: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C2/C2C32C.asm:33 STA __BSS_START__,Y
    case 0xC2C328: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2C32C.asm:34 LDA #1
    case 0xC2C32B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C2/C2C32C.asm:35 STA BATTLERS_TABLE + (.SIZEOF(battler) * 8) + battler::has_taken_turn
    case 0xC2C32D: cpu.execute_instruction<0x8D>(0x00A42B, 3); return true;
    // src/unknown/C2/C2C32C.asm:35 STA BATTLERS_TABLE + (.SIZEOF(battler) * 8) + battler::has_taken_turn
    // Overlapping static entry reached from 0xC2C32B.
    case 0xC2C32E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C2/C2C32C.asm:35 STA BATTLERS_TABLE + (.SIZEOF(battler) * 8) + battler::has_taken_turn
    // Overlapping static entry reached from 0xC2C32E.
    case 0xC2C32F: cpu.execute_instruction<0xA4>(0x0000C2, 2); return true;
    // src/unknown/C2/C2C32C.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2C330: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C32C.asm:36 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C32F.
    case 0xC2C331: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C32C.asm:37 END_C_FUNCTION
    case 0xC2C332: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C32C.asm:37 END_C_FUNCTION
    case 0xC2C333: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C37A.asm (unresolved).
bool execute_unresolved_c2_c2c37a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C37A.asm:3 BEGIN_C_FUNCTION
    case 0xC2C334: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C336: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C337: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C338: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C339: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C339.
    case 0xC2C33B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C33C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C37A.asm:10 END_STACK_VARS
    case 0xC2C33D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:11 STX @VIRTUAL02
    case 0xC2C33E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C2/C2C37A.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2C33B.
    case 0xC2C33F: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C2/C2C37A.asm:12 TAY
    case 0xC2C340: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:13 STY @LOCAL01
    case 0xC2C341: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C343: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C345: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C347: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C37A.asm:14 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C349: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C37A.asm:15 LDX #4
    case 0xC2C34B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2C37A.asm:15 LDX #4
    // Overlapping static entry reached from 0xC2C34B.
    case 0xC2C34D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C37A.asm:16 LDA #1
    case 0xC2C34E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:16 LDA #1
    // Overlapping static entry reached from 0xC2C34E.
    case 0xC2C350: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C37A.asm:17 JSL FADE_OUT
    case 0xC2C351: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C37A.asm:18 JSR UNKNOWN_C269DE
    case 0xC2C355: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C37A.asm:19 STZ BATTLE_MODE_FLAG
    case 0xC2C358: cpu.execute_instruction<0x9C>(0x00993B, 3); return true;
    // src/unknown/C2/C2C37A.asm:20 STZ CURRENT_MAP_MUSIC_TRACK
    case 0xC2C35B: cpu.execute_instruction<0x9C>(0x00615A, 3); return true;
    // src/unknown/C2/C2C37A.asm:21 JSL UNKNOWN_C1DD5F
    case 0xC2C35E: cpu.execute_instruction<0x22>(0xC1DB3C, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C362: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C364: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C366: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C37A.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C368: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C37A.asm:23 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2C36A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/unknown/C2/C2C37A.asm:24 LDX #2
    case 0xC2C36E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C2/C2C37A.asm:24 LDX #2
    // Overlapping static entry reached from 0xC2C36E.
    case 0xC2C370: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2C37A.asm:25 LDA #1
    case 0xC2C371: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:25 LDA #1
    // Overlapping static entry reached from 0xC2C371.
    case 0xC2C373: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C37A.asm:26 JSL FADE_OUT
    case 0xC2C374: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C37A.asm:27 JSR UNKNOWN_C269DE
    case 0xC2C378: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C37A.asm:28 LDX @VIRTUAL02
    case 0xC2C37B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C2/C2C37A.asm:29 LDY @LOCAL01
    case 0xC2C37D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2C37A.asm:30 TYA
    case 0xC2C37F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2C37A.asm:31 JSR UNKNOWN_C2C21F
    case 0xC2C380: cpu.execute_instruction<0x20>(0x00C1CA, 3); return true;
    // src/unknown/C2/C2C37A.asm:32 LDA #1
    case 0xC2C383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C37A.asm:32 LDA #1
    // Overlapping static entry reached from 0xC2C383.
    case 0xC2C385: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C37A.asm:33 STA BATTLE_MODE_FLAG
    case 0xC2C386: cpu.execute_instruction<0x8D>(0x00993B, 3); return true;
    // src/unknown/C2/C2C37A.asm:34 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC2C389: cpu.execute_instruction<0x22>(0xC1DB18, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C38D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2C38D.
    case 0xC2C38F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/unknown/C2/C2C37A.asm:35 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C390: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/unknown/C2/C2C37A.asm:36 LDA #1*SECOND
    case 0xC2C394: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C2/C2C37A.asm:36 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C394.
    case 0xC2C396: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C37A.asm:37 JSR WAIT
    case 0xC2C397: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C37A.asm:38 END_C_FUNCTION
    case 0xC2C39A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C37A.asm:38 END_C_FUNCTION
    case 0xC2C39B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2C41F.asm (unresolved).
bool execute_unresolved_c2_c2c41f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2C41F.asm:3 BEGIN_C_FUNCTION
    case 0xC2C3D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C3DE.
    case 0xC2C3E0: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2C41F.asm:9 END_STACK_VARS
    case 0xC2C3E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:10 TAY
    case 0xC2C3E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:11 STY @LOCAL01
    case 0xC2C3E4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C3E6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C3E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C3EA: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C41F.asm:12 MOVE_INT @SCRIPT, @VIRTUAL06
    case 0xC2C3EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2C41F.asm:13 LDX #1
    case 0xC2C3EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:13 LDX #1
    // Overlapping static entry reached from 0xC2C3EE.
    case 0xC2C3F0: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:14 TXA
    case 0xC2C3F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:15 JSL FADE_OUT
    case 0xC2C3F2: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C41F.asm:16 LDA #2
    case 0xC2C3F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2C41F.asm:16 LDA #2
    // Overlapping static entry reached from 0xC2C3F6.
    case 0xC2C3F8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:17 JSL UNKNOWN_C0AC0C
    case 0xC2C3F9: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/C2/C2C41F.asm:18 JSR UNKNOWN_C269DE
    case 0xC2C3FD: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C41F.asm:19 STZ BATTLE_MODE_FLAG
    case 0xC2C400: cpu.execute_instruction<0x9C>(0x00993B, 3); return true;
    // src/unknown/C2/C2C41F.asm:20 JSL UNKNOWN_C1DD5F
    case 0xC2C403: cpu.execute_instruction<0x22>(0xC1DB3C, 4); return true;
    // src/unknown/C2/C2C41F.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C407: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:22 LDA #$04
    case 0xC2C409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    case 0xC2C40B: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C409.
    case 0xC2C40C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:23 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C40C.
    case 0xC2C40D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2C41F.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2C40E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:25 LDA #MUSIC::GIYGAS_WEAKENED
    case 0xC2C410: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/C2/C2C41F.asm:25 LDA #MUSIC::GIYGAS_WEAKENED
    // Overlapping static entry reached from 0xC2C410.
    case 0xC2C412: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:26 JSL CHANGE_MUSIC
    case 0xC2C413: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C2/C2C41F.asm:27 LDX #1
    case 0xC2C417: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:27 LDX #1
    // Overlapping static entry reached from 0xC2C417.
    case 0xC2C419: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:28 TXA
    case 0xC2C41A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:29 JSL FADE_IN
    case 0xC2C41B: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C2/C2C41F.asm:30 JSR UNKNOWN_C269DE
    case 0xC2C41F: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C41F.asm:31 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC2C422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2C41F.asm:31 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C422.
    case 0xC2C424: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:32 JSR WAIT
    case 0xC2C425: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C428: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C42A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C42C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2C41F.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2C42E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2C41F.asm:34 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC2C430: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/unknown/C2/C2C41F.asm:35 LDA #1
    case 0xC2C434: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:35 LDA #1
    // Overlapping static entry reached from 0xC2C434.
    case 0xC2C436: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2C41F.asm:36 STA BATTLE_MODE_FLAG
    case 0xC2C437: cpu.execute_instruction<0x8D>(0x00993B, 3); return true;
    // src/unknown/C2/C2C41F.asm:37 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC2C43A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C2/C2C41F.asm:37 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C43A.
    case 0xC2C43C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:38 JSR WAIT
    case 0xC2C43D: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/unknown/C2/C2C41F.asm:39 LDA #2
    case 0xC2C440: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2C41F.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2C440.
    case 0xC2C442: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2C41F.asm:40 JSL UNKNOWN_C0AC0C
    case 0xC2C443: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/C2/C2C41F.asm:41 LDX #1
    case 0xC2C447: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:41 LDX #1
    // Overlapping static entry reached from 0xC2C447.
    case 0xC2C449: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:42 TXA
    case 0xC2C44A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:43 JSL FADE_OUT
    case 0xC2C44B: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C2/C2C41F.asm:44 JSR UNKNOWN_C269DE
    case 0xC2C44F: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // src/unknown/C2/C2C41F.asm:45 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC2C452: cpu.execute_instruction<0x22>(0xC1DB18, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2C456.
    case 0xC2C458: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/unknown/C2/C2C41F.asm:46 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2C459: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/unknown/C2/C2C41F.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C45D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:48 LDA #$17
    case 0xC2C45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    case 0xC2C461: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C45F.
    case 0xC2C462: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:49 STA TM_MIRROR
    // Overlapping static entry reached from 0xC2C462.
    case 0xC2C463: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2C41F.asm:50 LDY @LOCAL01
    case 0xC2C464: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2C41F.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2C466: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2C41F.asm:52 TYA
    case 0xC2C468: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:53 JSL CHANGE_MUSIC
    case 0xC2C469: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C2/C2C41F.asm:54 LDX #1
    case 0xC2C46D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2C41F.asm:54 LDX #1
    // Overlapping static entry reached from 0xC2C46D.
    case 0xC2C46F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C2/C2C41F.asm:55 TXA
    case 0xC2C470: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2C41F.asm:56 JSL FADE_IN
    case 0xC2C471: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C2/C2C41F.asm:57 JSR UNKNOWN_C269DE
    case 0xC2C475: cpu.execute_instruction<0x20>(0x00691D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2C41F.asm:58 END_C_FUNCTION
    case 0xC2C478: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C2/C2C41F.asm:58 END_C_FUNCTION
    case 0xC2C479: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2CFE5.asm (unresolved).
bool execute_unresolved_c2_c2cfe5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2CFE5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2CF9F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2CFA4.
    case 0xC2CFA6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C2CFE5.asm:12 END_STACK_VARS
    case 0xC2CFA8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:13 TAY
    case 0xC2CFA9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:14 STY @TARGET
    case 0xC2CFAA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFAC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFAE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFB0: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:15 MOVE_INT @BG, @VIRTUAL06
    case 0xC2CFB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2CFE5.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CFB4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C2/C2CFE5.asm:20 STZ_BADOPT @LOCAL00
    case 0xC2CFB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:20 STZ_BADOPT @LOCAL00
    case 0xC2CFB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:20 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2CFB6.
    case 0xC2CFB9: cpu.execute_instruction<0x0E>(0x0077A2, 3); return true;
    // src/unknown/C2/C2CFE5.asm:21 LDX #.SIZEOF(loaded_bg_data)
    case 0xC2CFBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000077, 2); else cpu.execute_instruction<0xA2>(0x000077, 3); return true;
    // src/unknown/C2/C2CFE5.asm:21 LDX #.SIZEOF(loaded_bg_data)
    // Overlapping static entry reached from 0xC2CFBA.
    case 0xC2CFBC: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C2/C2CFE5.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC2CFBD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:23 TYA
    case 0xC2CFBF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:24 JSL MEMSET16
    case 0xC2CFC0: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C2/C2CFE5.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC2CFC4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:26 LDY #bg_layer_config_entry::bitdepth
    case 0xC2CFC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C2/C2CFE5.asm:26 LDY #bg_layer_config_entry::bitdepth
    // Overlapping static entry reached from 0xC2CFC6.
    case 0xC2CFC8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:27 LDA [@VIRTUAL06],Y
    case 0xC2CFC9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:28 LDY @TARGET
    case 0xC2CFCB: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:29 STA a:loaded_bg_data::bitdepth,Y
    case 0xC2CFCD: cpu.execute_instruction<0x99>(0x000001, 3); return true;
    // src/unknown/C2/C2CFE5.asm:30 LDY #bg_layer_config_entry::palette_shifting_style
    case 0xC2CFD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2CFE5.asm:30 LDY #bg_layer_config_entry::palette_shifting_style
    // Overlapping static entry reached from 0xC2CFD0.
    case 0xC2CFD2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:31 LDA [@VIRTUAL06],Y
    case 0xC2CFD3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:32 LDY @TARGET
    case 0xC2CFD5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:33 STA a:loaded_bg_data::palette_shifting_style,Y
    case 0xC2CFD7: cpu.execute_instruction<0x99>(0x000003, 3); return true;
    // src/unknown/C2/C2CFE5.asm:34 LDY #bg_layer_config_entry::palette_cycle_1_first
    case 0xC2CFDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:34 LDY #bg_layer_config_entry::palette_cycle_1_first
    // Overlapping static entry reached from 0xC2CFDA.
    case 0xC2CFDC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:35 LDA [@VIRTUAL06],Y
    case 0xC2CFDD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:36 LDY @TARGET
    case 0xC2CFDF: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:37 STA a:loaded_bg_data::palette_cycle_1_first,Y
    case 0xC2CFE1: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:38 LDY #bg_layer_config_entry::palette_cycle_1_last
    case 0xC2CFE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C2/C2CFE5.asm:38 LDY #bg_layer_config_entry::palette_cycle_1_last
    // Overlapping static entry reached from 0xC2CFE4.
    case 0xC2CFE6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:39 LDA [@VIRTUAL06],Y
    case 0xC2CFE7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:40 LDY @TARGET
    case 0xC2CFE9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:41 STA a:loaded_bg_data::palette_cycle_1_last,Y
    case 0xC2CFEB: cpu.execute_instruction<0x99>(0x000005, 3); return true;
    // src/unknown/C2/C2CFE5.asm:42 LDY #bg_layer_config_entry::palette_cycle_2_first
    case 0xC2CFEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C2/C2CFE5.asm:42 LDY #bg_layer_config_entry::palette_cycle_2_first
    // Overlapping static entry reached from 0xC2CFEE.
    case 0xC2CFF0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:43 LDA [@VIRTUAL06],Y
    case 0xC2CFF1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:44 LDY @TARGET
    case 0xC2CFF3: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:45 STA a:loaded_bg_data::palette_cycle_2_first,Y
    case 0xC2CFF5: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C2/C2CFE5.asm:46 LDY #bg_layer_config_entry::palette_cycle_2_last
    case 0xC2CFF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C2/C2CFE5.asm:46 LDY #bg_layer_config_entry::palette_cycle_2_last
    // Overlapping static entry reached from 0xC2CFF8.
    case 0xC2CFFA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:47 LDA [@VIRTUAL06],Y
    case 0xC2CFFB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:48 LDY @TARGET
    case 0xC2CFFD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:49 STA a:loaded_bg_data::palette_cycle_2_last,Y
    case 0xC2CFFF: cpu.execute_instruction<0x99>(0x000007, 3); return true;
    // src/unknown/C2/C2CFE5.asm:50 LDY #bg_layer_config_entry::palette_change_speed
    case 0xC2D002: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C2/C2CFE5.asm:50 LDY #bg_layer_config_entry::palette_change_speed
    // Overlapping static entry reached from 0xC2D002.
    case 0xC2D004: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C2/C2CFE5.asm:51 LDA [@VIRTUAL06],Y
    case 0xC2D005: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:52 LDY @TARGET
    case 0xC2D007: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:53 STA a:loaded_bg_data::palette_change_speed,Y
    case 0xC2D009: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C2/C2CFE5.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC2D00C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:55 LDA #bg_layer_config_entry::scrolling_movement_1
    case 0xC2D00E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C2/C2CFE5.asm:55 LDA #bg_layer_config_entry::scrolling_movement_1
    // Overlapping static entry reached from 0xC2D00E.
    case 0xC2D010: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C2/C2CFE5.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D011: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C2/C2CFE5.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D013: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D015: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C2/C2CFE5.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D017: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C2/C2CFE5.asm:58 CLC
    case 0xC2D019: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:59 ADC @VIRTUAL0A
    case 0xC2D01A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C2/C2CFE5.asm:60 STA @VIRTUAL0A
    case 0xC2D01C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C2/C2CFE5.asm:61 STA @LOCAL00
    case 0xC2D01E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2CFE5.asm:62 LDA @VIRTUAL0A+2
    case 0xC2D020: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C2/C2CFE5.asm:63 STA @LOCAL00+2
    case 0xC2D022: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2CFE5.asm:72 LDX #.SIZEOF(loaded_bg_data::scrolling_movements)
    case 0xC2D024: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:72 LDX #.SIZEOF(loaded_bg_data::scrolling_movements)
    // Overlapping static entry reached from 0xC2D024.
    case 0xC2D026: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C2/C2CFE5.asm:73 TYA
    case 0xC2D027: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:74 CLC
    case 0xC2D028: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:75 ADC #loaded_bg_data::scrolling_movements
    case 0xC2D029: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/unknown/C2/C2CFE5.asm:75 ADC #loaded_bg_data::scrolling_movements
    // Overlapping static entry reached from 0xC2D029.
    case 0xC2D02B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2CFE5.asm:76 JSL MEMCPY16
    case 0xC2D02C: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2CFE5.asm:77 LDA #bg_layer_config_entry::distortion_style_1
    case 0xC2D030: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C2/C2CFE5.asm:77 LDA #bg_layer_config_entry::distortion_style_1
    // Overlapping static entry reached from 0xC2D030.
    case 0xC2D032: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C2/C2CFE5.asm:81 CLC
    case 0xC2D033: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:82 ADC @VIRTUAL06
    case 0xC2D034: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:83 STA @VIRTUAL06
    case 0xC2D036: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C2/C2CFE5.asm:84 STA @LOCAL00
    case 0xC2D038: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2CFE5.asm:85 LDA @VIRTUAL06+2
    case 0xC2D03A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C2/C2CFE5.asm:86 STA @LOCAL00+2
    case 0xC2D03C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2CFE5.asm:87 LDX #.SIZEOF(loaded_bg_data::distortion_styles)
    case 0xC2D03E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C2/C2CFE5.asm:87 LDX #.SIZEOF(loaded_bg_data::distortion_styles)
    // Overlapping static entry reached from 0xC2D03E.
    case 0xC2D040: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2CFE5.asm:88 LDY @TARGET
    case 0xC2D041: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:89 TYA
    case 0xC2D043: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:90 CLC
    case 0xC2D044: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:91 ADC #loaded_bg_data::distortion_styles
    case 0xC2D045: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x000061, 3); return true;
    // src/unknown/C2/C2CFE5.asm:91 ADC #loaded_bg_data::distortion_styles
    // Overlapping static entry reached from 0xC2D045.
    case 0xC2D047: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2CFE5.asm:92 JSL MEMCPY16
    case 0xC2D048: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2CFE5.asm:93 LDA #1
    case 0xC2D04C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2CFE5.asm:93 LDA #1
    // Overlapping static entry reached from 0xC2D04C.
    case 0xC2D04E: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C2/C2CFE5.asm:94 LDY @TARGET
    case 0xC2D04F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C2/C2CFE5.asm:95 STA a:loaded_bg_data::scrolling_duration_left,Y
    case 0xC2D051: cpu.execute_instruction<0x99>(0x000053, 3); return true;
    // src/unknown/C2/C2CFE5.asm:96 STA a:loaded_bg_data::distortion_duration_left,Y
    case 0xC2D054: cpu.execute_instruction<0x99>(0x000066, 3); return true;
    // src/unknown/C2/C2CFE5.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D057: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:98 STA a:loaded_bg_data::palette_change_duration_left,Y
    case 0xC2D059: cpu.execute_instruction<0x99>(0x00000B, 3); return true;
    // src/unknown/C2/C2CFE5.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2D05C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2CFE5.asm:100 PLD
    case 0xC2D05E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C2/C2CFE5.asm:101 RTL
    case 0xC2D05F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2D0AC.asm (unresolved).
bool execute_unresolved_c2_c2d0ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2D0AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D060: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D062: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D063: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D064: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D064.
    case 0xC2D066: cpu.execute_instruction<0xFF>(0x8DA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2D0AC.asm:6 END_STACK_VARS
    case 0xC2D067: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:7 LDX #.LOWORD(LETTERBOX_HDMA_TABLE)
    case 0xC2D068: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00008D, 2); else cpu.execute_instruction<0xA2>(0x00AF8D, 3); return true;
    // src/unknown/C2/C2D0AC.asm:7 LDX #.LOWORD(LETTERBOX_HDMA_TABLE)
    // Overlapping static entry reached from 0xC2D068.
    case 0xC2D06A: cpu.execute_instruction<0xAF>(0xAD20E2, 4); return true;
    // src/unknown/C2/C2D0AC.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D06B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:9 LDA LETTERBOX_TOP_END
    case 0xC2D06D: cpu.execute_instruction<0xAD>(0x00AF87, 3); return true;
    // src/unknown/C2/C2D0AC.asm:9 LDA LETTERBOX_TOP_END
    // Overlapping static entry reached from 0xC2D06A.
    case 0xC2D06E: cpu.execute_instruction<0x87>(0x0000AF, 2); return true;
    // src/unknown/C2/C2D0AC.asm:10 STA __BSS_START__,X
    case 0xC2D070: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:11 INX
    case 0xC2D073: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2D074: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:13 LDA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D076: cpu.execute_instruction<0xAD>(0x00AF85, 3); return true;
    // src/unknown/C2/C2D0AC.asm:14 STA __BSS_START__,X
    case 0xC2D079: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:15 INX
    case 0xC2D07C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:16 INX
    case 0xC2D07D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:17 LDA LETTERBOX_BOTTOM_START
    case 0xC2D07E: cpu.execute_instruction<0xAD>(0x00AF89, 3); return true;
    // src/unknown/C2/C2D0AC.asm:18 SEC
    case 0xC2D081: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:19 SBC LETTERBOX_TOP_END
    case 0xC2D082: cpu.execute_instruction<0xED>(0x00AF87, 3); return true;
    // src/unknown/C2/C2D0AC.asm:20 STA @LOCAL00
    case 0xC2D085: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:21 BRA @UNKNOWN1
    case 0xC2D087: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C2/C2D0AC.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D089: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:24 LDA #$007F
    case 0xC2D08B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009D7F, 3); return true;
    // src/unknown/C2/C2D0AC.asm:25 STA __BSS_START__,X
    case 0xC2D08D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:25 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D08B.
    case 0xC2D08E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:26 INX
    case 0xC2D090: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2D091: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:28 LDA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D093: cpu.execute_instruction<0xAD>(0x00AF83, 3); return true;
    // src/unknown/C2/C2D0AC.asm:29 STA __BSS_START__,X
    case 0xC2D096: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:30 INX
    case 0xC2D099: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:31 INX
    case 0xC2D09A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:32 LDA @LOCAL00
    case 0xC2D09B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:33 SEC
    case 0xC2D09D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:34 SBC #$007F
    case 0xC2D09E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00007F, 3); return true;
    // src/unknown/C2/C2D0AC.asm:34 SBC #$007F
    // Overlapping static entry reached from 0xC2D09E.
    case 0xC2D0A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2D0AC.asm:35 STA @LOCAL00
    case 0xC2D0A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2D0AC.asm:37 CMP #$0080
    case 0xC2D0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C2/C2D0AC.asm:37 CMP #$0080
    // Overlapping static entry reached from 0xC2D0A3.
    case 0xC2D0A5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C2/C2D0AC.asm:38 BCS @UNKNOWN0
    case 0xC2D0A6: cpu.execute_instruction<0xB0>(0x0000E1, 2); return true;
    // src/unknown/C2/C2D0AC.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:40 STA __BSS_START__,X
    case 0xC2D0AA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:41 INX
    case 0xC2D0AD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0AE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:43 LDA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D0B0: cpu.execute_instruction<0xAD>(0x00AF83, 3); return true;
    // src/unknown/C2/C2D0AC.asm:44 STA __BSS_START__,X
    case 0xC2D0B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:45 INX
    case 0xC2D0B6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:46 INX
    case 0xC2D0B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:48 LDA #1
    case 0xC2D0BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C2/C2D0AC.asm:49 STA __BSS_START__,X
    case 0xC2D0BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D0BA.
    case 0xC2D0BD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:50 INX
    case 0xC2D0BF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:52 LDA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D0C2: cpu.execute_instruction<0xAD>(0x00AF85, 3); return true;
    // src/unknown/C2/C2D0AC.asm:53 STA __BSS_START__,X
    case 0xC2D0C5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:54 INX
    case 0xC2D0C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:55 INX
    case 0xC2D0C9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2D0AC.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D0CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2D0AC.asm:57 LDA #0
    case 0xC2D0CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C2/C2D0AC.asm:58 STA __BSS_START__,X
    case 0xC2D0CE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2D0AC.asm:58 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D0CC.
    case 0xC2D0CF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2D0AC.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC2D0D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2D0AC.asm:60 END_C_FUNCTION
    case 0xC2D0D3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2D0AC.asm:60 END_C_FUNCTION
    case 0xC2D0D4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DAE3.asm (unresolved).
bool execute_unresolved_c2_c2dae3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DAE3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DA58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DA5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DA5B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DA5C.
    case 0xC2DA5E: cpu.execute_instruction<0xFF>(0x0AA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DAE3.asm:6 END_STACK_VARS
    case 0xC2DA5F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DAE3.asm:7 LDX #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles
    case 0xC2DA60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00B00A, 3); return true;
    // src/unknown/C2/C2DAE3.asm:7 LDX #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles
    // Overlapping static entry reached from 0xC2DA60.
    case 0xC2DA62: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C2/C2DAE3.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2DA62.
    case 0xC2DA64: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C2/C2DAE3.asm:9 LDA __BSS_START__,X
    case 0xC2DA65: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:9 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2DA64.
    case 0xC2DA67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C2/C2DAE3.asm:10 STA @LOCAL00
    case 0xC2DA68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C2/C2DAE3.asm:11 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles + 3
    case 0xC2DA6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00B00D, 3); return true;
    // src/unknown/C2/C2DAE3.asm:11 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::distortion_styles + 3
    // Overlapping static entry reached from 0xC2DA6A.
    case 0xC2DA6C: cpu.execute_instruction<0xB0>(0x0000B9, 2); return true;
    // src/unknown/C2/C2DAE3.asm:12 LDA __BSS_START__,Y
    case 0xC2DA6D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:12 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DA6C.
    case 0xC2DA6E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2DAE3.asm:13 STA __BSS_START__,X
    case 0xC2DA70: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:14 STZ LOADED_BG_DATA_LAYER1 + loaded_bg_data::distortion_styles + 1
    case 0xC2DA73: cpu.execute_instruction<0x9C>(0x00B00B, 3); return true;
    // src/unknown/C2/C2DAE3.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:16 LDA #1
    case 0xC2DA78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C2/C2DAE3.asm:16 LDA #1
    // Overlapping static entry reached from 0xC2DA78.
    case 0xC2DA7A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DAE3.asm:17 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::distortion_duration_left
    case 0xC2DA7B: cpu.execute_instruction<0x8D>(0x00B00F, 3); return true;
    // src/unknown/C2/C2DAE3.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DAE3.asm:19 LDA @LOCAL00
    case 0xC2DA80: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C2/C2DAE3.asm:20 STA __BSS_START__,Y
    case 0xC2DA82: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DAE3.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DAE3.asm:22 END_C_FUNCTION
    case 0xC2DA87: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DAE3.asm:22 END_C_FUNCTION
    case 0xC2DA88: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DB14.asm (unresolved).
bool execute_unresolved_c2_c2db14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DB14.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DA89: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DA8B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DA8C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DA8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DA8D.
    case 0xC2DA8F: cpu.execute_instruction<0xFF>(0xF5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DB14.asm:6 END_STACK_VARS
    case 0xC2DA90: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DB14.asm:7 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DA91: cpu.execute_instruction<0xAD>(0x00AFF5, 3); return true;
    // src/unknown/C2/C2DB14.asm:7 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2DA8F.
    case 0xC2DA93: cpu.execute_instruction<0xAF>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA96: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA99: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA9A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DB14.asm:8 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA9C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DB14.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA9E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DAA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DAA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DAA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DB14.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DAA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DB14.asm:11 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DAA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DB14.asm:11 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DAA8.
    case 0xC2DAAA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB14.asm:12 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2DAAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x00AFB5, 3); return true;
    // src/unknown/C2/C2DB14.asm:12 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DAAB.
    case 0xC2DAAD: cpu.execute_instruction<0xAF>(0x8EC322, 4); return true;
    // src/unknown/C2/C2DB14.asm:13 JSL MEMCPY16
    case 0xC2DAAE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2DB14.asm:13 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DAAD.
    case 0xC2DAB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DB14.asm:14 END_C_FUNCTION
    case 0xC2DAB2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DB14.asm:14 END_C_FUNCTION
    case 0xC2DAB3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DB3F.asm (unresolved).
bool execute_unresolved_c2_c2db3f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DB3F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DAB4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DAB6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DAB7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DAB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DAB8.
    case 0xC2DABA: cpu.execute_instruction<0xFF>(0xA5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DB3F.asm:5 END_STACK_VARS
    case 0xC2DABB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:6 LDA ENABLE_BACKGROUND_DARKENING
    case 0xC2DABC: cpu.execute_instruction<0xAD>(0x00AFA5, 3); return true;
    // src/unknown/C2/C2DB3F.asm:6 LDA ENABLE_BACKGROUND_DARKENING
    // Overlapping static entry reached from 0xC2DABA.
    case 0xC2DABE: cpu.execute_instruction<0xAF>(0xAD40F0, 4); return true;
    // src/unknown/C2/C2DB3F.asm:7 BEQ @UNKNOWN3
    case 0xC2DABF: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C2/C2DB3F.asm:8 LDA BACKGROUND_BRIGHTNESS
    case 0xC2DAC1: cpu.execute_instruction<0xAD>(0x00AFA7, 3); return true;
    // src/unknown/C2/C2DB3F.asm:8 LDA BACKGROUND_BRIGHTNESS
    // Overlapping static entry reached from 0xC2DABE.
    case 0xC2DAC2: cpu.execute_instruction<0xA7>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:9 SEC
    case 0xC2DAC4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:10 SBC #$0555
    case 0xC2DAC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000055, 2); else cpu.execute_instruction<0xE9>(0x000555, 3); return true;
    // src/unknown/C2/C2DB3F.asm:10 SBC #$0555
    // Overlapping static entry reached from 0xC2DAC5.
    case 0xC2DAC7: cpu.execute_instruction<0x05>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:11 STA BACKGROUND_BRIGHTNESS
    case 0xC2DAC8: cpu.execute_instruction<0x8D>(0x00AFA7, 3); return true;
    // src/unknown/C2/C2DB3F.asm:11 STA BACKGROUND_BRIGHTNESS
    // Overlapping static entry reached from 0xC2DAC7.
    case 0xC2DAC9: cpu.execute_instruction<0xA7>(0x0000AF, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:12 STORE_INT1632 @VIRTUAL0A
    case 0xC2DACB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C2/C2DB3F.asm:12 STORE_INT1632 @VIRTUAL0A
    case 0xC2DACD: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DACF.
    case 0xC2DAD1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DAD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DAD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DAD4.
    case 0xC2DAD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C2DB3F.asm:13 MOVE_INT_CONSTANT $00006000, @VIRTUAL06
    case 0xC2DAD7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:14 CLC
    case 0xC2DAD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:754 LDA src
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DADA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:755 SBC dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DADC: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:756 LDA src + 2
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DADE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:757 SBC dest + 2
    // Macro caller: src/unknown/C2/C2DB3F.asm:15 CMP32ALT @VIRTUAL06, @VIRTUAL0A
    case 0xC2DAE0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DAE2: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DAE4: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DAE6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2DAE8: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:17 LDA #$6000
    case 0xC2DAEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:17 LDA #$6000
    // Overlapping static entry reached from 0xC2DAEA.
    case 0xC2DAEC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:18 STA BACKGROUND_BRIGHTNESS
    case 0xC2DAED: cpu.execute_instruction<0x8D>(0x00AFA7, 3); return true;
    // src/unknown/C2/C2DB3F.asm:19 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2DAF0: cpu.execute_instruction<0x9C>(0x00AFA5, 3); return true;
    // src/unknown/C2/C2DB3F.asm:21 SEP #PROC_FLAGS::INDEX8
    case 0xC2DAF3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:22 LDY #$0008
    case 0xC2DAF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:23 LDA BACKGROUND_BRIGHTNESS
    case 0xC2DAF7: cpu.execute_instruction<0xAD>(0x00AFA7, 3); return true;
    // src/unknown/C2/C2DB3F.asm:23 LDA BACKGROUND_BRIGHTNESS
    // Overlapping static entry reached from 0xC2DAF5.
    case 0xC2DAF8: cpu.execute_instruction<0xA7>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:24 JSL ASR8_UNKNOWN1
    case 0xC2DAFA: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2DB3F.asm:25 JSR UNKNOWN_C2E08E
    case 0xC2DAFE: cpu.execute_instruction<0x20>(0x00DFE3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:27 LDA REFLECT_FLASH_DURATION
    case 0xC2DB01: cpu.execute_instruction<0xAD>(0x00AF7D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:28 BEQ @UNKNOWN5
    case 0xC2DB04: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C2/C2DB3F.asm:29 LDA REFLECT_FLASH_DURATION
    case 0xC2DB06: cpu.execute_instruction<0xAD>(0x00AF7D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:30 DEC
    case 0xC2DB09: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:31 STA REFLECT_FLASH_DURATION
    case 0xC2DB0A: cpu.execute_instruction<0x8D>(0x00AF7D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:32 AND #$0002
    case 0xC2DB0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:32 AND #$0002
    // Overlapping static entry reached from 0xC2DB0D.
    case 0xC2DB0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:33 BEQ @UNKNOWN4
    case 0xC2DB10: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:34 LDA #$FFFF
    case 0xC2DB12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:34 LDA #$FFFF
    // Overlapping static entry reached from 0xC2DB12.
    case 0xC2DB14: cpu.execute_instruction<0xFF>(0xDFE320, 4); return true;
    // src/unknown/C2/C2DB3F.asm:35 JSR UNKNOWN_C2E08E
    case 0xC2DB15: cpu.execute_instruction<0x20>(0x00DFE3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:36 BRA @UNKNOWN5
    case 0xC2DB18: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:38 LDA #$0100
    case 0xC2DB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:38 LDA #$0100
    // Overlapping static entry reached from 0xC2DB1A.
    case 0xC2DB1C: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:39 JSR UNKNOWN_C2E08E
    case 0xC2DB1D: cpu.execute_instruction<0x20>(0x00DFE3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:39 JSR UNKNOWN_C2E08E
    // Overlapping static entry reached from 0xC2DB1C.
    case 0xC2DB1E: cpu.execute_instruction<0xE3>(0x0000DF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:41 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DB20: cpu.execute_instruction<0xAD>(0x00AF7F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:42 BEQ @UNKNOWN10
    case 0xC2DB23: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C2/C2DB3F.asm:43 STZ PALETTES
    case 0xC2DB25: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/unknown/C2/C2DB3F.asm:44 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DB28: cpu.execute_instruction<0xAD>(0x00AF7F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:45 CMP #3
    case 0xC2DB2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:45 CMP #3
    // Overlapping static entry reached from 0xC2DB2B.
    case 0xC2DB2D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:46 BEQ @UNKNOWN6
    case 0xC2DB2E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C2/C2DB3F.asm:47 CMP #2
    case 0xC2DB30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:47 CMP #2
    // Overlapping static entry reached from 0xC2DB30.
    case 0xC2DB32: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:48 BEQ @UNKNOWN7
    case 0xC2DB33: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:49 BRA @UNKNOWN8
    case 0xC2DB35: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:51 LDA #$03E0
    case 0xC2DB37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:51 LDA #$03E0
    // Overlapping static entry reached from 0xC2DB37.
    case 0xC2DB39: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:52 STA PALETTES
    case 0xC2DB3A: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C2/C2DB3F.asm:52 STA PALETTES
    // Overlapping static entry reached from 0xC2DB39.
    case 0xC2DB3B: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C2/C2DB3F.asm:54 LDA #$0018
    case 0xC2DB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C2/C2DB3F.asm:54 LDA #$0018
    // Overlapping static entry reached from 0xC2DB3D.
    case 0xC2DB3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:55 JSL UNKNOWN_C0856B
    case 0xC2DB40: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C2/C2DB3F.asm:57 LDA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DB44: cpu.execute_instruction<0xAD>(0x00AF7F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:58 DEC
    case 0xC2DB47: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:59 STA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC2DB48: cpu.execute_instruction<0x8D>(0x00AF7F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:60 AND #$0002
    case 0xC2DB4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:60 AND #$0002
    // Overlapping static entry reached from 0xC2DB4B.
    case 0xC2DB4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:61 BEQ @UNKNOWN9
    case 0xC2DB4E: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:62 LDA #0
    case 0xC2DB50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:62 LDA #0
    // Overlapping static entry reached from 0xC2DB50.
    case 0xC2DB52: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:63 JSR UNKNOWN_C2E08E
    case 0xC2DB53: cpu.execute_instruction<0x20>(0x00DFE3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:64 BRA @UNKNOWN10
    case 0xC2DB56: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:66 LDA #$0100
    case 0xC2DB58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:66 LDA #$0100
    // Overlapping static entry reached from 0xC2DB58.
    case 0xC2DB5A: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:67 JSR UNKNOWN_C2E08E
    case 0xC2DB5B: cpu.execute_instruction<0x20>(0x00DFE3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:67 JSR UNKNOWN_C2E08E
    // Overlapping static entry reached from 0xC2DB5A.
    case 0xC2DB5C: cpu.execute_instruction<0xE3>(0x0000DF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:69 LDA VERTICAL_SHAKE_DURATION
    case 0xC2DB5E: cpu.execute_instruction<0xAD>(0x00AF61, 3); return true;
    // src/unknown/C2/C2DB3F.asm:70 BNE @UNKNOWN11
    case 0xC2DB61: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C2/C2DB3F.asm:71 STZ SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DB63: cpu.execute_instruction<0x9C>(0x00AF6D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:72 BRA @UNKNOWN12
    case 0xC2DB66: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C2/C2DB3F.asm:74 LDA #1*SECOND
    case 0xC2DB68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:74 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2DB68.
    case 0xC2DB6A: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C2/C2DB3F.asm:75 SEC
    case 0xC2DB6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:76 SBC VERTICAL_SHAKE_DURATION
    case 0xC2DB6C: cpu.execute_instruction<0xED>(0x00AF61, 3); return true;
    // src/unknown/C2/C2DB3F.asm:77 TAX
    case 0xC2DB6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DB70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:79 LDA f:UNKNOWN_C4A591,X
    case 0xC2DB72: cpu.execute_instruction<0xBF>(0xC479FA, 4); return true;
    // src/unknown/C2/C2DB3F.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC2DB76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:81 SEC
    case 0xC2DB78: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:82 AND #$00FF
    case 0xC2DB79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC2DB79.
    case 0xC2DB7B: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:83 SBC #$0080
    case 0xC2DB7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C2DB3F.asm:83 SBC #$0080
    // Overlapping static entry reached from 0xC2DB7C.
    case 0xC2DB7E: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C2DB3F.asm:84 EOR #$FF80
    case 0xC2DB7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C2DB3F.asm:84 EOR #$FF80
    // Overlapping static entry reached from 0xC2DB7F.
    case 0xC2DB81: cpu.execute_instruction<0xFF>(0xAF6D8D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:85 STA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DB82: cpu.execute_instruction<0x8D>(0x00AF6D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:86 LDX VERTICAL_SHAKE_DURATION
    case 0xC2DB85: cpu.execute_instruction<0xAE>(0x00AF61, 3); return true;
    // src/unknown/C2/C2DB3F.asm:87 DEX
    case 0xC2DB88: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:88 STX VERTICAL_SHAKE_DURATION
    case 0xC2DB89: cpu.execute_instruction<0x8E>(0x00AF61, 3); return true;
    // src/unknown/C2/C2DB3F.asm:89 BNE @UNKNOWN12
    case 0xC2DB8C: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:90 LDA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2DB8E: cpu.execute_instruction<0xAD>(0x00AF63, 3); return true;
    // src/unknown/C2/C2DB3F.asm:91 BEQ @UNKNOWN12
    case 0xC2DB91: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:92 DEC VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2DB93: cpu.execute_instruction<0xCE>(0x00AF63, 3); return true;
    // src/unknown/C2/C2DB3F.asm:93 LDA #1*SIXTH_OF_A_SECOND
    case 0xC2DB96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C2/C2DB3F.asm:93 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC2DB96.
    case 0xC2DB98: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:94 STA VERTICAL_SHAKE_DURATION
    case 0xC2DB99: cpu.execute_instruction<0x8D>(0x00AF61, 3); return true;
    // src/unknown/C2/C2DB3F.asm:97 STZ SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DB9C: cpu.execute_instruction<0x9C>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:98 LDA WOBBLE_DURATION
    case 0xC2DB9F: cpu.execute_instruction<0xAD>(0x00AF67, 3); return true;
    // src/unknown/C2/C2DB3F.asm:99 BEQ @UNKNOWN13
    case 0xC2DBA2: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C2/C2DB3F.asm:100 LDY #6*FIFTHS_OF_A_SECOND
    case 0xC2DBA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/unknown/C2/C2DB3F.asm:100 LDY #6*FIFTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC2DBA4.
    case 0xC2DBA6: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DB3F.asm:101 LDA WOBBLE_DURATION
    case 0xC2DBA7: cpu.execute_instruction<0xAD>(0x00AF67, 3); return true;
    // src/unknown/C2/C2DB3F.asm:102 JSL MODULUS16
    case 0xC2DBAA: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C2/C2DB3F.asm:103 DEC WOBBLE_DURATION
    case 0xC2DBAE: cpu.execute_instruction<0xCE>(0x00AF67, 3); return true;
    // src/unknown/C2/C2DB3F.asm:104 LDY #72
    case 0xC2DBB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/unknown/C2/C2DB3F.asm:104 LDY #72
    // Overlapping static entry reached from 0xC2DBB1.
    case 0xC2DBB3: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:105 XBA
    case 0xC2DBB4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:106 AND #$FF00
    case 0xC2DBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C2/C2DB3F.asm:106 AND #$FF00
    // Overlapping static entry reached from 0xC2DBB5.
    case 0xC2DBB7: cpu.execute_instruction<0xFF>(0x913D22, 4); return true;
    // src/unknown/C2/C2DB3F.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DBB8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC2DBB7.
    case 0xC2DBBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AA, 2); else cpu.execute_instruction<0xC0>(0x00A0AA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:109 TAX
    case 0xC2DBBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    case 0xC2DBBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    // Overlapping static entry reached from 0xC2DBBB.
    case 0xC2DBBE: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/unknown/C2/C2DB3F.asm:110 LDY #$0100
    // Overlapping static entry reached from 0xC2DBBD.
    case 0xC2DBBF: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DBC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:111 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2DBBF.
    case 0xC2DBC1: cpu.execute_instruction<0x20>(0x0004BF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:112 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC2DBC2: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/unknown/C2/C2DB3F.asm:112 LDA f:SINE_LOOKUP_TABLE,X
    // Overlapping static entry reached from 0xC2DBC1.
    case 0xC2DBC4: cpu.execute_instruction<0xB4>(0x0000C0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC2DBC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C2/C2DB3F.asm:114 SEC
    case 0xC2DBC8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:115 AND #$00FF
    case 0xC2DBC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2DBC9.
    case 0xC2DBCB: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:116 SBC #$0080
    case 0xC2DBCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C2/C2DB3F.asm:116 SBC #$0080
    // Overlapping static entry reached from 0xC2DBCC.
    case 0xC2DBCE: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C2/C2DB3F.asm:117 EOR #$FF80
    case 0xC2DBCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C2/C2DB3F.asm:117 EOR #$FF80
    // Overlapping static entry reached from 0xC2DBCF.
    case 0xC2DBD1: cpu.execute_instruction<0xFF>(0x0A0A0A, 4); return true;
    // src/unknown/C2/C2DB3F.asm:118 ASL
    case 0xC2DBD2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:119 ASL
    case 0xC2DBD3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:120 ASL
    case 0xC2DBD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:121 ASL
    case 0xC2DBD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:122 ASL
    case 0xC2DBD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:123 ASL
    case 0xC2DBD7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:124 JSL DIVISION16
    case 0xC2DBD8: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/unknown/C2/C2DB3F.asm:125 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DBDC: cpu.execute_instruction<0x8D>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:127 LDA SHAKE_DURATION
    case 0xC2DBDF: cpu.execute_instruction<0xAD>(0x00AF69, 3); return true;
    // src/unknown/C2/C2DB3F.asm:128 BEQ @UNKNOWN17
    case 0xC2DBE2: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C2/C2DB3F.asm:129 LDA SHAKE_DURATION
    case 0xC2DBE4: cpu.execute_instruction<0xAD>(0x00AF69, 3); return true;
    // src/unknown/C2/C2DB3F.asm:130 AND #$0003
    case 0xC2DBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:130 AND #$0003
    // Overlapping static entry reached from 0xC2DBE7.
    case 0xC2DBE9: cpu.execute_instruction<0x00>(0x0000CE, 2); return true;
    // src/unknown/C2/C2DB3F.asm:131 DEC SHAKE_DURATION
    case 0xC2DBEA: cpu.execute_instruction<0xCE>(0x00AF69, 3); return true;
    // src/unknown/C2/C2DB3F.asm:132 CMP #0
    case 0xC2DBED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2DBED.
    case 0xC2DBEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:133 BEQ @UNKNOWN14
    case 0xC2DBF0: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C2/C2DB3F.asm:134 CMP #2
    case 0xC2DBF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:134 CMP #2
    // Overlapping static entry reached from 0xC2DBF2.
    case 0xC2DBF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:135 BEQ @UNKNOWN14
    case 0xC2DBF5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:136 CMP #1
    case 0xC2DBF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:136 CMP #1
    // Overlapping static entry reached from 0xC2DBF7.
    case 0xC2DBF9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:137 BEQ @UNKNOWN15
    case 0xC2DBFA: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:138 CMP #3
    case 0xC2DBFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2DBFC.
    case 0xC2DBFE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:139 BEQ @UNKNOWN16
    case 0xC2DBFF: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C2/C2DB3F.asm:140 BRA @UNKNOWN17
    case 0xC2DC01: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C2/C2DB3F.asm:142 STZ SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC03: cpu.execute_instruction<0x9C>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:143 BRA @UNKNOWN17
    case 0xC2DC06: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:145 LDA #2
    case 0xC2DC08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:145 LDA #2
    // Overlapping static entry reached from 0xC2DC08.
    case 0xC2DC0A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:146 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC0B: cpu.execute_instruction<0x8D>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:147 BRA @UNKNOWN17
    case 0xC2DC0E: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C2/C2DB3F.asm:149 LDA #$FFFE
    case 0xC2DC10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C2/C2DB3F.asm:149 LDA #$FFFE
    // Overlapping static entry reached from 0xC2DC10.
    case 0xC2DC12: cpu.execute_instruction<0xFF>(0xAF6B8D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:150 STA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC13: cpu.execute_instruction<0x8D>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:152 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2DC16: cpu.execute_instruction<0xAD>(0x00AFAA, 3); return true;
    // src/unknown/C2/C2DB3F.asm:152 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    // Overlapping static entry reached from 0xC2DC5D.
    case 0xC2DC18: cpu.execute_instruction<0xAF>(0x00FF29, 4); return true;
    // src/unknown/C2/C2DB3F.asm:153 AND #$00FF
    case 0xC2DC19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC2DC19.
    case 0xC2DC1B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:154 CMP #2
    case 0xC2DC1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C2/C2DB3F.asm:154 CMP #2
    // Overlapping static entry reached from 0xC2DC1C.
    case 0xC2DC1E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:155 BNE @UNKNOWN18
    case 0xC2DC1F: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:156 LDA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC21: cpu.execute_instruction<0xAD>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:157 STA BG1_X_POS
    case 0xC2DC24: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/unknown/C2/C2DB3F.asm:158 LDA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DC27: cpu.execute_instruction<0xAD>(0x00AF6D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:159 STA BG1_Y_POS
    case 0xC2DC2A: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C2/C2DB3F.asm:160 BRA @UNKNOWN19
    case 0xC2DC2D: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C2/C2DB3F.asm:162 LDA BATTLE_MODE_FLAG
    case 0xC2DC2F: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:163 BEQ @UNKNOWN19
    case 0xC2DC32: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:164 LDA SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2DC34: cpu.execute_instruction<0xAD>(0x00AF6B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:165 STA BG3_X_POS
    case 0xC2DC37: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/unknown/C2/C2DB3F.asm:166 LDA SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2DC3A: cpu.execute_instruction<0xAD>(0x00AF6D, 3); return true;
    // src/unknown/C2/C2DB3F.asm:167 STA BG3_Y_POS
    case 0xC2DC3D: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:169 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2DC40: cpu.execute_instruction<0xAD>(0x00AF65, 3); return true;
    // src/unknown/C2/C2DB3F.asm:170 BEQ @UNKNOWN20
    case 0xC2DC43: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C2/C2DB3F.asm:171 DEC SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2DC45: cpu.execute_instruction<0xCE>(0x00AF65, 3); return true;
    // src/unknown/C2/C2DB3F.asm:173 LDA BATTLE_MODE_FLAG
    case 0xC2DC48: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:174 BEQ @UNKNOWN21
    case 0xC2DC4B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C2/C2DB3F.asm:175 JSL UNKNOWN_C2F8F9
    case 0xC2DC4D: cpu.execute_instruction<0x22>(0xC2F812, 4); return true;
    // src/unknown/C2/C2DB3F.asm:177 LDX #0
    case 0xC2DC51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:177 LDX #0
    // Overlapping static entry reached from 0xC2DC51.
    case 0xC2DC53: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:178 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2DC54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/unknown/C2/C2DB3F.asm:178 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2DC54.
    case 0xC2DC56: cpu.execute_instruction<0xAF>(0xC8E722, 4); return true;
    // src/unknown/C2/C2DB3F.asm:179 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2DC57: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/unknown/C2/C2DB3F.asm:179 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2DC56.
    case 0xC2DC5A: cpu.execute_instruction<0xC2>(0x0000A0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2DC5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x00B020, 3); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2DC5A.
    case 0xC2DC5C: cpu.execute_instruction<0x20>(0x00B9B0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:180 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2DC5B.
    case 0xC2DC5D: cpu.execute_instruction<0xB0>(0x0000B9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:181 LDA __BSS_START__,Y
    case 0xC2DC5E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:181 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DC5D.
    case 0xC2DC5F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C2/C2DB3F.asm:182 AND #$00FF
    case 0xC2DC61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC2DC61.
    case 0xC2DC63: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:183 BEQ @UNKNOWN22
    case 0xC2DC64: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C2/C2DB3F.asm:184 LDX #1
    case 0xC2DC66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:184 LDX #1
    // Overlapping static entry reached from 0xC2DC66.
    case 0xC2DC68: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C2/C2DB3F.asm:185 TYA
    case 0xC2DC69: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:186 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2DC6A: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/unknown/C2/C2DB3F.asm:188 JSL UNKNOWN_C2E6B6
    case 0xC2DC6E: cpu.execute_instruction<0x22>(0xC2E5CB, 4); return true;
    // src/unknown/C2/C2DB3F.asm:189 LDA RED_FLASH_DURATION
    case 0xC2DC72: cpu.execute_instruction<0xAD>(0x00AF75, 3); return true;
    // src/unknown/C2/C2DB3F.asm:190 BEQ @UNKNOWN24
    case 0xC2DC75: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:191 LDA RED_FLASH_DURATION
    case 0xC2DC77: cpu.execute_instruction<0xAD>(0x00AF75, 3); return true;
    // src/unknown/C2/C2DB3F.asm:192 DEC
    case 0xC2DC7A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:193 STA RED_FLASH_DURATION
    case 0xC2DC7B: cpu.execute_instruction<0x8D>(0x00AF75, 3); return true;
    // src/unknown/C2/C2DB3F.asm:194 LDY #12
    case 0xC2DC7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:194 LDY #12
    // Overlapping static entry reached from 0xC2DC7E.
    case 0xC2DC80: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:195 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DC81: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:196 AND #$0001
    case 0xC2DC85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:196 AND #$0001
    // Overlapping static entry reached from 0xC2DC85.
    case 0xC2DC87: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:197 BEQ @UNKNOWN23
    case 0xC2DC88: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2DB3F.asm:198 LDY #4
    case 0xC2DC8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DB3F.asm:198 LDY #4
    // Overlapping static entry reached from 0xC2DC8A.
    case 0xC2DC8C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:199 LDX #0
    case 0xC2DC8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:199 LDX #0
    // Overlapping static entry reached from 0xC2DC8D.
    case 0xC2DC8F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:200 LDA #31
    case 0xC2DC90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:200 LDA #31
    // Overlapping static entry reached from 0xC2DC90.
    case 0xC2DC92: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:201 JSL SET_COLDATA
    case 0xC2DC93: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:202 LDX #$003F
    case 0xC2DC97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:202 LDX #$003F
    // Overlapping static entry reached from 0xC2DC97.
    case 0xC2DC99: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:203 LDA #0
    case 0xC2DC9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:203 LDA #0
    // Overlapping static entry reached from 0xC2DC9A.
    case 0xC2DC9C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:204 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2DC9D: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/unknown/C2/C2DB3F.asm:205 BRA @UNKNOWN24
    case 0xC2DCA1: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:207 LDY #0
    case 0xC2DCA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:207 LDY #0
    // Overlapping static entry reached from 0xC2DCA3.
    case 0xC2DCA5: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:208 TYX
    case 0xC2DCA6: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:209 TYA
    case 0xC2DCA7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:210 JSL SET_COLDATA
    case 0xC2DCA8: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:211 LDA CURRENT_LAYER_CONFIG
    case 0xC2DCAC: cpu.execute_instruction<0xAD>(0x00AF5F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:212 JSL UNKNOWN_C0AFCD
    case 0xC2DCAF: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/unknown/C2/C2DB3F.asm:214 LDA GREEN_FLASH_DURATION
    case 0xC2DCB3: cpu.execute_instruction<0xAD>(0x00AF73, 3); return true;
    // src/unknown/C2/C2DB3F.asm:215 BEQ @UNKNOWN26
    case 0xC2DCB6: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C2/C2DB3F.asm:216 LDA GREEN_FLASH_DURATION
    case 0xC2DCB8: cpu.execute_instruction<0xAD>(0x00AF73, 3); return true;
    // src/unknown/C2/C2DB3F.asm:217 DEC
    case 0xC2DCBB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:218 STA GREEN_FLASH_DURATION
    case 0xC2DCBC: cpu.execute_instruction<0x8D>(0x00AF73, 3); return true;
    // src/unknown/C2/C2DB3F.asm:219 LDY #12
    case 0xC2DCBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:219 LDY #12
    // Overlapping static entry reached from 0xC2DCBF.
    case 0xC2DCC1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:220 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DCC2: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:221 AND #$0001
    case 0xC2DCC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:221 AND #$0001
    // Overlapping static entry reached from 0xC2DCC6.
    case 0xC2DCC8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:222 BEQ @UNKNOWN25
    case 0xC2DCC9: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C2/C2DB3F.asm:223 LDY #4
    case 0xC2DCCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C2/C2DB3F.asm:223 LDY #4
    // Overlapping static entry reached from 0xC2DCCB.
    case 0xC2DCCD: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C2/C2DB3F.asm:224 LDX #31
    case 0xC2DCCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:224 LDX #31
    // Overlapping static entry reached from 0xC2DCCE.
    case 0xC2DCD0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:225 LDA #0
    case 0xC2DCD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:225 LDA #0
    // Overlapping static entry reached from 0xC2DCD1.
    case 0xC2DCD3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:226 JSL SET_COLDATA
    case 0xC2DCD4: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:227 LDX #$003F
    case 0xC2DCD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:227 LDX #$003F
    // Overlapping static entry reached from 0xC2DCD8.
    case 0xC2DCDA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DB3F.asm:228 LDA #0
    case 0xC2DCDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:228 LDA #0
    // Overlapping static entry reached from 0xC2DCDB.
    case 0xC2DCDD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:229 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2DCDE: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/unknown/C2/C2DB3F.asm:230 BRA @UNKNOWN26
    case 0xC2DCE2: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:232 LDY #0
    case 0xC2DCE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C2/C2DB3F.asm:232 LDY #0
    // Overlapping static entry reached from 0xC2DCE4.
    case 0xC2DCE6: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C2/C2DB3F.asm:233 TYX
    case 0xC2DCE7: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:234 TYA
    case 0xC2DCE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:235 JSL SET_COLDATA
    case 0xC2DCE9: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:236 LDA CURRENT_LAYER_CONFIG
    case 0xC2DCED: cpu.execute_instruction<0xAD>(0x00AF5F, 3); return true;
    // src/unknown/C2/C2DB3F.asm:237 JSL UNKNOWN_C0AFCD
    case 0xC2DCF0: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/unknown/C2/C2DB3F.asm:239 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2DCF4: cpu.execute_instruction<0xAD>(0x00AF79, 3); return true;
    // src/unknown/C2/C2DB3F.asm:240 BEQ @UNKNOWN28
    case 0xC2DCF7: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C2/C2DB3F.asm:241 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC2DCF9: cpu.execute_instruction<0xAD>(0x00AF79, 3); return true;
    // src/unknown/C2/C2DB3F.asm:242 DEC
    case 0xC2DCFC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:243 STA HP_PP_BOX_BLINK_DURATION
    case 0xC2DCFD: cpu.execute_instruction<0x8D>(0x00AF79, 3); return true;
    // src/unknown/C2/C2DB3F.asm:244 LDY #3
    case 0xC2DD00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C2/C2DB3F.asm:244 LDY #3
    // Overlapping static entry reached from 0xC2DD00.
    case 0xC2DD02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C2/C2DB3F.asm:245 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2DD03: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C2/C2DB3F.asm:246 AND #$0001
    case 0xC2DD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C2/C2DB3F.asm:246 AND #$0001
    // Overlapping static entry reached from 0xC2DD07.
    case 0xC2DD09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:247 BEQ @UNKNOWN27
    case 0xC2DD0A: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C2/C2DB3F.asm:248 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2DD0C: cpu.execute_instruction<0xAD>(0x00AF7B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:249 JSL UNDRAW_HP_PP_WINDOW
    case 0xC2DD0F: cpu.execute_instruction<0x22>(0xC20782, 4); return true;
    // src/unknown/C2/C2DB3F.asm:250 BRA @UNKNOWN28
    case 0xC2DD13: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C2/C2DB3F.asm:252 LDA HP_PP_BOX_BLINK_TARGET
    case 0xC2DD15: cpu.execute_instruction<0xAD>(0x00AF7B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:253 JSL UNKNOWN_C207B6
    case 0xC2DD18: cpu.execute_instruction<0x22>(0xC20757, 4); return true;
    // src/unknown/C2/C2DB3F.asm:255 JSL UNKNOWN_C4A7B0
    case 0xC2DD1C: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/unknown/C2/C2DB3F.asm:256 JSL UNKNOWN_C2FD99
    case 0xC2DD20: cpu.execute_instruction<0x22>(0xC2FCB2, 4); return true;
    // src/unknown/C2/C2DB3F.asm:257 LDA LETTERBOX_EFFECT_ENDING
    case 0xC2DD24: cpu.execute_instruction<0xAD>(0x00AF8B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:258 BEQ @UNKNOWN33
    case 0xC2DD27: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C2/C2DB3F.asm:259 LDA LETTERBOX_TOP_END
    case 0xC2DD29: cpu.execute_instruction<0xAD>(0x00AF87, 3); return true;
    // src/unknown/C2/C2DB3F.asm:260 BEQ @UNKNOWN33
    case 0xC2DD2C: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/C2/C2DB3F.asm:261 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DD2E: cpu.execute_instruction<0xAD>(0x00AFA1, 3); return true;
    // src/unknown/C2/C2DB3F.asm:262 CMP #$03BB
    case 0xC2DD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000BB, 2); else cpu.execute_instruction<0xC9>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:262 CMP #$03BB
    // Overlapping static entry reached from 0xC2DD31.
    case 0xC2DD33: cpu.execute_instruction<0x03>(0x0000B0, 2); return true;
    // src/unknown/C2/C2DB3F.asm:263 BCS @UNKNOWN29
    case 0xC2DD34: cpu.execute_instruction<0xB0>(0x00000E, 2); return true;
    // src/unknown/C2/C2DB3F.asm:263 BCS @UNKNOWN29
    // Overlapping static entry reached from 0xC2DD33.
    case 0xC2DD35: cpu.execute_instruction<0x0E>(0x00A19C, 3); return true;
    // src/unknown/C2/C2DB3F.asm:264 STZ LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DD36: cpu.execute_instruction<0x9C>(0x00AFA1, 3); return true;
    // src/unknown/C2/C2DB3F.asm:264 STZ LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DD35.
    case 0xC2DD38: cpu.execute_instruction<0xAF>(0x00E0A9, 4); return true;
    // src/unknown/C2/C2DB3F.asm:265 LDA #224
    case 0xC2DD39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C2/C2DB3F.asm:265 LDA #224
    // Overlapping static entry reached from 0xC2DD39.
    case 0xC2DD3B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:266 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DD3C: cpu.execute_instruction<0x8D>(0x00AFA3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:267 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2DD3F: cpu.execute_instruction<0x9C>(0x00AF8B, 3); return true;
    // src/unknown/C2/C2DB3F.asm:268 BRA @UNKNOWN30
    case 0xC2DD42: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C2/C2DB3F.asm:270 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DD44: cpu.execute_instruction<0xAD>(0x00AFA1, 3); return true;
    // src/unknown/C2/C2DB3F.asm:271 SEC
    case 0xC2DD47: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:272 SBC #$03BB
    case 0xC2DD48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000BB, 2); else cpu.execute_instruction<0xE9>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:272 SBC #$03BB
    // Overlapping static entry reached from 0xC2DD48.
    case 0xC2DD4A: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:273 STA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DD4B: cpu.execute_instruction<0x8D>(0x00AFA1, 3); return true;
    // src/unknown/C2/C2DB3F.asm:273 STA LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DD4A.
    case 0xC2DD4C: cpu.execute_instruction<0xA1>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:274 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DD4E: cpu.execute_instruction<0xAD>(0x00AFA3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:275 CLC
    case 0xC2DD51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DB3F.asm:276 ADC #$03BB
    case 0xC2DD52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BB, 2); else cpu.execute_instruction<0x69>(0x0003BB, 3); return true;
    // src/unknown/C2/C2DB3F.asm:276 ADC #$03BB
    // Overlapping static entry reached from 0xC2DD52.
    case 0xC2DD54: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:277 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DD55: cpu.execute_instruction<0x8D>(0x00AFA3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:277 STA LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2DD54.
    case 0xC2DD56: cpu.execute_instruction<0xA3>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:279 SEP #PROC_FLAGS::INDEX8
    case 0xC2DD58: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C2/C2DB3F.asm:280 LDY #8
    case 0xC2DD5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:281 LDA LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2DD5C: cpu.execute_instruction<0xAD>(0x00AFA1, 3); return true;
    // src/unknown/C2/C2DB3F.asm:281 LDA LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2DD5A.
    case 0xC2DD5D: cpu.execute_instruction<0xA1>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:282 JSL ASR8_UNKNOWN1
    case 0xC2DD5F: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2DB3F.asm:283 CMP LETTERBOX_TOP_END
    case 0xC2DD63: cpu.execute_instruction<0xCD>(0x00AF87, 3); return true;
    // src/unknown/C2/C2DB3F.asm:284 BCS @UNKNOWN31
    case 0xC2DD66: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C2/C2DB3F.asm:285 STA LETTERBOX_TOP_END
    case 0xC2DD68: cpu.execute_instruction<0x8D>(0x00AF87, 3); return true;
    // src/unknown/C2/C2DB3F.asm:287 LDY #8
    case 0xC2DD6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/unknown/C2/C2DB3F.asm:288 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2DD6D: cpu.execute_instruction<0xAD>(0x00AFA3, 3); return true;
    // src/unknown/C2/C2DB3F.asm:288 LDA LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2DD6B.
    case 0xC2DD6E: cpu.execute_instruction<0xA3>(0x0000AF, 2); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    case 0xC2DD70: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DDEA.
    case 0xC2DD71: cpu.execute_instruction<0x33>(0x000092, 2); return true;
    // src/unknown/C2/C2DB3F.asm:289 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2DD71.
    case 0xC2DD73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000CD, 2); else cpu.execute_instruction<0xC0>(0x0089CD, 3); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    case 0xC2DD74: cpu.execute_instruction<0xCD>(0x00AF89, 3); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    // Overlapping static entry reached from 0xC2DD73.
    case 0xC2DD75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AF, 2); else cpu.execute_instruction<0x89>(0x0090AF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:290 CMP LETTERBOX_BOTTOM_START
    // Overlapping static entry reached from 0xC2DD73.
    case 0xC2DD76: cpu.execute_instruction<0xAF>(0xF00590, 4); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    case 0xC2DD77: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    // Overlapping static entry reached from 0xC2DD75.
    case 0xC2DD78: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    case 0xC2DD79: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2DB3F.asm:291 BLTEQ @UNKNOWN32
    // Overlapping static entry reached from 0xC2DD76.
    case 0xC2DD7A: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C2/C2DB3F.asm:292 STA LETTERBOX_BOTTOM_START
    case 0xC2DD7B: cpu.execute_instruction<0x8D>(0x00AF89, 3); return true;
    // src/unknown/C2/C2DB3F.asm:292 STA LETTERBOX_BOTTOM_START
    // Overlapping static entry reached from 0xC2DD7A.
    case 0xC2DD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AF, 2); else cpu.execute_instruction<0x89>(0x0022AF, 3); return true;
    // src/unknown/C2/C2DB3F.asm:294 JSL UNKNOWN_C2D0AC
    case 0xC2DD7E: cpu.execute_instruction<0x22>(0xC2D060, 4); return true;
    // src/unknown/C2/C2DB3F.asm:294 JSL UNKNOWN_C2D0AC
    // Overlapping static entry reached from 0xC2DD7C.
    case 0xC2DD7F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DB3F.asm:296 END_C_FUNCTION
    case 0xC2DD82: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DB3F.asm:296 END_C_FUNCTION
    case 0xC2DD83: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DE0F.asm (unresolved).
bool execute_unresolved_c2_c2de0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DE0F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DD84: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DD86: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DD87: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DD88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DD88.
    case 0xC2DD8A: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DE0F.asm:7 END_STACK_VARS
    case 0xC2DD8B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:8 LDX #0
    case 0xC2DD8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:8 LDX #0
    // Overlapping static entry reached from 0xC2DD8C.
    case 0xC2DD8E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C2/C2DE0F.asm:9 BRA @UNKNOWN1
    case 0xC2DD8F: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C2/C2DE0F.asm:11 TXA
    case 0xC2DD91: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:12 ASL
    case 0xC2DD92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:13 CLC
    case 0xC2DD93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:14 ADC #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2DD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x00AFA9, 3); return true;
    // src/unknown/C2/C2DE0F.asm:14 ADC #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2DD94.
    case 0xC2DD96: cpu.execute_instruction<0xAF>(0x181285, 4); return true;
    // src/unknown/C2/C2DE0F.asm:15 STA @LOCAL01
    case 0xC2DD97: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C2/C2DE0F.asm:16 CLC
    case 0xC2DD99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:17 ADC #0 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    case 0xC2DD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C2/C2DE0F.asm:17 ADC #0 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DD9A.
    case 0xC2DD9C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:18 TAY
    case 0xC2DD9D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:19 LDA __BSS_START__,Y
    case 0xC2DD9E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:20 LSR
    case 0xC2DDA1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:21 AND #$3DEF ;lower 4 bits of each colour channel
    case 0xC2DDA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x003DEF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:21 AND #$3DEF ;lower 4 bits of each colour channel
    // Overlapping static entry reached from 0xC2DDA2.
    case 0xC2DDA4: cpu.execute_instruction<0x3D>(0x000099, 3); return true;
    // src/unknown/C2/C2DE0F.asm:22 STA __BSS_START__,Y
    case 0xC2DDA5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:22 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DDA4.
    case 0xC2DDA7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C2/C2DE0F.asm:23 LDA @LOCAL01
    case 0xC2DDA8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C2/C2DE0F.asm:24 CLC
    case 0xC2DDAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:25 ADC #1 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    case 0xC2DDAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000083, 2); else cpu.execute_instruction<0x69>(0x000083, 3); return true;
    // src/unknown/C2/C2DE0F.asm:25 ADC #1 * .SIZEOF(loaded_bg_data) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DDAB.
    case 0xC2DDAD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:26 TAY
    case 0xC2DDAE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:27 LDA __BSS_START__,Y
    case 0xC2DDAF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:28 LSR
    case 0xC2DDB2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:29 AND #$3DEF ;lower 4 bits of each colour channel
    case 0xC2DDB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x003DEF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:29 AND #$3DEF ;lower 4 bits of each colour channel
    // Overlapping static entry reached from 0xC2DDB3.
    case 0xC2DDB5: cpu.execute_instruction<0x3D>(0x000099, 3); return true;
    // src/unknown/C2/C2DE0F.asm:30 STA __BSS_START__,Y
    case 0xC2DDB6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C2/C2DE0F.asm:30 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DDB5.
    case 0xC2DDB8: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C2/C2DE0F.asm:31 INX
    case 0xC2DDB9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C2/C2DE0F.asm:33 CPX #16
    case 0xC2DDBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C2/C2DE0F.asm:33 CPX #16
    // Overlapping static entry reached from 0xC2DDBA.
    case 0xC2DDBC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C2/C2DE0F.asm:34 BCC @UNKNOWN0
    case 0xC2DDBD: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x00AFB5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DDBF.
    case 0xC2DDC1: cpu.execute_instruction<0xAF>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDC2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDC4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDC7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDC8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE0F.asm:35 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDCA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE0F.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2DDCC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDCE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDD0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDD2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDD4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE0F.asm:38 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DDD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE0F.asm:38 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DDD6.
    case 0xC2DDD8: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE0F.asm:39 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DDD9: cpu.execute_instruction<0xAD>(0x00AFF5, 3); return true;
    // src/unknown/C2/C2DE0F.asm:40 JSL MEMCPY16
    case 0xC2DDDC: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2DE0F.asm:41 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DDE0: cpu.execute_instruction<0xAD>(0x00B020, 3); return true;
    // src/unknown/C2/C2DE0F.asm:42 AND #$00FF
    case 0xC2DDE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DE0F.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2DDE3.
    case 0xC2DDE5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DE0F.asm:43 BEQ @UNKNOWN2
    case 0xC2DDE6: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00B02C, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DDE8.
    case 0xC2DDEA: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DDEA.
    case 0xC2DDEC: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDED: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE0F.asm:44 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette, @VIRTUAL06
    case 0xC2DDF3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE0F.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC2DDF5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDF7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDFB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE0F.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DDFD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE0F.asm:47 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DDFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE0F.asm:47 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DDFF.
    case 0xC2DE01: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE0F.asm:48 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette_pointer
    case 0xC2DE02: cpu.execute_instruction<0xAD>(0x00B06C, 3); return true;
    // src/unknown/C2/C2DE0F.asm:49 JSL MEMCPY16
    case 0xC2DE05: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DE0F.asm:51 END_C_FUNCTION
    case 0xC2DE09: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DE0F.asm:51 END_C_FUNCTION
    case 0xC2DE0A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C2/C2DE96.asm (unresolved).
bool execute_unresolved_c2_c2de96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2DE96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2DE0B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE0D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE0E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2DE0F.
    case 0xC2DE11: cpu.execute_instruction<0xFF>(0xD5A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2DE96.asm:10 END_STACK_VARS
    case 0xC2DE12: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x00AFD5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DE13.
    case 0xC2DE15: cpu.execute_instruction<0xAF>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE18: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE1B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE96.asm:11 PROMOTENEARPTR LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette2, @VIRTUAL06
    case 0xC2DE1E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C2/C2DE96.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC2DE20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE22: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:14 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE28: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:19 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:19 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE2A.
    case 0xC2DE2C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DE96.asm:20 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2DE2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x00AFB5, 3); return true;
    // src/unknown/C2/C2DE96.asm:20 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DE2D.
    case 0xC2DE2F: cpu.execute_instruction<0xAF>(0x8EC322, 4); return true;
    // src/unknown/C2/C2DE96.asm:21 JSL MEMCPY16
    case 0xC2DE30: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2DE96.asm:21 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DE2F.
    case 0xC2DE33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x004CA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00B04C, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2DE33.
    case 0xC2DE35: cpu.execute_instruction<0x4C>(0x0085B0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2DE34.
    case 0xC2DE36: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE37: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2DE36.
    case 0xC2DE38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE39: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE3D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C2/C2DE96.asm:22 PROMOTENEARPTR LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette2, @VIRTUAL0A
    case 0xC2DE3F: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C2/C2DE96.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC2DE41: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE43: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE45: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE47: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE49: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:30 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:30 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE4B.
    case 0xC2DE4D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C2/C2DE96.asm:31 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2DE4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00B02C, 3); return true;
    // src/unknown/C2/C2DE96.asm:31 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2DE4E.
    case 0xC2DE50: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/unknown/C2/C2DE96.asm:32 JSL MEMCPY16
    case 0xC2DE51: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2DE96.asm:32 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DE50.
    case 0xC2DE52: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C2/C2DE96.asm:32 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DE52.
    case 0xC2DE54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE55: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2DE54.
    case 0xC2DE56: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE57: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC2DE56.
    case 0xC2DE58: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DE5B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:39 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:39 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE5D.
    case 0xC2DE5F: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE96.asm:40 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::palette_pointer
    case 0xC2DE60: cpu.execute_instruction<0xAD>(0x00AFF5, 3); return true;
    // src/unknown/C2/C2DE96.asm:41 JSL MEMCPY16
    case 0xC2DE63: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C2/C2DE96.asm:42 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DE67: cpu.execute_instruction<0xAD>(0x00B020, 3); return true;
    // src/unknown/C2/C2DE96.asm:43 AND #$00FF
    case 0xC2DE6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C2/C2DE96.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2DE6A.
    case 0xC2DE6C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C2/C2DE96.asm:44 BEQ @UNKNOWN0
    case 0xC2DE6D: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C2/C2DE96.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE6F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C2/C2DE96.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE73: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C2/C2DE96.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    // Overlapping static entry reached from 0xC2DE50.
    case 0xC2DE74: cpu.execute_instruction<0x0C>(0x001085, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C2/C2DE96.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2DE75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C2/C2DE96.asm:51 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DE77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C2/C2DE96.asm:51 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DE77.
    case 0xC2DE79: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C2/C2DE96.asm:52 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::palette_pointer
    case 0xC2DE7A: cpu.execute_instruction<0xAD>(0x00B06C, 3); return true;
    // src/unknown/C2/C2DE96.asm:53 JSL MEMCPY16
    case 0xC2DE7D: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2DE96.asm:55 END_C_FUNCTION
    case 0xC2DE81: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2DE96.asm:55 END_C_FUNCTION
    case 0xC2DE82: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
