// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/text/selection_menu-jp.asm (source_named).
bool execute_text_selection_menu_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC12109: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1210E.
    case 0xC12110: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC12111: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC12112: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:20 STA @LOCAL0C
    case 0xC12113: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/text/selection_menu-jp.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC12110.
    case 0xC12114: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:21 LDA CURRENT_FOCUS_WINDOW
    case 0xC12115: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/selection_menu-jp.asm:22 STA @LOCAL0B
    case 0xC12118: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/selection_menu-jp.asm:23 CMP #.LOWORD(-1)
    case 0xC1211A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1211A.
    case 0xC1211C: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/text/selection_menu-jp.asm:24 BNE @UNKNOWN0
    case 0xC1211D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:25 LDA #0
    case 0xC1211F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1211C.
    case 0xC12120: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1211F.
    case 0xC12121: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/selection_menu-jp.asm:26 JMP @UNKNOWN44
    case 0xC12122: cpu.execute_instruction<0x4C>(0x002679, 3); return true;
    // src/text/selection_menu-jp.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC12125: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/selection_menu-jp.asm:29 ASL
    case 0xC12128: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:30 TAX
    case 0xC12129: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:31 LDA OPEN_WINDOW_TABLE,X
    case 0xC1212A: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/selection_menu-jp.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC1212D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/selection_menu-jp.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1212D.
    case 0xC1212F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:33 JSL MULT168
    case 0xC12130: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/selection_menu-jp.asm:34 CLC
    case 0xC12134: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    case 0xC12135: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/selection_menu-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC12135.
    case 0xC12137: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x002485, 3); return true;
    // src/text/selection_menu-jp.asm:36 STA @LOCAL0A
    case 0xC12138: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:36 STA @LOCAL0A
    // Overlapping static entry reached from 0xC12137.
    case 0xC12139: cpu.execute_instruction<0x24>(0x0000A0, 2); return true;
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    case 0xC1213A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC12139.
    case 0xC1213B: cpu.execute_instruction<0x2F>(0x24B100, 4); return true;
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC1213A.
    case 0xC1213C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:38 LDA (@LOCAL0A),Y
    case 0xC1213D: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:39 CMP #.LOWORD(-1)
    case 0xC1213F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:39 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1213F.
    case 0xC12141: cpu.execute_instruction<0xFF>(0xAA72F0, 4); return true;
    // src/text/selection_menu-jp.asm:40 BEQ @UNKNOWN4
    case 0xC12142: cpu.execute_instruction<0xF0>(0x000072, 2); return true;
    // src/text/selection_menu-jp.asm:41 TAX
    case 0xC12144: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:42 STX @LOCAL09
    case 0xC12145: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:43 STA @LOCAL08
    case 0xC12147: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:44 LDY #window_stats::current_option
    case 0xC12149: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu-jp.asm:44 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC12149.
    case 0xC1214B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:45 LDA (@LOCAL0A),Y
    case 0xC1214C: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1214E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12150: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12151: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12152: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12154: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12155: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12157: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12158: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:47 CLC
    case 0xC12159: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:48 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1215A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/selection_menu-jp.asm:48 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1215A.
    case 0xC1215C: cpu.execute_instruction<0x8D>(0x000285, 3); return true;
    // src/text/selection_menu-jp.asm:49 STA @VIRTUAL02
    case 0xC1215D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:50 BRA @UNKNOWN3
    case 0xC1215F: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/text/selection_menu-jp.asm:52 DEX
    case 0xC12161: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:53 STX @LOCAL09
    case 0xC12162: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:54 LDX @VIRTUAL02
    case 0xC12164: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:55 LDA __BSS_START__+2,X
    case 0xC12166: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12169: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12170: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12172: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12173: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:57 CLC
    case 0xC12174: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:58 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC12175: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/selection_menu-jp.asm:58 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC12175.
    case 0xC12177: cpu.execute_instruction<0x8D>(0x000285, 3); return true;
    // src/text/selection_menu-jp.asm:59 STA @VIRTUAL02
    case 0xC12178: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:61 LDX @LOCAL09
    case 0xC1217A: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:62 BNE @UNKNOWN2
    case 0xC1217C: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/text/selection_menu-jp.asm:63 JSR SET_INSTANT_PRINTING
    case 0xC1217E: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/text/selection_menu-jp.asm:64 LDX @VIRTUAL02
    case 0xC12181: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:65 LDA a:menu_option::text_y,X
    case 0xC12183: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:66 TAX
    case 0xC12186: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:67 STX @LOCAL07
    case 0xC12187: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:68 LDX @VIRTUAL02
    case 0xC12189: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:69 LDA a:menu_option::text_x,X
    case 0xC1218B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:70 INC
    case 0xC1218E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:71 LDX @LOCAL07
    case 0xC1218F: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:72 JSR UNKNOWN_C438A5
    case 0xC12191: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/selection_menu-jp.asm:73 LDA @VIRTUAL02
    case 0xC12194: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:74 CLC
    case 0xC12196: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:75 ADC #menu_option::label
    case 0xC12197: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/selection_menu-jp.asm:75 ADC #menu_option::label
    // Overlapping static entry reached from 0xC12197.
    case 0xC12199: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC121A0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC121A2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/selection_menu-jp.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC121A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:79 LDA #.LOWORD(-1)
    case 0xC121AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:79 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC121AE.
    case 0xC121B0: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/text/selection_menu-jp.asm:80 JSR PRINT_STRING
    case 0xC121B1: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/selection_menu-jp.asm:81 BRA @UNKNOWN5
    case 0xC121B4: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:83 STZ @LOCAL08
    case 0xC121B6: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:84 LDY #window_stats::current_option
    case 0xC121B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu-jp.asm:84 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC121B8.
    case 0xC121BA: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:85 LDA (@LOCAL0A),Y
    case 0xC121BB: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:87 CLC
    case 0xC121C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:88 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC121C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/selection_menu-jp.asm:88 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC121C9.
    case 0xC121CB: cpu.execute_instruction<0x8D>(0x000285, 3); return true;
    // src/text/selection_menu-jp.asm:89 STA @VIRTUAL02
    case 0xC121CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:91 STZ @LOCAL09
    case 0xC121CE: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:92 LDA @VIRTUAL02
    case 0xC121D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:93 CLC
    case 0xC121D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:94 ADC #menu_option::script
    case 0xC121D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/text/selection_menu-jp.asm:94 ADC #menu_option::script
    // Overlapping static entry reached from 0xC121D3.
    case 0xC121D5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu-jp.asm:95 TAY
    case 0xC121D6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:96 STY @LOCAL06
    case 0xC121D7: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC121D9.
    case 0xC121DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121DC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC121DE.
    case 0xC121E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121E1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:99 CMP @VIRTUAL0A+2
    case 0xC121ED: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/selection_menu-jp.asm:100 BNE @UNKNOWN6
    case 0xC121EF: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:101 LDA @VIRTUAL06
    case 0xC121F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:102 CMP @VIRTUAL0A
    case 0xC121F3: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/selection_menu-jp.asm:104 BEQ @UNKNOWN7
    case 0xC121F5: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/selection_menu-jp.asm:105 JSR SET_INSTANT_PRINTING
    case 0xC121F7: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/text/selection_menu-jp.asm:106 LDY @LOCAL06
    case 0xC121FA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121FC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12CF9.
    case 0xC12200: cpu.execute_instruction<0x06>(0x0000B9, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12201: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12200.
    case 0xC12202: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12204: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12206: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12208: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1220A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1220C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:109 JSL DISPLAY_TEXT
    case 0xC1220E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12212: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12212.
    case 0xC12214: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12215: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12217: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12217.
    case 0xC12219: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1221A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/selection_menu-jp.asm:112 LDA @LOCAL0A
    case 0xC1221C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:113 CLC
    case 0xC1221E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:114 ADC #window_stats::cursor_move_callback
    case 0xC1221F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/selection_menu-jp.asm:114 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1221F.
    case 0xC12221: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu-jp.asm:115 TAY
    case 0xC12222: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12223: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12226: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12228: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1222B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:117 CMP @VIRTUAL0A+2
    case 0xC1222D: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/selection_menu-jp.asm:118 BNE @UNKNOWN8
    case 0xC1222F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:119 LDA @VIRTUAL06
    case 0xC12231: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:120 CMP @VIRTUAL0A
    case 0xC12233: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/selection_menu-jp.asm:122 BEQ @UNKNOWN11
    case 0xC12235: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/text/selection_menu-jp.asm:123 LDX @VIRTUAL02
    case 0xC12237: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:124 LDA a:menu_option::unknown0,X
    case 0xC12239: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:125 CMP #1
    case 0xC1223C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:125 CMP #1
    // Overlapping static entry reached from 0xC1223C.
    case 0xC1223E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu-jp.asm:126 BNE @UNKNOWN9
    case 0xC1223F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/selection_menu-jp.asm:127 LDA @LOCAL08
    case 0xC12241: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:128 INC
    case 0xC12243: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:129 BRA @UNKNOWN10
    case 0xC12244: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/selection_menu-jp.asm:131 LDX @VIRTUAL02
    case 0xC12246: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:132 LDA a:menu_option::userdata,X
    case 0xC12248: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/text/selection_menu-jp.asm:134 STA @LOCAL07
    case 0xC1224B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:135 LDA @LOCAL0A
    case 0xC1224D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:136 CLC
    case 0xC1224F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:137 ADC #window_stats::cursor_move_callback
    case 0xC12250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/selection_menu-jp.asm:137 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC12250.
    case 0xC12252: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu-jp.asm:138 TAY
    case 0xC12253: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12254: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12257: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12259: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1225C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:140 LDA @LOCAL07
    case 0xC1225E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:141 PHA
    case 0xC12260: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12261: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12263: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12266: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12268: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/text/selection_menu-jp.asm:143 PLA
    case 0xC1226B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:144 JSL UNKNOWN_C09279
    case 0xC1226C: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/text/selection_menu-jp.asm:145 LDA @LOCAL0B
    case 0xC12270: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/selection_menu-jp.asm:146 JSR SET_WINDOW_FOCUS
    case 0xC12272: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/text/selection_menu-jp.asm:148 JSR CLEAR_INSTANT_PRINTING
    case 0xC12275: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/selection_menu-jp.asm:149 LDX @VIRTUAL02
    case 0xC12278: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:150 LDA a:menu_option::text_y,X
    case 0xC1227A: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:151 TAX
    case 0xC1227D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:152 STX @LOCAL07
    case 0xC1227E: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:153 LDX @VIRTUAL02
    case 0xC12280: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:154 LDA a:menu_option::text_x,X
    case 0xC12282: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:155 LDX @LOCAL07
    case 0xC12285: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:156 JSR UNKNOWN_C438A5
    case 0xC12287: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/selection_menu-jp.asm:157 LDA #1
    case 0xC1228A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:157 LDA #1
    // Overlapping static entry reached from 0xC1228A.
    case 0xC1228C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:158 JSR UNKNOWN_C10FEA
    case 0xC1228D: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/selection_menu-jp.asm:159 LDA #33
    case 0xC12290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/text/selection_menu-jp.asm:159 LDA #33
    // Overlapping static entry reached from 0xC12290.
    case 0xC12292: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:160 JSR UNKNOWN_C10D60
    case 0xC12293: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/text/selection_menu-jp.asm:161 LDA #0
    case 0xC12296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:161 LDA #0
    // Overlapping static entry reached from 0xC12296.
    case 0xC12298: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:162 JSR UNKNOWN_C10FEA
    case 0xC12299: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/selection_menu-jp.asm:163 JSL WINDOW_TICK
    case 0xC1229C: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/selection_menu-jp.asm:164 LDA #1
    case 0xC122A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:164 LDA #1
    // Overlapping static entry reached from 0xC122A0.
    case 0xC122A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:165 STA @LOCAL06
    case 0xC122A3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu-jp.asm:167 LDA @LOCAL06
    case 0xC122A5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu-jp.asm:168 EOR #$0001
    case 0xC122A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:168 EOR #$0001
    // Overlapping static entry reached from 0xC122A7.
    case 0xC122A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:169 STA @LOCAL06
    case 0xC122AA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu-jp.asm:170 LDY #window_stats::text_y
    case 0xC122AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/text/selection_menu-jp.asm:170 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC122AC.
    case 0xC122AE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:171 LDA (@LOCAL0A),Y
    case 0xC122AF: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:172 ASL
    case 0xC122B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:173 LDY #window_stats::window_y
    case 0xC122B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:173 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC122B2.
    case 0xC122B4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:174 CLC
    case 0xC122B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:175 ADC (@LOCAL0A),Y
    case 0xC122B6: cpu.execute_instruction<0x71>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:176 ASL
    case 0xC122B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:177 ASL
    case 0xC122B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:178 ASL
    case 0xC122BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:179 ASL
    case 0xC122BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:180 ASL
    case 0xC122BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:181 STA @VIRTUAL04
    case 0xC122BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:182 LDY #window_stats::window_x
    case 0xC122BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/selection_menu-jp.asm:182 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC122BF.
    case 0xC122C1: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:183 LDA (@LOCAL0A),Y
    case 0xC122C2: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:184 LDY #window_stats::text_x
    case 0xC122C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/text/selection_menu-jp.asm:184 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC122C4.
    case 0xC122C6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:185 CLC
    case 0xC122C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:186 ADC (@LOCAL0A),Y
    case 0xC122C8: cpu.execute_instruction<0x71>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:187 CLC
    case 0xC122CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:188 ADC @VIRTUAL04
    case 0xC122CB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:189 CLC
    case 0xC122CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC122CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/selection_menu-jp.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC122CE.
    case 0xC122D0: cpu.execute_instruction<0x7C>(0x001A85, 3); return true;
    // src/text/selection_menu-jp.asm:191 STA @LOCAL05
    case 0xC122D1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:192 LDA @LOCAL06
    case 0xC122D3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu-jp.asm:193 ASL
    case 0xC122D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:194 STA @VIRTUAL04
    case 0xC122D6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x00E3E8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122D8.
    case 0xC122DA: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DA.
    case 0xC122DC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DC.
    case 0xC122DE: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DD.
    case 0xC122DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122E0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:196 LDA @VIRTUAL04
    case 0xC122E2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:197 CLC
    case 0xC122E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:198 ADC @VIRTUAL06
    case 0xC122E5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:199 STA @VIRTUAL06
    case 0xC122E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:200 STA @LOCAL00
    case 0xC122E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:201 LDA @VIRTUAL06+2
    case 0xC122EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:202 STA @LOCAL00+2
    case 0xC122ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:203 LDY @LOCAL05
    case 0xC122EF: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:204 LDX #2
    case 0xC122F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:204 LDX #2
    // Overlapping static entry reached from 0xC122F1.
    case 0xC122F3: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/selection_menu-jp.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC122F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:206 LDA #0
    case 0xC122F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    case 0xC122F8: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC122F6.
    case 0xC122F9: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC122F9.
    case 0xC122FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00ECA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC122FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x00E3EC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FB.
    case 0xC122FD: cpu.execute_instruction<0xEC>(0x0085E3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FC.
    case 0xC122FE: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC122FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FE.
    case 0xC12300: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC12301: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC12300.
    case 0xC12302: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC12301.
    case 0xC12303: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC12304: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:210 LDA @VIRTUAL04
    case 0xC12306: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:211 CLC
    case 0xC12308: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:212 ADC @VIRTUAL06
    case 0xC12309: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:213 STA @VIRTUAL06
    case 0xC1230B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:214 STA @LOCAL00
    case 0xC1230D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:215 LDA @VIRTUAL06+2
    case 0xC1230F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/selection_menu-jp.asm:216 STA @LOCAL00+2
    case 0xC12311: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:217 LDA @LOCAL05
    case 0xC12313: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:218 CLC
    case 0xC12315: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:219 ADC #32
    case 0xC12316: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/selection_menu-jp.asm:219 ADC #32
    // Overlapping static entry reached from 0xC12316.
    case 0xC12318: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu-jp.asm:220 TAY
    case 0xC12319: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:221 LDX #2
    case 0xC1231A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:221 LDX #2
    // Overlapping static entry reached from 0xC1231A.
    case 0xC1231C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/selection_menu-jp.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC1231D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:223 LDA #0
    case 0xC1231F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    case 0xC12321: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1231F.
    case 0xC12322: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12322.
    case 0xC12324: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/text/selection_menu-jp.asm:226 LDX #0
    case 0xC12325: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:226 LDX #0
    // Overlapping static entry reached from 0xC12324.
    case 0xC12326: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:226 LDX #0
    // Overlapping static entry reached from 0xC12325.
    case 0xC12327: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/selection_menu-jp.asm:227 STX @LOCAL04
    case 0xC12328: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:228 JMP @UNKNOWN37
    case 0xC1232A: cpu.execute_instruction<0x4C>(0x0025D3, 3); return true;
    // src/text/selection_menu-jp.asm:230 JSL UNKNOWN_C12E42
    case 0xC1232D: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/selection_menu-jp.asm:231 LDA PAD_PRESS
    case 0xC12331: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:232 AND #PAD::UP
    case 0xC12334: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/selection_menu-jp.asm:232 AND #PAD::UP
    // Overlapping static entry reached from 0xC12334.
    case 0xC12336: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:233 BEQ @UNKNOWN15
    case 0xC12337: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/text/selection_menu-jp.asm:234 LDX @VIRTUAL02
    case 0xC12339: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:235 LDA a:menu_option::text_x,X
    case 0xC1233B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:236 STA @LOCAL03
    case 0xC1233E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:237 LDA #0
    case 0xC12340: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:237 LDA #0
    // Overlapping static entry reached from 0xC12340.
    case 0xC12342: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:238 STA @LOCAL00
    case 0xC12343: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:239 LDA #SFX::CURSOR3
    case 0xC12345: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu-jp.asm:239 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12345.
    case 0xC12347: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:240 STA @LOCAL00+2
    case 0xC12348: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:241 LDA @LOCAL03
    case 0xC1234A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:242 STA @LOCAL01
    case 0xC1234C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu-jp.asm:243 LDY #window_stats::height
    case 0xC1234E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/selection_menu-jp.asm:243 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1234E.
    case 0xC12350: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:244 LDA (@LOCAL0A),Y
    case 0xC12351: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:245 LSR
    case 0xC12353: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:246 STA @LOCAL02
    case 0xC12354: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu-jp.asm:247 LDY #.LOWORD(-1)
    case 0xC12356: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:247 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12356.
    case 0xC12358: cpu.execute_instruction<0xFF>(0xBD02A6, 4); return true;
    // src/text/selection_menu-jp.asm:248 LDX @VIRTUAL02
    case 0xC12359: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    case 0xC1235B: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC12358.
    case 0xC1235C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC1235C.
    case 0xC1235D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:250 TAX
    case 0xC1235E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:251 LDA @LOCAL03
    case 0xC1235F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:252 JSL MOVE_CURSOR
    case 0xC12361: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/selection_menu-jp.asm:253 STA @LOCAL07
    case 0xC12365: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:254 JMP @UNKNOWN39
    case 0xC12367: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:256 LDA PAD_PRESS
    case 0xC1236A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:257 AND #PAD::LEFT
    case 0xC1236D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/selection_menu-jp.asm:257 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1236D.
    case 0xC1236F: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:258 BEQ @UNKNOWN16
    case 0xC12370: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/text/selection_menu-jp.asm:259 LDX @VIRTUAL02
    case 0xC12372: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:260 LDA a:menu_option::text_y,X
    case 0xC12374: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:261 STA @LOCAL07
    case 0xC12377: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:262 LDA #.LOWORD(-1)
    case 0xC12379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:262 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12379.
    case 0xC1237B: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/selection_menu-jp.asm:263 STA @LOCAL00
    case 0xC1237C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    case 0xC1237E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1237B.
    case 0xC1237F: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1237E.
    case 0xC12380: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:265 STA @LOCAL00+2
    case 0xC12381: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:266 LDY #window_stats::width
    case 0xC12383: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:266 LDY #window_stats::width
    // Overlapping static entry reached from 0xC12383.
    case 0xC12385: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:267 LDA (@LOCAL0A),Y
    case 0xC12386: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:268 STA @LOCAL01
    case 0xC12388: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu-jp.asm:268 STA @LOCAL01
    // Overlapping static entry reached from 0xC123E1.
    case 0xC12389: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/text/selection_menu-jp.asm:269 LDA @LOCAL07
    case 0xC1238A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:269 LDA @LOCAL07
    // Overlapping static entry reached from 0xC12389.
    case 0xC1238B: cpu.execute_instruction<0x1E>(0x001485, 3); return true;
    // src/text/selection_menu-jp.asm:270 STA @LOCAL02
    case 0xC1238C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu-jp.asm:271 LDY #0
    case 0xC1238E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:271 LDY #0
    // Overlapping static entry reached from 0xC1238E.
    case 0xC12390: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:272 TAX
    case 0xC12391: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:273 STX @LOCAL07
    case 0xC12392: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:274 LDX @VIRTUAL02
    case 0xC12394: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:275 LDA a:menu_option::text_x,X
    case 0xC12396: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:276 LDX @LOCAL07
    case 0xC12399: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:277 JSL MOVE_CURSOR
    case 0xC1239B: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/selection_menu-jp.asm:278 STA @LOCAL07
    case 0xC1239F: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:279 JMP @UNKNOWN39
    case 0xC123A1: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:281 LDA PAD_PRESS
    case 0xC123A4: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:282 AND #PAD::DOWN
    case 0xC123A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/selection_menu-jp.asm:282 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC123A7.
    case 0xC123A9: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:283 BEQ @UNKNOWN17
    case 0xC123AA: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/text/selection_menu-jp.asm:283 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC123A9.
    case 0xC123AB: cpu.execute_instruction<0x2E>(0x0002A6, 3); return true;
    // src/text/selection_menu-jp.asm:284 LDX @VIRTUAL02
    case 0xC123AC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:285 LDA a:menu_option::text_x,X
    case 0xC123AE: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:286 STA @LOCAL03
    case 0xC123B1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:287 LDA #0
    case 0xC123B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:287 LDA #0
    // Overlapping static entry reached from 0xC123B3.
    case 0xC123B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:288 STA @LOCAL00
    case 0xC123B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:289 LDA #SFX::CURSOR3
    case 0xC123B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu-jp.asm:289 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC123B8.
    case 0xC123BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:290 STA @LOCAL00+2
    case 0xC123BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:291 LDA @LOCAL03
    case 0xC123BD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:292 STA @LOCAL01
    case 0xC123BF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu-jp.asm:293 LDA #.LOWORD(-1)
    case 0xC123C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:293 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC123C1.
    case 0xC123C3: cpu.execute_instruction<0xFF>(0xA01485, 4); return true;
    // src/text/selection_menu-jp.asm:294 STA @LOCAL02
    case 0xC123C4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu-jp.asm:295 LDY #1
    case 0xC123C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:295 LDY #1
    // Overlapping static entry reached from 0xC123C3.
    case 0xC123C7: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:295 LDY #1
    // Overlapping static entry reached from 0xC123C6.
    case 0xC123C8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:296 LDX @VIRTUAL02
    case 0xC123C9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:297 LDA a:menu_option::text_y,X
    case 0xC123CB: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:298 TAX
    case 0xC123CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:299 LDA @LOCAL03
    case 0xC123CF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:300 JSL MOVE_CURSOR
    case 0xC123D1: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/selection_menu-jp.asm:301 STA @LOCAL07
    case 0xC123D5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:302 JMP @UNKNOWN39
    case 0xC123D7: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:304 LDA PAD_PRESS
    case 0xC123DA: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:305 AND #PAD::RIGHT
    case 0xC123DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/selection_menu-jp.asm:305 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC123DD.
    case 0xC123DF: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:306 BEQ @UNKNOWN18
    case 0xC123E0: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/text/selection_menu-jp.asm:306 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC123DF.
    case 0xC123E1: cpu.execute_instruction<0x30>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:307 LDX @VIRTUAL02
    case 0xC123E2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:307 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC123E1.
    case 0xC123E3: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/text/selection_menu-jp.asm:308 LDA a:menu_option::text_y,X
    case 0xC123E4: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:309 STA @LOCAL04
    case 0xC123E7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:310 LDA #1
    case 0xC123E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:310 LDA #1
    // Overlapping static entry reached from 0xC123E9.
    case 0xC123EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:311 STA @LOCAL00
    case 0xC123EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:312 LDA #SFX::CURSOR2
    case 0xC123EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:312 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC123EE.
    case 0xC123F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:313 STA @LOCAL00+2
    case 0xC123F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:314 LDA #.LOWORD(-1)
    case 0xC123F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:314 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC123F3.
    case 0xC123F5: cpu.execute_instruction<0xFF>(0xA51285, 4); return true;
    // src/text/selection_menu-jp.asm:315 STA @LOCAL01
    case 0xC123F6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu-jp.asm:316 LDA @LOCAL04
    case 0xC123F8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:316 LDA @LOCAL04
    // Overlapping static entry reached from 0xC123F5.
    case 0xC123F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:317 STA @LOCAL02
    case 0xC123FA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu-jp.asm:318 LDY #0
    case 0xC123FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:318 LDY #0
    // Overlapping static entry reached from 0xC123FC.
    case 0xC123FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:319 TAX
    case 0xC123FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:320 STX @LOCAL03
    case 0xC12400: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:321 LDX @VIRTUAL02
    case 0xC12402: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:322 LDA a:menu_option::text_x,X
    case 0xC12404: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:323 LDX @LOCAL03
    case 0xC12407: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:324 JSL MOVE_CURSOR
    case 0xC12409: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/selection_menu-jp.asm:325 STA @LOCAL07
    case 0xC1240D: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:326 JMP @UNKNOWN39
    case 0xC1240F: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:328 LDA PAD_HELD
    case 0xC12412: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu-jp.asm:329 AND #PAD::UP
    case 0xC12415: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/selection_menu-jp.asm:329 AND #PAD::UP
    // Overlapping static entry reached from 0xC12415.
    case 0xC12417: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:330 BEQ @UNKNOWN19
    case 0xC12418: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu-jp.asm:331 LDA #0
    case 0xC1241A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1241A.
    case 0xC1241C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:332 STA @LOCAL00
    case 0xC1241D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:333 LDA #SFX::CURSOR3
    case 0xC1241F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu-jp.asm:333 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC1241F.
    case 0xC12421: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:334 STA @LOCAL00+2
    case 0xC12422: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:335 LDY #.LOWORD(-1)
    case 0xC12424: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:335 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12424.
    case 0xC12426: cpu.execute_instruction<0xFF>(0xBD02A6, 4); return true;
    // src/text/selection_menu-jp.asm:336 LDX @VIRTUAL02
    case 0xC12427: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    case 0xC12429: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC12426.
    case 0xC1242A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC1242A.
    case 0xC1242B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:338 TAX
    case 0xC1242C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:339 STX @LOCAL07
    case 0xC1242D: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:340 LDX @VIRTUAL02
    case 0xC1242F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:341 LDA a:menu_option::text_x,X
    case 0xC12431: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:342 LDX @LOCAL07
    case 0xC12434: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:343 JSL UNKNOWN_C20B65
    case 0xC12436: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/selection_menu-jp.asm:344 STA @LOCAL07
    case 0xC1243A: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:345 JMP @UNKNOWN39
    case 0xC1243C: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:347 LDA PAD_HELD
    case 0xC1243F: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu-jp.asm:348 AND #PAD::LEFT
    case 0xC12442: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/selection_menu-jp.asm:348 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12442.
    case 0xC12444: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:349 BEQ @UNKNOWN20
    case 0xC12445: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu-jp.asm:350 LDA #.LOWORD(-1)
    case 0xC12447: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:350 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12447.
    case 0xC12449: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/selection_menu-jp.asm:351 STA @LOCAL00
    case 0xC1244A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    case 0xC1244C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12449.
    case 0xC1244D: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1244C.
    case 0xC1244E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:353 STA @LOCAL00+2
    case 0xC1244F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:354 LDY #0
    case 0xC12451: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:354 LDY #0
    // Overlapping static entry reached from 0xC12451.
    case 0xC12453: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:355 LDX @VIRTUAL02
    case 0xC12454: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:356 LDA a:menu_option::text_y,X
    case 0xC12456: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:357 TAX
    case 0xC12459: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:358 STX @LOCAL07
    case 0xC1245A: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:359 LDX @VIRTUAL02
    case 0xC1245C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:360 LDA a:menu_option::text_x,X
    case 0xC1245E: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:361 LDX @LOCAL07
    case 0xC12461: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:362 JSL UNKNOWN_C20B65
    case 0xC12463: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/selection_menu-jp.asm:363 STA @LOCAL07
    case 0xC12467: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:364 JMP @UNKNOWN39
    case 0xC12469: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:366 LDA PAD_HELD
    case 0xC1246C: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu-jp.asm:367 AND #PAD::DOWN
    case 0xC1246F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/selection_menu-jp.asm:367 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1246F.
    case 0xC12471: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:368 BEQ @UNKNOWN21
    case 0xC12472: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu-jp.asm:368 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC12471.
    case 0xC12473: cpu.execute_instruction<0x25>(0x0000A9, 2); return true;
    // src/text/selection_menu-jp.asm:369 LDA #0
    case 0xC12474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:369 LDA #0
    // Overlapping static entry reached from 0xC12473.
    case 0xC12475: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:369 LDA #0
    // Overlapping static entry reached from 0xC12474.
    case 0xC12476: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:370 STA @LOCAL00
    case 0xC12477: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:371 LDA #SFX::CURSOR3
    case 0xC12479: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu-jp.asm:371 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12479.
    case 0xC1247B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:372 STA @LOCAL00+2
    case 0xC1247C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:373 LDY #1
    case 0xC1247E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:373 LDY #1
    // Overlapping static entry reached from 0xC1247E.
    case 0xC12480: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:374 LDX @VIRTUAL02
    case 0xC12481: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:375 LDA a:menu_option::text_y,X
    case 0xC12483: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:376 TAX
    case 0xC12486: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:377 STX @LOCAL07
    case 0xC12487: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:378 LDX @VIRTUAL02
    case 0xC12489: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:379 LDA a:menu_option::text_x,X
    case 0xC1248B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:380 LDX @LOCAL07
    case 0xC1248E: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:381 JSL UNKNOWN_C20B65
    case 0xC12490: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/selection_menu-jp.asm:382 STA @LOCAL07
    case 0xC12494: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:383 JMP @UNKNOWN39
    case 0xC12496: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:385 LDA PAD_HELD
    case 0xC12499: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu-jp.asm:386 AND #PAD::RIGHT
    case 0xC1249C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/selection_menu-jp.asm:386 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1249C.
    case 0xC1249E: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/selection_menu-jp.asm:387 BEQ @UNKNOWN22
    case 0xC1249F: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu-jp.asm:387 BEQ @UNKNOWN22
    // Overlapping static entry reached from 0xC1249E.
    case 0xC124A0: cpu.execute_instruction<0x25>(0x0000A9, 2); return true;
    // src/text/selection_menu-jp.asm:388 LDA #1
    case 0xC124A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:388 LDA #1
    // Overlapping static entry reached from 0xC124A0.
    case 0xC124A2: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:388 LDA #1
    // Overlapping static entry reached from 0xC124A1.
    case 0xC124A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:389 STA @LOCAL00
    case 0xC124A4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu-jp.asm:390 LDA #SFX::CURSOR2
    case 0xC124A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:390 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC124A6.
    case 0xC124A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:391 STA @LOCAL00+2
    case 0xC124A9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:392 LDY #0
    case 0xC124AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:392 LDY #0
    // Overlapping static entry reached from 0xC124AB.
    case 0xC124AD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:393 LDX @VIRTUAL02
    case 0xC124AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:394 LDA a:menu_option::text_y,X
    case 0xC124B0: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:395 TAX
    case 0xC124B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:396 STX @LOCAL03
    case 0xC124B4: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:397 LDX @VIRTUAL02
    case 0xC124B6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:398 LDA a:menu_option::text_x,X
    case 0xC124B8: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:399 LDX @LOCAL03
    case 0xC124BB: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/selection_menu-jp.asm:400 JSL UNKNOWN_C20B65
    case 0xC124BD: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/selection_menu-jp.asm:401 STA @LOCAL07
    case 0xC124C1: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:402 JMP @UNKNOWN39
    case 0xC124C3: cpu.execute_instruction<0x4C>(0x0025E0, 3); return true;
    // src/text/selection_menu-jp.asm:404 LDA PAD_PRESS
    case 0xC124C6: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:405 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC124C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/selection_menu-jp.asm:405 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC124C9.
    case 0xC124CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu-jp.asm:406 BEQL @UNKNOWN33
    case 0xC124CC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:406 BEQL @UNKNOWN33
    case 0xC124CE: cpu.execute_instruction<0x4C>(0x002593, 3); return true;
    // src/text/selection_menu-jp.asm:407 JSR SET_INSTANT_PRINTING
    case 0xC124D1: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/text/selection_menu-jp.asm:408 LDX @VIRTUAL02
    case 0xC124D4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:409 LDA a:menu_option::page,X
    case 0xC124D6: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/selection_menu-jp.asm:410 BEQ @UNKNOWN30
    case 0xC124D9: cpu.execute_instruction<0xF0>(0x000072, 2); return true;
    // src/text/selection_menu-jp.asm:411 LDX @VIRTUAL02
    case 0xC124DB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:412 LDA a:menu_option::sound_effect,X
    case 0xC124DD: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/selection_menu-jp.asm:413 AND #$00FF
    case 0xC124E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu-jp.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC124E0.
    case 0xC124E2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:414 JSL PLAY_SOUND
    case 0xC124E3: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/selection_menu-jp.asm:415 LDX @VIRTUAL02
    case 0xC124E7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:416 LDA a:menu_option::text_y,X
    case 0xC124E9: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:417 TAX
    case 0xC124EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:418 STX @LOCAL07
    case 0xC124ED: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:419 LDX @VIRTUAL02
    case 0xC124EF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:420 LDA a:menu_option::text_x,X
    case 0xC124F1: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:421 LDX @LOCAL07
    case 0xC124F4: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:422 JSR UNKNOWN_C438A5
    case 0xC124F6: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/selection_menu-jp.asm:423 LDA #47
    case 0xC124F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/selection_menu-jp.asm:423 LDA #47
    // Overlapping static entry reached from 0xC124F9.
    case 0xC124FB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:424 JSR UNKNOWN_C10D60
    case 0xC124FC: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/text/selection_menu-jp.asm:425 LDA #6
    case 0xC124FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/selection_menu-jp.asm:425 LDA #6
    // Overlapping static entry reached from 0xC124FF.
    case 0xC12501: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:426 JSR UNKNOWN_C10FEA
    case 0xC12502: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/selection_menu-jp.asm:427 LDA @VIRTUAL02
    case 0xC12505: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:428 CLC
    case 0xC12507: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:429 ADC #menu_option::label
    case 0xC12508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/selection_menu-jp.asm:429 ADC #menu_option::label
    // Overlapping static entry reached from 0xC12508.
    case 0xC1250A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12510: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12511: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12513: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/selection_menu-jp.asm:431 REP #PROC_FLAGS::ACCUM8
    case 0xC12515: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12517: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12519: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1251B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1251D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu-jp.asm:433 LDA #.LOWORD(-1)
    case 0xC1251F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:433 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1251F.
    case 0xC12521: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/text/selection_menu-jp.asm:434 JSR PRINT_STRING
    case 0xC12522: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/selection_menu-jp.asm:435 LDA #0
    case 0xC12525: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:435 LDA #0
    // Overlapping static entry reached from 0xC12525.
    case 0xC12527: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:436 JSR UNKNOWN_C10FEA
    case 0xC12528: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/selection_menu-jp.asm:437 JSR CLEAR_INSTANT_PRINTING
    case 0xC1252B: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/selection_menu-jp.asm:438 LDA @LOCAL08
    case 0xC1252E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:439 LDY #window_stats::selected_option
    case 0xC12530: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/text/selection_menu-jp.asm:439 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC12530.
    case 0xC12532: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/text/selection_menu-jp.asm:440 STA (@LOCAL0A),Y
    case 0xC12533: cpu.execute_instruction<0x91>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:441 LDX @VIRTUAL02
    case 0xC12535: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:442 LDA a:menu_option::unknown0,X
    case 0xC12537: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:443 CMP #1
    case 0xC1253A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:443 CMP #1
    // Overlapping static entry reached from 0xC1253A.
    case 0xC1253C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu-jp.asm:444 BNE @UNKNOWN29
    case 0xC1253D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:445 LDA @LOCAL08
    case 0xC1253F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:446 INC
    case 0xC12541: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:447 JMP @UNKNOWN44
    case 0xC12542: cpu.execute_instruction<0x4C>(0x002679, 3); return true;
    // src/text/selection_menu-jp.asm:449 LDX @VIRTUAL02
    case 0xC12545: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:450 LDA a:menu_option::userdata,X
    case 0xC12547: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/text/selection_menu-jp.asm:451 JMP @UNKNOWN44
    case 0xC1254A: cpu.execute_instruction<0x4C>(0x002679, 3); return true;
    // src/text/selection_menu-jp.asm:453 LDA #SFX::CURSOR2
    case 0xC1254D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:453 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1254D.
    case 0xC1254F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:454 JSL PLAY_SOUND
    case 0xC12550: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/selection_menu-jp.asm:455 JSR UNKNOWN_C10FA3
    case 0xC12554: cpu.execute_instruction<0x20>(0x00155D, 3); return true;
    // src/text/selection_menu-jp.asm:456 LDA @LOCAL0A
    case 0xC12557: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:457 CLC
    case 0xC12559: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:458 ADC #window_stats::menu_page_number
    case 0xC1255A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x000033, 3); return true;
    // src/text/selection_menu-jp.asm:458 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC1255A.
    case 0xC1255C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:459 TAX
    case 0xC1255D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:460 STX @LOCAL05
    case 0xC1255E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:461 LDA __BSS_START__,X
    case 0xC12560: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:462 STA @LOCAL09
    case 0xC12563: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:463 LDX @VIRTUAL02
    case 0xC12565: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:464 LDA a:menu_option::previous,X
    case 0xC12567: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12570: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12571: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12573: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12574: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:466 TAX
    case 0xC12575: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:467 LDA @LOCAL09
    case 0xC12576: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:468 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC12578: cpu.execute_instruction<0xDD>(0x008D18, 3); return true;
    // src/text/selection_menu-jp.asm:469 BNE @UNKNOWN31
    case 0xC1257B: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/text/selection_menu-jp.asm:470 LDA #1
    case 0xC1257D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:470 LDA #1
    // Overlapping static entry reached from 0xC1257D.
    case 0xC1257F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu-jp.asm:471 LDX @LOCAL05
    case 0xC12580: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:472 STA __BSS_START__,X
    case 0xC12582: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:473 BRA @UNKNOWN32
    case 0xC12585: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/selection_menu-jp.asm:475 INC
    case 0xC12587: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:476 LDX @LOCAL05
    case 0xC12588: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/selection_menu-jp.asm:477 STA __BSS_START__,X
    case 0xC1258A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:479 JSR PRINT_MENU_ITEMS
    case 0xC1258D: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/text/selection_menu-jp.asm:480 JMP @UNKNOWN5
    case 0xC12590: cpu.execute_instruction<0x4C>(0x0021CE, 3); return true;
    // src/text/selection_menu-jp.asm:482 LDA PAD_PRESS
    case 0xC12593: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu-jp.asm:483 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12596: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/selection_menu-jp.asm:483 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12596.
    case 0xC12598: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0014F0, 3); return true;
    // src/text/selection_menu-jp.asm:484 BEQ @UNKNOWN34
    case 0xC12599: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/text/selection_menu-jp.asm:484 BEQ @UNKNOWN34
    // Overlapping static entry reached from 0xC12598.
    case 0xC1259A: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/text/selection_menu-jp.asm:485 LDA @LOCAL0C
    case 0xC1259B: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/selection_menu-jp.asm:485 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1259A.
    case 0xC1259C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:486 CMP #1
    case 0xC1259D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu-jp.asm:486 CMP #1
    // Overlapping static entry reached from 0xC1259D.
    case 0xC1259F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu-jp.asm:487 BNE @UNKNOWN34
    case 0xC125A0: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/selection_menu-jp.asm:488 LDA #SFX::CURSOR2
    case 0xC125A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:488 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC125A2.
    case 0xC125A4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:489 JSL PLAY_SOUND
    case 0xC125A5: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/selection_menu-jp.asm:490 LDA #0
    case 0xC125A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:490 LDA #0
    // Overlapping static entry reached from 0xC125A9.
    case 0xC125AB: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/selection_menu-jp.asm:491 JMP @UNKNOWN44
    case 0xC125AC: cpu.execute_instruction<0x4C>(0x002679, 3); return true;
    // src/text/selection_menu-jp.asm:493 INC @LOCAL09
    case 0xC125AF: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:494 LDA OPEN_WINDOW_TABLE
    case 0xC125B1: cpu.execute_instruction<0xAD>(0x008C26, 3); return true;
    // src/text/selection_menu-jp.asm:495 CMP WINDOW_TAIL
    case 0xC125B4: cpu.execute_instruction<0xCD>(0x008C24, 3); return true;
    // src/text/selection_menu-jp.asm:496 BNE @UNKNOWN36
    case 0xC125B7: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/text/selection_menu-jp.asm:497 LDA @LOCAL09
    case 0xC125B9: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:498 CMP #60
    case 0xC125BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00003C, 2); else cpu.execute_instruction<0xC9>(0x00003C, 3); return true;
    // src/text/selection_menu-jp.asm:498 CMP #60
    // Overlapping static entry reached from 0xC125BB.
    case 0xC125BD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/selection_menu-jp.asm:499 BLTEQ @UNKNOWN36
    case 0xC125BE: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/selection_menu-jp.asm:499 BLTEQ @UNKNOWN36
    case 0xC125C0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/selection_menu-jp.asm:500 JSR UNKNOWN_C1134B
    case 0xC125C2: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/text/selection_menu-jp.asm:502 LDA #0
    case 0xC125C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:502 LDA #0
    // Overlapping static entry reached from 0xC125C5.
    case 0xC125C7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:503 JSR SET_WINDOW_FOCUS
    case 0xC125C8: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/text/selection_menu-jp.asm:504 JMP @UNKNOWN5
    case 0xC125CB: cpu.execute_instruction<0x4C>(0x0021CE, 3); return true;
    // src/text/selection_menu-jp.asm:506 LDX @LOCAL04
    case 0xC125CE: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:507 INX
    case 0xC125D0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:508 STX @LOCAL04
    case 0xC125D1: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:510 CPX #10
    case 0xC125D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000A, 2); else cpu.execute_instruction<0xE0>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:510 CPX #10
    // Overlapping static entry reached from 0xC125D3.
    case 0xC125D5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125D6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125D8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125DA: cpu.execute_instruction<0x4C>(0x00232D, 3); return true;
    // src/text/selection_menu-jp.asm:512 JMP @UNKNOWN13
    case 0xC125DD: cpu.execute_instruction<0x4C>(0x0022A5, 3); return true;
    // src/text/selection_menu-jp.asm:514 CMP #.LOWORD(-1)
    case 0xC125E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu-jp.asm:514 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC125E0.
    case 0xC125E2: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    case 0xC125E3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    case 0xC125E5: cpu.execute_instruction<0x4C>(0x0021CE, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC125E2.
    case 0xC125E6: cpu.execute_instruction<0xCE>(0x00A021, 3); return true;
    // src/text/selection_menu-jp.asm:516 LDY #0
    case 0xC125E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu-jp.asm:516 LDY #0
    // Overlapping static entry reached from 0xC125E6.
    case 0xC125E9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu-jp.asm:516 LDY #0
    // Overlapping static entry reached from 0xC125E8.
    case 0xC125EA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/selection_menu-jp.asm:517 STY @LOCAL04
    case 0xC125EB: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:518 LDY #window_stats::current_option
    case 0xC125ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu-jp.asm:518 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC125ED.
    case 0xC125EF: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:519 LDA (@LOCAL0A),Y
    case 0xC125F0: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:521 CLC
    case 0xC125FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:522 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC125FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/selection_menu-jp.asm:522 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC125FE.
    case 0xC12600: cpu.execute_instruction<0x8D>(0x002285, 3); return true;
    // src/text/selection_menu-jp.asm:523 STA @LOCAL09
    case 0xC12601: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:524 LDA @LOCAL07
    case 0xC12603: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:525 AND #$00FF
    case 0xC12605: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu-jp.asm:525 AND #$00FF
    // Overlapping static entry reached from 0xC12605.
    case 0xC12607: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu-jp.asm:526 TAX
    case 0xC12608: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:527 LDA @LOCAL07
    case 0xC12609: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:528 AND #$FF00
    case 0xC1260B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/selection_menu-jp.asm:528 AND #$FF00
    // Overlapping static entry reached from 0xC1260B.
    case 0xC1260D: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/selection_menu-jp.asm:529 XBA
    case 0xC1260E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:530 AND #$00FF
    case 0xC1260F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu-jp.asm:530 AND #$00FF
    // Overlapping static entry reached from 0xC1260F.
    case 0xC12611: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu-jp.asm:531 STA @LOCAL07
    case 0xC12612: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:532 BRA @UNKNOWN42
    case 0xC12614: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/selection_menu-jp.asm:534 LDY @LOCAL04
    case 0xC12616: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:535 INY
    case 0xC12618: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:536 STY @LOCAL04
    case 0xC12619: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:537 LDY #menu_option::next
    case 0xC1261B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/selection_menu-jp.asm:537 LDY #menu_option::next
    // Overlapping static entry reached from 0xC1261B.
    case 0xC1261D: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:538 LDA (@LOCAL09),Y
    case 0xC1261E: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12620: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12622: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12623: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12624: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12626: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12627: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12629: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1262A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:540 CLC
    case 0xC1262B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:541 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1262C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/selection_menu-jp.asm:541 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1262C.
    case 0xC1262E: cpu.execute_instruction<0x8D>(0x002285, 3); return true;
    // src/text/selection_menu-jp.asm:542 STA @LOCAL09
    case 0xC1262F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:544 LDY #menu_option::text_x
    case 0xC12631: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:544 LDY #menu_option::text_x
    // Overlapping static entry reached from 0xC12631.
    case 0xC12633: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/selection_menu-jp.asm:545 TXA
    case 0xC12634: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:546 CMP (@LOCAL09),Y
    case 0xC12635: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:547 BNE @UNKNOWN41
    case 0xC12637: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/text/selection_menu-jp.asm:548 LDY #menu_option::text_y
    case 0xC12639: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:548 LDY #menu_option::text_y
    // Overlapping static entry reached from 0xC12639.
    case 0xC1263B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/selection_menu-jp.asm:549 LDA @LOCAL07
    case 0xC1263C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:550 CMP (@LOCAL09),Y
    case 0xC1263E: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:551 BNE @UNKNOWN41
    case 0xC12640: cpu.execute_instruction<0xD0>(0x0000D4, 2); return true;
    // src/text/selection_menu-jp.asm:552 LDY #menu_option::page
    case 0xC12642: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/selection_menu-jp.asm:552 LDY #menu_option::page
    // Overlapping static entry reached from 0xC12642.
    case 0xC12644: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu-jp.asm:553 LDA (@LOCAL09),Y
    case 0xC12645: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:554 STA @VIRTUAL04
    case 0xC12647: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:555 LDY #window_stats::menu_page_number
    case 0xC12649: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000033, 2); else cpu.execute_instruction<0xA0>(0x000033, 3); return true;
    // src/text/selection_menu-jp.asm:555 LDY #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC12649.
    case 0xC1264B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/selection_menu-jp.asm:556 LDA @VIRTUAL04
    case 0xC1264C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:557 CMP (@LOCAL0A),Y
    case 0xC1264E: cpu.execute_instruction<0xD1>(0x000024, 2); return true;
    // src/text/selection_menu-jp.asm:558 BEQ @UNKNOWN43
    case 0xC12650: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:559 LDA @VIRTUAL04
    case 0xC12652: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu-jp.asm:560 BNE @UNKNOWN41
    case 0xC12654: cpu.execute_instruction<0xD0>(0x0000C0, 2); return true;
    // src/text/selection_menu-jp.asm:562 LDX @VIRTUAL02
    case 0xC12656: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:563 LDA a:menu_option::text_y,X
    case 0xC12658: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu-jp.asm:564 TAX
    case 0xC1265B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu-jp.asm:565 STX @LOCAL07
    case 0xC1265C: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:566 LDX @VIRTUAL02
    case 0xC1265E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:567 LDA a:menu_option::text_x,X
    case 0xC12660: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu-jp.asm:568 LDX @LOCAL07
    case 0xC12663: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu-jp.asm:569 JSR UNKNOWN_C438A5
    case 0xC12665: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/selection_menu-jp.asm:570 LDA #47
    case 0xC12668: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/selection_menu-jp.asm:570 LDA #47
    // Overlapping static entry reached from 0xC12668.
    case 0xC1266A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:571 JSR UNKNOWN_C10D60
    case 0xC1266B: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/text/selection_menu-jp.asm:572 LDY @LOCAL04
    case 0xC1266E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/text/selection_menu-jp.asm:573 STY @LOCAL08
    case 0xC12670: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/text/selection_menu-jp.asm:574 LDA @LOCAL09
    case 0xC12672: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu-jp.asm:575 STA @VIRTUAL02
    case 0xC12674: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu-jp.asm:576 JMP @UNKNOWN5
    case 0xC12676: cpu.execute_instruction<0x4C>(0x0021CE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu-jp.asm:578 END_C_FUNCTION
    case 0xC12679: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/selection_menu-jp.asm:578 END_C_FUNCTION
    case 0xC1267A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/selection_menu_redirect.asm (source_named).
bool execute_text_selection_menu_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/selection_menu_redirect.asm:6 JSR SELECTION_MENU
    case 0xC1DBF0: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/selection_menu_redirect.asm:7 END_C_FUNCTION
    case 0xC1DBF3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/selection_menu_setup-jp.asm (source_named).
bool execute_text_selection_menu_setup_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu_setup-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBB5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DBBA.
    case 0xC1DBBC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu_setup-jp.asm:12 STA @LOCAL02
    case 0xC1DBBF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/selection_menu_setup-jp.asm:12 STA @LOCAL02
    // Overlapping static entry reached from 0xC1DBBC.
    case 0xC1DBC0: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC1: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DBC0.
    case 0xC1DBC2: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC5: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBC9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCD: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu_setup-jp.asm:17 LDA @LOCAL02
    case 0xC1DBE1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/selection_menu_setup-jp.asm:18 JSR UNKNOWN_C1153B
    case 0xC1DBE3: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu_setup-jp.asm:19 END_C_FUNCTION
    case 0xC1DBE6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/selection_menu_setup-jp.asm:19 END_C_FUNCTION
    case 0xC1DBE7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_argument_memory.asm (source_named).
bool execute_text_set_argument_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_argument_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1068C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC1068E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC1068F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC10690: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10690.
    case 0xC10692: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC10693: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10694: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10696: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10698: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1069A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_argument_memory.asm:9 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1069C: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/set_argument_memory.asm:10 CLC
    case 0xC1069F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_argument_memory.asm:11 ADC #window_stats::argument_memory
    case 0xC106A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/set_argument_memory.asm:11 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC106A0.
    case 0xC106A2: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/set_argument_memory.asm:12 TAY
    case 0xC106A3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC166C7.
    case 0xC106A5: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106A6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC14BFC.
    case 0xC106A7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106AB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC106AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC106B0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC106B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC106B4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_argument_memory.asm:15 END_C_FUNCTION
    case 0xC106B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_argument_memory.asm:15 END_C_FUNCTION
    case 0xC106B7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_event_flag.asm (source_named).
bool execute_text_set_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21506: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21508: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21509: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2150B.
    case 0xC2150D: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:12 TXY
    case 0xC21510: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:13 STY @LOCAL02
    case 0xC21511: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_event_flag.asm:14 TAX
    case 0xC21513: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:15 DEC
    case 0xC21514: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:16 STA @LOCAL01
    case 0xC21515: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_event_flag.asm:17 LSR
    case 0xC21517: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:18 LSR
    case 0xC21518: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:19 LSR
    case 0xC21519: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:20 CLC
    case 0xC2151A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    case 0xC2151B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x009EB3, 3); return true;
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xC2151B.
    case 0xC2151D: cpu.execute_instruction<0x9E>(0x0086AA, 3); return true;
    // src/text/set_event_flag.asm:22 TAX
    case 0xC2151E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    case 0xC2151F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    // Overlapping static entry reached from 0xC2151D.
    case 0xC21520: cpu.execute_instruction<0x0E>(0x0008A0, 3); return true;
    // src/text/set_event_flag.asm:24 LDY #8
    case 0xC21521: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/set_event_flag.asm:24 LDY #8
    // Overlapping static entry reached from 0xC21521.
    case 0xC21523: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/set_event_flag.asm:25 LDA @LOCAL01
    case 0xC21524: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/set_event_flag.asm:26 JSL MODULUS16
    case 0xC21526: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/text/set_event_flag.asm:27 TAX
    case 0xC2152A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2152B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_event_flag.asm:29 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC2152D: cpu.execute_instruction<0xBF>(0xC43425, 4); return true;
    // src/text/set_event_flag.asm:30 LDY @LOCAL02
    case 0xC21531: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_event_flag.asm:31 BEQ @UNKNOWN0
    case 0xC21533: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/set_event_flag.asm:32 STA @VIRTUAL00
    case 0xC21535: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:33 LDX @LOCAL00
    case 0xC21537: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    case 0xC21539: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:35 ORA @VIRTUAL00
    case 0xC2153C: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:36 BRA @UNKNOWN1
    case 0xC2153E: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/set_event_flag.asm:38 EOR #$00FF
    case 0xC21540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    case 0xC21542: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC21540.
    case 0xC21543: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/set_event_flag.asm:40 LDX @LOCAL00
    case 0xC21544: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    case 0xC21546: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC215C0.
    case 0xC21547: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:42 AND @VIRTUAL00
    case 0xC21549: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:44 STA __BSS_START__,X
    case 0xC2154B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC2154E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_event_flag.asm:46 AND #$00FF
    case 0xC21550: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_event_flag.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC21550.
    case 0xC21552: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC21553: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC21554: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_hppp_window_mode_item.asm (source_named).
bool execute_text_set_hppp_window_mode_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_hppp_window_mode_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC19B4B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19B50.
    case 0xC19B52: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B53: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B54: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    case 0xC19B55: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B52.
    case 0xC19B56: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:15 STA @LOCAL03
    case 0xC19B57: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:15 STA @LOCAL03
    // Overlapping static entry reached from 0xC19B56.
    case 0xC19B58: cpu.execute_instruction<0x14>(0x0000A0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    case 0xC19B59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B58.
    case 0xC19B5A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B59.
    case 0xC19B5B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:18 STY @LOCAL02
    case 0xC19B5C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:19 JMP @UNKNOWN17
    case 0xC19B5E: cpu.execute_instruction<0x4C>(0x009CD3, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:22 LDA @LOCAL03
    case 0xC19B61: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:23 STA @VIRTUAL04
    case 0xC19B63: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:25 LDX @VIRTUAL04
    case 0xC19B65: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:26 TYA
    case 0xC19B67: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:27 INC
    case 0xC19B68: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:28 JSL UNKNOWN_C3EE14
    case 0xC19B69: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    case 0xC19B6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    // Overlapping static entry reached from 0xC19B6D.
    case 0xC19B6F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:30 BNE @UNKNOWN1
    case 0xC19B70: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    case 0xC19B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    // Overlapping static entry reached from 0xC19B72.
    case 0xC19B74: cpu.execute_instruction<0x0C>(0x001085, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:32 STA @LOCAL01
    case 0xC19B75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:33 JMP @UNKNOWN16
    case 0xC19B77: cpu.execute_instruction<0x4C>(0x009CBE, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:35 LDA @VIRTUAL04
    case 0xC19B7A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:36 JSR GET_ITEM_TYPE
    case 0xC19B7C: cpu.execute_instruction<0x20>(0x009EE3, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    case 0xC19B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    // Overlapping static entry reached from 0xC19B7F.
    case 0xC19B81: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:38 BEQ @UNKNOWN2
    case 0xC19B82: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    case 0xC19B84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    // Overlapping static entry reached from 0xC19B84.
    case 0xC19B86: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    case 0xC19B87: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    // Overlapping static entry reached from 0xC19B86.
    case 0xC19B88: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    case 0xC19B89: cpu.execute_instruction<0x4C>(0x009CBE, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    // Overlapping static entry reached from 0xC19B88.
    case 0xC19B8A: cpu.execute_instruction<0xBE>(0x00A59C, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    case 0xC19B8C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B8A.
    case 0xC19B8D: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19B8D.
    case 0xC19B8F: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B91: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:45 CLC
    case 0xC19B96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    case 0xC19B97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    // Overlapping static entry reached from 0xC19B97.
    case 0xC19B99: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:47 TAX
    case 0xC19B9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:48 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19B9B: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    case 0xC19B9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC19B9F.
    case 0xC19BA1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    case 0xC19BA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    // Overlapping static entry reached from 0xC19BA2.
    case 0xC19BA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:51 BEQ @UNKNOWN3
    case 0xC19BA5: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    case 0xC19BA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    // Overlapping static entry reached from 0xC19BA7.
    case 0xC19BA9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:53 BEQ @UNKNOWN4
    case 0xC19BAA: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    case 0xC19BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    // Overlapping static entry reached from 0xC19BAC.
    case 0xC19BAE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:55 BEQ @UNKNOWN5
    case 0xC19BAF: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    case 0xC19BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    // Overlapping static entry reached from 0xC19BB1.
    case 0xC19BB3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:57 BEQ @UNKNOWN6
    case 0xC19BB4: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:58 BRA @UNKNOWN7
    case 0xC19BB6: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:60 LDY @LOCAL02
    case 0xC19BB8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:61 TYA
    case 0xC19BBA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    case 0xC19BBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BBB.
    case 0xC19BBD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:63 JSL MULT168
    case 0xC19BBE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:64 TAX
    case 0xC19BC2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:65 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19BC3: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    case 0xC19BC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC19BC6.
    case 0xC19BC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:67 STA @VIRTUAL02
    case 0xC19BC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:68 STA @LOCAL00
    case 0xC19BCB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:69 BRA @UNKNOWN7
    case 0xC19BCD: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:71 LDY @LOCAL02
    case 0xC19BCF: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:72 TYA
    case 0xC19BD1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC19BD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BD2.
    case 0xC19BD4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    case 0xC19BD5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    // Overlapping static entry reached from 0xC19B88.
    case 0xC19BD6: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:75 TAX
    case 0xC19BD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC19BDA: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    case 0xC19BDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC19BDD.
    case 0xC19BDF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:78 STA @VIRTUAL02
    case 0xC19BE0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:79 STA @LOCAL00
    case 0xC19BE2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:80 BRA @UNKNOWN7
    case 0xC19BE4: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:82 LDY @LOCAL02
    case 0xC19BE6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:83 TYA
    case 0xC19BE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    case 0xC19BE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BE9.
    case 0xC19BEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:85 JSL MULT168
    case 0xC19BEC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:86 TAX
    case 0xC19BF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:87 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC19BF1: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    case 0xC19BF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC19BF4.
    case 0xC19BF6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:89 STA @VIRTUAL02
    case 0xC19BF7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:90 STA @LOCAL00
    case 0xC19BF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:91 BRA @UNKNOWN7
    case 0xC19BFB: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:93 LDY @LOCAL02
    case 0xC19BFD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:94 TYA
    case 0xC19BFF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC19C00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C00.
    case 0xC19C02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:96 JSL MULT168
    case 0xC19C03: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:97 TAX
    case 0xC19C07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:98 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC19C08: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    case 0xC19C0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC19C0B.
    case 0xC19C0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:100 STA @VIRTUAL02
    case 0xC19C0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:101 STA @LOCAL00
    case 0xC19C10: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:103 LDA @LOCAL00
    case 0xC19C12: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:104 STA @VIRTUAL02
    case 0xC19C14: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:105 BEQ @UNKNOWN9
    case 0xC19C16: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    case 0xC19C18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    // Overlapping static entry reached from 0xC19C18.
    case 0xC19C1A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:107 STX @LOCAL01
    case 0xC19C1B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:108 LDY @LOCAL02
    case 0xC19C1D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    case 0xC19C1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    // Overlapping static entry reached from 0xC19C1F.
    case 0xC19C21: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:110 BNE @UNKNOWN8
    case 0xC19C22: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    case 0xC19C24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    // Overlapping static entry reached from 0xC19C24.
    case 0xC19C26: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:112 STX @LOCAL01
    case 0xC19C27: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:114 LDA @VIRTUAL02
    case 0xC19C29: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:115 DEC
    case 0xC19C2B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:117 STA @VIRTUAL04
    case 0xC19C2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:121 TYA
    case 0xC19C2E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    case 0xC19C2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C2F.
    case 0xC19C31: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:123 JSL MULT168
    case 0xC19C32: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:124 CLC
    case 0xC19C36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19C37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19C37.
    case 0xC19C39: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:126 CLC
    case 0xC19C3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:128 ADC @VIRTUAL04
    case 0xC19C3B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:128 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC19C39.
    case 0xC19C3C: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:132 TAX
    case 0xC19C3D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:133 LDA __BSS_START__,X
    case 0xC19C3E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    case 0xC19C41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC19C41.
    case 0xC19C43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C47: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:136 LDX @LOCAL01
    case 0xC19C4C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:137 STX @VIRTUAL02
    case 0xC19C4E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:138 CLC
    case 0xC19C50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:139 ADC @VIRTUAL02
    case 0xC19C51: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:140 CLC
    case 0xC19C53: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    case 0xC19C54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C54.
    case 0xC19C56: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:142 TAX
    case 0xC19C57: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:144 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C5A: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC19C5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:146 SEC
    case 0xC19C60: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    case 0xC19C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC19C61.
    case 0xC19C63: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    case 0xC19C64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    // Overlapping static entry reached from 0xC19C64.
    case 0xC19C66: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    case 0xC19C67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    // Overlapping static entry reached from 0xC19C67.
    case 0xC19C69: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:150 BRA @UNKNOWN10
    case 0xC19C6A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    case 0xC19C6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C69.
    case 0xC19C6D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C6C.
    case 0xC19C6E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    case 0xC19C6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    // Overlapping static entry reached from 0xC19C6F.
    case 0xC19C71: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:155 LDY @LOCAL02
    case 0xC19C72: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    case 0xC19C74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    // Overlapping static entry reached from 0xC19C74.
    case 0xC19C76: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:157 BNE @UNKNOWN11
    case 0xC19C77: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    case 0xC19C79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    // Overlapping static entry reached from 0xC19C79.
    case 0xC19C7B: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:160 PHA
    case 0xC19C7C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:161 STX @VIRTUAL02
    case 0xC19C7D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:163 LDA @LOCAL03
    case 0xC19C7F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:164 STA @VIRTUAL04
    case 0xC19C81: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C83: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C86: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:169 CLC
    case 0xC19C8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:170 ADC @VIRTUAL02
    case 0xC19C8C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:171 CLC
    case 0xC19C8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    case 0xC19C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C8F.
    case 0xC19C91: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:173 TAX
    case 0xC19C92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:175 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C95: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC19C99: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:177 SEC
    case 0xC19C9B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    case 0xC19C9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC19C9C.
    case 0xC19C9E: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    case 0xC19C9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    // Overlapping static entry reached from 0xC19C9F.
    case 0xC19CA1: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    case 0xC19CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    // Overlapping static entry reached from 0xC19CA2.
    case 0xC19CA4: cpu.execute_instruction<0xFF>(0x02847A, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:181 PLY
    case 0xC19CA5: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:182 STY @VIRTUAL02
    case 0xC19CA6: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:183 CLC
    case 0xC19CA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:184 SBC @VIRTUAL02
    case 0xC19CA9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CB1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    case 0xC19CB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    // Overlapping static entry reached from 0xC19CB3.
    case 0xC19CB5: cpu.execute_instruction<0x14>(0x000080, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    case 0xC19CB6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    // Overlapping static entry reached from 0xC19CB5.
    case 0xC19CB7: cpu.execute_instruction<0x03>(0x0000A2, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    case 0xC19CB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB7.
    case 0xC19CB9: cpu.execute_instruction<0x00>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB8.
    case 0xC19CBA: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:191 TXA
    case 0xC19CBB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:192 STA @LOCAL01
    case 0xC19CBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:194 LDY @LOCAL02
    case 0xC19CBE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:195 TYA
    case 0xC19CC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    case 0xC19CC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CC1.
    case 0xC19CC3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:197 JSL MULT168
    case 0xC19CC4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:198 TAX
    case 0xC19CC8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:199 LDA @LOCAL01
    case 0xC19CC9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:200 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CCB: cpu.execute_instruction<0x9D>(0x009CCD, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:201 LDY @LOCAL02
    case 0xC19CCE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:202 INY
    case 0xC19CD0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:203 STY @LOCAL02
    case 0xC19CD1: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    case 0xC19CD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19CD3.
    case 0xC19CD5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CDA: cpu.execute_instruction<0x4C>(0x009B61, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    case 0xC19CDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    // Overlapping static entry reached from 0xC19CDD.
    case 0xC19CDF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:208 STA REDRAW_ALL_WINDOWS
    case 0xC19CE0: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CE3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CE4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_instant_printing.asm (source_named).
bool execute_text_set_instant_printing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_instant_printing.asm:4 BEGIN_C_FUNCTION
    case 0xC100F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_instant_printing.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC100F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_instant_printing.asm:9 LDA #1
    case 0xC100FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    case 0xC100FD: cpu.execute_instruction<0x8D>(0x00991A, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100FB.
    case 0xC100FE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100FE.
    case 0xC100FF: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/text/set_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC10100: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_instant_printing.asm:12 END_C_FUNCTION
    case 0xC10102: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_secondary_memory.asm (source_named).
bool execute_text_set_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10646: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10648: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10649: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1064A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1064B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1064B.
    case 0xC1064D: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1064E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1064F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:9 TAY
    case 0xC10650: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:10 STY @LOCAL00
    case 0xC10651: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/set_secondary_memory.asm:11 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10653: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/set_secondary_memory.asm:12 TAX
    case 0xC10656: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:13 LDY @LOCAL00
    case 0xC10657: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/set_secondary_memory.asm:14 TYA
    case 0xC10659: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:15 STA a:window_stats::secondary_memory,X
    case 0xC1065A: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/text/set_secondary_memory.asm:16 TYA
    case 0xC1065D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_secondary_memory.asm:17 END_C_FUNCTION
    case 0xC1065E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_secondary_memory.asm:17 END_C_FUNCTION
    case 0xC1065F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_text_sound_mode.asm (source_named).
bool execute_text_set_text_sound_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_text_sound_mode.asm:3 BEGIN_C_FUNCTION
    case 0xC10044: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_text_sound_mode.asm:6 STA TEXT_SOUND_MODE
    case 0xC10046: cpu.execute_instruction<0x8D>(0x009947, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_text_sound_mode.asm:7 END_C_FUNCTION
    case 0xC10049: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_focus.asm (source_named).
bool execute_text_set_window_focus_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_focus.asm:3 BEGIN_C_FUNCTION
    case 0xC1013B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_window_focus.asm:6 STA CURRENT_FOCUS_WINDOW
    case 0xC1013D: cpu.execute_instruction<0x8D>(0x008C96, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_window_focus.asm:7 END_C_FUNCTION
    case 0xC10140: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_focus_redirect.asm (source_named).
bool execute_text_set_window_focus_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_focus_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB2A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_window_focus_redirect.asm:6 JSR SET_WINDOW_FOCUS
    case 0xC1DB2C: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_window_focus_redirect.asm:7 END_C_FUNCTION
    case 0xC1DB2F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_title.asm (source_named).
bool execute_text_set_window_title_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_title.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2030C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2030E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2030F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20310: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20311: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20311.
    case 0xC20313: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20314: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20315: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    case 0xC20316: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20313.
    case 0xC20317: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/set_window_title.asm:11 STA @VIRTUAL04
    case 0xC20318: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2031A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2031C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2031E: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC20320: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_window_title.asm:13 LDA @VIRTUAL04
    case 0xC20322: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_window_title.asm:14 ASL
    case 0xC20324: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/set_window_title.asm:15 TAX
    case 0xC20325: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_window_title.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC20326: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC20329: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20329.
    case 0xC2032B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_window_title.asm:18 JSL MULT168
    case 0xC2032C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/set_window_title.asm:19 CLC
    case 0xC20330: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    case 0xC20331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x0089FE, 3); return true;
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    // Overlapping static entry reached from 0xC20331.
    case 0xC20333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0080A8, 3); return true;
    // src/text/set_window_title.asm:21 TAY
    case 0xC20334: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/set_window_title.asm:22 BRA @UNKNOWN1
    case 0xC20335: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/set_window_title.asm:22 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC20333.
    case 0xC20336: cpu.execute_instruction<0x0C>(0x0020E2, 3); return true;
    // src/text/set_window_title.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20337: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:25 LDA @LOCAL00
    case 0xC20339: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/set_window_title.asm:26 STA __BSS_START__,Y
    case 0xC2033B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/set_window_title.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2033E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:28 INC @VIRTUAL06
    case 0xC20340: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/set_window_title.asm:29 INY
    case 0xC20342: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/set_window_title.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC20343: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:32 LDA [@VIRTUAL06]
    case 0xC20345: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/set_window_title.asm:33 STA @LOCAL00
    case 0xC20347: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_window_title.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20349: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:35 AND #$00FF
    case 0xC2034B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_window_title.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2034B.
    case 0xC2034D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_window_title.asm:36 BEQ @UNKNOWN2
    case 0xC2034E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/set_window_title.asm:37 LDX @VIRTUAL02
    case 0xC20350: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/set_window_title.asm:38 LDA @VIRTUAL02
    case 0xC20352: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/set_window_title.asm:39 DEC
    case 0xC20354: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_window_title.asm:40 STA @VIRTUAL02
    case 0xC20355: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_window_title.asm:41 CPX #0
    case 0xC20357: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/set_window_title.asm:41 CPX #0
    // Overlapping static entry reached from 0xC20357.
    case 0xC20359: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_window_title.asm:42 BNE @UNKNOWN0
    case 0xC2035A: cpu.execute_instruction<0xD0>(0x0000DB, 2); return true;
    // src/text/set_window_title.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC2035C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:45 LDA #0
    case 0xC2035E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009900, 3); return true;
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    case 0xC20360: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2035E.
    case 0xC20361: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_window_title.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC20363: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:48 LDA @VIRTUAL04
    case 0xC20365: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_window_title.asm:49 JSR UNKNOWN_C202AC
    case 0xC20367: cpu.execute_instruction<0x20>(0x000247, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC2036A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC2036B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_working_memory.asm (source_named).
bool execute_text_set_working_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_working_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10660: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10662: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10663: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10664: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10664.
    case 0xC10666: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10667: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10668: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_working_memory.asm:9 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10670: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/set_working_memory.asm:10 CLC
    case 0xC10673: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    case 0xC10674: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10674.
    case 0xC10676: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/set_working_memory.asm:12 TAY
    case 0xC10677: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10678: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10682: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10684: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC1BF2F.
    case 0xC10685: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10686: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC10685.
    case 0xC10687: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10688: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC1068A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC1068B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/show_hppp_windows.asm (source_named).
bool execute_text_show_hppp_windows_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10E5A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/show_hppp_windows.asm:5 JSR UNKNOWN_C3E6F8
    case 0xC10E5C: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/text/show_hppp_windows.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E5F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/show_hppp_windows.asm:7 LDA #1
    case 0xC10E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    case 0xC10E63: cpu.execute_instruction<0x8D>(0x008D07, 3); return true;
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC10E61.
    case 0xC10E64: cpu.execute_instruction<0x07>(0x00008D, 2); return true;
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    case 0xC10E66: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/text/show_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10E69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    case 0xC10E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10E6B.
    case 0xC10E6D: cpu.execute_instruction<0xFF>(0x993F8D, 4); return true;
    // src/text/show_hppp_windows.asm:12 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC10E6E: cpu.execute_instruction<0x8D>(0x00993F, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/show_hppp_windows.asm:13 END_C_FUNCTION
    case 0xC10E71: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/show_hppp_windows_redirect.asm (source_named).
bool execute_text_show_hppp_windows_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB18: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/show_hppp_windows_redirect.asm:5 JSR SHOW_HPPP_WINDOWS
    case 0xC1DB1A: cpu.execute_instruction<0x20>(0x000E5A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/show_hppp_windows_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB1D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/skippable_pause.asm (source_named).
bool execute_text_skippable_pause_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/skippable_pause.asm:3 BEGIN_C_FUNCTION
    case 0xC4983F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49841: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49842: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49843: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49844: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49844.
    case 0xC49846: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49847: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49848: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    case 0xC49849: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC49846.
    case 0xC4984A: cpu.execute_instruction<0x0E>(0x001380, 3); return true;
    // src/text/skippable_pause.asm:10 BRA @UNKNOWN2
    case 0xC4984B: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/skippable_pause.asm:12 LDA PAD_PRESS
    case 0xC4984D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/skippable_pause.asm:13 BEQ @UNKNOWN1
    case 0xC49850: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    case 0xC49852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49852.
    case 0xC49854: cpu.execute_instruction<0xFF>(0x220E80, 4); return true;
    // src/text/skippable_pause.asm:15 BRA @UNKNOWN3
    case 0xC49855: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49857: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC49854.
    case 0xC49858: cpu.execute_instruction<0x4C>(0x00C087, 3); return true;
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    case 0xC4985B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:19 DEC
    case 0xC4985D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    case 0xC4985E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:22 BNE @UNKNOWN0
    case 0xC49860: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/text/skippable_pause.asm:23 LDA #0
    case 0xC49862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/skippable_pause.asm:23 LDA #0
    // Overlapping static entry reached from 0xC49862.
    case 0xC49864: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC49865: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC49866: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/spawn_floating_sprite.asm (source_named).
bool execute_text_spawn_floating_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/spawn_floating_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4883D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4883F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48840: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48841: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48842: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC48842.
    case 0xC48844: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48845: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC48846: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:12 TXY
    case 0xC48847: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:13 STA @VIRTUAL02
    case 0xC48848: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    case 0xC4884A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4884A.
    case 0xC4884C: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4884D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4884F: cpu.execute_instruction<0x4C>(0x008929, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4884C.
    case 0xC48850: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000089, 2); else cpu.execute_instruction<0x29>(0x00A589, 3); return true;
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    case 0xC48852: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC48850.
    case 0xC48853: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/text/spawn_floating_sprite.asm:17 ASL
    case 0xC48854: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:18 TAX
    case 0xC48855: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:19 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC48856: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    case 0xC48859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48859.
    case 0xC4885B: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4885C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4885E: cpu.execute_instruction<0x4C>(0x008929, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4885B.
    case 0xC4885F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000089, 2); else cpu.execute_instruction<0x29>(0x00BD89, 3); return true;
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    case 0xC48861: cpu.execute_instruction<0xBD>(0x002F6C, 3); return true;
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    // Overlapping static entry reached from 0xC4885F.
    case 0xC48862: cpu.execute_instruction<0x6C>(0x00852F, 3); return true;
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    case 0xC48864: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC48866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000D34, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC48866.
    case 0xC48868: cpu.execute_instruction<0x0D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC48869: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4886B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4886B.
    case 0xC4886D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4886E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/spawn_floating_sprite.asm:25 TYA
    case 0xC48870: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48871: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48873: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48874: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC48875: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:27 CLC
    case 0xC48877: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:28 ADC @VIRTUAL06
    case 0xC48878: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:29 STA @VIRTUAL06
    case 0xC4887A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:30 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4887C: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/text/spawn_floating_sprite.asm:31 STA ACTIVE_MANPU_X
    case 0xC4887F: cpu.execute_instruction<0x8D>(0x00B5CD, 3); return true;
    // src/text/spawn_floating_sprite.asm:32 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48882: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/text/spawn_floating_sprite.asm:33 STA ACTIVE_MANPU_Y
    case 0xC48885: cpu.execute_instruction<0x8D>(0x00B5CF, 3); return true;
    // src/text/spawn_floating_sprite.asm:34 LDA @LOCAL03
    case 0xC48888: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/spawn_floating_sprite.asm:35 TAX
    case 0xC4888A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4888B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    case 0xC4888D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    // Overlapping static entry reached from 0xC4888D.
    case 0xC4888F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:38 LDA [@VIRTUAL06],Y
    case 0xC48890: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC48892: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    case 0xC48894: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC48894.
    case 0xC48896: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:41 JSR UNKNOWN_C4B329
    case 0xC48897: cpu.execute_instruction<0x20>(0x008796, 3); return true;
    // src/text/spawn_floating_sprite.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC4889A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    case 0xC4889C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4889C.
    case 0xC4889E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:44 LDA [@VIRTUAL06],Y
    case 0xC4889F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC488A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    case 0xC488A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC488A3.
    case 0xC488A5: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    case 0xC488A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    // Overlapping static entry reached from 0xC488A6.
    case 0xC488A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/spawn_floating_sprite.asm:48 BEQ @UNKNOWN2
    case 0xC488A9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    case 0xC488AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00FF00, 3); return true;
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    // Overlapping static entry reached from 0xC488AB.
    case 0xC488AD: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/text/spawn_floating_sprite.asm:50 BRA @UNKNOWN3
    case 0xC488AE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    case 0xC488B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC488AD.
    case 0xC488B1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC488B0.
    case 0xC488B2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/spawn_floating_sprite.asm:54 STX @VIRTUAL04
    case 0xC488B3: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC488B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    case 0xC488B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC488B7.
    case 0xC488B9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:57 LDA [@VIRTUAL06],Y
    case 0xC488BA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC488BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    case 0xC488BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC488BE.
    case 0xC488C0: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:60 ORA @VIRTUAL04
    case 0xC488C1: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:61 CLC
    case 0xC488C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:62 ADC ACTIVE_MANPU_X
    case 0xC488C4: cpu.execute_instruction<0x6D>(0x00B5CD, 3); return true;
    // src/text/spawn_floating_sprite.asm:63 STA ACTIVE_MANPU_X
    case 0xC488C7: cpu.execute_instruction<0x8D>(0x00B5CD, 3); return true;
    // src/text/spawn_floating_sprite.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC488CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    case 0xC488CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC488CC.
    case 0xC488CE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:66 LDA [@VIRTUAL06],Y
    case 0xC488CF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC488D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    case 0xC488D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC488D3.
    case 0xC488D5: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    case 0xC488D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    // Overlapping static entry reached from 0xC488D6.
    case 0xC488D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/spawn_floating_sprite.asm:70 BEQ @UNKNOWN4
    case 0xC488D9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    case 0xC488DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00FF00, 3); return true;
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    // Overlapping static entry reached from 0xC488DB.
    case 0xC488DD: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/text/spawn_floating_sprite.asm:72 BRA @UNKNOWN5
    case 0xC488DE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    case 0xC488E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC488DD.
    case 0xC488E1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC488E0.
    case 0xC488E2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/spawn_floating_sprite.asm:76 STX @VIRTUAL04
    case 0xC488E3: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC488E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    case 0xC488E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC488E7.
    case 0xC488E9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:79 LDA [@VIRTUAL06],Y
    case 0xC488EA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC488EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    case 0xC488EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC488EE.
    case 0xC488F0: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:82 ORA @VIRTUAL04
    case 0xC488F1: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:83 CLC
    case 0xC488F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:84 ADC ACTIVE_MANPU_Y
    case 0xC488F4: cpu.execute_instruction<0x6D>(0x00B5CF, 3); return true;
    // src/text/spawn_floating_sprite.asm:85 STA @LOCAL02
    case 0xC488F7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:86 STA ACTIVE_MANPU_Y
    case 0xC488F9: cpu.execute_instruction<0x8D>(0x00B5CF, 3); return true;
    // src/text/spawn_floating_sprite.asm:87 LDA ACTIVE_MANPU_X
    case 0xC488FC: cpu.execute_instruction<0xAD>(0x00B5CD, 3); return true;
    // src/text/spawn_floating_sprite.asm:88 STA @LOCAL00
    case 0xC488FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/spawn_floating_sprite.asm:89 LDA @LOCAL02
    case 0xC48901: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:90 STA @LOCAL01
    case 0xC48903: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    case 0xC48905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48905.
    case 0xC48907: cpu.execute_instruction<0xFF>(0x0311A2, 4); return true;
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    case 0xC48908: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000011, 2); else cpu.execute_instruction<0xA2>(0x000311, 3); return true;
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    // Overlapping static entry reached from 0xC48908.
    case 0xC4890A: cpu.execute_instruction<0x03>(0x0000A7, 2); return true;
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    case 0xC4890B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    // Overlapping static entry reached from 0xC4890A.
    case 0xC4890C: cpu.execute_instruction<0x06>(0x000022, 2); return true;
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    case 0xC4890D: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4890C.
    case 0xC4890E: cpu.execute_instruction<0x5F>(0x0AC01E, 4); return true;
    // src/text/spawn_floating_sprite.asm:95 ASL
    case 0xC48911: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:96 TAX
    case 0xC48912: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:97 STX @LOCAL02
    case 0xC48913: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:98 LDA @VIRTUAL02
    case 0xC48915: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    case 0xC48917: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    // Overlapping static entry reached from 0xC48917.
    case 0xC48919: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00349D, 3); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    case 0xC4891A: cpu.execute_instruction<0x9D>(0x001034, 3); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC48919.
    case 0xC4891B: cpu.execute_instruction<0x34>(0x000010, 2); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC48919.
    case 0xC4891C: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    case 0xC4891D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4891C.
    case 0xC4891E: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/text/spawn_floating_sprite.asm:102 ASL
    case 0xC4891F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:103 TAX
    case 0xC48920: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:104 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC48921: cpu.execute_instruction<0xBD>(0x002FA8, 3); return true;
    // src/text/spawn_floating_sprite.asm:105 LDX @LOCAL02
    case 0xC48924: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:106 STA ENTITY_SURFACE_FLAGS,X
    case 0xC48926: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC48929: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4892A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/text_input_dialog-jp.asm (source_named).
bool execute_text_text_input_dialog_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/text_input_dialog-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1E498: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E49D.
    case 0xC1E49F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E4A0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E4A1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:26 STY @LOCAL0D
    case 0xC1E4A2: cpu.execute_instruction<0x84>(0x00002A, 2); return true;
    // src/text/text_input_dialog-jp.asm:26 STY @LOCAL0D
    // Overlapping static entry reached from 0xC1E49F.
    case 0xC1E4A3: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:27 STX @LOCAL0C
    case 0xC1E4A4: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/text/text_input_dialog-jp.asm:28 STA @LOCAL0B
    case 0xC1E4A6: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:29 LDX @PARAM04
    case 0xC1E4A8: cpu.execute_instruction<0xA6>(0x00003C, 2); return true;
    // src/text/text_input_dialog-jp.asm:30 STX @LOCAL0A
    case 0xC1E4AA: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:31 LDY @PARAM03
    case 0xC1E4AC: cpu.execute_instruction<0xA4>(0x00003A, 2); return true;
    // src/text/text_input_dialog-jp.asm:32 TYX
    case 0xC1E4AE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:33 STX @LOCAL09
    case 0xC1E4AF: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:34 LDA #.LOWORD(-1)
    case 0xC1E4B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E4B1.
    case 0xC1E4B3: cpu.execute_instruction<0xFF>(0xA92085, 4); return true;
    // src/text/text_input_dialog-jp.asm:35 STA @LOCAL08
    case 0xC1E4B4: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    case 0xC1E4B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1E4B3.
    case 0xC1E4B7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1E4B6.
    case 0xC1E4B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:37 STA @VIRTUAL04
    case 0xC1E4B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:38 STA @LOCAL07
    case 0xC1E4BB: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:40 JSR SET_INSTANT_PRINTING
    case 0xC1E4BD: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E4C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E4C0.
    case 0xC1E4C2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E4C3: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/text/text_input_dialog-jp.asm:42 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E4C6: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/text_input_dialog-jp.asm:43 ASL
    case 0xC1E4C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:44 TAX
    case 0xC1E4CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:45 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E4CB: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E4CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E4CE.
    case 0xC1E4D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E4D1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/text_input_dialog-jp.asm:47 CLC
    case 0xC1E4D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:48 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E4D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/text_input_dialog-jp.asm:48 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E4D6.
    case 0xC1E4D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x001C85, 3); return true;
    // src/text/text_input_dialog-jp.asm:49 STA @LOCAL06
    case 0xC1E4D9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:49 STA @LOCAL06
    // Overlapping static entry reached from 0xC1E4D8.
    case 0xC1E4DA: cpu.execute_instruction<0x1C>(0x0024A5, 3); return true;
    // src/text/text_input_dialog-jp.asm:50 LDA @LOCAL0A
    case 0xC1E4DB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:51 CMP #.LOWORD(-1)
    case 0xC1E4DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E4DD.
    case 0xC1E4DF: cpu.execute_instruction<0xFF>(0xA932D0, 4); return true;
    // src/text/text_input_dialog-jp.asm:52 BNE @UNKNOWN2
    case 0xC1E4E0: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x00E264, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4DF.
    case 0xC1E4E3: cpu.execute_instruction<0x64>(0x0000E2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E2.
    case 0xC1E4E4: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E4.
    case 0xC1E4E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E7.
    case 0xC1E4E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4EA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog-jp.asm:54 LDX @LOCAL09
    case 0xC1E4EC: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:55 TXA
    case 0xC1E4EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E4EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E4F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:57 CLC
    case 0xC1E4F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:58 ADC #4 * 3
    case 0xC1E4F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/text/text_input_dialog-jp.asm:58 ADC #4 * 3
    // Overlapping static entry reached from 0xC1E4F2.
    case 0xC1E4F4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:59 CLC
    case 0xC1E4F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:60 ADC @VIRTUAL0A
    case 0xC1E4F6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog-jp.asm:61 STA @VIRTUAL0A
    case 0xC1E4F8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E4FA.
    case 0xC1E4FC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FD: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E500: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E502: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E504: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E506: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E508: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E50A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E50C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:64 JSL DISPLAY_TEXT
    case 0xC1E50E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/text/text_input_dialog-jp.asm:65 BRA @UNKNOWN3
    case 0xC1E512: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x00E264, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E514.
    case 0xC1E516: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E517: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E516.
    case 0xC1E518: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E519: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E519.
    case 0xC1E51B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E51C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog-jp.asm:68 LDX @LOCAL09
    case 0xC1E51E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:69 TXA
    case 0xC1E520: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E521: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E522: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:71 CLC
    case 0xC1E523: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:72 ADC @VIRTUAL0A
    case 0xC1E524: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog-jp.asm:73 STA @VIRTUAL0A
    case 0xC1E526: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E528: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E528.
    case 0xC1E52A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E530: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E532: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E534: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E536: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E538: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E53A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:76 JSL DISPLAY_TEXT
    case 0xC1E53C: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/text/text_input_dialog-jp.asm:78 LDX #3
    case 0xC1E540: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/text/text_input_dialog-jp.asm:78 LDX #3
    // Overlapping static entry reached from 0xC1E540.
    case 0xC1E542: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/text_input_dialog-jp.asm:79 LDA #25
    case 0xC1E543: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/text/text_input_dialog-jp.asm:79 LDA #25
    // Overlapping static entry reached from 0xC1E543.
    case 0xC1E545: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:80 JSR UNKNOWN_C438A5
    case 0xC1E546: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/text_input_dialog-jp.asm:81 LDA #$001A
    case 0xC1E549: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/text/text_input_dialog-jp.asm:81 LDA #$001A
    // Overlapping static entry reached from 0xC1E549.
    case 0xC1E54B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:82 JSR PRINT_LETTER
    case 0xC1E54C: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/text_input_dialog-jp.asm:83 LDX #4
    case 0xC1E54F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/text/text_input_dialog-jp.asm:83 LDX #4
    // Overlapping static entry reached from 0xC1E54F.
    case 0xC1E551: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/text_input_dialog-jp.asm:84 LDA #25
    case 0xC1E552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/text/text_input_dialog-jp.asm:84 LDA #25
    // Overlapping static entry reached from 0xC1E552.
    case 0xC1E554: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:85 JSR UNKNOWN_C438A5
    case 0xC1E555: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/text_input_dialog-jp.asm:86 LDA #$001B
    case 0xC1E558: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/text/text_input_dialog-jp.asm:86 LDA #$001B
    // Overlapping static entry reached from 0xC1E558.
    case 0xC1E55A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:87 JSR PRINT_LETTER
    case 0xC1E55B: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/text_input_dialog-jp.asm:89 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E55E: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/text_input_dialog-jp.asm:90 LDX @VIRTUAL04
    case 0xC1E561: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:91 LDA @LOCAL07
    case 0xC1E563: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:92 JSR UNKNOWN_C438A5
    case 0xC1E565: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/text_input_dialog-jp.asm:93 LDA #1
    case 0xC1E568: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:93 LDA #1
    // Overlapping static entry reached from 0xC1E568.
    case 0xC1E56A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:94 JSR UNKNOWN_C10FEA
    case 0xC1E56B: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/text_input_dialog-jp.asm:95 LDA #33
    case 0xC1E56E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/text/text_input_dialog-jp.asm:95 LDA #33
    // Overlapping static entry reached from 0xC1E56E.
    case 0xC1E570: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:96 JSR UNKNOWN_C10D60
    case 0xC1E571: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/text/text_input_dialog-jp.asm:97 LDA #0
    case 0xC1E574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:97 LDA #0
    // Overlapping static entry reached from 0xC1E574.
    case 0xC1E576: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:98 JSR UNKNOWN_C10FEA
    case 0xC1E577: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/text_input_dialog-jp.asm:99 JSL WINDOW_TICK
    case 0xC1E57A: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/text_input_dialog-jp.asm:100 LDA #1
    case 0xC1E57E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:100 LDA #1
    // Overlapping static entry reached from 0xC1E57E.
    case 0xC1E580: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:101 STA @LOCAL05
    case 0xC1E581: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/text_input_dialog-jp.asm:103 LDA @LOCAL05
    case 0xC1E583: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/text_input_dialog-jp.asm:104 EOR #$0001
    case 0xC1E585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:104 EOR #$0001
    // Overlapping static entry reached from 0xC1E585.
    case 0xC1E587: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:105 STA @LOCAL05
    case 0xC1E588: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/text_input_dialog-jp.asm:106 LDY #window_stats::text_y
    case 0xC1E58A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/text/text_input_dialog-jp.asm:106 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC1E58A.
    case 0xC1E58C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog-jp.asm:107 LDA (@LOCAL06),Y
    case 0xC1E58D: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:108 ASL
    case 0xC1E58F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:109 LDY #window_stats::window_y
    case 0xC1E590: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/text_input_dialog-jp.asm:109 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC1E590.
    case 0xC1E592: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:110 CLC
    case 0xC1E593: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:111 ADC (@LOCAL06),Y
    case 0xC1E594: cpu.execute_instruction<0x71>(0x00001C, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E596: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E597: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E598: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E599: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E59A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:113 STA @VIRTUAL02
    case 0xC1E59B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/text_input_dialog-jp.asm:114 LDY #window_stats::window_x
    case 0xC1E59D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/text_input_dialog-jp.asm:114 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC1E59D.
    case 0xC1E59F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog-jp.asm:115 LDA (@LOCAL06),Y
    case 0xC1E5A0: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:116 LDY #window_stats::text_x
    case 0xC1E5A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/text/text_input_dialog-jp.asm:116 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC1E5A2.
    case 0xC1E5A4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:117 CLC
    case 0xC1E5A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:118 ADC (@LOCAL06),Y
    case 0xC1E5A6: cpu.execute_instruction<0x71>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:119 CLC
    case 0xC1E5A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:120 ADC @VIRTUAL02
    case 0xC1E5A9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/text_input_dialog-jp.asm:121 CLC
    case 0xC1E5AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:122 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1E5AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/text_input_dialog-jp.asm:122 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1E5AC.
    case 0xC1E5AE: cpu.execute_instruction<0x7C>(0x002285, 3); return true;
    // src/text/text_input_dialog-jp.asm:123 STA @LOCAL09
    case 0xC1E5AF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:124 LDA @LOCAL05
    case 0xC1E5B1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/text_input_dialog-jp.asm:125 ASL
    case 0xC1E5B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:126 STA @VIRTUAL02
    case 0xC1E5B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x00E3E8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B6.
    case 0xC1E5B8: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B8.
    case 0xC1E5BA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BA.
    case 0xC1E5BC: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BB.
    case 0xC1E5BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5BE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/text_input_dialog-jp.asm:128 LDA @VIRTUAL02
    case 0xC1E5C0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/text_input_dialog-jp.asm:129 CLC
    case 0xC1E5C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:130 ADC @VIRTUAL06
    case 0xC1E5C3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/text_input_dialog-jp.asm:131 STA @VIRTUAL06
    case 0xC1E5C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/text_input_dialog-jp.asm:132 STA @LOCAL00
    case 0xC1E5C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:133 LDA @VIRTUAL06+2
    case 0xC1E5C9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/text_input_dialog-jp.asm:134 STA @LOCAL00+2
    case 0xC1E5CB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:135 LDY @LOCAL09
    case 0xC1E5CD: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:136 LDX #2
    case 0xC1E5CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/text_input_dialog-jp.asm:136 LDX #2
    // Overlapping static entry reached from 0xC1E5CF.
    case 0xC1E5D1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/text_input_dialog-jp.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:138 LDA #0
    case 0xC1E5D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    case 0xC1E5D6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5D4.
    case 0xC1E5D7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5D7.
    case 0xC1E5D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00ECA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x00E3EC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5D9.
    case 0xC1E5DB: cpu.execute_instruction<0xEC>(0x0085E3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DA.
    case 0xC1E5DC: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DC.
    case 0xC1E5DE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DE.
    case 0xC1E5E0: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DF.
    case 0xC1E5E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5E2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/text_input_dialog-jp.asm:142 LDA @VIRTUAL02
    case 0xC1E5E4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/text_input_dialog-jp.asm:143 CLC
    case 0xC1E5E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:144 ADC @VIRTUAL06
    case 0xC1E5E7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/text_input_dialog-jp.asm:145 STA @VIRTUAL06
    case 0xC1E5E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/text_input_dialog-jp.asm:146 STA @LOCAL00
    case 0xC1E5EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:147 LDA @VIRTUAL06+2
    case 0xC1E5ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/text_input_dialog-jp.asm:148 STA @LOCAL00+2
    case 0xC1E5EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:149 LDA @LOCAL09
    case 0xC1E5F1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:150 CLC
    case 0xC1E5F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:151 ADC #32
    case 0xC1E5F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/text_input_dialog-jp.asm:151 ADC #32
    // Overlapping static entry reached from 0xC1E5F4.
    case 0xC1E5F6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/text_input_dialog-jp.asm:152 TAY
    case 0xC1E5F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:153 LDX #2
    case 0xC1E5F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/text_input_dialog-jp.asm:153 LDX #2
    // Overlapping static entry reached from 0xC1E5F8.
    case 0xC1E5FA: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/text_input_dialog-jp.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:155 LDA #0
    case 0xC1E5FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    case 0xC1E5FF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5FD.
    case 0xC1E600: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E600.
    case 0xC1E602: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    case 0xC1E603: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    // Overlapping static entry reached from 0xC1E602.
    case 0xC1E604: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    // Overlapping static entry reached from 0xC1E603.
    case 0xC1E605: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:159 STX @LOCAL04
    case 0xC1E606: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:160 JMP @UNKNOWN18_2
    case 0xC1E608: cpu.execute_instruction<0x4C>(0x00E84F, 3); return true;
    // src/text/text_input_dialog-jp.asm:162 JSL UNKNOWN_C1004E
    case 0xC1E60B: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/text/text_input_dialog-jp.asm:163 LDA PAD_PRESS
    case 0xC1E60F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:164 AND #PAD::UP
    case 0xC1E612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/text_input_dialog-jp.asm:164 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E612.
    case 0xC1E614: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:165 BEQ @UNKNOWN2_
    case 0xC1E615: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/text/text_input_dialog-jp.asm:166 LDA #0
    case 0xC1E617: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:166 LDA #0
    // Overlapping static entry reached from 0xC1E617.
    case 0xC1E619: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:167 STA @LOCAL00
    case 0xC1E61A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:168 LDA #$007C
    case 0xC1E61C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog-jp.asm:168 LDA #$007C
    // Overlapping static entry reached from 0xC1E61C.
    case 0xC1E61E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:169 STA @LOCAL00+2
    case 0xC1E61F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:170 LDA @LOCAL07
    case 0xC1E621: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:171 STA @LOCAL01
    case 0xC1E623: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog-jp.asm:172 LDY #window_stats::height
    case 0xC1E625: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/text_input_dialog-jp.asm:172 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1E625.
    case 0xC1E627: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog-jp.asm:173 LDA (@LOCAL06),Y
    case 0xC1E628: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:174 LSR
    case 0xC1E62A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:175 STA @LOCAL02
    case 0xC1E62B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog-jp.asm:176 LDY #.LOWORD(-1)
    case 0xC1E62D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:176 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E62D.
    case 0xC1E62F: cpu.execute_instruction<0xFF>(0xA504A6, 4); return true;
    // src/text/text_input_dialog-jp.asm:177 LDX @VIRTUAL04
    case 0xC1E630: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:178 LDA @LOCAL07
    case 0xC1E632: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:178 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E62F.
    case 0xC1E633: cpu.execute_instruction<0x1E>(0x008622, 3); return true;
    // src/text/text_input_dialog-jp.asm:179 JSL MOVE_CURSOR
    case 0xC1E634: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/text_input_dialog-jp.asm:179 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E633.
    case 0xC1E636: cpu.execute_instruction<0x20>(0x00A8C1, 3); return true;
    // src/text/text_input_dialog-jp.asm:180 TAY
    case 0xC1E638: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:181 STY @LOCAL03
    case 0xC1E639: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:182 JMP @UNKNOWN19
    case 0xC1E63B: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:184 LDA PAD_PRESS
    case 0xC1E63E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:185 AND #PAD::LEFT
    case 0xC1E641: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/text_input_dialog-jp.asm:185 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E641.
    case 0xC1E643: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:186 BEQ @UNKNOWN3_
    case 0xC1E644: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:187 LDA #.LOWORD(-1)
    case 0xC1E646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:187 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E646.
    case 0xC1E648: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/text_input_dialog-jp.asm:188 STA @LOCAL00
    case 0xC1E649: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    case 0xC1E64B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    // Overlapping static entry reached from 0xC1E648.
    case 0xC1E64C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    // Overlapping static entry reached from 0xC1E64B.
    case 0xC1E64D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:190 STA @LOCAL00+2
    case 0xC1E64E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:191 LDY #window_stats::width
    case 0xC1E650: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/text_input_dialog-jp.asm:191 LDY #window_stats::width
    // Overlapping static entry reached from 0xC1E650.
    case 0xC1E652: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog-jp.asm:192 LDA (@LOCAL06),Y
    case 0xC1E653: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog-jp.asm:193 STA @LOCAL01
    case 0xC1E655: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog-jp.asm:194 LDA @VIRTUAL04
    case 0xC1E657: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:195 STA @LOCAL02
    case 0xC1E659: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog-jp.asm:196 LDY #0
    case 0xC1E65B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:196 LDY #0
    // Overlapping static entry reached from 0xC1E65B.
    case 0xC1E65D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:197 LDX @VIRTUAL04
    case 0xC1E65E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:198 LDA @LOCAL07
    case 0xC1E660: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:199 JSL MOVE_CURSOR
    case 0xC1E662: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/text_input_dialog-jp.asm:200 TAY
    case 0xC1E666: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:201 STY @LOCAL03
    case 0xC1E667: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:202 JMP @UNKNOWN19
    case 0xC1E669: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:204 LDA PAD_PRESS
    case 0xC1E66C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:205 AND #PAD::DOWN
    case 0xC1E66F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/text_input_dialog-jp.asm:205 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E66F.
    case 0xC1E671: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:206 BEQ @UNKNOWN3_2
    case 0xC1E672: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:206 BEQ @UNKNOWN3_2
    // Overlapping static entry reached from 0xC1E671.
    case 0xC1E673: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    case 0xC1E674: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC1E673.
    case 0xC1E675: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC1E674.
    case 0xC1E676: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:208 STA @LOCAL00
    case 0xC1E677: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:209 LDA #$007C
    case 0xC1E679: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog-jp.asm:209 LDA #$007C
    // Overlapping static entry reached from 0xC1E679.
    case 0xC1E67B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:210 STA @LOCAL00+2
    case 0xC1E67C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:211 LDA @LOCAL07
    case 0xC1E67E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:212 STA @LOCAL01
    case 0xC1E680: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog-jp.asm:213 LDA #.LOWORD(-1)
    case 0xC1E682: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:213 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E682.
    case 0xC1E684: cpu.execute_instruction<0xFF>(0xA01485, 4); return true;
    // src/text/text_input_dialog-jp.asm:214 STA @LOCAL02
    case 0xC1E685: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    case 0xC1E687: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    // Overlapping static entry reached from 0xC1E684.
    case 0xC1E688: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    // Overlapping static entry reached from 0xC1E687.
    case 0xC1E689: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:216 LDX @VIRTUAL04
    case 0xC1E68A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:217 LDA @LOCAL07
    case 0xC1E68C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:218 JSL MOVE_CURSOR
    case 0xC1E68E: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/text_input_dialog-jp.asm:219 TAY
    case 0xC1E692: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:220 STY @LOCAL03
    case 0xC1E693: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:221 JMP @UNKNOWN19
    case 0xC1E695: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:223 LDA PAD_PRESS
    case 0xC1E698: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:224 AND #PAD::RIGHT
    case 0xC1E69B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/text_input_dialog-jp.asm:224 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E69B.
    case 0xC1E69D: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:225 BEQ @UNKNOWN3_3
    case 0xC1E69E: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:225 BEQ @UNKNOWN3_3
    // Overlapping static entry reached from 0xC1E69D.
    case 0xC1E69F: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    case 0xC1E6A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    // Overlapping static entry reached from 0xC1E69F.
    case 0xC1E6A1: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    // Overlapping static entry reached from 0xC1E6A0.
    case 0xC1E6A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:227 STA @LOCAL00
    case 0xC1E6A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:228 LDA #$007B
    case 0xC1E6A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog-jp.asm:228 LDA #$007B
    // Overlapping static entry reached from 0xC1E6A5.
    case 0xC1E6A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:229 STA @LOCAL00+2
    case 0xC1E6A8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:230 LDA #.LOWORD(-1)
    case 0xC1E6AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:230 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6AA.
    case 0xC1E6AC: cpu.execute_instruction<0xFF>(0xA51285, 4); return true;
    // src/text/text_input_dialog-jp.asm:231 STA @LOCAL01
    case 0xC1E6AD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog-jp.asm:232 LDA @VIRTUAL04
    case 0xC1E6AF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:232 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E6AC.
    case 0xC1E6B0: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:233 STA @LOCAL02
    case 0xC1E6B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog-jp.asm:233 STA @LOCAL02
    // Overlapping static entry reached from 0xC1E6B0.
    case 0xC1E6B2: cpu.execute_instruction<0x14>(0x0000A0, 2); return true;
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    case 0xC1E6B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    // Overlapping static entry reached from 0xC1E6B2.
    case 0xC1E6B4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    // Overlapping static entry reached from 0xC1E6B3.
    case 0xC1E6B5: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:235 LDX @VIRTUAL04
    case 0xC1E6B6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:236 LDA @LOCAL07
    case 0xC1E6B8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:237 JSL MOVE_CURSOR
    case 0xC1E6BA: cpu.execute_instruction<0x22>(0xC12086, 4); return true;
    // src/text/text_input_dialog-jp.asm:238 TAY
    case 0xC1E6BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:239 STY @LOCAL03
    case 0xC1E6BF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:240 JMP @UNKNOWN19
    case 0xC1E6C1: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:242 LDA PAD_HELD
    case 0xC1E6C4: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog-jp.asm:243 AND #PAD::UP
    case 0xC1E6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/text_input_dialog-jp.asm:243 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E6C7.
    case 0xC1E6C9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:244 BEQ @UNKNOWN4
    case 0xC1E6CA: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog-jp.asm:245 LDA #0
    case 0xC1E6CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:245 LDA #0
    // Overlapping static entry reached from 0xC1E6CC.
    case 0xC1E6CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:246 STA @LOCAL00
    case 0xC1E6CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:247 LDA #$007C
    case 0xC1E6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog-jp.asm:247 LDA #$007C
    // Overlapping static entry reached from 0xC1E6D1.
    case 0xC1E6D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:248 STA @LOCAL00+2
    case 0xC1E6D4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:249 LDY #.LOWORD(-1)
    case 0xC1E6D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:249 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6D6.
    case 0xC1E6D8: cpu.execute_instruction<0xFF>(0xA504A6, 4); return true;
    // src/text/text_input_dialog-jp.asm:250 LDX @VIRTUAL04
    case 0xC1E6D9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:251 LDA @LOCAL07
    case 0xC1E6DB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:251 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E6D8.
    case 0xC1E6DC: cpu.execute_instruction<0x1E>(0x00F622, 3); return true;
    // src/text/text_input_dialog-jp.asm:252 JSL UNKNOWN_C20B65
    case 0xC1E6DD: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/text_input_dialog-jp.asm:252 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E6DC.
    case 0xC1E6DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000C2, 2); else cpu.execute_instruction<0x09>(0x00A8C2, 3); return true;
    // src/text/text_input_dialog-jp.asm:253 TAY
    case 0xC1E6E1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:254 STY @LOCAL03
    case 0xC1E6E2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:255 JMP @UNKNOWN19
    case 0xC1E6E4: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:257 LDA PAD_HELD
    case 0xC1E6E7: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog-jp.asm:258 AND #PAD::DOWN
    case 0xC1E6EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/text_input_dialog-jp.asm:258 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E6EA.
    case 0xC1E6EC: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:259 BEQ @UNKNOWN4_2
    case 0xC1E6ED: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog-jp.asm:259 BEQ @UNKNOWN4_2
    // Overlapping static entry reached from 0xC1E6EC.
    case 0xC1E6EE: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:260 LDA #0
    case 0xC1E6EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:260 LDA #0
    // Overlapping static entry reached from 0xC1E6EF.
    case 0xC1E6F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:261 STA @LOCAL00
    case 0xC1E6F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:262 LDA #$007C
    case 0xC1E6F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog-jp.asm:262 LDA #$007C
    // Overlapping static entry reached from 0xC1E6F4.
    case 0xC1E6F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:263 STA @LOCAL00+2
    case 0xC1E6F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:264 LDY #1
    case 0xC1E6F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:264 LDY #1
    // Overlapping static entry reached from 0xC1E6F9.
    case 0xC1E6FB: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:265 LDX @VIRTUAL04
    case 0xC1E6FC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:266 LDA @LOCAL07
    case 0xC1E6FE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:267 JSL UNKNOWN_C20B65
    case 0xC1E700: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/text_input_dialog-jp.asm:268 TAY
    case 0xC1E704: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:269 STY @LOCAL03
    case 0xC1E705: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:270 JMP @UNKNOWN19
    case 0xC1E707: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:272 LDA PAD_HELD
    case 0xC1E70A: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog-jp.asm:273 AND #PAD::LEFT
    case 0xC1E70D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/text_input_dialog-jp.asm:273 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E70D.
    case 0xC1E70F: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:274 BEQ @UNKNOWN5
    case 0xC1E710: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog-jp.asm:275 LDA #.LOWORD(-1)
    case 0xC1E712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:275 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E712.
    case 0xC1E714: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/text_input_dialog-jp.asm:276 STA @LOCAL00
    case 0xC1E715: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    case 0xC1E717: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    // Overlapping static entry reached from 0xC1E714.
    case 0xC1E718: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    // Overlapping static entry reached from 0xC1E717.
    case 0xC1E719: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:278 STA @LOCAL00+2
    case 0xC1E71A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:279 LDY #0
    case 0xC1E71C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:279 LDY #0
    // Overlapping static entry reached from 0xC1E71C.
    case 0xC1E71E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:280 LDX @VIRTUAL04
    case 0xC1E71F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:281 LDA @LOCAL07
    case 0xC1E721: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:282 JSL UNKNOWN_C20B65
    case 0xC1E723: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/text_input_dialog-jp.asm:283 TAY
    case 0xC1E727: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:284 STY @LOCAL03
    case 0xC1E728: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:285 JMP @UNKNOWN19
    case 0xC1E72A: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:287 LDA PAD_HELD
    case 0xC1E72D: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog-jp.asm:288 AND #PAD::RIGHT
    case 0xC1E730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/text_input_dialog-jp.asm:288 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E730.
    case 0xC1E732: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:289 BEQ @UNKNOWN5_2
    case 0xC1E733: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog-jp.asm:289 BEQ @UNKNOWN5_2
    // Overlapping static entry reached from 0xC1E732.
    case 0xC1E734: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:290 LDA #1
    case 0xC1E735: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:290 LDA #1
    // Overlapping static entry reached from 0xC1E735.
    case 0xC1E737: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:291 STA @LOCAL00
    case 0xC1E738: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog-jp.asm:292 LDA #$007B
    case 0xC1E73A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog-jp.asm:292 LDA #$007B
    // Overlapping static entry reached from 0xC1E73A.
    case 0xC1E73C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:293 STA @LOCAL00+2
    case 0xC1E73D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog-jp.asm:294 LDY #0
    case 0xC1E73F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:294 LDY #0
    // Overlapping static entry reached from 0xC1E73F.
    case 0xC1E741: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:295 LDX @VIRTUAL04
    case 0xC1E742: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:296 LDA @LOCAL07
    case 0xC1E744: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:297 JSL UNKNOWN_C20B65
    case 0xC1E746: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/text_input_dialog-jp.asm:298 TAY
    case 0xC1E74A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:299 STY @LOCAL03
    case 0xC1E74B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:300 JMP @UNKNOWN19
    case 0xC1E74D: cpu.execute_instruction<0x4C>(0x00E866, 3); return true;
    // src/text/text_input_dialog-jp.asm:302 LDA PAD_PRESS
    case 0xC1E750: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:303 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/text_input_dialog-jp.asm:303 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E753.
    case 0xC1E755: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:304 BEQL @UNKNOWN16
    case 0xC1E756: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:304 BEQL @UNKNOWN16
    case 0xC1E758: cpu.execute_instruction<0x4C>(0x00E808, 3); return true;
    // src/text/text_input_dialog-jp.asm:305 LDA @VIRTUAL04
    case 0xC1E75B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:306 CMP #8
    case 0xC1E75D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/text_input_dialog-jp.asm:306 CMP #8
    // Overlapping static entry reached from 0xC1E75D.
    case 0xC1E75F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/text_input_dialog-jp.asm:307 BNE @UNKNOWN11
    case 0xC1E760: cpu.execute_instruction<0xD0>(0x000059, 2); return true;
    // src/text/text_input_dialog-jp.asm:308 LDA @LOCAL07
    case 0xC1E762: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:309 BEQ @UNKNOWN7
    case 0xC1E764: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/text/text_input_dialog-jp.asm:310 CMP #19
    case 0xC1E766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/text_input_dialog-jp.asm:310 CMP #19
    // Overlapping static entry reached from 0xC1E766.
    case 0xC1E768: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:311 BEQ @UNKNOWN8
    case 0xC1E769: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/text/text_input_dialog-jp.asm:312 CMP #24
    case 0xC1E76B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/text_input_dialog-jp.asm:312 CMP #24
    // Overlapping static entry reached from 0xC1E76B.
    case 0xC1E76D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:313 BEQ @UNKNOWN10
    case 0xC1E76E: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/text/text_input_dialog-jp.asm:314 JMP @UNKNOWN18
    case 0xC1E770: cpu.execute_instruction<0x4C>(0x00E84A, 3); return true;
    // src/text/text_input_dialog-jp.asm:316 LDA #SFX::TEXT_INPUT
    case 0xC1E773: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog-jp.asm:316 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E773.
    case 0xC1E775: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:317 JSL PLAY_SOUND
    case 0xC1E776: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:318 LDY @LOCAL08
    case 0xC1E77A: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:319 LDX @LOCAL0A
    case 0xC1E77C: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:320 LDA @LOCAL0B
    case 0xC1E77E: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:321 JSR UNKNOWN_C1E4BE
    case 0xC1E780: cpu.execute_instruction<0x20>(0x00E3B1, 3); return true;
    // src/text/text_input_dialog-jp.asm:322 STA @LOCAL08
    case 0xC1E783: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:323 JMP @UNKNOWN3_4
    case 0xC1E785: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:325 LDA #SFX::TEXT_INPUT
    case 0xC1E788: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog-jp.asm:325 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E788.
    case 0xC1E78A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:326 JSL PLAY_SOUND
    case 0xC1E78B: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:327 LDY #.LOWORD(-1)
    case 0xC1E78F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:327 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E78F.
    case 0xC1E791: cpu.execute_instruction<0xFF>(0xA528A6, 4); return true;
    // src/text/text_input_dialog-jp.asm:328 LDX @LOCAL0C
    case 0xC1E792: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/text/text_input_dialog-jp.asm:329 LDA @LOCAL0B
    case 0xC1E794: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:329 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC1E791.
    case 0xC1E795: cpu.execute_instruction<0x26>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:330 JSR UNKNOWN_C1E48D
    case 0xC1E796: cpu.execute_instruction<0x20>(0x00E24F, 3); return true;
    // src/text/text_input_dialog-jp.asm:330 JSR UNKNOWN_C1E48D
    // Overlapping static entry reached from 0xC1E795.
    case 0xC1E797: cpu.execute_instruction<0x4F>(0x00C9E2, 4); return true;
    // src/text/text_input_dialog-jp.asm:331 CMP #0
    case 0xC1E799: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:331 CMP #0
    // Overlapping static entry reached from 0xC1E799.
    case 0xC1E79B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:332 BEQL @UNKNOWN3_4
    case 0xC1E79C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:332 BEQL @UNKNOWN3_4
    case 0xC1E79E: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:333 LDA @LOCAL0A
    case 0xC1E7A1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:334 CMP #.LOWORD(-1)
    case 0xC1E7A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:334 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E7A3.
    case 0xC1E7A5: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    case 0xC1E7A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    case 0xC1E7A8: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E7A5.
    case 0xC1E7A9: cpu.execute_instruction<0x5E>(0x00A9E5, 3); return true;
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    case 0xC1E7AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    // Overlapping static entry reached from 0xC1E7A9.
    case 0xC1E7AC: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    // Overlapping static entry reached from 0xC1E7AB.
    case 0xC1E7AD: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/text_input_dialog-jp.asm:337 JMP @UNKNOWN48
    case 0xC1E7AE: cpu.execute_instruction<0x4C>(0x00E8F4, 3); return true;
    // src/text/text_input_dialog-jp.asm:339 LDA #SFX::UNKNOWN5E
    case 0xC1E7B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00005E, 3); return true;
    // src/text/text_input_dialog-jp.asm:339 LDA #SFX::UNKNOWN5E
    // Overlapping static entry reached from 0xC1E7B1.
    case 0xC1E7B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:340 JSL PLAY_SOUND
    case 0xC1E7B4: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:341 JMP @UNKNOWN21_
    case 0xC1E7B8: cpu.execute_instruction<0x4C>(0x00E890, 3); return true;
    // src/text/text_input_dialog-jp.asm:343 LDA #SFX::TEXT_INPUT
    case 0xC1E7BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog-jp.asm:343 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E7BB.
    case 0xC1E7BD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:344 JSL PLAY_SOUND
    case 0xC1E7BE: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:345 LDA @VIRTUAL04
    case 0xC1E7C2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:346 CMP #6
    case 0xC1E7C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/text_input_dialog-jp.asm:346 CMP #6
    // Overlapping static entry reached from 0xC1E7C4.
    case 0xC1E7C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/text_input_dialog-jp.asm:347 BNE @UNKNOWN15
    case 0xC1E7C7: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/text/text_input_dialog-jp.asm:348 LDA @LOCAL07
    case 0xC1E7C9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:349 CMP #8
    case 0xC1E7CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/text_input_dialog-jp.asm:349 CMP #8
    // Overlapping static entry reached from 0xC1E7CB.
    case 0xC1E7CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:350 BEQ @UNKNOWN12
    case 0xC1E7CE: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/text_input_dialog-jp.asm:351 CMP #14
    case 0xC1E7D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/text_input_dialog-jp.asm:351 CMP #14
    // Overlapping static entry reached from 0xC1E7D0.
    case 0xC1E7D2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:352 BEQ @UNKNOWN13
    case 0xC1E7D3: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/text_input_dialog-jp.asm:353 CMP #20
    case 0xC1E7D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/text_input_dialog-jp.asm:353 CMP #20
    // Overlapping static entry reached from 0xC1E7D5.
    case 0xC1E7D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:354 BEQ @UNKNOWN14
    case 0xC1E7D8: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/text_input_dialog-jp.asm:355 BRA @UNKNOWN18
    case 0xC1E7DA: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/text/text_input_dialog-jp.asm:357 LDX #0
    case 0xC1E7DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:357 LDX #0
    // Overlapping static entry reached from 0xC1E7DC.
    case 0xC1E7DE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:358 STX @LOCAL09
    case 0xC1E7DF: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:359 JMP @UNKNOWN1
    case 0xC1E7E1: cpu.execute_instruction<0x4C>(0x00E4BD, 3); return true;
    // src/text/text_input_dialog-jp.asm:361 LDX #1
    case 0xC1E7E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:361 LDX #1
    // Overlapping static entry reached from 0xC1E7E4.
    case 0xC1E7E6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:362 STX @LOCAL09
    case 0xC1E7E7: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:363 JMP @UNKNOWN1
    case 0xC1E7E9: cpu.execute_instruction<0x4C>(0x00E4BD, 3); return true;
    // src/text/text_input_dialog-jp.asm:365 LDX #2
    case 0xC1E7EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/text_input_dialog-jp.asm:365 LDX #2
    // Overlapping static entry reached from 0xC1E7EC.
    case 0xC1E7EE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/text_input_dialog-jp.asm:366 STX @LOCAL09
    case 0xC1E7EF: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:367 JMP @UNKNOWN1
    case 0xC1E7F1: cpu.execute_instruction<0x4C>(0x00E4BD, 3); return true;
    // src/text/text_input_dialog-jp.asm:369 LDX @VIRTUAL04
    case 0xC1E7F4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:370 LDA @LOCAL07
    case 0xC1E7F6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:371 INC
    case 0xC1E7F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:372 JSL UNKNOWN_C208B8
    case 0xC1E7F9: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/text/text_input_dialog-jp.asm:373 TAY
    case 0xC1E7FD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:374 LDX @LOCAL0C
    case 0xC1E7FE: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/text/text_input_dialog-jp.asm:375 LDA @LOCAL0B
    case 0xC1E800: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:376 JSR UNKNOWN_C1E48D
    case 0xC1E802: cpu.execute_instruction<0x20>(0x00E24F, 3); return true;
    // src/text/text_input_dialog-jp.asm:377 JMP @UNKNOWN3_4
    case 0xC1E805: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:379 LDA PAD_PRESS
    case 0xC1E808: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:380 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E80B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/text_input_dialog-jp.asm:380 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E80B.
    case 0xC1E80D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0029F0, 3); return true;
    // src/text/text_input_dialog-jp.asm:381 BEQ @UNKNOWN17_
    case 0xC1E80E: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/text/text_input_dialog-jp.asm:381 BEQ @UNKNOWN17_
    // Overlapping static entry reached from 0xC1E80D.
    case 0xC1E80F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A9, 2); else cpu.execute_instruction<0x29>(0x007DA9, 3); return true;
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    case 0xC1E810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00007D, 3); return true;
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E80F.
    case 0xC1E811: cpu.execute_instruction<0x7D>(0x002200, 3); return true;
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E810.
    case 0xC1E812: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:383 JSL PLAY_SOUND
    case 0xC1E813: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:383 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E811.
    case 0xC1E814: cpu.execute_instruction<0xBF>(0xA0C0AB, 4); return true;
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    case 0xC1E817: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E814.
    case 0xC1E818: cpu.execute_instruction<0xFF>(0x28A6FF, 4); return true;
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E817.
    case 0xC1E819: cpu.execute_instruction<0xFF>(0xA528A6, 4); return true;
    // src/text/text_input_dialog-jp.asm:385 LDX @LOCAL0C
    case 0xC1E81A: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/text/text_input_dialog-jp.asm:386 LDA @LOCAL0B
    case 0xC1E81C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:386 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC1E819.
    case 0xC1E81D: cpu.execute_instruction<0x26>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:387 JSR UNKNOWN_C1E48D
    case 0xC1E81E: cpu.execute_instruction<0x20>(0x00E24F, 3); return true;
    // src/text/text_input_dialog-jp.asm:387 JSR UNKNOWN_C1E48D
    // Overlapping static entry reached from 0xC1E81D.
    case 0xC1E81F: cpu.execute_instruction<0x4F>(0x00C9E2, 4); return true;
    // src/text/text_input_dialog-jp.asm:388 CMP #0
    case 0xC1E821: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:388 CMP #0
    // Overlapping static entry reached from 0xC1E821.
    case 0xC1E823: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:389 BEQL @UNKNOWN3_4
    case 0xC1E824: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:389 BEQL @UNKNOWN3_4
    case 0xC1E826: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:390 LDA @LOCAL0A
    case 0xC1E829: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/text_input_dialog-jp.asm:391 CMP #.LOWORD(-1)
    case 0xC1E82B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:391 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E82B.
    case 0xC1E82D: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    case 0xC1E82E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    case 0xC1E830: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E82D.
    case 0xC1E831: cpu.execute_instruction<0x5E>(0x00A9E5, 3); return true;
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    case 0xC1E833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    // Overlapping static entry reached from 0xC1E831.
    case 0xC1E834: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    // Overlapping static entry reached from 0xC1E833.
    case 0xC1E835: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/text_input_dialog-jp.asm:394 JMP @UNKNOWN48
    case 0xC1E836: cpu.execute_instruction<0x4C>(0x00E8F4, 3); return true;
    // src/text/text_input_dialog-jp.asm:396 LDA PAD_PRESS
    case 0xC1E839: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog-jp.asm:397 AND #PAD::START_BUTTON
    case 0xC1E83C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/text/text_input_dialog-jp.asm:397 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC1E83C.
    case 0xC1E83E: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/text/text_input_dialog-jp.asm:398 BEQ @UNKNOWN18
    case 0xC1E83F: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/text_input_dialog-jp.asm:398 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E83E.
    case 0xC1E840: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x007EA9, 3); return true;
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    case 0xC1E841: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E840.
    case 0xC1E842: cpu.execute_instruction<0x7E>(0x002200, 3); return true;
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E841.
    case 0xC1E843: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:400 JSL PLAY_SOUND
    case 0xC1E844: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/text_input_dialog-jp.asm:400 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E842.
    case 0xC1E845: cpu.execute_instruction<0xBF>(0x80C0AB, 4); return true;
    // src/text/text_input_dialog-jp.asm:401 BRA @UNKNOWN21_
    case 0xC1E848: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/text/text_input_dialog-jp.asm:401 BRA @UNKNOWN21_
    // Overlapping static entry reached from 0xC1E845.
    case 0xC1E849: cpu.execute_instruction<0x46>(0x0000A6, 2); return true;
    // src/text/text_input_dialog-jp.asm:403 LDX @LOCAL04
    case 0xC1E84A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:403 LDX @LOCAL04
    // Overlapping static entry reached from 0xC1E849.
    case 0xC1E84B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:404 INX
    case 0xC1E84C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:405 STX @LOCAL04
    case 0xC1E84D: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:407 STX @VIRTUAL02
    case 0xC1E84F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/text_input_dialog-jp.asm:408 LDA #10
    case 0xC1E851: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/text_input_dialog-jp.asm:408 LDA #10
    // Overlapping static entry reached from 0xC1E851.
    case 0xC1E853: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog-jp.asm:409 CLC
    case 0xC1E854: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:410 SBC @VIRTUAL02
    case 0xC1E855: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E857: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E859: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E85B: cpu.execute_instruction<0x4C>(0x00E60B, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E85E: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E860: cpu.execute_instruction<0x4C>(0x00E60B, 3); return true;
    // src/text/text_input_dialog-jp.asm:412 JMP @UNKNOWN3_5
    case 0xC1E863: cpu.execute_instruction<0x4C>(0x00E583, 3); return true;
    // src/text/text_input_dialog-jp.asm:414 LDX @VIRTUAL04
    case 0xC1E866: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:415 LDA @LOCAL07
    case 0xC1E868: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:416 JSR UNKNOWN_C438A5
    case 0xC1E86A: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/text_input_dialog-jp.asm:417 LDA #47
    case 0xC1E86D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/text_input_dialog-jp.asm:417 LDA #47
    // Overlapping static entry reached from 0xC1E86D.
    case 0xC1E86F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:418 JSR UNKNOWN_C10D60
    case 0xC1E870: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/text/text_input_dialog-jp.asm:419 LDY @LOCAL03
    case 0xC1E873: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:420 CPY #.LOWORD(-1)
    case 0xC1E875: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog-jp.asm:420 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E875.
    case 0xC1E877: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    case 0xC1E878: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    case 0xC1E87A: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E877.
    case 0xC1E87B: cpu.execute_instruction<0x5E>(0x0098E5, 3); return true;
    // src/text/text_input_dialog-jp.asm:422 TYA
    case 0xC1E87D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:423 AND #$00FF
    case 0xC1E87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/text_input_dialog-jp.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC1E87E.
    case 0xC1E880: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:424 STA @LOCAL07
    case 0xC1E881: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/text_input_dialog-jp.asm:425 TYA
    case 0xC1E883: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:426 AND #$FF00
    case 0xC1E884: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/text_input_dialog-jp.asm:426 AND #$FF00
    // Overlapping static entry reached from 0xC1E884.
    case 0xC1E886: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/text_input_dialog-jp.asm:427 XBA
    case 0xC1E887: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:428 AND #$00FF
    case 0xC1E888: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/text_input_dialog-jp.asm:428 AND #$00FF
    // Overlapping static entry reached from 0xC1E888.
    case 0xC1E88A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog-jp.asm:429 STA @VIRTUAL04
    case 0xC1E88B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/text_input_dialog-jp.asm:430 JMP @UNKNOWN3_4
    case 0xC1E88D: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:432 LDA @LOCAL0B
    case 0xC1E890: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:433 ASL
    case 0xC1E892: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:434 TAX
    case 0xC1E893: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:435 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E894: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E897: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E897.
    case 0xC1E899: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E89A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/text_input_dialog-jp.asm:437 TAX
    case 0xC1E89E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:438 LDA WINDOW_STATS + window_stats::text_x,X
    case 0xC1E89F: cpu.execute_instruction<0xBD>(0x0089D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:439 BEQL @UNKNOWN3_4
    case 0xC1E8A2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:439 BEQL @UNKNOWN3_4
    case 0xC1E8A4: cpu.execute_instruction<0x4C>(0x00E55E, 3); return true;
    // src/text/text_input_dialog-jp.asm:440 LDA @LOCAL0B
    case 0xC1E8A7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:441 JSR SET_WINDOW_FOCUS
    case 0xC1E8A9: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/text/text_input_dialog-jp.asm:442 LDY #0
    case 0xC1E8AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:442 LDY #0
    // Overlapping static entry reached from 0xC1E8AC.
    case 0xC1E8AE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/text_input_dialog-jp.asm:443 STY @LOCAL09
    case 0xC1E8AF: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:444 BRA @UNKNOWN24
    case 0xC1E8B1: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/text_input_dialog-jp.asm:446 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC1E8B3: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // src/text/text_input_dialog-jp.asm:447 TAX
    case 0xC1E8B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:448 TYA
    case 0xC1E8B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:449 JSL UNKNOWN_C208B8
    case 0xC1E8B8: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/text/text_input_dialog-jp.asm:450 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E8BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:451 STA (@LOCAL0D)
    case 0xC1E8BE: cpu.execute_instruction<0x92>(0x00002A, 2); return true;
    // src/text/text_input_dialog-jp.asm:452 REP #PROC_FLAGS::ACCUM8
    case 0xC1E8C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:453 INC @LOCAL0D
    case 0xC1E8C2: cpu.execute_instruction<0xE6>(0x00002A, 2); return true;
    // src/text/text_input_dialog-jp.asm:454 LDY @LOCAL09
    case 0xC1E8C4: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:455 INY
    case 0xC1E8C6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:456 STY @LOCAL09
    case 0xC1E8C7: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:458 LDA @LOCAL0B
    case 0xC1E8C9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog-jp.asm:459 ASL
    case 0xC1E8CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:460 TAX
    case 0xC1E8CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:461 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E8CD: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E8D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E8D0.
    case 0xC1E8D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E8D3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/text_input_dialog-jp.asm:463 TAX
    case 0xC1E8D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:464 LDY @LOCAL09
    case 0xC1E8D8: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/text/text_input_dialog-jp.asm:465 TYA
    case 0xC1E8DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:466 CMP WINDOW_STATS + window_stats::text_x,X
    case 0xC1E8DB: cpu.execute_instruction<0xDD>(0x0089D0, 3); return true;
    // src/text/text_input_dialog-jp.asm:467 BCC @UNKNOWN23
    case 0xC1E8DE: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/text/text_input_dialog-jp.asm:468 BRA @UNKNOWN47
    case 0xC1E8E0: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/text_input_dialog-jp.asm:470 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E8E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:471 LDA #0
    case 0xC1E8E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009200, 3); return true;
    // src/text/text_input_dialog-jp.asm:472 STA (@LOCAL0D)
    case 0xC1E8E6: cpu.execute_instruction<0x92>(0x00002A, 2); return true;
    // src/text/text_input_dialog-jp.asm:472 STA (@LOCAL0D)
    // Overlapping static entry reached from 0xC1E8E4.
    case 0xC1E8E7: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:473 REP #PROC_FLAGS::ACCUM8
    case 0xC1E8E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog-jp.asm:474 INC @LOCAL0D
    case 0xC1E8EA: cpu.execute_instruction<0xE6>(0x00002A, 2); return true;
    // src/text/text_input_dialog-jp.asm:475 INY
    case 0xC1E8EC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:477 CPY @LOCAL0C
    case 0xC1E8ED: cpu.execute_instruction<0xC4>(0x000028, 2); return true;
    // src/text/text_input_dialog-jp.asm:478 BCC @UNKNOWN46
    case 0xC1E8EF: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/text/text_input_dialog-jp.asm:479 LDA #0
    case 0xC1E8F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog-jp.asm:479 LDA #0
    // Overlapping static entry reached from 0xC1E8F1.
    case 0xC1E8F3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/text_input_dialog-jp.asm:481 PLD
    case 0xC1E8F4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/text_input_dialog-jp.asm:482 RTS
    case 0xC1E8F5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/transfer_active_mem_storage.asm (source_named).
bool execute_text_transfer_active_mem_storage_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_active_mem_storage.asm:3 BEGIN_C_FUNCTION
    case 0xC10527: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_active_mem_storage.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC10525.
    case 0xC10528: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10529: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC1052A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC1052B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1052B.
    case 0xC1052D: cpu.execute_instruction<0xFF>(0x04205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC1052E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1052F: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC1052D.
    case 0xC10531: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    case 0xC10532: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10531.
    case 0xC10533: cpu.execute_instruction<0x0E>(0x006918, 3); return true;
    // src/text/transfer_active_mem_storage.asm:9 CLC
    case 0xC10534: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    case 0xC10535: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10533.
    case 0xC10536: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10535.
    case 0xC10537: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:11 TAY
    case 0xC10538: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10539: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1053C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1053E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10541: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_active_mem_storage.asm:13 LDA @LOCAL00
    case 0xC10543: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:14 CLC
    case 0xC10545: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    case 0xC10546: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC10546.
    case 0xC10548: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:16 TAY
    case 0xC10549: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1054A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1054C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1054F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10551: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_active_mem_storage.asm:18 LDA @LOCAL00
    case 0xC10554: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:19 CLC
    case 0xC10556: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    case 0xC10557: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10557.
    case 0xC10559: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:21 TAY
    case 0xC1055A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1055B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1055E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10560: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10563: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_active_mem_storage.asm:23 LDA @LOCAL00
    case 0xC10565: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:24 CLC
    case 0xC10567: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    case 0xC10568: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC10568.
    case 0xC1056A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:26 TAY
    case 0xC1056B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1056C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1056E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10571: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10573: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_active_mem_storage.asm:28 LDA @LOCAL00
    case 0xC10576: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:29 PHA
    case 0xC10578: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:30 TAX
    case 0xC10579: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:31 LDA a:window_stats::secondary_memory,X
    case 0xC1057A: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/text/transfer_active_mem_storage.asm:32 PLX
    case 0xC1057D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:33 STA a:window_stats::secondary_memory_storage,X
    case 0xC1057E: cpu.execute_instruction<0x9D>(0x000029, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC10581: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC10582: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/transfer_storage_mem_active.asm (source_named).
bool execute_text_transfer_storage_mem_active_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_storage_mem_active.asm:3 BEGIN_C_FUNCTION
    case 0xC10583: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10585: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10586: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10587: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10587.
    case 0xC10589: cpu.execute_instruction<0xFF>(0x04205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC1058A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1058B: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/transfer_storage_mem_active.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC10589.
    case 0xC1058D: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/text/transfer_storage_mem_active.asm:8 STA @LOCAL00
    case 0xC1058E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1058D.
    case 0xC1058F: cpu.execute_instruction<0x0E>(0x006918, 3); return true;
    // src/text/transfer_storage_mem_active.asm:9 CLC
    case 0xC10590: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    case 0xC10591: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1058F.
    case 0xC10592: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC10591.
    case 0xC10593: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:11 TAY
    case 0xC10594: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10595: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10598: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1059A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1059D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_storage_mem_active.asm:13 LDA @LOCAL00
    case 0xC1059F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:14 CLC
    case 0xC105A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:15 ADC #window_stats::working_memory
    case 0xC105A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/transfer_storage_mem_active.asm:15 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC105A2.
    case 0xC105A4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:16 TAY
    case 0xC105A5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105A8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105AD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_storage_mem_active.asm:18 LDA @LOCAL00
    case 0xC105B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:19 CLC
    case 0xC105B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:20 ADC #window_stats::argument_memory_storage
    case 0xC105B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/transfer_storage_mem_active.asm:20 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC105B3.
    case 0xC105B5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:21 TAY
    case 0xC105B6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105B7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105BC: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_storage_mem_active.asm:23 LDA @LOCAL00
    case 0xC105C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:24 CLC
    case 0xC105C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:25 ADC #window_stats::argument_memory
    case 0xC105C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/transfer_storage_mem_active.asm:25 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC105C4.
    case 0xC105C6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:26 TAY
    case 0xC105C7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105CA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC105CF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_storage_mem_active.asm:28 LDA @LOCAL00
    case 0xC105D2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:29 PHA
    case 0xC105D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:30 TAX
    case 0xC105D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:31 LDA a:window_stats::secondary_memory_storage,X
    case 0xC105D6: cpu.execute_instruction<0xBD>(0x000029, 3); return true;
    // src/text/transfer_storage_mem_active.asm:32 PLX
    case 0xC105D9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:33 STA a:window_stats::secondary_memory,X
    case 0xC105DA: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/transfer_storage_mem_active.asm:34 END_C_FUNCTION
    case 0xC105DD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/transfer_storage_mem_active.asm:34 END_C_FUNCTION
    case 0xC105DE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/undraw_flyover_text.asm (source_named).
bool execute_text_undraw_flyover_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/undraw_flyover_text.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC45CA2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC45CA6.
    case 0xC45CA8: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    case 0xC45CAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    // Overlapping static entry reached from 0xC45CAA.
    case 0xC45CAC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    case 0xC45CAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    // Overlapping static entry reached from 0xC45CAD.
    case 0xC45CAF: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC45CB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC45CB0.
    case 0xC45CB2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/undraw_flyover_text.asm:12 JSL SET_BG3_VRAM_LOCATION
    case 0xC45CB3: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/text/undraw_flyover_text.asm:13 JSL UNKNOWN_C2038B
    case 0xC45CB7: cpu.execute_instruction<0x22>(0xC2036C, 4); return true;
    // src/text/undraw_flyover_text.asm:14 JSL LOAD_WINDOW_GFX
    case 0xC45CBB: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CBF.
    case 0xC45CC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CC4.
    case 0xC45CC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CC9.
    case 0xC45CCB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CCC.
    case 0xC45CCE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CCF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CD3: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CD1.
    case 0xC45CD4: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CD4.
    case 0xC45CD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    case 0xC45CD7: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC45CD6.
    case 0xC45CD8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC45CD6.
    case 0xC45CD9: cpu.execute_instruction<0x5C>(0x20E2C4, 4); return true;
    // src/text/undraw_flyover_text.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC45CDB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/undraw_flyover_text.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC45CDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC45CDF: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC45CDD.
    case 0xC45CE0: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/text/undraw_flyover_text.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC45CE2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/undraw_flyover_text.asm:27 PLD
    case 0xC45CE4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/undraw_flyover_text.asm:29 RTL
    case 0xC45CE5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/unlock_input.asm (source_named).
bool execute_text_unlock_input_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/unlock_input.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC102D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/unlock_input.asm:4 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC102D8: cpu.execute_instruction<0x9C>(0x00993D, 3); return true;
    // src/text/unlock_input.asm:5 RTS
    case 0xC102DB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/update_hppp_meter_tiles.asm (source_named).
bool execute_text_update_hppp_meter_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/update_hppp_meter_tiles.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2124C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC2124E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC2124F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC21250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC21250.
    case 0xC21252: cpu.execute_instruction<0xFF>(0x07AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC21253: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    case 0xC21254: cpu.execute_instruction<0xAD>(0x008D07, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC21252.
    case 0xC21256: cpu.execute_instruction<0x8D>(0x00FF29, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    case 0xC21257: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21257.
    case 0xC21259: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC2125A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC2125C: cpu.execute_instruction<0x4C>(0x0014CC, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:19 LDA FRAME_COUNTER
    case 0xC2125F: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    case 0xC21262: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC21262.
    case 0xC21264: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    case 0xC21265: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    // Overlapping static entry reached from 0xC21265.
    case 0xC21267: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:22 STA @LOCAL09
    case 0xC21268: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:24 CLC
    case 0xC2126A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:25 ADC #.LOWORD(GAME_STATE)
    case 0xC2126B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:25 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2126B.
    case 0xC2126D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:26 TAX
    case 0xC2126E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:27 LDA a:game_state::party_members,X
    case 0xC2126F: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    case 0xC21272: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21272.
    case 0xC21274: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC21275: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC21277: cpu.execute_instruction<0x4C>(0x0014CC, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    case 0xC2127A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC2127A.
    case 0xC2127C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:35 CLC
    case 0xC2127D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    case 0xC2127E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    // Overlapping static entry reached from 0xC2127E.
    case 0xC21280: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21281: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21283: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21285: cpu.execute_instruction<0x4C>(0x0014CC, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21288: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC2128A: cpu.execute_instruction<0x4C>(0x0014CC, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:38 LDY @LOCAL09
    case 0xC2128D: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:39 SEP #PROC_FLAGS::INDEX8
    case 0xC2128F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:40 LDA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC21291: cpu.execute_instruction<0xAD>(0x00993F, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:41 JSL ASR8_UNKNOWN1
    case 0xC21294: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    case 0xC21298: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC21298.
    case 0xC2129A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC2129B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC2129D: cpu.execute_instruction<0x4C>(0x0014CC, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:44 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC212A0: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:45 CMP @LOCAL09
    case 0xC212A3: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:46 BNE @UNKNOWN5
    case 0xC212A5: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    case 0xC212A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    // Overlapping static entry reached from 0xC212A7.
    case 0xC212A9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:48 BRA @UNKNOWN6
    case 0xC212AA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    case 0xC212AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    // Overlapping static entry reached from 0xC212AC.
    case 0xC212AE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:53 CLC
    case 0xC212B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    case 0xC212B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    // Overlapping static entry reached from 0xC212B5.
    case 0xC212B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:55 STA @VIRTUAL02
    case 0xC212B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC212BA: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    case 0xC212BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC212BD.
    case 0xC212BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:59 PHA
    case 0xC212C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:60 ASL
    case 0xC212C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:61 PLA
    case 0xC212CA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:62 ROR
    case 0xC212CB: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:63 STA @VIRTUAL04
    case 0xC212CC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    case 0xC212CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    // Overlapping static entry reached from 0xC212CE.
    case 0xC212D0: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:65 SEC
    case 0xC212D1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:66 SBC @VIRTUAL04
    case 0xC212D2: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:67 CLC
    case 0xC212D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:68 ADC @VIRTUAL02
    case 0xC212D5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:69 INC
    case 0xC212D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:70 INC
    case 0xC212D8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:71 INC
    case 0xC212D9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:72 STA @LOCAL08
    case 0xC212DA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:73 LDA @LOCAL09
    case 0xC212DC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:75 STA @VIRTUAL02
    case 0xC212E6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:76 LDA @LOCAL08
    case 0xC212E8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:77 CLC
    case 0xC212EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:78 ADC @VIRTUAL02
    case 0xC212EB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:79 STA @LOCAL07
    case 0xC212ED: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:80 ASL
    case 0xC212EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:81 CLC
    case 0xC212F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    case 0xC212F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC212F1.
    case 0xC212F3: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    case 0xC212F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC212F3.
    case 0xC212F5: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    case 0xC212F6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    // Overlapping static entry reached from 0xC212F5.
    case 0xC212F7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:85 LDA @LOCAL07
    case 0xC212F8: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:86 CLC
    case 0xC212FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    case 0xC212FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    // Overlapping static entry reached from 0xC212FB.
    case 0xC212FD: cpu.execute_instruction<0x7C>(0x001C85, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:88 STA @LOCAL07
    case 0xC212FE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:90 LDA @LOCAL09
    case 0xC21300: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:91 CLC
    case 0xC21302: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:92 ADC #.LOWORD(GAME_STATE)
    case 0xC21303: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:92 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC21303.
    case 0xC21305: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:93 REP #PROC_FLAGS::INDEX8
    case 0xC21306: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:94 TAX
    case 0xC21308: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:95 LDA a:game_state::party_members,X
    case 0xC21309: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    case 0xC2130C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2130C.
    case 0xC2130E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:102 DEC
    case 0xC2130F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21310: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21310.
    case 0xC21312: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:104 JSL MULT168
    case 0xC21313: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:105 CLC
    case 0xC21317: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21318: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21318.
    case 0xC2131A: cpu.execute_instruction<0x9C>(0x001885, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:107 STA @LOCAL05
    case 0xC2131B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    case 0xC2131D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000042, 2); else cpu.execute_instruction<0xA0>(0x000042, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC2131D.
    case 0xC2131F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:109 LDA (@LOCAL05),Y
    case 0xC21320: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:110 STA @LOCAL04
    case 0xC21322: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    case 0xC21324: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    // Overlapping static entry reached from 0xC21324.
    case 0xC21326: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21327: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21329: cpu.execute_instruction<0x4C>(0x0013E6, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:113 LDA @LOCAL04
    case 0xC2132C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:114 TAY
    case 0xC2132E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:115 STY @LOCAL03
    case 0xC2132F: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    case 0xC21331: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC21331.
    case 0xC21333: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:117 LDA (@LOCAL05),Y
    case 0xC21334: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:118 TAX
    case 0xC21336: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:119 LDA @LOCAL09
    case 0xC21337: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:120 LDY @LOCAL03
    case 0xC21339: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:121 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC2133B: cpu.execute_instruction<0x20>(0x000D99, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:122 LDA @LOCAL09
    case 0xC2133E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21340: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21342: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21343: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21345: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21346: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21347: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:124 CLC
    case 0xC21348: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC21349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A7, 2); else cpu.execute_instruction<0x69>(0x008CA7, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC21349.
    case 0xC2134B: cpu.execute_instruction<0x8C>(0x000285, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    case 0xC2134C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:127 LDA UPLOAD_HPPP_METER_TILES
    case 0xC2134E: cpu.execute_instruction<0xAD>(0x00991C, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    case 0xC21351: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC21351.
    case 0xC21353: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:129 BNE @UNKNOWN8
    case 0xC21354: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    case 0xC21356: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21356.
    case 0xC21358: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:131 STA @LOCAL00
    case 0xC21359: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:132 LDA @LOCAL07
    case 0xC2135B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:133 STA @LOCAL01
    case 0xC2135D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:134 LDY @VIRTUAL02
    case 0xC2135F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    case 0xC21361: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    // Overlapping static entry reached from 0xC21361.
    case 0xC21363: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC21364: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:137 LDA #0
    case 0xC21366: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21368: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21366.
    case 0xC21369: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    case 0xC2136C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2136C.
    case 0xC2136E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:141 STA @LOCAL00
    case 0xC2136F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:142 LDA @LOCAL07
    case 0xC21371: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:143 CLC
    case 0xC21373: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    case 0xC21374: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    // Overlapping static entry reached from 0xC21374.
    case 0xC21376: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:145 STA @LOCAL01
    case 0xC21377: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:146 LDA @VIRTUAL02
    case 0xC21379: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:147 CLC
    case 0xC2137B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    case 0xC2137C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    // Overlapping static entry reached from 0xC2137C.
    case 0xC2137E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:149 TAY
    case 0xC2137F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    case 0xC21380: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    // Overlapping static entry reached from 0xC21380.
    case 0xC21382: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC21383: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:152 LDA #0
    case 0xC21385: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21387: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21385.
    case 0xC21388: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:156 LDY @VIRTUAL02
    case 0xC2138B: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    case 0xC2138D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    // Overlapping static entry reached from 0xC2138D.
    case 0xC2138F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:158 STX @LOCAL08
    case 0xC21390: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:159 BRA @UNKNOWN10
    case 0xC21392: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:161 LDA __BSS_START__,Y
    case 0xC21394: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:162 LDX @LOCAL06
    case 0xC21397: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:163 STX @VIRTUAL04
    case 0xC21399: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:164 STA __BSS_START__,X
    case 0xC2139B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:165 INY
    case 0xC2139E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:166 INY
    case 0xC2139F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:167 INC @VIRTUAL04
    case 0xC213A0: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:168 INC @VIRTUAL04
    case 0xC213A2: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:169 LDA @VIRTUAL04
    case 0xC213A4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:170 STA @LOCAL06
    case 0xC213A6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:171 LDX @LOCAL08
    case 0xC213A8: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:172 INX
    case 0xC213AA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:173 STX @LOCAL08
    case 0xC213AB: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    case 0xC213AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    // Overlapping static entry reached from 0xC213AD.
    case 0xC213AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:176 BNE @UNKNOWN9
    case 0xC213B0: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:177 LDA @LOCAL06
    case 0xC213B2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:178 STA @VIRTUAL04
    case 0xC213B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:179 CLC
    case 0xC213B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    case 0xC213B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    // Overlapping static entry reached from 0xC213B7.
    case 0xC213B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:181 STA @LOCAL08
    case 0xC213BA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    case 0xC213BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    // Overlapping static entry reached from 0xC213BC.
    case 0xC213BE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:183 STX @LOCAL03
    case 0xC213BF: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:184 BRA @UNKNOWN12
    case 0xC213C1: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:186 TAX
    case 0xC213C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:187 LDA __BSS_START__,Y
    case 0xC213C4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:188 STA __BSS_START__,X
    case 0xC213C7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:189 INY
    case 0xC213CA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:190 INY
    case 0xC213CB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:191 LDA @LOCAL08
    case 0xC213CC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:192 INC
    case 0xC213CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:193 INC
    case 0xC213CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:194 STA @LOCAL08
    case 0xC213D0: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:195 LDX @LOCAL03
    case 0xC213D2: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:196 INX
    case 0xC213D4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:197 STX @LOCAL03
    case 0xC213D5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    case 0xC213D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    // Overlapping static entry reached from 0xC213D7.
    case 0xC213D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:200 BNE @UNKNOWN11
    case 0xC213DA: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:201 CLC
    case 0xC213DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    case 0xC213DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    // Overlapping static entry reached from 0xC213DD.
    case 0xC213DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:203 STA @VIRTUAL04
    case 0xC213E0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:204 STA @LOCAL06
    case 0xC213E2: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:205 BRA @UNKNOWN14
    case 0xC213E4: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:207 LDA @VIRTUAL04
    case 0xC213E6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:208 CLC
    case 0xC213E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    case 0xC213E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    // Overlapping static entry reached from 0xC213E9.
    case 0xC213EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:210 STA @VIRTUAL04
    case 0xC213EC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:211 STA @LOCAL06
    case 0xC213EE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    case 0xC213F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC213F0.
    case 0xC213F2: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:214 LDA (@LOCAL05),Y
    case 0xC213F3: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:215 STA @LOCAL04
    case 0xC213F5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    case 0xC213F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    // Overlapping static entry reached from 0xC213F7.
    case 0xC213F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC213FA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC213FC: cpu.execute_instruction<0x4C>(0x0014BF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:219 LDA @LOCAL04
    case 0xC213FF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:220 STA @LOCAL00
    case 0xC21401: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    case 0xC21403: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004A, 2); else cpu.execute_instruction<0xA0>(0x00004A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC21403.
    case 0xC21405: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:222 LDA (@LOCAL05),Y
    case 0xC21406: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:223 TAY
    case 0xC21408: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:224 LDA @LOCAL05
    case 0xC21409: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:225 CLC
    case 0xC2140B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    case 0xC2140C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2140C.
    case 0xC2140E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:227 TAX
    case 0xC2140F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:228 LDA @LOCAL09
    case 0xC21410: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:229 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC21412: cpu.execute_instruction<0x20>(0x000DB7, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:230 LDA @LOCAL09
    case 0xC21415: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21417: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21419: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:232 CLC
    case 0xC2141F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC21420: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x008CB3, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC21420.
    case 0xC21422: cpu.execute_instruction<0x8C>(0x000285, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    case 0xC21423: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:235 LDA UPLOAD_HPPP_METER_TILES
    case 0xC21425: cpu.execute_instruction<0xAD>(0x00991C, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    case 0xC21428: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC21428.
    case 0xC2142A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:237 BNE @UNKNOWN16
    case 0xC2142B: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    case 0xC2142D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2142D.
    case 0xC2142F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:239 STA @LOCAL00
    case 0xC21430: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:240 LDA @LOCAL07
    case 0xC21432: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:241 CLC
    case 0xC21434: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    case 0xC21435: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    // Overlapping static entry reached from 0xC21435.
    case 0xC21437: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:243 STA @LOCAL01
    case 0xC21438: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:244 LDY @VIRTUAL02
    case 0xC2143A: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    case 0xC2143C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    // Overlapping static entry reached from 0xC2143C.
    case 0xC2143E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:246 SEP #PROC_FLAGS::ACCUM8
    case 0xC2143F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:247 LDA #0
    case 0xC21441: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21443: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21441.
    case 0xC21444: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    case 0xC21447: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21447.
    case 0xC21449: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:251 STA @LOCAL00
    case 0xC2144A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:252 LDA @LOCAL07
    case 0xC2144C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:253 CLC
    case 0xC2144E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    case 0xC2144F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    // Overlapping static entry reached from 0xC2144F.
    case 0xC21451: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:255 STA @LOCAL01
    case 0xC21452: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:256 LDA @VIRTUAL02
    case 0xC21454: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:257 CLC
    case 0xC21456: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    case 0xC21457: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    // Overlapping static entry reached from 0xC21457.
    case 0xC21459: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:259 TAY
    case 0xC2145A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    case 0xC2145B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    // Overlapping static entry reached from 0xC2145B.
    case 0xC2145D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:261 SEP #PROC_FLAGS::ACCUM8
    case 0xC2145E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:262 LDA #0
    case 0xC21460: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21462: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21460.
    case 0xC21463: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:266 LDA @VIRTUAL02
    case 0xC21466: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:267 STA @LOCAL02
    case 0xC21468: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    case 0xC2146A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    // Overlapping static entry reached from 0xC2146A.
    case 0xC2146C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:269 STX @LOCAL08
    case 0xC2146D: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:270 BRA @UNKNOWN18
    case 0xC2146F: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:272 TAX
    case 0xC21471: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:273 LDA __BSS_START__,X
    case 0xC21472: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:274 LDX @LOCAL06
    case 0xC21475: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:275 STX @VIRTUAL04
    case 0xC21477: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:276 STA __BSS_START__,X
    case 0xC21479: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:277 LDA @LOCAL02
    case 0xC2147C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:278 INC
    case 0xC2147E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:279 INC
    case 0xC2147F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:280 STA @LOCAL02
    case 0xC21480: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:281 INC @VIRTUAL04
    case 0xC21482: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:282 INC @VIRTUAL04
    case 0xC21484: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:283 LDX @VIRTUAL04
    case 0xC21486: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:284 STX @LOCAL06
    case 0xC21488: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:285 LDX @LOCAL08
    case 0xC2148A: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:286 INX
    case 0xC2148C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:287 STX @LOCAL08
    case 0xC2148D: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    case 0xC2148F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    // Overlapping static entry reached from 0xC2148F.
    case 0xC21491: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:290 BNE @UNKNOWN17
    case 0xC21492: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:291 LDA @LOCAL06
    case 0xC21494: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:292 STA @VIRTUAL04
    case 0xC21496: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:293 CLC
    case 0xC21498: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    case 0xC21499: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    // Overlapping static entry reached from 0xC21499.
    case 0xC2149B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:295 TAY
    case 0xC2149C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    case 0xC2149D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    // Overlapping static entry reached from 0xC2149D.
    case 0xC2149F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:297 STX @LOCAL08
    case 0xC214A0: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:298 BRA @UNKNOWN20
    case 0xC214A2: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:300 LDA @LOCAL02
    case 0xC214A4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:301 TAX
    case 0xC214A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:302 LDA __BSS_START__,X
    case 0xC214A7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:303 STA __BSS_START__,Y
    case 0xC214AA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:304 LDA @LOCAL02
    case 0xC214AD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:305 INC
    case 0xC214AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:306 INC
    case 0xC214B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:307 STA @LOCAL02
    case 0xC214B1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:308 INY
    case 0xC214B3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:309 INY
    case 0xC214B4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:310 LDX @LOCAL08
    case 0xC214B5: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:311 INX
    case 0xC214B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:312 STX @LOCAL08
    case 0xC214B8: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    case 0xC214BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    // Overlapping static entry reached from 0xC214BA.
    case 0xC214BC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:315 BNE @UNKNOWN19
    case 0xC214BD: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:317 LDA UPLOAD_HPPP_METER_TILES
    case 0xC214BF: cpu.execute_instruction<0xAD>(0x00991C, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    case 0xC214C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC214C2.
    case 0xC214C4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:319 BEQ @UNKNOWN22
    case 0xC214C5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:320 SEP #PROC_FLAGS::ACCUM8
    case 0xC214C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:321 STZ UPLOAD_HPPP_METER_TILES
    case 0xC214C9: cpu.execute_instruction<0x9C>(0x00991C, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:323 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC214CC: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC214CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC214CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/window_tick-jp.asm (source_named).
bool execute_text_window_tick_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13502: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/window_tick-jp.asm:4 JSL RAND
    case 0xC13504: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/text/window_tick-jp.asm:6 LDA INSTANT_PRINTING
    case 0xC13508: cpu.execute_instruction<0xAD>(0x00991A, 3); return true;
    // src/text/window_tick-jp.asm:7 AND #$00FF
    case 0xC1350B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/window_tick-jp.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC1350B.
    case 0xC1350D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/window_tick-jp.asm:8 BNE @UNKNOWN4
    case 0xC1350E: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/text/window_tick-jp.asm:9 LDA REDRAW_ALL_WINDOWS
    case 0xC13510: cpu.execute_instruction<0xAD>(0x00991B, 3); return true;
    // src/text/window_tick-jp.asm:10 AND #$00FF
    case 0xC13513: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/window_tick-jp.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC13513.
    case 0xC13515: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/window_tick-jp.asm:11 BNE @UNKNOWN1
    case 0xC13516: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/text/window_tick-jp.asm:12 LDA WINDOW_HEAD
    case 0xC13518: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/window_tick-jp.asm:13 CMP #$FFFF
    case 0xC1351B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/window_tick-jp.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC1351B.
    case 0xC1351D: cpu.execute_instruction<0xFF>(0xAD12F0, 4); return true;
    // src/text/window_tick-jp.asm:14 BEQ @UNKNOWN2
    case 0xC1351E: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/window_tick-jp.asm:15 LDA WINDOW_TAIL
    case 0xC13520: cpu.execute_instruction<0xAD>(0x008C24, 3); return true;
    // src/text/window_tick-jp.asm:15 LDA WINDOW_TAIL
    // Overlapping static entry reached from 0xC1351D.
    case 0xC13521: cpu.execute_instruction<0x24>(0x00008C, 2); return true;
    // src/text/window_tick-jp.asm:16 JSL UNKNOWN_C107AF
    case 0xC13523: cpu.execute_instruction<0x22>(0xC10996, 4); return true;
    // src/text/window_tick-jp.asm:17 BRA @UNKNOWN2
    case 0xC13527: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/window_tick-jp.asm:19 JSL UNKNOWN_C2087C
    case 0xC13529: cpu.execute_instruction<0x22>(0xC2081D, 4); return true;
    // src/text/window_tick-jp.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC1352D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/window_tick-jp.asm:21 STZ REDRAW_ALL_WINDOWS
    case 0xC1352F: cpu.execute_instruction<0x9C>(0x00991B, 3); return true;
    // src/text/window_tick-jp.asm:23 JSL HP_PP_ROLLER
    case 0xC13532: cpu.execute_instruction<0x22>(0xC20F3B, 4); return true;
    // src/text/window_tick-jp.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC13536: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/window_tick-jp.asm:25 LDA #$0001
    case 0xC13538: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/window_tick-jp.asm:26 STA UPLOAD_HPPP_METER_TILES
    case 0xC1353A: cpu.execute_instruction<0x8D>(0x00991C, 3); return true;
    // src/text/window_tick-jp.asm:26 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC13538.
    case 0xC1353B: cpu.execute_instruction<0x1C>(0x002299, 3); return true;
    // src/text/window_tick-jp.asm:27 JSL UPDATE_HPPP_METER_TILES
    case 0xC1353D: cpu.execute_instruction<0x22>(0xC2124C, 4); return true;
    // src/text/window_tick-jp.asm:27 JSL UPDATE_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC1353B.
    case 0xC1353E: cpu.execute_instruction<0x4C>(0x00C212, 3); return true;
    // src/text/window_tick-jp.asm:28 LDA DISABLED_TRANSITIONS
    case 0xC13541: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/text/window_tick-jp.asm:29 BNE @UNKNOWN3
    case 0xC13544: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/text/window_tick-jp.asm:30 JSR UNKNOWN_C1FF2C
    case 0xC13546: cpu.execute_instruction<0x20>(0x00FCAB, 3); return true;
    // src/text/window_tick-jp.asm:31 CMP #$0000
    case 0xC13549: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/window_tick-jp.asm:32 BRK
    case 0xC1354B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/window_tick-jp.asm:33 BEQ @UNKNOWN3
    case 0xC1354C: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/window_tick-jp.asm:34 JSL UNKNOWN_C47F87
    case 0xC1354E: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/text/window_tick-jp.asm:36 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC13552: cpu.execute_instruction<0x9C>(0x009941, 3); return true;
    // src/text/window_tick-jp.asm:37 JSL UNKNOWN_C2038B
    case 0xC13555: cpu.execute_instruction<0x22>(0xC2036C, 4); return true;
    // src/text/window_tick-jp.asm:38 JSL UNKNOWN_C1004E
    case 0xC13559: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/text/window_tick-jp.asm:40 RTL
    case 0xC1355D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
