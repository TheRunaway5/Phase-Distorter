// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C1/C1E48D-jp.asm (unresolved).
bool execute_unresolved_c1_c1e48d_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1E24F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E251: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E252: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E253: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E254: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E254.
    case 0xC1E256: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E257: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:13 END_STACK_VARS
    case 0xC1E258: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:14 STY @LOCAL03
    case 0xC1E259: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:14 STY @LOCAL03
    // Overlapping static entry reached from 0xC1E256.
    case 0xC1E25A: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:15 STX @VIRTUAL04
    case 0xC1E25B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC1E25A.
    case 0xC1E25C: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:16 TAX
    case 0xC1E25D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:17 STX @LOCAL02
    case 0xC1E25E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:18 JSR SET_INSTANT_PRINTING
    case 0xC1E260: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:19 LDX @LOCAL02
    case 0xC1E263: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:20 TXA
    case 0xC1E265: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:21 JSR SET_WINDOW_FOCUS
    case 0xC1E266: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E269: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:23 ASL
    case 0xC1E26C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:24 TAX
    case 0xC1E26D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E26E: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E271: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E271.
    case 0xC1E273: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E274: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1E48D-jp.asm:27 CLC
    case 0xC1E278: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:28 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E279: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:28 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E279.
    case 0xC1E27B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:29 STA @VIRTUAL02
    case 0xC1E27C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:29 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1E27B.
    case 0xC1E27D: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:30 LDY @LOCAL03
    case 0xC1E27E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:31 TYA
    case 0xC1E280: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:32 CMP #.LOWORD(-1)
    case 0xC1E281: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:32 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E281.
    case 0xC1E283: cpu.execute_instruction<0xFF>(0xC910F0, 4); return true;
    // src/unknown/C1/C1E48D-jp.asm:33 BEQ @UNKNOWN1
    case 0xC1E284: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:34 CMP #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1E286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:34 CMP #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1E283.
    case 0xC1E287: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:34 CMP #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1E286.
    case 0xC1E288: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:35 BEQ @UNKNOWN4
    case 0xC1E289: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:36 CMP #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1E28B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:36 CMP #WINDOW::FILE_SELECT_NAMING_MESSAGE
    // Overlapping static entry reached from 0xC1E28B.
    case 0xC1E28D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:37 BEQL @UNKNOWN7_
    case 0xC1E28E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:37 BEQL @UNKNOWN7_
    case 0xC1E290: cpu.execute_instruction<0x4C>(0x00E335, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:38 JMP @UNKNOWN7_2
    case 0xC1E293: cpu.execute_instruction<0x4C>(0x00E375, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:40 LDA @VIRTUAL02
    case 0xC1E296: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:41 CLC
    case 0xC1E298: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:42 ADC #window_stats::text_x
    case 0xC1E299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:42 ADC #window_stats::text_x
    // Overlapping static entry reached from 0xC1E299.
    case 0xC1E29B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:43 TAX
    case 0xC1E29C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:44 STX @LOCAL03
    case 0xC1E29D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:45 LDA __BSS_START__,X
    case 0xC1E29F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:46 BNE @UNKNOWN2
    case 0xC1E2A2: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:47 LDX #1
    case 0xC1E2A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:47 LDX #1
    // Overlapping static entry reached from 0xC1E2A4.
    case 0xC1E2A6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:48 STX @LOCAL01
    case 0xC1E2A7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:49 JMP @UNKNOWN8_
    case 0xC1E2A9: cpu.execute_instruction<0x4C>(0x00E3A6, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:51 CMP @VIRTUAL04
    case 0xC1E2AC: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:52 BCS @UNKNOWN3
    case 0xC1E2AE: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:53 LDA #CHAR::PLACEHOLDER
    case 0xC1E2B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00005C, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:53 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1E2B0.
    case 0xC1E2B2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:54 JSR PRINT_LETTER
    case 0xC1E2B3: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:55 LDX @LOCAL03
    case 0xC1E2B6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:56 LDA __BSS_START__,X
    case 0xC1E2B8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:57 DEC
    case 0xC1E2BB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:58 STA __BSS_START__,X
    case 0xC1E2BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:60 LDA @VIRTUAL02
    case 0xC1E2BF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:61 CLC
    case 0xC1E2C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:62 ADC #window_stats::text_x
    case 0xC1E2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:62 ADC #window_stats::text_x
    // Overlapping static entry reached from 0xC1E2C2.
    case 0xC1E2C4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:63 TAX
    case 0xC1E2C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:64 STX @LOCAL00
    case 0xC1E2C6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:65 LDA __BSS_START__,X
    case 0xC1E2C8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:66 DEC
    case 0xC1E2CB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:67 STA __BSS_START__,X
    case 0xC1E2CC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:68 LDA #CHAR::BULLET
    case 0xC1E2CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:68 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E2CF.
    case 0xC1E2D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:69 JSR PRINT_LETTER
    case 0xC1E2D2: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:70 LDX @LOCAL00
    case 0xC1E2D5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:71 LDA __BSS_START__,X
    case 0xC1E2D7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:72 DEC
    case 0xC1E2DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:73 STA __BSS_START__,X
    case 0xC1E2DB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:74 JMP @UNKNOWN8
    case 0xC1E2DE: cpu.execute_instruction<0x4C>(0x00E3A1, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:76 LDX @VIRTUAL02
    case 0xC1E2E1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:77 LDA a:window_stats::text_x,X
    case 0xC1E2E3: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:78 STA @LOCAL00
    case 0xC1E2E6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:79 BEQL @UNKNOWN8
    case 0xC1E2E8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:79 BEQL @UNKNOWN8
    case 0xC1E2EA: cpu.execute_instruction<0x4C>(0x00E3A1, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:80 LDX @VIRTUAL02
    case 0xC1E2ED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:81 LDA a:window_stats::text_y,X
    case 0xC1E2EF: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:82 TAX
    case 0xC1E2F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:83 LDA @LOCAL00
    case 0xC1E2F3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:84 DEC
    case 0xC1E2F5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:85 JSL UNKNOWN_C208B8
    case 0xC1E2F6: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C1/C1E48D-jp.asm:86 STA @LOCAL00
    case 0xC1E2FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:87 CMP #96
    case 0xC1E2FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:87 CMP #96
    // Overlapping static entry reached from 0xC1E2FC.
    case 0xC1E2FE: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:88 BCS @UNKNOWN6
    case 0xC1E2FF: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:89 JMP @UNKNOWN8
    case 0xC1E301: cpu.execute_instruction<0x4C>(0x00E3A1, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:91 AND #$000F
    case 0xC1E304: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:91 AND #$000F
    // Overlapping static entry reached from 0xC1E304.
    case 0xC1E306: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:92 TAX
    case 0xC1E307: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:93 CPX #2
    case 0xC1E308: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:93 CPX #2
    // Overlapping static entry reached from 0xC1E308.
    case 0xC1E30A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:94 BEQ @UNKNOWN7
    case 0xC1E30B: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:95 CPX #4
    case 0xC1E30D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:95 CPX #4
    // Overlapping static entry reached from 0xC1E30D.
    case 0xC1E30F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:96 BEQ @UNKNOWN7
    case 0xC1E310: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:97 CPX #6
    case 0xC1E312: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:97 CPX #6
    // Overlapping static entry reached from 0xC1E312.
    case 0xC1E314: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:98 BEQ @UNKNOWN7
    case 0xC1E315: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:99 CPX #9
    case 0xC1E317: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000009, 2); else cpu.execute_instruction<0xE0>(0x000009, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:99 CPX #9
    // Overlapping static entry reached from 0xC1E317.
    case 0xC1E319: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:100 BEQ @UNKNOWN7
    case 0xC1E31A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:101 JMP @UNKNOWN8
    case 0xC1E31C: cpu.execute_instruction<0x4C>(0x00E3A1, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:103 LDA @VIRTUAL02
    case 0xC1E31F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:104 CLC
    case 0xC1E321: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:105 ADC #window_stats::text_x
    case 0xC1E322: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:105 ADC #window_stats::text_x
    // Overlapping static entry reached from 0xC1E322.
    case 0xC1E324: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:106 TAX
    case 0xC1E325: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:107 LDA __BSS_START__,X
    case 0xC1E326: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:108 DEC
    case 0xC1E329: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:109 STA __BSS_START__,X
    case 0xC1E32A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:110 LDA @LOCAL00
    case 0xC1E32D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:111 INC
    case 0xC1E32F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:112 JSR PRINT_LETTER
    case 0xC1E330: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:113 BRA @UNKNOWN8
    case 0xC1E333: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:115 LDA @VIRTUAL02
    case 0xC1E335: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:116 CLC
    case 0xC1E337: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:117 ADC #window_stats::text_x
    case 0xC1E338: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:117 ADC #window_stats::text_x
    // Overlapping static entry reached from 0xC1E338.
    case 0xC1E33A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:118 TAY
    case 0xC1E33B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:119 STY @LOCAL03
    case 0xC1E33C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:120 LDA __BSS_START__,Y
    case 0xC1E33E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:121 STA @LOCAL01
    case 0xC1E341: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:122 BEQ @UNKNOWN8
    case 0xC1E343: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:123 LDX @VIRTUAL02
    case 0xC1E345: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:124 LDA a:window_stats::text_y,X
    case 0xC1E347: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:125 TAX
    case 0xC1E34A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:126 LDA @LOCAL01
    case 0xC1E34B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:127 DEC
    case 0xC1E34D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:128 JSL UNKNOWN_C208B8
    case 0xC1E34E: cpu.execute_instruction<0x22>(0xC20859, 4); return true;
    // src/unknown/C1/C1E48D-jp.asm:129 STA @LOCAL02
    case 0xC1E352: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:130 CMP #96
    case 0xC1E354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:130 CMP #96
    // Overlapping static entry reached from 0xC1E354.
    case 0xC1E356: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:131 BLTEQ @UNKNOWN8
    case 0xC1E357: cpu.execute_instruction<0x90>(0x000048, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1E48D-jp.asm:131 BLTEQ @UNKNOWN8
    case 0xC1E359: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:132 AND #$000F
    case 0xC1E35B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:132 AND #$000F
    // Overlapping static entry reached from 0xC1E35B.
    case 0xC1E35D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:133 CMP #9
    case 0xC1E35E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:133 CMP #9
    // Overlapping static entry reached from 0xC1E35E.
    case 0xC1E360: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:134 BNE @UNKNOWN8
    case 0xC1E361: cpu.execute_instruction<0xD0>(0x00003E, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:135 LDY @LOCAL03
    case 0xC1E363: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:136 LDA __BSS_START__,Y
    case 0xC1E365: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:137 DEC
    case 0xC1E368: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:138 STA __BSS_START__,Y
    case 0xC1E369: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:139 LDA @LOCAL02
    case 0xC1E36C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:140 INC
    case 0xC1E36E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:141 INC
    case 0xC1E36F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:142 JSR PRINT_LETTER
    case 0xC1E370: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:143 BRA @UNKNOWN8
    case 0xC1E373: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:145 LDA @VIRTUAL02
    case 0xC1E375: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:146 CLC
    case 0xC1E377: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:147 ADC #window_stats::text_x
    case 0xC1E378: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:147 ADC #window_stats::text_x
    // Overlapping static entry reached from 0xC1E378.
    case 0xC1E37A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:148 TAX
    case 0xC1E37B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:149 STX @LOCAL02
    case 0xC1E37C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:150 LDA __BSS_START__,X
    case 0xC1E37E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:151 CMP @VIRTUAL04
    case 0xC1E381: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:152 BCS @UNKNOWN8
    case 0xC1E383: cpu.execute_instruction<0xB0>(0x00001C, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:153 TYA
    case 0xC1E385: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:154 JSR PRINT_LETTER
    case 0xC1E386: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:155 LDX @LOCAL02
    case 0xC1E389: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:156 LDA __BSS_START__,X
    case 0xC1E38B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:157 CMP @VIRTUAL04
    case 0xC1E38E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:158 BCS @UNKNOWN8
    case 0xC1E390: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:159 LDA #CHAR::BULLET
    case 0xC1E392: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:159 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E392.
    case 0xC1E394: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:160 JSR PRINT_LETTER
    case 0xC1E395: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:161 LDX @LOCAL02
    case 0xC1E398: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:162 LDA __BSS_START__,X
    case 0xC1E39A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:163 DEC
    case 0xC1E39D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:164 STA __BSS_START__,X
    case 0xC1E39E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:166 LDX #0
    case 0xC1E3A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:166 LDX #0
    // Overlapping static entry reached from 0xC1E3A1.
    case 0xC1E3A3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:167 STX @LOCAL01
    case 0xC1E3A4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:169 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E3A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:169 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E3A6.
    case 0xC1E3A8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:170 JSR SET_WINDOW_FOCUS
    case 0xC1E3A9: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1E48D-jp.asm:171 LDX @LOCAL01
    case 0xC1E3AC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D-jp.asm:172 TXA
    case 0xC1E3AE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:173 PLD
    case 0xC1E3AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D-jp.asm:174 RTS
    case 0xC1E3B0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1E4BE-jp.asm (unresolved).
bool execute_unresolved_c1_c1e4be_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1E3B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3B5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E3B6.
    case 0xC1E3B8: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:15 END_STACK_VARS
    case 0xC1E3BA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:16 STY @VIRTUAL02
    case 0xC1E3BB: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:16 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1E3B8.
    case 0xC1E3BC: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:17 STX @LOCAL05
    case 0xC1E3BD: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:18 TAX
    case 0xC1E3BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:19 STX @LOCAL04
    case 0xC1E3C0: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:20 JSR SET_INSTANT_PRINTING
    case 0xC1E3C2: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:21 LDX @LOCAL04
    case 0xC1E3C5: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:22 TXA
    case 0xC1E3C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:23 JSR CREATE_WINDOW
    case 0xC1E3C8: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E3CB: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:25 ASL
    case 0xC1E3CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:26 TAX
    case 0xC1E3CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:27 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E3D0: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:28 LDY #.SIZEOF(window_stats)
    case 0xC1E3D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:28 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E3D3.
    case 0xC1E3D5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:29 JSL MULT168
    case 0xC1E3D6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1E4BE-jp.asm:30 CLC
    case 0xC1E3DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:31 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E3DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:31 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E3DB.
    case 0xC1E3DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:32 STA @VIRTUAL04
    case 0xC1E3DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:32 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E3DD.
    case 0xC1E3DF: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:33 STA @LOCAL04
    case 0xC1E3E0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:33 STA @LOCAL04
    // Overlapping static entry reached from 0xC1E3DF.
    case 0xC1E3E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:34 LDA #CHAR::BULLET
    case 0xC1E3E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:34 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E3E2.
    case 0xC1E3E4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:35 JSR PRINT_LETTER
    case 0xC1E3E5: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:36 LDA #4
    case 0xC1E3E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:36 LDA #4
    // Overlapping static entry reached from 0xC1E3E8.
    case 0xC1E3EA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:37 CLC
    case 0xC1E3EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:38 SBC @LOCAL05
    case 0xC1E3EC: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:39 BRANCHLTEQS @UNKNOWN2
    case 0xC1E3EE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:39 BRANCHLTEQS @UNKNOWN2
    case 0xC1E3F0: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:39 BRANCHLTEQS @UNKNOWN2
    case 0xC1E3F2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:39 BRANCHLTEQS @UNKNOWN2
    case 0xC1E3F4: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:40 LDX #4
    case 0xC1E3F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:40 LDX #4
    // Overlapping static entry reached from 0xC1E3F6.
    case 0xC1E3F8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:41 BRA @UNKNOWN3
    case 0xC1E3F9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:43 LDX #6
    case 0xC1E3FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:43 LDX #6
    // Overlapping static entry reached from 0xC1E3FB.
    case 0xC1E3FD: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:45 TXY
    case 0xC1E3FE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:46 STY @LOCAL03
    case 0xC1E3FF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:47 TYX
    case 0xC1E401: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:48 DEX
    case 0xC1E402: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:49 STX @LOCAL02
    case 0xC1E403: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:50 BRA @UNKNOWN3_3
    case 0xC1E405: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:52 LDA #CHAR::PLACEHOLDER
    case 0xC1E407: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00005C, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:52 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1E407.
    case 0xC1E409: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:53 JSR PRINT_LETTER
    case 0xC1E40A: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:54 LDX @LOCAL02
    case 0xC1E40D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:55 DEX
    case 0xC1E40F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:56 STX @LOCAL02
    case 0xC1E410: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:58 BNE @UNKNOWN3_2
    case 0xC1E412: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:59 LDX @VIRTUAL04
    case 0xC1E414: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:60 LDA a:window_stats::text_y,X
    case 0xC1E416: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:61 TAX
    case 0xC1E419: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:62 LDA #0
    case 0xC1E41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:62 LDA #0
    // Overlapping static entry reached from 0xC1E41A.
    case 0xC1E41C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:63 JSR UNKNOWN_C438A5
    case 0xC1E41D: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:64 LDA @VIRTUAL02
    case 0xC1E420: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:65 CMP #6
    case 0xC1E422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:65 CMP #6
    // Overlapping static entry reached from 0xC1E422.
    case 0xC1E424: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:66 BNE @UNKNOWN4
    case 0xC1E425: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:67 LDX #0
    case 0xC1E427: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:67 LDX #0
    // Overlapping static entry reached from 0xC1E427.
    case 0xC1E429: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:68 BRA @UNKNOWN5
    case 0xC1E42A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:70 LDX @VIRTUAL02
    case 0xC1E42C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:71 INX
    case 0xC1E42E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:73 STX @LOCAL01
    case 0xC1E42F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    case 0xC1E431: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00F42F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E431.
    case 0xC1E433: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    case 0xC1E434: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    case 0xC1E436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E436.
    case 0xC1E438: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:74 LOADPTR DONT_CARE_NAMES, @VIRTUAL06
    case 0xC1E439: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:75 TXA
    case 0xC1E43B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E43C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E43E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E43F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E441: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:77 STA @VIRTUAL02
    case 0xC1E442: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:78 LDA @LOCAL05
    case 0xC1E444: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:670 STA scratch
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E446: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:671 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E448: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:672 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E449: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:673 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E44A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:674 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E44C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:675 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E44D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:676 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E44E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:677 ASL
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:79 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:80 CLC
    case 0xC1E451: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:81 ADC @VIRTUAL02
    case 0xC1E452: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:82 CLC
    case 0xC1E454: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:83 ADC @VIRTUAL06
    case 0xC1E455: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:84 STA @VIRTUAL06
    case 0xC1E457: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:85 STA @LOCAL00
    case 0xC1E459: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:86 LDA @VIRTUAL06+2
    case 0xC1E45B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:87 STA @LOCAL00+2
    case 0xC1E45D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:88 LDA #6
    case 0xC1E45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:88 LDA #6
    // Overlapping static entry reached from 0xC1E45F.
    case 0xC1E461: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:89 JSR PRINT_STRING
    case 0xC1E462: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:90 LDA @LOCAL04
    case 0xC1E465: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:91 STA @VIRTUAL04
    case 0xC1E467: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:92 CLC
    case 0xC1E469: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:93 ADC #14
    case 0xC1E46A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:93 ADC #14
    // Overlapping static entry reached from 0xC1E46A.
    case 0xC1E46C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:94 STA @VIRTUAL02
    case 0xC1E46D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:95 LDY @LOCAL03
    case 0xC1E46F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:96 STY @VIRTUAL04
    case 0xC1E471: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:97 LDX @VIRTUAL02
    case 0xC1E473: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:98 LDA __BSS_START__,X
    case 0xC1E475: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:99 CMP @VIRTUAL04
    case 0xC1E478: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:100 BCS @UNKNOWN6
    case 0xC1E47A: cpu.execute_instruction<0xB0>(0x000011, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:101 LDA #CHAR::BULLET
    case 0xC1E47C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:101 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E47C.
    case 0xC1E47E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:102 JSR PRINT_LETTER
    case 0xC1E47F: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:103 LDX @VIRTUAL02
    case 0xC1E482: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:104 LDA __BSS_START__,X
    case 0xC1E484: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:105 DEC
    case 0xC1E487: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE-jp.asm:106 LDX @VIRTUAL02
    case 0xC1E488: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:107 STA __BSS_START__,X
    case 0xC1E48A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:109 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E48D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:109 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E48D.
    case 0xC1E48F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:110 JSR SET_WINDOW_FOCUS
    case 0xC1E490: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1E4BE-jp.asm:111 LDX @LOCAL01
    case 0xC1E493: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE-jp.asm:112 TXA
    case 0xC1E495: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:113 END_C_FUNCTION
    case 0xC1E496: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1E4BE-jp.asm:113 END_C_FUNCTION
    case 0xC1E497: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1EC8F-jp.asm (unresolved).
bool execute_unresolved_c1_c1ec8f_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1EBF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBFA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EBFB.
    case 0xC1EBFD: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBFE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:8 END_STACK_VARS
    case 0xC1EBFF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1EC8F-jp.asm:9 TAX
    case 0xC1EC00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1EC8F-jp.asm:10 STX @LOCAL01
    case 0xC1EC01: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:11 LDA #.LOWORD(GAME_STATE)+game_state::text_flavour
    case 0xC1EC03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009C7E, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:11 LDA #.LOWORD(GAME_STATE)+game_state::text_flavour
    // Overlapping static entry reached from 0xC1EC03.
    case 0xC1EC05: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:12 STA @VIRTUAL02
    case 0xC1EC06: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:13 LDX @VIRTUAL02
    case 0xC1EC08: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EC0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:15 LDA __BSS_START__,X
    case 0xC1EC0C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:16 STA @VIRTUAL00
    case 0xC1EC0F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:17 LDX @LOCAL01
    case 0xC1EC11: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC1EC13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:19 TXA
    case 0xC1EC15: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1EC8F-jp.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EC16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:21 LDX @VIRTUAL02
    case 0xC1EC18: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:22 STA __BSS_START__,X
    case 0xC1EC1A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:23 JSL LOAD_WINDOW_GFX
    case 0xC1EC1D: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC21.
    case 0xC1EC23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC26.
    case 0xC1EC28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC29: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC2B.
    case 0xC1EC2D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC2E.
    case 0xC1EC30: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC1EC35: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC33.
    case 0xC1EC36: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:25 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC1EC36.
    case 0xC1EC38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:26 JSL UNKNOWN_C47F87
    case 0xC1EC39: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/unknown/C1/C1EC8F-jp.asm:26 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC1EC38.
    case 0xC1EC3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1EC8F-jp.asm:26 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC1EC38.
    case 0xC1EC3B: cpu.execute_instruction<0x5C>(0x20E2C4, 4); return true;
    // src/unknown/C1/C1EC8F-jp.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EC3D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:28 LDA #PALETTE_UPLOAD::FULL
    case 0xC1EC3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:29 STA PALETTE_UPLOAD_MODE
    case 0xC1EC41: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:29 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC1EC3F.
    case 0xC1EC42: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:30 LDA @VIRTUAL00
    case 0xC1EC44: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:31 LDX @VIRTUAL02
    case 0xC1EC46: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1EC8F-jp.asm:32 STA __BSS_START__,X
    case 0xC1EC48: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F-jp.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC1EC4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:34 END_C_FUNCTION
    case 0xC1EC4D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1EC8F-jp.asm:34 END_C_FUNCTION
    case 0xC1EC4E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ECD1.asm (unresolved).
bool execute_unresolved_c1_c1ecd1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ECD1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1EC4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ECD1.asm:5 XBA
    case 0xC1EC51: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C1/C1ECD1.asm:6 AND #$00FF
    case 0xC1EC52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1ECD1.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC1EC52.
    case 0xC1EC54: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1ECD1.asm:7 JSL UNKNOWN_C1EC8F
    case 0xC1EC55: cpu.execute_instruction<0x22>(0xC1EBF6, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ECD1.asm:8 END_C_FUNCTION
    case 0xC1EC59: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F07E-jp.asm (unresolved).
bool execute_unresolved_c1_c1f07e_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1EF83: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:8 END_STACK_VARS
    case 0xC1EF85: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:8 END_STACK_VARS
    case 0xC1EF86: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:8 END_STACK_VARS
    case 0xC1EF87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EF87.
    case 0xC1EF89: cpu.execute_instruction<0xFF>(0x14A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:8 END_STACK_VARS
    case 0xC1EF8A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1EF8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1EF8B.
    case 0xC1EF8D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1EF8E: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1EF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x0094BA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1EF91.
    case 0xC1EF93: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1EF94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1EF93.
    case 0xC1EF95: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1EF96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1EF96.
    case 0xC1EF98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1EF99: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EF9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EF9B.
    case 0xC1EF9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EF9E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EFA0.
    case 0xC1EFA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFA3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:12 LDY #0
    case 0xC1EFA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:12 LDY #0
    // Overlapping static entry reached from 0xC1EFA5.
    case 0xC1EFA7: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:13 TYX
    case 0xC1EFA8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E-jp.asm:14 LDA #1
    case 0xC1EFA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:14 LDA #1
    // Overlapping static entry reached from 0xC1EFA9.
    case 0xC1EFAB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:15 JSR UNKNOWN_C1153B
    case 0xC1EFAC: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:16 LDX #0
    case 0xC1EFAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:16 LDX #0
    // Overlapping static entry reached from 0xC1EFAF.
    case 0xC1EFB1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:17 BRA @UNKNOWN2
    case 0xC1EFB2: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:19 LDA CURRENT_SAVE_SLOT
    case 0xC1EFB4: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:20 AND #$00FF
    case 0xC1EFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1EFB7.
    case 0xC1EFB9: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:21 DEC
    case 0xC1EFBA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E-jp.asm:22 STA @VIRTUAL02
    case 0xC1EFBB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:23 TXA
    case 0xC1EFBD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E-jp.asm:24 CMP @VIRTUAL02
    case 0xC1EFBE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:25 BEQ @UNKNOWN1
    case 0xC1EFC0: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:26 LDA SAVE_FILES_PRESENT,X
    case 0xC1EFC2: cpu.execute_instruction<0xBD>(0x00B672, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:27 AND #$00FF
    case 0xC1EFC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1EFC5.
    case 0xC1EFC7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:28 BNE @UNKNOWN1
    case 0xC1EFC8: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1EFCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BE, 2); else cpu.execute_instruction<0xA9>(0x0094BE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1EFCA.
    case 0xC1EFCC: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1EFCD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1EFCC.
    case 0xC1EFCE: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1EFCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1EFCF.
    case 0xC1EFD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1EFD2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EFD4.
    case 0xC1EFD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFD7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EFD9.
    case 0xC1EFDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EFDC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:31 LDY #0
    case 0xC1EFDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:31 LDY #0
    // Overlapping static entry reached from 0xC1EFDE.
    case 0xC1EFE0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:32 LDX #5
    case 0xC1EFE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:32 LDX #5
    // Overlapping static entry reached from 0xC1EFE1.
    case 0xC1EFE3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:33 LDA #2
    case 0xC1EFE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:33 LDA #2
    // Overlapping static entry reached from 0xC1EFE4.
    case 0xC1EFE6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:34 JSR UNKNOWN_C1153B
    case 0xC1EFE7: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:35 BRA @UNKNOWN4
    case 0xC1EFEA: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:37 INX
    case 0xC1EFEC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E-jp.asm:39 STX @VIRTUAL02
    case 0xC1EFED: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:40 LDA #3
    case 0xC1EFEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:40 LDA #3
    // Overlapping static entry reached from 0xC1EFEF.
    case 0xC1EFF1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:41 CLC
    case 0xC1EFF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E-jp.asm:42 SBC @VIRTUAL02
    case 0xC1EFF3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1EFF5: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1EFF7: cpu.execute_instruction<0x10>(0x0000BB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1EFF9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1EFFB: cpu.execute_instruction<0x30>(0x0000B7, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1EFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EFFD.
    case 0xC1EFFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F000: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F002.
    case 0xC1F004: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F005: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F007: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0094C2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F007.
    case 0xC1F009: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F00A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F009.
    case 0xC1F00B: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F00C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F00C.
    case 0xC1F00E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F00F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F011: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F013: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F015: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F017: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:48 LDY #0
    case 0xC1F019: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:48 LDY #0
    // Overlapping static entry reached from 0xC1F019.
    case 0xC1F01B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:49 LDX #10
    case 0xC1F01C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:49 LDX #10
    // Overlapping static entry reached from 0xC1F01C.
    case 0xC1F01E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:50 LDA #3
    case 0xC1F01F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:50 LDA #3
    // Overlapping static entry reached from 0xC1F01F.
    case 0xC1F021: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:51 JSR UNKNOWN_C1153B
    case 0xC1F022: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F025: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0094C5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F025.
    case 0xC1F027: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F028: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F027.
    case 0xC1F029: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F02A.
    case 0xC1F02C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F02D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F02F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F031: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F033: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F035: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:54 LDY #0
    case 0xC1F037: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:54 LDY #0
    // Overlapping static entry reached from 0xC1F037.
    case 0xC1F039: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:55 LDX #14
    case 0xC1F03A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:55 LDX #14
    // Overlapping static entry reached from 0xC1F03A.
    case 0xC1F03C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:56 LDA #4
    case 0xC1F03D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:56 LDA #4
    // Overlapping static entry reached from 0xC1F03D.
    case 0xC1F03F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:57 JSR UNKNOWN_C1153B
    case 0xC1F040: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:58 JSR PRINT_MENU_ITEMS
    case 0xC1F043: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:59 LDA #1
    case 0xC1F046: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F07E-jp.asm:59 LDA #1
    // Overlapping static entry reached from 0xC1F046.
    case 0xC1F048: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E-jp.asm:60 JSR SELECTION_MENU
    case 0xC1F049: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:61 END_C_FUNCTION
    case 0xC1F04C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F07E-jp.asm:61 END_C_FUNCTION
    case 0xC1F04D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F14F-jp.asm (unresolved).
bool execute_unresolved_c1_c1f14f_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F04E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:9 END_STACK_VARS
    case 0xC1F050: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:9 END_STACK_VARS
    case 0xC1F051: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:9 END_STACK_VARS
    case 0xC1F052: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F052.
    case 0xC1F054: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:9 END_STACK_VARS
    case 0xC1F055: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:10 LDX #0
    case 0xC1F056: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:10 LDX #0
    // Overlapping static entry reached from 0xC1F056.
    case 0xC1F058: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:11 TXY
    case 0xC1F059: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:12 BRA @UNKNOWN2
    case 0xC1F05A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:14 LDA SAVE_FILES_PRESENT,X
    case 0xC1F05C: cpu.execute_instruction<0xBD>(0x00B672, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:15 AND #$00FF
    case 0xC1F05F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC1F05F.
    case 0xC1F061: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:16 BNE @UNKNOWN1
    case 0xC1F062: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:17 INY
    case 0xC1F064: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:19 INX
    case 0xC1F065: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:21 STX @VIRTUAL02
    case 0xC1F066: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:22 LDA #3
    case 0xC1F068: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:22 LDA #3
    // Overlapping static entry reached from 0xC1F068.
    case 0xC1F06A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:23 CLC
    case 0xC1F06B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:24 SBC @VIRTUAL02
    case 0xC1F06C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F06E: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F070: cpu.execute_instruction<0x10>(0x0000EA, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F072: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F074: cpu.execute_instruction<0x30>(0x0000E6, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:26 CPY #1
    case 0xC1F076: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:26 CPY #1
    // Overlapping static entry reached from 0xC1F076.
    case 0xC1F078: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:27 BNEL @UNKNOWN11
    case 0xC1F079: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:27 BNEL @UNKNOWN11
    case 0xC1F07B: cpu.execute_instruction<0x4C>(0x00F0FC, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    case 0xC1F07E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    // Overlapping static entry reached from 0xC1F07E.
    case 0xC1F080: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    case 0xC1F081: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1F084: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0094CA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F087.
    case 0xC1F089: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F08A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F089.
    case 0xC1F08B: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F08C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F08C.
    case 0xC1F08E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F08F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:31 LDA #11
    case 0xC1F091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:31 LDA #11
    // Overlapping static entry reached from 0xC1F091.
    case 0xC1F093: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:32 JSR PRINT_STRING
    case 0xC1F094: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:33 LDA #0
    case 0xC1F097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:33 LDA #0
    // Overlapping static entry reached from 0xC1F097.
    case 0xC1F099: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:34 STA @VIRTUAL02
    case 0xC1F09A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:35 BRA @UNKNOWN8
    case 0xC1F09C: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:37 LDX @VIRTUAL02
    case 0xC1F09E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:38 LDA SAVE_FILES_PRESENT,X
    case 0xC1F0A0: cpu.execute_instruction<0xBD>(0x00B672, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:39 AND #$00FF
    case 0xC1F0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1F0A3.
    case 0xC1F0A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:40 BNE @UNKNOWN7
    case 0xC1F0A6: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:41 LDA @VIRTUAL02
    case 0xC1F0A8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F0AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:43 CLC
    case 0xC1F0AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:44 ADC #CHAR::ONE
    case 0xC1F0AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:45 STA TEMPORARY_TEXT_BUFFER
    case 0xC1F0AF: cpu.execute_instruction<0x8D>(0x009F4A, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:45 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F0AD.
    case 0xC1F0B0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:45 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F0B0.
    case 0xC1F0B1: cpu.execute_instruction<0x9F>(0x8D5BA9, 4); return true;
    // src/unknown/C1/C1F14F-jp.asm:46 LDA #CHAR::COLON
    case 0xC1F0B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x008D5B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:47 STA TEMPORARY_TEXT_BUFFER+1
    case 0xC1F0B4: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:47 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F0B2.
    case 0xC1F0B5: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:47 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F0B5.
    case 0xC1F0B6: cpu.execute_instruction<0x9F>(0x9F4C9C, 4); return true;
    // src/unknown/C1/C1F14F-jp.asm:48 STZ TEMPORARY_TEXT_BUFFER+2
    case 0xC1F0B7: cpu.execute_instruction<0x9C>(0x009F4C, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1F0BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F0BC.
    case 0xC1F0BE: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0C1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F0C7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC1F0C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F0CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F0CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F0CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F0D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F0D3.
    case 0xC1F0D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F0D8.
    case 0xC1F0DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0DB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:54 LDY #1
    case 0xC1F0DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:54 LDY #1
    // Overlapping static entry reached from 0xC1F0DD.
    case 0xC1F0DF: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:55 LDX #0
    case 0xC1F0E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:55 LDX #0
    // Overlapping static entry reached from 0xC1F0E0.
    case 0xC1F0E2: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:56 LDA @VIRTUAL02
    case 0xC1F0E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:57 INC
    case 0xC1F0E5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:58 JSR UNKNOWN_C1153B
    case 0xC1F0E6: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:60 INC @VIRTUAL02
    case 0xC1F0E9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:62 LDA #3
    case 0xC1F0EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:62 LDA #3
    // Overlapping static entry reached from 0xC1F0EB.
    case 0xC1F0ED: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:63 CLC
    case 0xC1F0EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:64 SBC @VIRTUAL02
    case 0xC1F0EF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F0F1: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F0F3: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F0F5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F0F7: cpu.execute_instruction<0x30>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:66 JMP @UNKNOWN16
    case 0xC1F0F9: cpu.execute_instruction<0x4C>(0x00F17E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    case 0xC1F0FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    // Overlapping static entry reached from 0xC1F0FC.
    case 0xC1F0FE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    case 0xC1F0FF: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:69 JSR SET_INSTANT_PRINTING
    case 0xC1F102: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F105: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0094CA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F105.
    case 0xC1F107: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F108: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F107.
    case 0xC1F109: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F10A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F10A.
    case 0xC1F10C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F10D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:71 LDA #11
    case 0xC1F10F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:71 LDA #11
    // Overlapping static entry reached from 0xC1F10F.
    case 0xC1F111: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:72 JSR PRINT_STRING
    case 0xC1F112: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:73 LDA #0
    case 0xC1F115: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1F115.
    case 0xC1F117: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:74 STA @VIRTUAL02
    case 0xC1F118: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:75 LDA #1
    case 0xC1F11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:75 LDA #1
    // Overlapping static entry reached from 0xC1F11A.
    case 0xC1F11C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:76 STA @VIRTUAL04
    case 0xC1F11D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:77 BRA @UNKNOWN14
    case 0xC1F11F: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:79 LDX @VIRTUAL02
    case 0xC1F121: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:80 LDA SAVE_FILES_PRESENT,X
    case 0xC1F123: cpu.execute_instruction<0xBD>(0x00B672, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:81 AND #$00FF
    case 0xC1F126: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F126.
    case 0xC1F128: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:82 BNE @UNKNOWN13
    case 0xC1F129: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:83 LDA @VIRTUAL02
    case 0xC1F12B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F12D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:85 CLC
    case 0xC1F12F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:86 ADC #CHAR::ONE
    case 0xC1F130: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:87 STA TEMPORARY_TEXT_BUFFER
    case 0xC1F132: cpu.execute_instruction<0x8D>(0x009F4A, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:87 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F130.
    case 0xC1F133: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:87 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F133.
    case 0xC1F134: cpu.execute_instruction<0x9F>(0x8D5BA9, 4); return true;
    // src/unknown/C1/C1F14F-jp.asm:88 LDA #CHAR::COLON
    case 0xC1F135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x008D5B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:89 STA TEMPORARY_TEXT_BUFFER+1
    case 0xC1F137: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:89 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F135.
    case 0xC1F138: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:89 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F138.
    case 0xC1F139: cpu.execute_instruction<0x9F>(0x9F4C9C, 4); return true;
    // src/unknown/C1/C1F14F-jp.asm:90 STZ TEMPORARY_TEXT_BUFFER+2
    case 0xC1F13A: cpu.execute_instruction<0x9C>(0x009F4C, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:91 LDX @VIRTUAL04
    case 0xC1F13D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1F13F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:93 INC @VIRTUAL04
    case 0xC1F141: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F143.
    case 0xC1F145: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F146: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F148: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F149: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F14B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F14C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F14E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC1F150: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F152: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F154: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F156: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F158: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F15A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F15A.
    case 0xC1F15C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F15D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F15F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F15F.
    case 0xC1F161: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F162: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:98 TXY
    case 0xC1F164: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:99 LDX #0
    case 0xC1F165: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:99 LDX #0
    // Overlapping static entry reached from 0xC1F165.
    case 0xC1F167: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:100 LDA @VIRTUAL02
    case 0xC1F168: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:101 INC
    case 0xC1F16A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:102 JSR UNKNOWN_C1153B
    case 0xC1F16B: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:104 INC @VIRTUAL02
    case 0xC1F16E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:106 LDA #3
    case 0xC1F170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:106 LDA #3
    // Overlapping static entry reached from 0xC1F170.
    case 0xC1F172: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:107 CLC
    case 0xC1F173: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:108 SBC @VIRTUAL02
    case 0xC1F174: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F176: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F178: cpu.execute_instruction<0x10>(0x0000A7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F17A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F17C: cpu.execute_instruction<0x30>(0x0000A3, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:111 JSR PRINT_MENU_ITEMS
    case 0xC1F17E: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:112 LDA #1
    case 0xC1F181: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:112 LDA #1
    // Overlapping static entry reached from 0xC1F181.
    case 0xC1F183: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:113 JSR SELECTION_MENU
    case 0xC1F184: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:114 TAY
    case 0xC1F187: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:115 STY @LOCAL02
    case 0xC1F188: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:116 BEQ @UNKNOWN17
    case 0xC1F18A: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:117 LDA CURRENT_SAVE_SLOT
    case 0xC1F18C: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:118 AND #$00FF
    case 0xC1F18F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC1F18F.
    case 0xC1F191: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:119 TAX
    case 0xC1F192: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:120 DEX
    case 0xC1F193: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:121 TYA
    case 0xC1F194: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:122 DEC
    case 0xC1F195: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F-jp.asm:123 JSL COPY_SAVE
    case 0xC1F196: cpu.execute_instruction<0x22>(0xC0FB1B, 4); return true;
    // src/unknown/C1/C1F14F-jp.asm:125 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F19A: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1F14F-jp.asm:126 LDY @LOCAL02
    case 0xC1F19D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1F14F-jp.asm:127 TYA
    case 0xC1F19F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:128 END_C_FUNCTION
    case 0xC1F1A0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F14F-jp.asm:128 END_C_FUNCTION
    case 0xC1F1A1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F2A8-jp.asm (unresolved).
bool execute_unresolved_c1_c1f2a8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F1A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:9 END_STACK_VARS
    case 0xC1F1A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:9 END_STACK_VARS
    case 0xC1F1A5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:9 END_STACK_VARS
    case 0xC1F1A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F1A6.
    case 0xC1F1A8: cpu.execute_instruction<0xFF>(0x17A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:9 END_STACK_VARS
    case 0xC1F1A9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    case 0xC1F1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    // Overlapping static entry reached from 0xC1F1AA.
    case 0xC1F1AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    case 0xC1F1AD: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1F1B0: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:12 LDA #0
    case 0xC1F1B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:12 LDA #0
    // Overlapping static entry reached from 0xC1F1B3.
    case 0xC1F1B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:13 JSR UNKNOWN_C10EB4
    case 0xC1F1B6: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F1B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:15 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F1BB: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:15 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F1BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:15 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F1C0: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:15 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F1C2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:15 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F1C4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC1F1C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:18 JSR PRINT_NUMBER
    case 0xC1F1D0: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:19 LDA #CHAR::COLON
    case 0xC1F1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00005B, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:19 LDA #CHAR::COLON
    // Overlapping static entry reached from 0xC1F1D3.
    case 0xC1F1D5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:20 JSR PRINT_LETTER
    case 0xC1F1D6: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:21 LDA #CHAR::SPACE
    case 0xC1F1D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:21 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1F1D9.
    case 0xC1F1DB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:22 JSR PRINT_LETTER
    case 0xC1F1DC: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:23 LDA #1
    case 0xC1F1DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:23 LDA #1
    // Overlapping static entry reached from 0xC1F1DF.
    case 0xC1F1E1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:24 JSR UNKNOWN_C1931B
    case 0xC1F1E2: cpu.execute_instruction<0x20>(0x00940D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F1E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0094A3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F1E5.
    case 0xC1F1E7: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F1E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F1E7.
    case 0xC1F1E9: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F1EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F1EA.
    case 0xC1F1EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:25 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F1ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:26 LDA #5
    case 0xC1F1EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:26 LDA #5
    // Overlapping static entry reached from 0xC1F1EF.
    case 0xC1F1F1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:27 JSR PRINT_STRING
    case 0xC1F1F2: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:28 LDA #1
    case 0xC1F1F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:28 LDA #1
    // Overlapping static entry reached from 0xC1F1F5.
    case 0xC1F1F7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:29 JSR UNKNOWN_C10EB4
    case 0xC1F1F8: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F1FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:31 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F1FD: cpu.execute_instruction<0xAD>(0x009C83, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:31 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F200: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:31 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F202: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:31 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F204: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:31 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F206: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC1F208: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F20A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F20C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F20E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F210: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:34 JSR PRINT_NUMBER
    case 0xC1F212: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:35 LDX #1
    case 0xC1F215: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:35 LDX #1
    // Overlapping static entry reached from 0xC1F215.
    case 0xC1F217: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:36 LDA #0
    case 0xC1F218: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F218.
    case 0xC1F21A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:37 JSR UNKNOWN_C438A5
    case 0xC1F21B: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F21E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0094D5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F21E.
    case 0xC1F220: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F221: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F220.
    case 0xC1F222: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F223.
    case 0xC1F225: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:38 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F226: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:39 LDA #13
    case 0xC1F228: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:39 LDA #13
    // Overlapping static entry reached from 0xC1F228.
    case 0xC1F22A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:40 JSR PRINT_STRING
    case 0xC1F22B: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F22E.
    case 0xC1F230: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F231: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F233.
    case 0xC1F235: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:41 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F236: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x0094E2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F238.
    case 0xC1F23A: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F23B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F23A.
    case 0xC1F23C: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F23D.
    case 0xC1F23F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:42 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F240: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F242: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F244: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F246: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F248: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:44 LDY #2
    case 0xC1F24A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:44 LDY #2
    // Overlapping static entry reached from 0xC1F24A.
    case 0xC1F24C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:45 LDX #0
    case 0xC1F24D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:45 LDX #0
    // Overlapping static entry reached from 0xC1F24D.
    case 0xC1F24F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:46 TXA
    case 0xC1F250: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8-jp.asm:47 JSR UNKNOWN_C1153B
    case 0xC1F251: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F254: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0094E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F254.
    case 0xC1F256: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F257: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F256.
    case 0xC1F258: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F259.
    case 0xC1F25B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:48 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F25C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F25E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F260: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F262: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F264: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:50 LDY #3
    case 0xC1F266: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:50 LDY #3
    // Overlapping static entry reached from 0xC1F266.
    case 0xC1F268: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:51 LDX #0
    case 0xC1F269: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:51 LDX #0
    // Overlapping static entry reached from 0xC1F269.
    case 0xC1F26B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:52 LDA #1
    case 0xC1F26C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:52 LDA #1
    // Overlapping static entry reached from 0xC1F26C.
    case 0xC1F26E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:53 JSR UNKNOWN_C1153B
    case 0xC1F26F: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:54 JSR PRINT_MENU_ITEMS
    case 0xC1F272: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:55 LDA #1
    case 0xC1F275: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:55 LDA #1
    // Overlapping static entry reached from 0xC1F275.
    case 0xC1F277: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:56 JSR SELECTION_MENU
    case 0xC1F278: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:57 TAX
    case 0xC1F27B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8-jp.asm:58 STX @LOCAL02
    case 0xC1F27C: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:59 BEQ @UNKNOWN0
    case 0xC1F27E: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:60 LDA CURRENT_SAVE_SLOT
    case 0xC1F280: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:61 AND #$00FF
    case 0xC1F283: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1F283.
    case 0xC1F285: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:62 DEC
    case 0xC1F286: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8-jp.asm:63 JSL ERASE_SAVE
    case 0xC1F287: cpu.execute_instruction<0x22>(0xC0FB00, 4); return true;
    // src/unknown/C1/C1F2A8-jp.asm:65 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F28B: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1F2A8-jp.asm:66 LDX @LOCAL02
    case 0xC1F28E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1F2A8-jp.asm:67 TXA
    case 0xC1F290: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:68 END_C_FUNCTION
    case 0xC1F291: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F2A8-jp.asm:68 END_C_FUNCTION
    case 0xC1F292: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1FF2C.asm (unresolved).
bool execute_unresolved_c1_c1ff2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1FF2C.asm:3 BEGIN_C_FUNCTION
    case 0xC1FCAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1FF2C.asm:5 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1FCAD: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1FF2C.asm:6 AND #$00FF
    case 0xC1FCB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC1FCB0.
    case 0xC1FCB2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1FF2C.asm:8 DEC
    case 0xC1FCB3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:9 CLC
    case 0xC1FCB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:10 ADC #.LOWORD(GAME_STATE)
    case 0xC1FCB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1FF2C.asm:10 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1FCB5.
    case 0xC1FCB7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:11 TAX
    case 0xC1FCB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:12 LDA a:game_state::player_controlled_party_members,X
    case 0xC1FCB9: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C1/C1FF2C.asm:18 AND #$00FF
    case 0xC1FCBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC1FCBC.
    case 0xC1FCBE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1FF2C.asm:19 ASL
    case 0xC1FCBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:20 TAX
    case 0xC1FCC0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:21 LDA CHOSEN_FOUR_PTRS,X
    case 0xC1FCC1: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C1/C1FF2C.asm:22 TAX
    case 0xC1FCC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FCC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF2C.asm:24 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC1FCC7: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C1/C1FF2C.asm:25 LDX #0
    case 0xC1FCCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1FF2C.asm:25 LDX #0
    // Overlapping static entry reached from 0xC1FCCA.
    case 0xC1FCCC: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1FF2C.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1FCCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF2C.asm:27 AND #$00FF
    case 0xC1FCCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1FCCF.
    case 0xC1FCD1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1FF2C.asm:28 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1FCD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:28 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1FCD2.
    case 0xC1FCD4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1FF2C.asm:29 BEQ @UNKNOWN0
    case 0xC1FCD5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1FF2C.asm:30 CMP #STATUS_0::DIAMONDIZED
    case 0xC1FCD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1FF2C.asm:30 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC1FCD7.
    case 0xC1FCD9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1FF2C.asm:31 BNE @UNKNOWN1
    case 0xC1FCDA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C1/C1FF2C.asm:33 LDX #1
    case 0xC1FCDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:33 LDX #1
    // Overlapping static entry reached from 0xC1FCDC.
    case 0xC1FCDE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1FF2C.asm:35 LDA #0
    case 0xC1FCDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1FF2C.asm:35 LDA #0
    // Overlapping static entry reached from 0xC1FCDF.
    case 0xC1FCE1: cpu.execute_instruction<0x00>(0x0000EC, 2); return true;
    // src/unknown/C1/C1FF2C.asm:36 CPX LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FCE2: cpu.execute_instruction<0xEC>(0x00B676, 3); return true;
    // src/unknown/C1/C1FF2C.asm:37 BEQ @UNKNOWN2
    case 0xC1FCE5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C1FF2C.asm:38 LDA #1
    case 0xC1FCE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:38 LDA #1
    // Overlapping static entry reached from 0xC1FCE7.
    case 0xC1FCE9: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C1/C1FF2C.asm:40 STX LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FCEA: cpu.execute_instruction<0x8E>(0x00B676, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1FF2C.asm:41 END_C_FUNCTION
    case 0xC1FCED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1FF6B.asm (unresolved).
bool execute_unresolved_c1_c1ff6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1FF6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1FCEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1FF6B.asm:12 JSR FILE_MENU_LOOP
    case 0xC1FCF0: cpu.execute_instruction<0x20>(0x00F685, 3); return true;
    // src/unknown/C1/C1FF6B.asm:13 JSR CLEAR_INSTANT_PRINTING
    case 0xC1FCF3: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C1FF6B.asm:14 JSL WINDOW_TICK
    case 0xC1FCF6: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C1FF6B.asm:16 STZ DISABLED_TRANSITIONS
    case 0xC1FCFA: cpu.execute_instruction<0x9C>(0x00B68A, 3); return true;
    // src/unknown/C1/C1FF6B.asm:17 STZ LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FCFD: cpu.execute_instruction<0x9C>(0x00B676, 3); return true;
    // src/unknown/C1/C1FF6B.asm:25 LDA #0
    case 0xC1FD00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1FF6B.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1FD00.
    case 0xC1FD02: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1FF6B.asm:26 END_C_FUNCTION
    case 0xC1FD03: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
