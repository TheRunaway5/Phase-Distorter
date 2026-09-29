// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C4/C44E61.asm (unresolved).
bool execute_unresolved_c4_c44e61_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44E61.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44E61: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E63: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E64: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E65: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44E66.
    case 0xC44E68: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E69: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E6A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:14 TXY
    case 0xC44E6B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:15 STY @LOCAL05
    case 0xC44E6C: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C4/C44E61.asm:16 STA @VIRTUAL02
    case 0xC44E6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44E61.asm:17 LDA CURRENT_FOCUS_WINDOW
    case 0xC44E70: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C44E61.asm:18 CMP #.LOWORD(-1)
    case 0xC44E73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C44E61.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44E73.
    case 0xC44E75: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    case 0xC44E76: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    case 0xC44E78: cpu.execute_instruction<0x4C>(0x004FF1, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC44E75.
    case 0xC44E79: cpu.execute_instruction<0xF1>(0x00004F, 2); return true;
    // src/unknown/C4/C44E61.asm:20 CPY #$2F
    case 0xC44E7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002F, 2); else cpu.execute_instruction<0xC0>(0x00002F, 3); return true;
    // src/unknown/C4/C44E61.asm:20 CPY #$2F
    // Overlapping static entry reached from 0xC44E7B.
    case 0xC44E7D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44E61.asm:21 BEQ @UNKNOWN1
    case 0xC44E7E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C44E61.asm:22 CPY #CHAR::EQUIPPED
    case 0xC44E80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x000022, 3); return true;
    // src/unknown/C4/C44E61.asm:22 CPY #CHAR::EQUIPPED
    // Overlapping static entry reached from 0xC44E80.
    case 0xC44E82: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44E61.asm:23 BEQ @UNKNOWN1
    case 0xC44E83: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C44E61.asm:24 CPY #$20
    case 0xC44E85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C4/C44E61.asm:24 CPY #$20
    // Overlapping static entry reached from 0xC44E85.
    case 0xC44E87: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44E61.asm:25 BNE @UNKNOWN2
    case 0xC44E88: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C4/C44E61.asm:27 TYA
    case 0xC44E8A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:28 JSL UNKNOWN_C43F77
    case 0xC44E8B: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C4/C44E61.asm:29 JSL UNKNOWN_C43CAA
    case 0xC44E8F: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/unknown/C4/C44E61.asm:30 JMP @UNKNOWN9
    case 0xC44E93: cpu.execute_instruction<0x4C>(0x004FF1, 3); return true;
    // src/unknown/C4/C44E61.asm:32 LDA CURRENT_FOCUS_WINDOW
    case 0xC44E96: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C44E61.asm:33 ASL
    case 0xC44E99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:34 TAX
    case 0xC44E9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:35 LDA OPEN_WINDOW_TABLE,X
    case 0xC44E9B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C44E61.asm:36 LDY #.SIZEOF(window_stats)
    case 0xC44E9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C44E61.asm:36 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC44E9E.
    case 0xC44EA0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C44E61.asm:37 JSL MULT168
    case 0xC44EA1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C44E61.asm:38 CLC
    case 0xC44EA5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:39 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C44E61.asm:39 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44EA6.
    case 0xC44EA8: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C4/C44E61.asm:40 TAX
    case 0xC44EA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:41 LDY @LOCAL05
    case 0xC44EAA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C44E61.asm:42 CPY #CHAR::SPACE
    case 0xC44EAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000050, 2); else cpu.execute_instruction<0xC0>(0x000050, 3); return true;
    // src/unknown/C4/C44E61.asm:42 CPY #CHAR::SPACE
    // Overlapping static entry reached from 0xC44EAC.
    case 0xC44EAE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44E61.asm:43 BNE @UNKNOWN4
    case 0xC44EAF: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C4/C44E61.asm:44 LDA VWF_INDENT_NEW_LINE
    case 0xC44EB1: cpu.execute_instruction<0xAD>(0x005E75, 3); return true;
    // src/unknown/C4/C44E61.asm:45 AND #$00FF
    case 0xC44EB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44E61.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC44EB4.
    case 0xC44EB6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C44E61.asm:46 BNEL @UNKNOWN9
    case 0xC44EB7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:46 BNEL @UNKNOWN9
    case 0xC44EB9: cpu.execute_instruction<0x4C>(0x004FF1, 3); return true;
    // src/unknown/C4/C44E61.asm:47 BRA @UNKNOWN6
    case 0xC44EBC: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C4/C44E61.asm:49 LDA VWF_INDENT_NEW_LINE
    case 0xC44EBE: cpu.execute_instruction<0xAD>(0x005E75, 3); return true;
    // src/unknown/C4/C44E61.asm:50 AND #$00FF
    case 0xC44EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44E61.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC44EC1.
    case 0xC44EC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44E61.asm:51 BEQ @UNKNOWN6
    case 0xC44EC4: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C44E61.asm:52 STZ a:window_stats::text_x,X
    case 0xC44EC6: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/unknown/C4/C44E61.asm:53 CPY #CHAR::BULLET
    case 0xC44EC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000070, 2); else cpu.execute_instruction<0xC0>(0x000070, 3); return true;
    // src/unknown/C4/C44E61.asm:53 CPY #CHAR::BULLET
    // Overlapping static entry reached from 0xC44EC9.
    case 0xC44ECB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44E61.asm:54 BEQ @UNKNOWN5
    case 0xC44ECC: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C44E61.asm:55 LDA a:window_stats::text_y,X
    case 0xC44ECE: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C44E61.asm:56 TAX
    case 0xC44ED1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:57 LDA #6
    case 0xC44ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C44E61.asm:57 LDA #6
    // Overlapping static entry reached from 0xC44ED2.
    case 0xC44ED4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C44E61.asm:58 JSL UNKNOWN_C43D75
    case 0xC44ED5: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C4/C44E61.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC44ED9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44E61.asm:61 STZ VWF_INDENT_NEW_LINE
    case 0xC44EDB: cpu.execute_instruction<0x9C>(0x005E75, 3); return true;
    // src/unknown/C4/C44E61.asm:63 LDY @LOCAL05
    case 0xC44EDE: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C44E61.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC44EE0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44E61.asm:65 TYA
    case 0xC44EE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC44EE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44E61.asm:67 STA LAST_PRINTED_CHARACTER
    case 0xC44EE5: cpu.execute_instruction<0x8D>(0x005E76, 3); return true;
    // src/unknown/C4/C44E61.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC44EE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44E61.asm:69 TYA
    case 0xC44EEA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:70 SEC
    case 0xC44EEB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:71 SBC #$50
    case 0xC44EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C44E61.asm:71 SBC #$50
    // Overlapping static entry reached from 0xC44EEC.
    case 0xC44EEE: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C44E61.asm:72 AND #$007F
    case 0xC44EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C44E61.asm:72 AND #$007F
    // Overlapping static entry reached from 0xC44EEF.
    case 0xC44EF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44E61.asm:73 STA @LOCAL04
    case 0xC44EF2: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF4.
    case 0xC44EF6: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF6.
    case 0xC44EF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF9.
    case 0xC44EFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EFC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C44E61.asm:75 LDA @VIRTUAL02
    case 0xC44EFE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F00: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F03: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:77 TAY
    case 0xC44F07: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:78 STY @LOCAL03
    case 0xC44F08: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C44E61.asm:79 TYA
    case 0xC44F0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:80 CLC
    case 0xC44F0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:81 ADC #font_table_entry::height
    case 0xC44F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C44E61.asm:81 ADC #font_table_entry::height
    // Overlapping static entry reached from 0xC44F0C.
    case 0xC44F0E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F0F: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F11: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F13: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F15: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:83 CLC
    case 0xC44F17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:84 ADC @VIRTUAL06
    case 0xC44F18: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:85 STA @VIRTUAL06
    case 0xC44F1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:86 LDA [@VIRTUAL06]
    case 0xC44F1C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:87 TAX
    case 0xC44F1E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:88 TYA
    case 0xC44F1F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:89 INC
    case 0xC44F20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:90 INC
    case 0xC44F21: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:91 INC
    case 0xC44F22: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:92 INC
    case 0xC44F23: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F24: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F26: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F28: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F2A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:94 CLC
    case 0xC44F2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:95 ADC @VIRTUAL06
    case 0xC44F2D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:96 STA @VIRTUAL06
    case 0xC44F2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC44F31.
    case 0xC44F33: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F34: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F36: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F37: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F3B: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:98 LDA @LOCAL04
    case 0xC44F3D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C44E61.asm:99 TAY
    case 0xC44F3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:100 TXA
    case 0xC44F40: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:101 JSL MULT16
    case 0xC44F41: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C44E61.asm:102 CLC
    case 0xC44F45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:103 ADC @VIRTUAL06
    case 0xC44F46: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:104 STA @VIRTUAL06
    case 0xC44F48: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:105 STA @LOCAL02
    case 0xC44F4A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C44E61.asm:106 LDA @VIRTUAL06+2
    case 0xC44F4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:107 STA @LOCAL02+2
    case 0xC44F4E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C44E61.asm:108 LDY @LOCAL03
    case 0xC44F50: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C44E61.asm:109 TYA
    case 0xC44F52: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:110 CLC
    case 0xC44F53: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:111 ADC #font_table_entry::width
    case 0xC44F54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C44E61.asm:111 ADC #font_table_entry::width
    // Overlapping static entry reached from 0xC44F54.
    case 0xC44F56: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F57: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F59: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F5B: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F5D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:113 CLC
    case 0xC44F5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:114 ADC @VIRTUAL06
    case 0xC44F60: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:115 STA @VIRTUAL06
    case 0xC44F62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:116 LDA [@VIRTUAL06]
    case 0xC44F64: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:117 STA @VIRTUAL02
    case 0xC44F66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44E61.asm:118 TYA
    case 0xC44F68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:119 CLC
    case 0xC44F69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:120 ADC @VIRTUAL0A
    case 0xC44F6A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C44E61.asm:121 STA @VIRTUAL0A
    case 0xC44F6C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F6E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44F6E.
    case 0xC44F70: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F71: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F73: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F74: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F76: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F78: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C44E61.asm:123 LDA @LOCAL04
    case 0xC44F7A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C44E61.asm:124 CLC
    case 0xC44F7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:125 ADC @VIRTUAL0A
    case 0xC44F7D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C44E61.asm:126 STA @VIRTUAL0A
    case 0xC44F7F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C44E61.asm:127 LDA [@VIRTUAL0A]
    case 0xC44F81: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C44E61.asm:128 AND #$00FF
    case 0xC44F83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44E61.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC44F83.
    case 0xC44F85: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44E61.asm:129 STA @LOCAL04
    case 0xC44F86: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C44E61.asm:130 LDA CHARACTER_PADDING
    case 0xC44F88: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C44E61.asm:131 AND #$00FF
    case 0xC44F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44E61.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC44F8B.
    case 0xC44F8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44E61.asm:132 STA @VIRTUAL04
    case 0xC44F8E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C44E61.asm:133 LDA @LOCAL04
    case 0xC44F90: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C44E61.asm:134 CLC
    case 0xC44F92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:135 ADC @VIRTUAL04
    case 0xC44F93: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C44E61.asm:136 TAY
    case 0xC44F95: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:137 STY @LOCAL01
    case 0xC44F96: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C44E61.asm:138 CPY #8
    case 0xC44F98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C44E61.asm:138 CPY #8
    // Overlapping static entry reached from 0xC44F98.
    case 0xC44F9A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C44E61.asm:139 BLTEQ @UNKNOWN8
    case 0xC44F9B: cpu.execute_instruction<0x90>(0x000039, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C44E61.asm:139 BLTEQ @UNKNOWN8
    case 0xC44F9D: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44F9F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FA7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FA9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FAB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FAD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C44E61.asm:143 LDX @VIRTUAL02
    case 0xC44FAF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44E61.asm:144 LDA #8
    case 0xC44FB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C44E61.asm:144 LDA #8
    // Overlapping static entry reached from 0xC44FB1.
    case 0xC44FB3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    case 0xC44FB4: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    // Overlapping static entry reached from 0xC4502F.
    case 0xC44FB6: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    // Overlapping static entry reached from 0xC44FB6.
    case 0xC44FB7: cpu.execute_instruction<0xC4>(0x0000A4, 2); return true;
    // src/unknown/C4/C44E61.asm:146 LDY @LOCAL01
    case 0xC44FB8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C44E61.asm:146 LDY @LOCAL01
    // Overlapping static entry reached from 0xC44FB7.
    case 0xC44FB9: cpu.execute_instruction<0x12>(0x000098, 2); return true;
    // src/unknown/C4/C44E61.asm:147 TYA
    case 0xC44FBA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:148 SEC
    case 0xC44FBB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:149 SBC #8
    case 0xC44FBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C44E61.asm:149 SBC #8
    // Overlapping static entry reached from 0xC44FBC.
    case 0xC44FBE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C44E61.asm:150 TAY
    case 0xC44FBF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:151 STY @LOCAL01
    case 0xC44FC0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C44E61.asm:152 LDA @VIRTUAL02
    case 0xC44FC2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44E61.asm:153 CLC
    case 0xC44FC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:154 ADC @VIRTUAL06
    case 0xC44FC5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:155 STA @VIRTUAL06
    case 0xC44FC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C44E61.asm:156 STA @LOCAL02
    case 0xC44FC9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C44E61.asm:157 LDA @VIRTUAL06+2
    case 0xC44FCB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C44E61.asm:158 STA @LOCAL02+2
    case 0xC44FCD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C44E61.asm:159 CPY #8
    case 0xC44FCF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C44E61.asm:159 CPY #8
    // Overlapping static entry reached from 0xC44FCF.
    case 0xC44FD1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C44E61.asm:160 BGT @UNKNOWN7
    case 0xC44FD2: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C44E61.asm:160 BGT @UNKNOWN7
    case 0xC44FD4: cpu.execute_instruction<0xB0>(0x0000C9, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FD6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FD8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FDA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FDC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FDE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C44E61.asm:164 LDX @VIRTUAL02
    case 0xC44FE6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44E61.asm:165 TYA
    case 0xC44FE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44E61.asm:166 JSL UNKNOWN_C44B3A
    case 0xC44FE9: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C44E61.asm:167 JSL UNKNOWN_C44DCA
    case 0xC44FED: cpu.execute_instruction<0x22>(0xC44DCA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44E61.asm:169 END_C_FUNCTION
    case 0xC44FF1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44E61.asm:169 END_C_FUNCTION
    case 0xC44FF2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44FF3.asm (unresolved).
bool execute_unresolved_c4_c44ff3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44FF3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44FF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FF6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FF7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC44FF8.
    case 0xC44FFA: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FFB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44FF3.asm:12 END_STACK_VARS
    case 0xC44FFC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:13 STX @VIRTUAL04
    case 0xC44FFD: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C44FF3.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC44FFA.
    case 0xC44FFE: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C4/C44FF3.asm:14 STX @LOCAL03
    case 0xC44FFF: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C44FF3.asm:14 STX @LOCAL03
    // Overlapping static entry reached from 0xC44FFE.
    case 0xC45000: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C44FF3.asm:15 STA @VIRTUAL02
    case 0xC45001: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC45000.
    case 0xC45002: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C44FF3.asm:16 STA @LOCAL02
    case 0xC45003: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44FF3.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC45005: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44FF3.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC45007: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44FF3.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC45009: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44FF3.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC4500B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C44FF3.asm:18 LDY #0
    case 0xC4500D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C44FF3.asm:18 LDY #0
    // Overlapping static entry reached from 0xC4500D.
    case 0xC4500F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C44FF3.asm:19 STY @LOCAL01
    case 0xC45010: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C44FF3.asm:20 TYX
    case 0xC45012: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:21 BRA @UNKNOWN1
    case 0xC45013: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/unknown/C4/C44FF3.asm:23 LDA [@VIRTUAL06]
    case 0xC45015: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C44FF3.asm:24 AND #$00FF
    case 0xC45017: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44FF3.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC45017.
    case 0xC45019: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C44FF3.asm:25 INC @VIRTUAL06
    case 0xC4501A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C44FF3.asm:26 SEC
    case 0xC4501C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:27 SBC #$50
    case 0xC4501D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C44FF3.asm:27 SBC #$50
    // Overlapping static entry reached from 0xC4501D.
    case 0xC4501F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C44FF3.asm:28 AND #$007F
    case 0xC45020: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C44FF3.asm:28 AND #$007F
    // Overlapping static entry reached from 0xC45020.
    case 0xC45022: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44FF3.asm:29 STA @LOCAL00
    case 0xC45023: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C44FF3.asm:30 LDA CHARACTER_PADDING
    case 0xC45025: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C44FF3.asm:31 AND #$00FF
    case 0xC45028: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44FF3.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC45028.
    case 0xC4502A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44FF3.asm:32 STA @VIRTUAL02
    case 0xC4502B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC4502D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4502D.
    case 0xC4502F: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC45030: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4502F.
    case 0xC45031: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC45032: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45032.
    case 0xC45034: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44FF3.asm:33 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC45035: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C44FF3.asm:34 LDA @LOCAL03
    case 0xC45037: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C44FF3.asm:35 STA @VIRTUAL04
    case 0xC45039: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C44FF3.asm:36 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC4503B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C44FF3.asm:36 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC4503D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C44FF3.asm:36 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC4503E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C44FF3.asm:36 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC45040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C44FF3.asm:36 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC45041: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:37 CLC
    case 0xC45042: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:38 ADC @VIRTUAL0A
    case 0xC45043: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C44FF3.asm:39 STA @VIRTUAL0A
    case 0xC45045: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC45047: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45047.
    case 0xC45049: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4504A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4504C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4504D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4504F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C44FF3.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC45051: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C44FF3.asm:41 LDA @LOCAL00
    case 0xC45053: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C44FF3.asm:42 CLC
    case 0xC45055: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:43 ADC @VIRTUAL0A
    case 0xC45056: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C44FF3.asm:44 STA @VIRTUAL0A
    case 0xC45058: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C44FF3.asm:45 LDA [@VIRTUAL0A]
    case 0xC4505A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C44FF3.asm:46 AND #$00FF
    case 0xC4505C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44FF3.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4505C.
    case 0xC4505E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C44FF3.asm:47 CLC
    case 0xC4505F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:48 ADC @VIRTUAL02
    case 0xC45060: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:49 STA @VIRTUAL02
    case 0xC45062: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:50 LDY @LOCAL01
    case 0xC45064: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C44FF3.asm:51 TYA
    case 0xC45066: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:52 CLC
    case 0xC45067: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:53 ADC @VIRTUAL02
    case 0xC45068: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:54 TAY
    case 0xC4506A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:55 STY @LOCAL01
    case 0xC4506B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C44FF3.asm:56 INX
    case 0xC4506D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:58 LDA @LOCAL02
    case 0xC4506E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C44FF3.asm:59 STA @VIRTUAL02
    case 0xC45070: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:60 TXA
    case 0xC45072: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C44FF3.asm:61 CMP @VIRTUAL02
    case 0xC45073: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C44FF3.asm:62 BCC @UNKNOWN0
    case 0xC45075: cpu.execute_instruction<0x90>(0x00009E, 2); return true;
    // src/unknown/C4/C44FF3.asm:63 TYA
    case 0xC45077: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44FF3.asm:64 END_C_FUNCTION
    case 0xC45078: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44FF3.asm:64 END_C_FUNCTION
    case 0xC45079: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4507A.asm (unresolved).
bool execute_unresolved_c4_c4507a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4507A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4507A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4507A.asm:16 END_STACK_VARS
    case 0xC4507C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4507A.asm:16 END_STACK_VARS
    case 0xC4507D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4507A.asm:16 END_STACK_VARS
    case 0xC4507E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4507A.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC4507E.
    case 0xC45080: cpu.execute_instruction<0xFF>(0x36A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4507A.asm:16 END_STACK_VARS
    case 0xC45081: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4507A.asm:17 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45082: cpu.execute_instruction<0xA5>(0x000036, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:17 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45084: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4507A.asm:17 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45086: cpu.execute_instruction<0xA5>(0x000038, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4507A.asm:17 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45088: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4507A.asm:18 LDA CURRENT_FOCUS_WINDOW
    case 0xC4508A: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C4507A.asm:19 CMP #.LOWORD(-1)
    case 0xC4508D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4507A.asm:19 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4508D.
    case 0xC4508F: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4507A.asm:20 BEQL @UNKNOWN5
    case 0xC45090: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4507A.asm:20 BEQL @UNKNOWN5
    case 0xC45092: cpu.execute_instruction<0x4C>(0x0051F6, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4507A.asm:20 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC4508F.
    case 0xC45093: cpu.execute_instruction<0xF6>(0x000051, 2); return true;
    // src/unknown/C4/C4507A.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC45095: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:22 LDA VWF_INDENT_NEW_LINE
    case 0xC45097: cpu.execute_instruction<0xAD>(0x005E75, 3); return true;
    // src/unknown/C4/C4507A.asm:23 STA @VIRTUAL00
    case 0xC4509A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4507A.asm:24 STZ VWF_INDENT_NEW_LINE
    case 0xC4509C: cpu.execute_instruction<0x9C>(0x005E75, 3); return true;
    // src/unknown/C4/C4507A.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC4509F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC450A1: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C4507A.asm:27 ASL
    case 0xC450A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:28 TAX
    case 0xC450A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:29 LDA OPEN_WINDOW_TABLE,X
    case 0xC450A6: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C4507A.asm:30 LDY #.SIZEOF(window_stats)
    case 0xC450A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C4507A.asm:30 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC450A9.
    case 0xC450AB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:31 JSL MULT168
    case 0xC450AC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C4507A.asm:32 CLC
    case 0xC450B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:33 ADC #.LOWORD(WINDOW_STATS)
    case 0xC450B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C4507A.asm:33 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC450B1.
    case 0xC450B3: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C4/C4507A.asm:34 TAY
    case 0xC450B4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:35 STY @LOCAL09
    case 0xC450B5: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4507A.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC450B7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC450B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4507A.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC450BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4507A.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC450BD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4507A.asm:37 JSL UNKNOWN_C10C55
    case 0xC450BF: cpu.execute_instruction<0x22>(0xC10C55, 4); return true;
    // src/unknown/C4/C4507A.asm:38 STA @VIRTUAL02
    case 0xC450C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:39 STA @LOCAL08
    case 0xC450C5: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4507A.asm:40 LDA #7
    case 0xC450C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C4507A.asm:40 LDA #7
    // Overlapping static entry reached from 0xC450C7.
    case 0xC450C9: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C4507A.asm:41 SEC
    case 0xC450CA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:42 SBC @VIRTUAL02
    case 0xC450CB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:43 CLC
    case 0xC450CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:44 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC450CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00895A, 3); return true;
    // src/unknown/C4/C4507A.asm:44 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC450CE.
    case 0xC450D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x002285, 3); return true;
    // src/unknown/C4/C4507A.asm:45 STA @LOCAL07
    case 0xC450D1: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:45 STA @LOCAL07
    // Overlapping static entry reached from 0xC450D0.
    case 0xC450D2: cpu.execute_instruction<0x22>(0xA42085, 4); return true;
    // src/unknown/C4/C4507A.asm:46 STA @LOCAL06
    case 0xC450D3: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:47 LDY @LOCAL09
    case 0xC450D5: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C4/C4507A.asm:47 LDY @LOCAL09
    // Overlapping static entry reached from 0xC450D2.
    case 0xC450D6: cpu.execute_instruction<0x26>(0x0000B9, 2); return true;
    // src/unknown/C4/C4507A.asm:48 LDA a:window_stats::text_x,Y
    case 0xC450D7: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/unknown/C4/C4507A.asm:48 LDA a:window_stats::text_x,Y
    // Overlapping static entry reached from 0xC450D6.
    case 0xC450D8: cpu.execute_instruction<0x0E>(0x008500, 3); return true;
    // src/unknown/C4/C4507A.asm:49 STA @LOCAL05
    case 0xC450DA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4507A.asm:49 STA @LOCAL05
    // Overlapping static entry reached from 0xC450D8.
    case 0xC450DB: cpu.execute_instruction<0x1E>(0x0010B9, 3); return true;
    // src/unknown/C4/C4507A.asm:50 LDA a:window_stats::text_y,Y
    case 0xC450DC: cpu.execute_instruction<0xB9>(0x000010, 3); return true;
    // src/unknown/C4/C4507A.asm:50 LDA a:window_stats::text_y,Y
    // Overlapping static entry reached from 0xC450DB.
    case 0xC450DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4507A.asm:51 STA @LOCAL04
    case 0xC450DF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4507A.asm:52 LDX #4
    case 0xC450E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C4/C4507A.asm:52 LDX #4
    // Overlapping static entry reached from 0xC450E1.
    case 0xC450E3: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4507A.asm:53 LDA CHARACTER_PADDING
    case 0xC450E4: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C4507A.asm:54 AND #$00FF
    case 0xC450E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4507A.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC450E7.
    case 0xC450E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4507A.asm:55 STA @VIRTUAL02
    case 0xC450EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC450EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC450EC.
    case 0xC450EE: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC450EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC450EE.
    case 0xC450F0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC450F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC450F0.
    case 0xC450F2: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC450F1.
    case 0xC450F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4507A.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC450F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4507A.asm:57 LDA a:window_stats::font,Y
    case 0xC450F6: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C4507A.asm:58 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC450F9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C4507A.asm:58 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC450FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C4507A.asm:58 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC450FC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C4507A.asm:58 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC450FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C4507A.asm:58 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC450FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:59 CLC
    case 0xC45100: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:60 ADC @VIRTUAL06
    case 0xC45101: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4507A.asm:61 STA @VIRTUAL06
    case 0xC45103: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45105: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC45105.
    case 0xC45107: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45108: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4510A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4510B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4510D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4507A.asm:62 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4510F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4507A.asm:63 TXA
    case 0xC45111: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:64 CLC
    case 0xC45112: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:65 ADC @VIRTUAL06
    case 0xC45113: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4507A.asm:66 STA @VIRTUAL06
    case 0xC45115: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4507A.asm:67 LDA [@VIRTUAL06]
    case 0xC45117: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4507A.asm:68 AND #$00FF
    case 0xC45119: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4507A.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC45119.
    case 0xC4511B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:69 CLC
    case 0xC4511C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:70 ADC @VIRTUAL02
    case 0xC4511D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:71 STA @VIRTUAL04
    case 0xC4511F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:72 LDX #0
    case 0xC45121: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4507A.asm:72 LDX #0
    // Overlapping static entry reached from 0xC45121.
    case 0xC45123: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4507A.asm:73 STX @LOCAL03
    case 0xC45124: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C4507A.asm:74 BRA @UNKNOWN2
    case 0xC45126: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4507A.asm:76 LDA @LOCAL07
    case 0xC45128: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:77 TAX
    case 0xC4512A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC4512B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:79 LDA __BSS_START__,X
    case 0xC4512D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4507A.asm:80 CLC
    case 0xC45130: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:81 ADC #CHAR::ZERO
    case 0xC45131: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x00A660, 3); return true;
    // src/unknown/C4/C4507A.asm:82 LDX @LOCAL03
    case 0xC45133: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C4/C4507A.asm:82 LDX @LOCAL03
    // Overlapping static entry reached from 0xC45131.
    case 0xC45134: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:83 STA @LOCAL01,X
    case 0xC45135: cpu.execute_instruction<0x95>(0x000012, 2); return true;
    // src/unknown/C4/C4507A.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC45137: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:85 LDA @LOCAL07
    case 0xC45139: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:86 INC
    case 0xC4513B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:87 STA @LOCAL07
    case 0xC4513C: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:88 INX
    case 0xC4513E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:89 STX @LOCAL03
    case 0xC4513F: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C4507A.asm:91 LDA @LOCAL08
    case 0xC45141: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4507A.asm:92 STA @VIRTUAL02
    case 0xC45143: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:93 TXA
    case 0xC45145: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:94 CMP @VIRTUAL02
    case 0xC45146: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:95 BCC @UNKNOWN1
    case 0xC45148: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/unknown/C4/C4507A.asm:96 TDC
    case 0xC4514A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:97 CLC
    case 0xC4514B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:98 ADC #@LOCAL01
    case 0xC4514C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C4/C4507A.asm:98 ADC #@LOCAL01
    // Overlapping static entry reached from 0xC4514C.
    case 0xC4514E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4514F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45151: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45152: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45154: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45155: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4507A.asm:99 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45157: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4507A.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC45159: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4507A.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4515B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4507A.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4515D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4507A.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4515F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4507A.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4507A.asm:102 LDY @LOCAL09
    case 0xC45163: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C4/C4507A.asm:103 LDA a:window_stats::font,Y
    case 0xC45165: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/unknown/C4/C4507A.asm:104 TAX
    case 0xC45168: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:105 LDA @VIRTUAL02
    case 0xC45169: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:106 JSL UNKNOWN_C44FF3
    case 0xC4516B: cpu.execute_instruction<0x22>(0xC44FF3, 4); return true;
    // src/unknown/C4/C4507A.asm:107 PHA
    case 0xC4516F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:108 LDA @VIRTUAL04
    case 0xC45170: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:109 PLY
    case 0xC45172: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:110 STY @VIRTUAL04
    case 0xC45173: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:111 CLC
    case 0xC45175: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:112 ADC @VIRTUAL04
    case 0xC45176: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:113 STA @LOCAL02
    case 0xC45178: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:114 LDA CHARACTER_PADDING
    case 0xC4517A: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C4507A.asm:115 AND #$00FF
    case 0xC4517D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4507A.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC4517D.
    case 0xC4517F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4507A.asm:116 STA @VIRTUAL04
    case 0xC45180: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:117 LDA @LOCAL02
    case 0xC45182: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:118 CLC
    case 0xC45184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:119 ADC @VIRTUAL04
    case 0xC45185: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:120 STA @LOCAL02
    case 0xC45187: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:121 SEP #PROC_FLAGS::ACCUM8
    case 0xC45189: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:122 LDA #1
    case 0xC4518B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4507A.asm:123 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC4518D: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C4/C4507A.asm:123 STA FORCE_LEFT_TEXT_ALIGNMENT
    // Overlapping static entry reached from 0xC4518B.
    case 0xC4518E: cpu.execute_instruction<0x71>(0x00005E, 2); return true;
    // src/unknown/C4/C4507A.asm:124 LDY @LOCAL09
    case 0xC45190: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C4/C4507A.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC45192: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:126 LDA a:window_stats::text_y,Y
    case 0xC45194: cpu.execute_instruction<0xB9>(0x000010, 3); return true;
    // src/unknown/C4/C4507A.asm:127 TAX
    case 0xC45197: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:128 LDA @LOCAL02
    case 0xC45198: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:129 STA @VIRTUAL04
    case 0xC4519A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:130 LDA a:window_stats::width,Y
    case 0xC4519C: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C4/C4507A.asm:131 DEC
    case 0xC4519F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:132 ASL
    case 0xC451A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:133 ASL
    case 0xC451A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:134 ASL
    case 0xC451A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:135 SEC
    case 0xC451A3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:136 SBC @VIRTUAL04
    case 0xC451A4: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C4507A.asm:137 JSL UNKNOWN_C43D75
    case 0xC451A6: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C4/C4507A.asm:138 LDA #CHAR::DOLLAR
    case 0xC451AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x000054, 3); return true;
    // src/unknown/C4/C4507A.asm:138 LDA #CHAR::DOLLAR
    // Overlapping static entry reached from 0xC451AA.
    case 0xC451AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:139 JSL REDIRECT_PRINT_LETTER
    case 0xC451AD: cpu.execute_instruction<0x22>(0xC10C86, 4); return true;
    // src/unknown/C4/C4507A.asm:140 BRA @UNKNOWN4
    case 0xC451B1: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4507A.asm:142 LDA (@LOCAL06)
    case 0xC451B3: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:143 AND #$00FF
    case 0xC451B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4507A.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC451B5.
    case 0xC451B7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4507A.asm:144 CLC
    case 0xC451B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:145 ADC #CHAR::ZERO
    case 0xC451B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C4/C4507A.asm:145 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC451B9.
    case 0xC451BB: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C4507A.asm:146 INC @LOCAL06
    case 0xC451BC: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:147 JSL REDIRECT_PRINT_LETTER
    case 0xC451BE: cpu.execute_instruction<0x22>(0xC10C86, 4); return true;
    // src/unknown/C4/C4507A.asm:148 LDA @VIRTUAL02
    case 0xC451C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:149 DEC
    case 0xC451C4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:150 STA @VIRTUAL02
    case 0xC451C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:152 LDA @VIRTUAL02
    case 0xC451C7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4507A.asm:153 BNE @UNKNOWN3
    case 0xC451C9: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/C4/C4507A.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC451CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:155 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC451CD: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C4/C4507A.asm:156 LDY @LOCAL09
    case 0xC451D0: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C4/C4507A.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC451D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:158 LDA a:window_stats::text_y,Y
    case 0xC451D4: cpu.execute_instruction<0xB9>(0x000010, 3); return true;
    // src/unknown/C4/C4507A.asm:159 TAX
    case 0xC451D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:160 LDA a:window_stats::width,Y
    case 0xC451D8: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C4/C4507A.asm:161 DEC
    case 0xC451DB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4507A.asm:162 JSL REDIRECT_C438A5
    case 0xC451DC: cpu.execute_instruction<0x22>(0xC10C72, 4); return true;
    // src/unknown/C4/C4507A.asm:163 LDA #36
    case 0xC451E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C4/C4507A.asm:163 LDA #36
    // Overlapping static entry reached from 0xC451E0.
    case 0xC451E2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4507A.asm:164 JSL UNKNOWN_C43F77
    case 0xC451E3: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C4/C4507A.asm:165 LDX @LOCAL04
    case 0xC451E7: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C4/C4507A.asm:166 LDA @LOCAL05
    case 0xC451E9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4507A.asm:167 JSL REDIRECT_C438A5
    case 0xC451EB: cpu.execute_instruction<0x22>(0xC10C72, 4); return true;
    // src/unknown/C4/C4507A.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC451EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4507A.asm:169 LDA @VIRTUAL00
    case 0xC451F1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4507A.asm:170 STA VWF_INDENT_NEW_LINE
    case 0xC451F3: cpu.execute_instruction<0x8D>(0x005E75, 3); return true;
    // src/unknown/C4/C4507A.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC451F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4507A.asm:173 END_C_FUNCTION
    case 0xC451F8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4507A.asm:173 END_C_FUNCTION
    case 0xC451F9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C451FA.asm (unresolved).
bool execute_unresolved_c4_c451fa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C451FA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC451FA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC451FC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC451FD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC451FE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC451FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    // Overlapping static entry reached from 0xC451FF.
    case 0xC45201: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC45202: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C451FA.asm:22 END_STACK_VARS
    case 0xC45203: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:23 STY @LOCAL0D
    case 0xC45204: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA.asm:23 STY @LOCAL0D
    // Overlapping static entry reached from 0xC45201.
    case 0xC45205: cpu.execute_instruction<0x2C>(0x002A86, 3); return true;
    // src/unknown/C4/C451FA.asm:24 STX @LOCAL0C
    case 0xC45206: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA.asm:25 STA @LOCAL0B
    case 0xC45208: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:26 LDA #0
    case 0xC4520A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:26 LDA #0
    // Overlapping static entry reached from 0xC4520A.
    case 0xC4520C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:27 STA @VIRTUAL04
    case 0xC4520D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:28 STA @VIRTUAL02
    case 0xC4520F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:29 LDA CURRENT_FOCUS_WINDOW
    case 0xC45211: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C451FA.asm:30 ASL
    case 0xC45214: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:31 TAX
    case 0xC45215: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:32 LDA OPEN_WINDOW_TABLE,X
    case 0xC45216: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C451FA.asm:33 LDY #.SIZEOF(window_stats)
    case 0xC45219: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C451FA.asm:33 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC45219.
    case 0xC4521B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:34 JSL MULT168
    case 0xC4521C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:35 CLC
    case 0xC45220: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:36 ADC #.LOWORD(WINDOW_STATS)
    case 0xC45221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C451FA.asm:36 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC45221.
    case 0xC45223: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:37 STA @LOCAL0A
    case 0xC45224: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:37 STA @LOCAL0A
    // Overlapping static entry reached from 0xC45223.
    case 0xC45225: cpu.execute_instruction<0x26>(0x000018, 2); return true;
    // src/unknown/C4/C451FA.asm:38 CLC
    case 0xC45226: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:39 ADC #window_stats::current_option
    case 0xC45227: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA.asm:39 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC45227.
    case 0xC45229: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C451FA.asm:40 TAX
    case 0xC4522A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:41 LDA __BSS_START__,X
    case 0xC4522B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:42 CMP #.LOWORD(-1)
    case 0xC4522E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA.asm:42 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4522E.
    case 0xC45230: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C451FA.asm:43 BEQL @UNKNOWN24
    case 0xC45231: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:43 BEQL @UNKNOWN24
    case 0xC45233: cpu.execute_instruction<0x4C>(0x0054F0, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:43 BEQL @UNKNOWN24
    // Overlapping static entry reached from 0xC45230.
    case 0xC45234: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/C4/C451FA.asm:44 LDA @LOCAL0B
    case 0xC45236: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:45 LDY #window_stats::unknown49
    case 0xC45238: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x000031, 3); return true;
    // src/unknown/C4/C451FA.asm:45 LDY #window_stats::unknown49
    // Overlapping static entry reached from 0xC45238.
    case 0xC4523A: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C451FA.asm:46 STA (@LOCAL0A),Y
    case 0xC4523B: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:47 LDA __BSS_START__,X
    case 0xC4523D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45240: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC45240.
    case 0xC45242: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45243: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:49 CLC
    case 0xC45247: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:50 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC45248: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:50 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC45248.
    case 0xC4524A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C4/C451FA.asm:51 TAY
    case 0xC4524B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:52 STY @LOCAL09
    case 0xC4524C: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:52 STY @LOCAL09
    // Overlapping static entry reached from 0xC4524A.
    case 0xC4524D: cpu.execute_instruction<0x24>(0x0000E2, 2); return true;
    // src/unknown/C4/C451FA.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC4524E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:53 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4524D.
    case 0xC4524F: cpu.execute_instruction<0x20>(0x000E64, 3); return true;
    // src/unknown/C4/C451FA.asm:54 STZ @LOCAL00
    case 0xC45250: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C4/C451FA.asm:55 LDX #4
    case 0xC45252: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C4/C451FA.asm:55 LDX #4
    // Overlapping static entry reached from 0xC45252.
    case 0xC45254: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C451FA.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC45255: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:57 LDA #.LOWORD(MENU_OPTION_LABEL_LENGTHS)
    case 0xC45257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00968D, 3); return true;
    // src/unknown/C4/C451FA.asm:57 LDA #.LOWORD(MENU_OPTION_LABEL_LENGTHS)
    // Overlapping static entry reached from 0xC45257.
    case 0xC45259: cpu.execute_instruction<0x96>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:58 JSL MEMSET16
    case 0xC4525A: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C451FA.asm:58 JSL MEMSET16
    // Overlapping static entry reached from 0xC45259.
    case 0xC4525B: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C451FA.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC4525E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:60 LDA #<-1
    case 0xC45260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C451FA.asm:61 STA @LOCAL00
    case 0xC45262: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C451FA.asm:61 STA @LOCAL00
    // Overlapping static entry reached from 0xC45260.
    case 0xC45263: cpu.execute_instruction<0x0E>(0x0004A2, 3); return true;
    // src/unknown/C4/C451FA.asm:62 LDX #4
    case 0xC45264: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C4/C451FA.asm:62 LDX #4
    // Overlapping static entry reached from 0xC45264.
    case 0xC45266: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C451FA.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC45267: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:64 LDA #.LOWORD(UNKNOWN_7E9691)
    case 0xC45269: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x009691, 3); return true;
    // src/unknown/C4/C451FA.asm:64 LDA #.LOWORD(UNKNOWN_7E9691)
    // Overlapping static entry reached from 0xC45269.
    case 0xC4526B: cpu.execute_instruction<0x96>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:65 JSL MEMSET16
    case 0xC4526C: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C451FA.asm:65 JSL MEMSET16
    // Overlapping static entry reached from 0xC4526B.
    case 0xC4526D: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C451FA.asm:66 LDA @LOCAL0D
    case 0xC45270: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C451FA.asm:67 BEQL @UNKNOWN5
    case 0xC45272: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:67 BEQL @UNKNOWN5
    case 0xC45274: cpu.execute_instruction<0x4C>(0x005327, 3); return true;
    // src/unknown/C4/C451FA.asm:69 LDY @LOCAL09
    case 0xC45277: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:70 TYA
    case 0xC45279: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:71 CLC
    case 0xC4527A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:72 ADC #menu_option::label
    case 0xC4527B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C4/C451FA.asm:72 ADC #menu_option::label
    // Overlapping static entry reached from 0xC4527B.
    case 0xC4527D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4527E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45280: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45281: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45283: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45284: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C451FA.asm:73 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45286: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C451FA.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC45288: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C451FA.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4528A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C451FA.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4528C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C451FA.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4528E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C451FA.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45290: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C451FA.asm:76 LDA #30
    case 0xC45292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/C4/C451FA.asm:76 LDA #30
    // Overlapping static entry reached from 0xC45292.
    case 0xC45294: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:77 JSL UNKNOWN_C43E31
    case 0xC45295: cpu.execute_instruction<0x22>(0xC43E31, 4); return true;
    // src/unknown/C4/C451FA.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC45299: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:79 CLC
    case 0xC4529B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:80 ADC #8
    case 0xC4529C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x00A608, 3); return true;
    // src/unknown/C4/C451FA.asm:81 LDX @VIRTUAL04
    case 0xC4529E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:81 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC4529C.
    case 0xC4529F: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C4/C451FA.asm:82 STA MENU_OPTION_LABEL_LENGTHS,X
    case 0xC452A0: cpu.execute_instruction<0x9D>(0x00968D, 3); return true;
    // src/unknown/C4/C451FA.asm:82 STA MENU_OPTION_LABEL_LENGTHS,X
    // Overlapping static entry reached from 0xC4529F.
    case 0xC452A1: cpu.execute_instruction<0x8D>(0x00C296, 3); return true;
    // src/unknown/C4/C451FA.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC452A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:83 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC452A1.
    case 0xC452A4: cpu.execute_instruction<0x20>(0x00FF29, 3); return true;
    // src/unknown/C4/C451FA.asm:84 AND #$00FF
    case 0xC452A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C451FA.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC452A5.
    case 0xC452A7: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C451FA.asm:85 PHA
    case 0xC452A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:86 LDA @VIRTUAL02
    case 0xC452A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:87 PLY
    case 0xC452AB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:88 STY @VIRTUAL02
    case 0xC452AC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:89 CLC
    case 0xC452AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:90 ADC @VIRTUAL02
    case 0xC452AF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:91 STA @VIRTUAL02
    case 0xC452B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:92 LDY @LOCAL09
    case 0xC452B3: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:93 LDA menu_option::next,Y
    case 0xC452B5: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C451FA.asm:94 CMP #.LOWORD(-1)
    case 0xC452B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA.asm:94 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC452B8.
    case 0xC452BA: cpu.execute_instruction<0xFF>(0xA012F0, 4); return true;
    // src/unknown/C4/C451FA.asm:95 BEQ @UNKNOWN2
    case 0xC452BB: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC452BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC452BA.
    case 0xC452BE: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC452BD.
    case 0xC452BF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC452C0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC452BE.
    case 0xC452C1: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:96 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC452C1.
    case 0xC452C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C4/C451FA.asm:97 CLC
    case 0xC452C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:98 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC452C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:98 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC452C3.
    case 0xC452C6: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/unknown/C4/C451FA.asm:98 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC452C5.
    case 0xC452C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C4/C451FA.asm:99 TAY
    case 0xC452C8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:100 STY @LOCAL09
    case 0xC452C9: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:100 STY @LOCAL09
    // Overlapping static entry reached from 0xC452C7.
    case 0xC452CA: cpu.execute_instruction<0x24>(0x0000E6, 2); return true;
    // src/unknown/C4/C451FA.asm:101 INC @VIRTUAL04
    case 0xC452CB: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:101 INC @VIRTUAL04
    // Overlapping static entry reached from 0xC452CA.
    case 0xC452CC: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/unknown/C4/C451FA.asm:102 BRA @UNKNOWN1
    case 0xC452CD: cpu.execute_instruction<0x80>(0x0000A8, 2); return true;
    // src/unknown/C4/C451FA.asm:102 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC452CC.
    case 0xC452CE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:104 LDY #window_stats::width
    case 0xC452CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA.asm:104 LDY #window_stats::width
    // Overlapping static entry reached from 0xC452CF.
    case 0xC452D1: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:105 LDA (@LOCAL0A),Y
    case 0xC452D2: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:106 LDY #$0800
    case 0xC452D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000800, 3); return true;
    // src/unknown/C4/C451FA.asm:106 LDY #$0800
    // Overlapping static entry reached from 0xC452D4.
    case 0xC452D6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:107 JSL MULT16
    case 0xC452D7: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C451FA.asm:108 LDY @VIRTUAL02
    case 0xC452DB: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:109 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC452DD: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C451FA.asm:110 STA @LOCAL08
    case 0xC452E1: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:111 BRA @UNKNOWN4
    case 0xC452E3: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C4/C451FA.asm:113 LDX @VIRTUAL04
    case 0xC452E5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:114 LDA MENU_OPTION_LABEL_LENGTHS,X
    case 0xC452E7: cpu.execute_instruction<0xBD>(0x00968D, 3); return true;
    // src/unknown/C4/C451FA.asm:115 AND #$00FF
    case 0xC452EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C451FA.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC452EA.
    case 0xC452EC: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C451FA.asm:116 TAY
    case 0xC452ED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:117 LDA @LOCAL08
    case 0xC452EE: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:118 JSL MULT16
    case 0xC452F0: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C451FA.asm:119 XBA
    case 0xC452F4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:120 AND #$00FF
    case 0xC452F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C451FA.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC452F5.
    case 0xC452F7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C451FA.asm:121 SEP #PROC_FLAGS::ACCUM8
    case 0xC452F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:122 LDX @VIRTUAL04
    case 0xC452FA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:123 STA UNKNOWN_7E9691,X
    case 0xC452FC: cpu.execute_instruction<0x9D>(0x009691, 3); return true;
    // src/unknown/C4/C451FA.asm:124 REP #PROC_FLAGS::ACCUM8
    case 0xC452FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:125 LDA @VIRTUAL04
    case 0xC45301: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:126 DEC
    case 0xC45303: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:127 STA @VIRTUAL04
    case 0xC45304: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:129 LDA @VIRTUAL04
    case 0xC45306: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:130 CMP #.LOWORD(-1)
    case 0xC45308: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA.asm:130 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC45308.
    case 0xC4530A: cpu.execute_instruction<0xFF>(0xA0D8D0, 4); return true;
    // src/unknown/C4/C451FA.asm:131 BNE @UNKNOWN3
    case 0xC4530B: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // src/unknown/C4/C451FA.asm:132 LDY #window_stats::current_option
    case 0xC4530D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA.asm:132 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC4530A.
    case 0xC4530E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:132 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC4530D.
    case 0xC4530F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:133 LDA (@LOCAL0A),Y
    case 0xC45310: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45312: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC45312.
    case 0xC45314: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45315: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:135 CLC
    case 0xC45319: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:136 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC4531A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:136 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC4531A.
    case 0xC4531C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C4/C451FA.asm:137 TAY
    case 0xC4531D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:138 STY @LOCAL09
    case 0xC4531E: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:138 STY @LOCAL09
    // Overlapping static entry reached from 0xC4531C.
    case 0xC4531F: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/unknown/C4/C451FA.asm:139 LDA #0
    case 0xC45320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:139 LDA #0
    // Overlapping static entry reached from 0xC4531F.
    case 0xC45321: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C451FA.asm:139 LDA #0
    // Overlapping static entry reached from 0xC45320.
    case 0xC45322: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:140 STA @VIRTUAL04
    case 0xC45323: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:141 BRA @UNKNOWN6
    case 0xC45325: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C4/C451FA.asm:143 LDY @LOCAL0C
    case 0xC45327: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA.asm:144 LDA @LOCAL0B
    case 0xC45329: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:145 DEC
    case 0xC4532B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:146 JSL MULT16
    case 0xC4532C: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C451FA.asm:147 LDY #window_stats::width
    case 0xC45330: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA.asm:147 LDY #window_stats::width
    // Overlapping static entry reached from 0xC45330.
    case 0xC45332: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C451FA.asm:148 CLC
    case 0xC45333: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:149 ADC (@LOCAL0A),Y
    case 0xC45334: cpu.execute_instruction<0x71>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:150 LDY @LOCAL0B
    case 0xC45336: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:151 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC45338: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C451FA.asm:152 STA @LOCAL07
    case 0xC4533C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:152 STA @LOCAL07
    // Overlapping static entry reached from 0xC453B6.
    case 0xC4533D: cpu.execute_instruction<0x20>(0x000CA0, 3); return true;
    // src/unknown/C4/C451FA.asm:154 LDY #window_stats::height
    case 0xC4533E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA.asm:154 LDY #window_stats::height
    // Overlapping static entry reached from 0xC4533E.
    case 0xC45340: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:155 LDA (@LOCAL0A),Y
    case 0xC45341: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:156 LSR
    case 0xC45343: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:157 TAX
    case 0xC45344: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:158 STX @LOCAL06
    case 0xC45345: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA.asm:159 LDY #window_stats::current_option
    case 0xC45347: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA.asm:159 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC45347.
    case 0xC45349: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:160 LDA (@LOCAL0A),Y
    case 0xC4534A: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:161 JSL REDIRECT_C1138D
    case 0xC4534C: cpu.execute_instruction<0x22>(0xC10C49, 4); return true;
    // src/unknown/C4/C451FA.asm:162 LDX @LOCAL06
    case 0xC45350: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA.asm:163 STX @VIRTUAL02
    case 0xC45352: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:164 LDY @LOCAL0B
    case 0xC45354: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:165 CLC
    case 0xC45356: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:166 ADC @LOCAL0B
    case 0xC45357: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:167 DEC
    case 0xC45359: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:168 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4535A: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C451FA.asm:169 CMP @VIRTUAL02
    case 0xC4535E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C451FA.asm:170 BLTEQ @UNKNOWN7
    case 0xC45360: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C451FA.asm:170 BLTEQ @UNKNOWN7
    case 0xC45362: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:171 DEX
    case 0xC45364: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:172 DEX
    case 0xC45365: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:174 STX @LOCAL06
    case 0xC45366: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA.asm:175 LDA #0
    case 0xC45368: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:175 LDA #0
    // Overlapping static entry reached from 0xC45368.
    case 0xC4536A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:176 STA @LOCAL08
    case 0xC4536B: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:177 LDA #1
    case 0xC4536D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C451FA.asm:177 LDA #1
    // Overlapping static entry reached from 0xC4536D.
    case 0xC4536F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:178 STA @LOCAL05
    case 0xC45370: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA.asm:180 LDY #window_stats::text_y
    case 0xC45372: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C451FA.asm:180 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC45372.
    case 0xC45374: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:181 LDA (@LOCAL0A),Y
    case 0xC45375: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:181 LDA (@LOCAL0A),Y
    // Overlapping static entry reached from 0xC453EF.
    case 0xC45376: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:182 STA @VIRTUAL02
    case 0xC45377: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:182 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC45376.
    case 0xC45378: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:183 STA @LOCAL04
    case 0xC45379: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA.asm:184 LDA @LOCAL06
    case 0xC4537B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA.asm:185 STA @LOCAL0C
    case 0xC4537D: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA.asm:186 JMP @UNKNOWN19
    case 0xC4537F: cpu.execute_instruction<0x4C>(0x005459, 3); return true;
    // src/unknown/C4/C451FA.asm:188 LDX @LOCAL0B
    case 0xC45382: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:189 STX @LOCAL03
    case 0xC45384: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C451FA.asm:190 JMP @UNKNOWN17
    case 0xC45386: cpu.execute_instruction<0x4C>(0x005443, 3); return true;
    // src/unknown/C4/C451FA.asm:192 LDA @LOCAL0D
    case 0xC45389: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C451FA.asm:193 BEQL @UNKNOWN15
    case 0xC4538B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:193 BEQL @UNKNOWN15
    case 0xC4538D: cpu.execute_instruction<0x4C>(0x00540C, 3); return true;
    // src/unknown/C4/C451FA.asm:194 LDA @VIRTUAL04
    case 0xC45390: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:195 CLC
    case 0xC45392: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:196 ADC #.LOWORD(UNKNOWN_7E9691)
    case 0xC45393: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000091, 2); else cpu.execute_instruction<0x69>(0x009691, 3); return true;
    // src/unknown/C4/C451FA.asm:196 ADC #.LOWORD(UNKNOWN_7E9691)
    // Overlapping static entry reached from 0xC45393.
    case 0xC45395: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:197 STA @LOCAL02
    case 0xC45396: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C451FA.asm:197 STA @LOCAL02
    // Overlapping static entry reached from 0xC45395.
    case 0xC45397: cpu.execute_instruction<0x16>(0x0000A6, 2); return true;
    // src/unknown/C4/C451FA.asm:198 LDX @VIRTUAL04
    case 0xC45398: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:198 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC45397.
    case 0xC45399: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C451FA.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC4539A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:199 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45399.
    case 0xC4539B: cpu.execute_instruction<0x20>(0x0016B2, 3); return true;
    // src/unknown/C4/C451FA.asm:200 LDA (@LOCAL02)
    case 0xC4539C: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C4/C451FA.asm:201 SEC
    case 0xC4539E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:202 SBC MENU_OPTION_LABEL_LENGTHS,X
    case 0xC4539F: cpu.execute_instruction<0xFD>(0x00968D, 3); return true;
    // src/unknown/C4/C451FA.asm:203 REP #PROC_FLAGS::ACCUM8
    case 0xC453A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:204 AND #$00FF
    case 0xC453A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C451FA.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC453A4.
    case 0xC453A6: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C451FA.asm:205 PHA
    case 0xC453A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:206 ASL
    case 0xC453A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:207 PLA
    case 0xC453A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:208 ROR
    case 0xC453AA: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:209 ASL
    case 0xC453AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:210 PHP
    case 0xC453AC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:211 LSR
    case 0xC453AD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:212 LSR
    case 0xC453AE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:213 LSR
    case 0xC453AF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:214 LSR
    case 0xC453B0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:215 PLP
    case 0xC453B1: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:216 BCC @UNKNOWN12
    case 0xC453B2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C451FA.asm:217 ORA #$F000
    case 0xC453B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/unknown/C4/C451FA.asm:217 ORA #$F000
    // Overlapping static entry reached from 0xC453B4.
    case 0xC453B6: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:219 STA @VIRTUAL02
    case 0xC453B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:219 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC453B6.
    case 0xC453B8: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C4/C451FA.asm:220 LDA @LOCAL08
    case 0xC453B9: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:221 CLC
    case 0xC453BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:222 ADC @VIRTUAL02
    case 0xC453BC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:223 LDY @LOCAL09
    case 0xC453BE: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:224 STA a:menu_option::text_x,Y
    case 0xC453C0: cpu.execute_instruction<0x99>(0x000008, 3); return true;
    // src/unknown/C4/C451FA.asm:225 LDA @LOCAL04
    case 0xC453C3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA.asm:226 STA @VIRTUAL02
    case 0xC453C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:227 STA a:menu_option::text_y,Y
    case 0xC453C7: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA.asm:228 LDA @LOCAL05
    case 0xC453CA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA.asm:229 STA a:menu_option::page,Y
    case 0xC453CC: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C4/C451FA.asm:230 LDA a:menu_option::next,Y
    case 0xC453CF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C451FA.asm:231 TAY
    case 0xC453D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:232 CPY #.LOWORD(-1)
    case 0xC453D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA.asm:232 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC453D3.
    case 0xC453D5: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C451FA.asm:233 BEQL @UNKNOWN21
    case 0xC453D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:233 BEQL @UNKNOWN21
    case 0xC453D8: cpu.execute_instruction<0x4C>(0x005465, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:233 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC453D5.
    case 0xC453D9: cpu.execute_instruction<0x65>(0x000054, 2); return true;
    // src/unknown/C4/C451FA.asm:234 LDA (@LOCAL02)
    case 0xC453DB: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C4/C451FA.asm:235 AND #$00FF
    case 0xC453DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C451FA.asm:235 AND #$00FF
    // Overlapping static entry reached from 0xC453DD.
    case 0xC453DF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C451FA.asm:236 CLC
    case 0xC453E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:237 ADC #7
    case 0xC453E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C4/C451FA.asm:237 ADC #7
    // Overlapping static entry reached from 0xC453E1.
    case 0xC453E3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C451FA.asm:238 ASL
    case 0xC453E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:239 PHP
    case 0xC453E5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:240 LSR
    case 0xC453E6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:241 LSR
    case 0xC453E7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:242 LSR
    case 0xC453E8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:243 LSR
    case 0xC453E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:244 PLP
    case 0xC453EA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:245 BCC @UNKNOWN14
    case 0xC453EB: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C451FA.asm:246 ORA #$F000
    case 0xC453ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/unknown/C4/C451FA.asm:246 ORA #$F000
    // Overlapping static entry reached from 0xC453ED.
    case 0xC453EF: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:248 STA @VIRTUAL02
    case 0xC453F0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:248 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC453EF.
    case 0xC453F1: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C4/C451FA.asm:249 LDA @LOCAL08
    case 0xC453F2: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:250 CLC
    case 0xC453F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:251 ADC @VIRTUAL02
    case 0xC453F5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:252 STA @LOCAL08
    case 0xC453F7: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:253 INC @VIRTUAL04
    case 0xC453F9: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA.asm:254 TYA
    case 0xC453FB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:255 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC453FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:255 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC453FC.
    case 0xC453FE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:255 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC453FF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:256 CLC
    case 0xC45403: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:257 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC45404: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:257 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC45404.
    case 0xC45406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C4/C451FA.asm:258 TAY
    case 0xC45407: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:259 STY @LOCAL09
    case 0xC45408: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:259 STY @LOCAL09
    // Overlapping static entry reached from 0xC45406.
    case 0xC45409: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/C4/C451FA.asm:260 BRA @UNKNOWN16
    case 0xC4540A: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C4/C451FA.asm:260 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC45409.
    case 0xC4540B: cpu.execute_instruction<0x32>(0x0000A5, 2); return true;
    // src/unknown/C4/C451FA.asm:262 LDA @LOCAL08
    case 0xC4540C: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:262 LDA @LOCAL08
    // Overlapping static entry reached from 0xC4540B.
    case 0xC4540D: cpu.execute_instruction<0x22>(0x9924A4, 4); return true;
    // src/unknown/C4/C451FA.asm:263 LDY @LOCAL09
    case 0xC4540E: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:264 STA __BSS_START__+8,Y
    case 0xC45410: cpu.execute_instruction<0x99>(0x000008, 3); return true;
    // src/unknown/C4/C451FA.asm:264 STA __BSS_START__+8,Y
    // Overlapping static entry reached from 0xC4540D.
    case 0xC45411: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:264 STA __BSS_START__+8,Y
    // Overlapping static entry reached from 0xC45411.
    case 0xC45412: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C451FA.asm:265 LDA @LOCAL04
    case 0xC45413: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA.asm:266 STA @VIRTUAL02
    case 0xC45415: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:267 STA __BSS_START__+10,Y
    case 0xC45417: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA.asm:268 LDA @LOCAL05
    case 0xC4541A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA.asm:269 STA __BSS_START__+6,Y
    case 0xC4541C: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C4/C451FA.asm:270 LDA __BSS_START__+2,Y
    case 0xC4541F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C451FA.asm:271 TAY
    case 0xC45422: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:272 CPY #.LOWORD(-1)
    case 0xC45423: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA.asm:272 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC45423.
    case 0xC45425: cpu.execute_instruction<0xFF>(0xA53DF0, 4); return true;
    // src/unknown/C4/C451FA.asm:273 BEQ @UNKNOWN21
    case 0xC45426: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C4/C451FA.asm:274 LDA @LOCAL08
    case 0xC45428: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:274 LDA @LOCAL08
    // Overlapping static entry reached from 0xC45425.
    case 0xC45429: cpu.execute_instruction<0x22>(0x206518, 4); return true;
    // src/unknown/C4/C451FA.asm:275 CLC
    case 0xC4542A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:276 ADC @LOCAL07
    case 0xC4542B: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:277 STA @LOCAL08
    case 0xC4542D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:278 TYA
    case 0xC4542F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:279 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45430: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:279 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC45430.
    case 0xC45432: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:279 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45433: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:280 CLC
    case 0xC45437: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:281 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC45438: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:281 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC45438.
    case 0xC4543A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C4/C451FA.asm:282 TAY
    case 0xC4543B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:283 STY @LOCAL09
    case 0xC4543C: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C451FA.asm:283 STY @LOCAL09
    // Overlapping static entry reached from 0xC4543A.
    case 0xC4543D: cpu.execute_instruction<0x24>(0x0000A6, 2); return true;
    // src/unknown/C4/C451FA.asm:285 LDX @LOCAL03
    case 0xC4543E: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C451FA.asm:285 LDX @LOCAL03
    // Overlapping static entry reached from 0xC4543D.
    case 0xC4543F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:286 DEX
    case 0xC45440: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:287 STX @LOCAL03
    case 0xC45441: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C451FA.asm:289 BNEL @UNKNOWN10
    case 0xC45443: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:289 BNEL @UNKNOWN10
    case 0xC45445: cpu.execute_instruction<0x4C>(0x005389, 3); return true;
    // src/unknown/C4/C451FA.asm:290 LDA #0
    case 0xC45448: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:290 LDA #0
    // Overlapping static entry reached from 0xC45448.
    case 0xC4544A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA.asm:291 STA @LOCAL08
    case 0xC4544B: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA.asm:292 LDA @LOCAL04
    case 0xC4544D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA.asm:293 STA @VIRTUAL02
    case 0xC4544F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:294 INC @VIRTUAL02
    case 0xC45451: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:295 LDA @VIRTUAL02
    case 0xC45453: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:296 STA @LOCAL04
    case 0xC45455: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA.asm:297 DEC @LOCAL0C
    case 0xC45457: cpu.execute_instruction<0xC6>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA.asm:299 LDA @LOCAL0C
    case 0xC45459: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C451FA.asm:300 BNEL @UNKNOWN9
    case 0xC4545B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C451FA.asm:300 BNEL @UNKNOWN9
    case 0xC4545D: cpu.execute_instruction<0x4C>(0x005382, 3); return true;
    // src/unknown/C4/C451FA.asm:301 INC @LOCAL05
    case 0xC45460: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA.asm:302 JMP @UNKNOWN8
    case 0xC45462: cpu.execute_instruction<0x4C>(0x005372, 3); return true;
    // src/unknown/C4/C451FA.asm:304 LDA @LOCAL0A
    case 0xC45465: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:305 CLC
    case 0xC45467: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:306 ADC #window_stats::current_option
    case 0xC45468: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA.asm:306 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC45468.
    case 0xC4546A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C451FA.asm:307 TAX
    case 0xC4546B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:308 STX @LOCAL07
    case 0xC4546C: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:309 LDA __BSS_START__,X
    case 0xC4546E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:310 JSL REDIRECT_C1138D
    case 0xC45471: cpu.execute_instruction<0x22>(0xC10C49, 4); return true;
    // src/unknown/C4/C451FA.asm:311 STA @LOCAL0D
    case 0xC45475: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA.asm:312 LDY #window_stats::height
    case 0xC45477: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA.asm:312 LDY #window_stats::height
    // Overlapping static entry reached from 0xC45477.
    case 0xC45479: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:313 LDA (@LOCAL0A),Y
    case 0xC4547A: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:314 LSR
    case 0xC4547C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:315 STA @VIRTUAL02
    case 0xC4547D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA.asm:316 LDY @LOCAL0B
    case 0xC4547F: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:317 LDA @LOCAL0D
    case 0xC45481: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA.asm:318 CLC
    case 0xC45483: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:319 ADC @LOCAL0B
    case 0xC45484: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:320 DEC
    case 0xC45486: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:321 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC45487: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C451FA.asm:322 CMP @VIRTUAL02
    case 0xC4548B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C451FA.asm:323 BLTEQ @UNKNOWN24
    case 0xC4548D: cpu.execute_instruction<0x90>(0x000061, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C451FA.asm:323 BLTEQ @UNKNOWN24
    case 0xC4548F: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C4/C451FA.asm:324 LDX @LOCAL07
    case 0xC45491: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:325 LDA __BSS_START__,X
    case 0xC45493: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:326 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45496: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:326 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC45496.
    case 0xC45498: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:326 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC45499: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:327 CLC
    case 0xC4549D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:328 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC4549E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:328 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC4549E.
    case 0xC454A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A4AA, 3); return true;
    // src/unknown/C4/C451FA.asm:329 TAX
    case 0xC454A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:330 LDY @LOCAL0B
    case 0xC454A2: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C451FA.asm:330 LDY @LOCAL0B
    // Overlapping static entry reached from 0xC454A0.
    case 0xC454A3: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:331 DEY
    case 0xC454A4: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:332 STY @LOCAL07
    case 0xC454A5: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:333 BRA @UNKNOWN23
    case 0xC454A7: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C451FA.asm:335 DEY
    case 0xC454A9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:336 STY @LOCAL07
    case 0xC454AA: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:337 LDA a:menu_option::next,X
    case 0xC454AC: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:338 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC454AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C4/C451FA.asm:338 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC454AF.
    case 0xC454B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C4/C451FA.asm:338 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC454B2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:339 CLC
    case 0xC454B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:340 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC454B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C4/C451FA.asm:340 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC454B7.
    case 0xC454B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A4AA, 3); return true;
    // src/unknown/C4/C451FA.asm:341 TAX
    case 0xC454BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:343 LDY @LOCAL07
    case 0xC454BB: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C4/C451FA.asm:343 LDY @LOCAL07
    // Overlapping static entry reached from 0xC454B9.
    case 0xC454BC: cpu.execute_instruction<0x20>(0x00EAD0, 3); return true;
    // src/unknown/C4/C451FA.asm:344 BNE @UNKNOWN22
    case 0xC454BD: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC454BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00E44C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC454BF.
    case 0xC454C1: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC454C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC454C1.
    case 0xC454C3: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC454C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC454C4.
    case 0xC454C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C451FA.asm:345 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC454C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC454C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC454C9.
    case 0xC454CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC454CC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC454CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC454CE.
    case 0xC454D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C451FA.asm:346 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC454D1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C451FA.asm:347 LDY #window_stats::height
    case 0xC454D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA.asm:347 LDY #window_stats::height
    // Overlapping static entry reached from 0xC454D3.
    case 0xC454D5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:348 LDA (@LOCAL0A),Y
    case 0xC454D6: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:349 LSR
    case 0xC454D8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:350 TAY
    case 0xC454D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:351 DEY
    case 0xC454DA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:352 LDX #0
    case 0xC454DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C451FA.asm:352 LDX #0
    // Overlapping static entry reached from 0xC454DB.
    case 0xC454DD: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C451FA.asm:353 TXA
    case 0xC454DE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:354 JSL UNKNOWN_C10BFE
    case 0xC454DF: cpu.execute_instruction<0x22>(0xC10BFE, 4); return true;
    // src/unknown/C4/C451FA.asm:355 LDY #window_stats::option_count ; also .SIZEOF(menu_option) for the following multiplication
    case 0xC454E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C4/C451FA.asm:355 LDY #window_stats::option_count ; also .SIZEOF(menu_option) for the following multiplication
    // Overlapping static entry reached from 0xC454E3.
    case 0xC454E5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA.asm:356 LDA (@LOCAL0A),Y
    case 0xC454E6: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA.asm:357 JSL MULT168
    case 0xC454E8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C451FA.asm:358 TAX
    case 0xC454EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA.asm:359 STZ MENU_OPTIONS + menu_option::page,X
    case 0xC454ED: cpu.execute_instruction<0x9E>(0x0089DA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C451FA.asm:361 END_C_FUNCTION
    case 0xC454F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C451FA.asm:361 END_C_FUNCTION
    case 0xC454F1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45C90.asm (unresolved).
bool execute_unresolved_c4_c45c90_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45C90.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45C90: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C92: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C93: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C94: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC45C95.
    case 0xC45C97: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C98: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC45C99: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:12 STA @VIRTUAL04
    case 0xC45C9A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C45C90.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC45C97.
    case 0xC45C9B: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45C9C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45C9B.
    case 0xC45C9D: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45C9E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45C9D.
    case 0xC45C9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45CA0: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45CA2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C45C90.asm:15 LDA DMA_TRANSFER_FLAG
    case 0xC45CA4: cpu.execute_instruction<0xAD>(0x009E2B, 3); return true;
    // src/unknown/C4/C45C90.asm:16 BNE @UNKNOWN0
    case 0xC45CA7: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/unknown/C4/C45C90.asm:17 LDY #8
    case 0xC45CA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C45C90.asm:17 LDY #8
    // Overlapping static entry reached from 0xC45CA9.
    case 0xC45CAB: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C45C90.asm:18 LDA VWF_X
    case 0xC45CAC: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C45C90.asm:19 JSL MODULUS16
    case 0xC45CAF: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C45C90.asm:20 STA @VIRTUAL02
    case 0xC45CB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:21 LDA VWF_TILE
    case 0xC45CB5: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C45C90.asm:22 ASL
    case 0xC45CB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:23 ASL
    case 0xC45CB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:24 ASL
    case 0xC45CBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:25 ASL
    case 0xC45CBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:26 ASL
    case 0xC45CBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:27 CLC
    case 0xC45CBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:28 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC45CBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x009D23, 3); return true;
    // src/unknown/C4/C45C90.asm:28 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC45CBE.
    case 0xC45CC0: cpu.execute_instruction<0x9D>(0x001485, 3); return true;
    // src/unknown/C4/C45C90.asm:29 STA @LOCAL03
    case 0xC45CC1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45CC3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45CC5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45CC7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45CC9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C45C90.asm:31 LDY #0
    case 0xC45CCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:31 LDY #0
    // Overlapping static entry reached from 0xC45CCB.
    case 0xC45CCD: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C45C90.asm:32 STY @LOCAL02
    case 0xC45CCE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:33 BRA @UNKNOWN2
    case 0xC45CD0: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C4/C45C90.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC45CD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:36 LDA [@VIRTUAL06]
    case 0xC45CD4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:37 EOR #$FF
    case 0xC45CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:38 STA @VIRTUAL00
    case 0xC45CD8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:38 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45CD6.
    case 0xC45CD9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC45CDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:40 LDA @VIRTUAL02
    case 0xC45CDC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC45CDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:42 STA @VIRTUAL01
    case 0xC45CE0: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:43 SEP #PROC_FLAGS::INDEX8
    case 0xC45CE2: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:44 LDY @VIRTUAL01
    case 0xC45CE4: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:45 LDA @VIRTUAL00
    case 0xC45CE6: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:46 JSL ASR8_UNKNOWN1
    case 0xC45CE8: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C45C90.asm:47 EOR #$FF
    case 0xC45CEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:48 STA @VIRTUAL00
    case 0xC45CEE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:48 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45CEC.
    case 0xC45CEF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC45CF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:50 LDA @LOCAL03
    case 0xC45CF2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:51 PHA
    case 0xC45CF4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC45CF5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:53 TAX
    case 0xC45CF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC45CF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:55 LDA __BSS_START__,X
    case 0xC45CFA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:56 AND @VIRTUAL00
    case 0xC45CFD: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:57 PLX
    case 0xC45CFF: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:58 STA __BSS_START__,X
    case 0xC45D00: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:59 LDY #256
    case 0xC45D03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C45C90.asm:59 LDY #256
    // Overlapping static entry reached from 0xC45D03.
    case 0xC45D05: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C45C90.asm:60 LDA [@VIRTUAL06],Y
    case 0xC45D06: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:60 LDA [@VIRTUAL06],Y
    // Overlapping static entry reached from 0xC45D05.
    case 0xC45D07: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:61 EOR #$FF
    case 0xC45D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:61 EOR #$FF
    // Overlapping static entry reached from 0xC45D07.
    case 0xC45D09: cpu.execute_instruction<0xFF>(0xE20085, 4); return true;
    // src/unknown/C4/C45C90.asm:62 STA @VIRTUAL00
    case 0xC45D0A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:62 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45D08.
    case 0xC45D0B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45C90.asm:63 SEP #PROC_FLAGS::INDEX8
    case 0xC45D0C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:63 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC45D09.
    case 0xC45D0D: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:64 LDY @VIRTUAL01
    case 0xC45D0E: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:64 LDY @VIRTUAL01
    // Overlapping static entry reached from 0xC45D0D.
    case 0xC45D0F: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C45C90.asm:65 LDA @VIRTUAL00
    case 0xC45D10: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:65 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC45D0F.
    case 0xC45D11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C45C90.asm:66 JSL ASR8_UNKNOWN1
    case 0xC45D12: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C45C90.asm:67 EOR #$FF
    case 0xC45D16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:68 STA @VIRTUAL00
    case 0xC45D18: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45D16.
    case 0xC45D19: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC45D1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:70 LDA @LOCAL03
    case 0xC45D1C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:71 CLC
    case 0xC45D1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:72 ADC #16
    case 0xC45D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:72 ADC #16
    // Overlapping static entry reached from 0xC45D1F.
    case 0xC45D21: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:73 REP #PROC_FLAGS::INDEX8
    case 0xC45D22: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:74 TAX
    case 0xC45D24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC45D25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:76 LDA __BSS_START__,X
    case 0xC45D27: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:77 AND @VIRTUAL00
    case 0xC45D2A: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:78 STA __BSS_START__,X
    case 0xC45D2C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:79 LDY @LOCAL02
    case 0xC45D2F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:80 INY
    case 0xC45D31: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:81 STY @LOCAL02
    case 0xC45D32: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC45D34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:83 INC @VIRTUAL06
    case 0xC45D36: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:84 LDA @LOCAL03
    case 0xC45D38: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:85 INC
    case 0xC45D3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:86 STA @LOCAL03
    case 0xC45D3B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:88 CPY #16
    case 0xC45D3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:88 CPY #16
    // Overlapping static entry reached from 0xC45D3D.
    case 0xC45D3F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:89 BCC @UNKNOWN1
    case 0xC45D40: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:90 LDA @VIRTUAL04
    case 0xC45D42: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C45C90.asm:91 CLC
    case 0xC45D44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:92 ADC VWF_X
    case 0xC45D45: cpu.execute_instruction<0x6D>(0x009E23, 3); return true;
    // src/unknown/C4/C45C90.asm:93 STA VWF_X
    case 0xC45D48: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C45C90.asm:97 CMP #64
    case 0xC45D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C45C90.asm:97 CMP #64
    // Overlapping static entry reached from 0xC45D4B.
    case 0xC45D4D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:99 BCC @UNKNOWN3
    case 0xC45D4E: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C45C90.asm:100 SEC
    case 0xC45D50: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:104 SBC #64
    case 0xC45D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/unknown/C4/C45C90.asm:104 SBC #64
    // Overlapping static entry reached from 0xC45D51.
    case 0xC45D53: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C45C90.asm:106 STA VWF_X
    case 0xC45D54: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C45C90.asm:108 LDA VWF_X
    case 0xC45D57: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C45C90.asm:109 LSR
    case 0xC45D5A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:110 LSR
    case 0xC45D5B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:111 LSR
    case 0xC45D5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:112 STA @LOCAL01
    case 0xC45D5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:113 CMP VWF_TILE
    case 0xC45D5F: cpu.execute_instruction<0xCD>(0x009E25, 3); return true;
    // src/unknown/C4/C45C90.asm:114 BEQ @UNKNOWN6
    case 0xC45D62: cpu.execute_instruction<0xF0>(0x000077, 2); return true;
    // src/unknown/C4/C45C90.asm:115 STA VWF_TILE
    case 0xC45D64: cpu.execute_instruction<0x8D>(0x009E25, 3); return true;
    // src/unknown/C4/C45C90.asm:116 LDA #8
    case 0xC45D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C45C90.asm:116 LDA #8
    // Overlapping static entry reached from 0xC45D67.
    case 0xC45D69: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C45C90.asm:117 SEC
    case 0xC45D6A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:118 SBC @VIRTUAL02
    case 0xC45D6B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:119 TAY
    case 0xC45D6D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:120 STY @LOCAL02
    case 0xC45D6E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:121 LDA @LOCAL01
    case 0xC45D70: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:122 ASL
    case 0xC45D72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:123 ASL
    case 0xC45D73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:124 ASL
    case 0xC45D74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:125 ASL
    case 0xC45D75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:126 ASL
    case 0xC45D76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:127 CLC
    case 0xC45D77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:128 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC45D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x009D23, 3); return true;
    // src/unknown/C4/C45C90.asm:128 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC45D78.
    case 0xC45D7A: cpu.execute_instruction<0x9D>(0x0086AA, 3); return true;
    // src/unknown/C4/C45C90.asm:129 TAX
    case 0xC45D7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:130 STX @LOCAL03
    case 0xC45D7C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:130 STX @LOCAL03
    // Overlapping static entry reached from 0xC45D7A.
    case 0xC45D7D: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45D7E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC45D7D.
    case 0xC45D7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45D80: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45D82: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45D84: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C45C90.asm:132 LDA #0
    case 0xC45D86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:132 LDA #0
    // Overlapping static entry reached from 0xC45D86.
    case 0xC45D88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C45C90.asm:133 STA @LOCAL00
    case 0xC45D89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:134 BRA @UNKNOWN5
    case 0xC45D8B: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC45D8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:137 LDA [@VIRTUAL06]
    case 0xC45D8F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:138 EOR #$FF
    case 0xC45D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:139 STA @VIRTUAL00
    case 0xC45D93: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:139 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45D91.
    case 0xC45D94: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:140 LDY @LOCAL02
    case 0xC45D95: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:141 SEP #PROC_FLAGS::INDEX8
    case 0xC45D97: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:142 STY @VIRTUAL01
    case 0xC45D99: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:143 LDA @VIRTUAL00
    case 0xC45D9B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:144 JSL ASL16_ENTRY2
    case 0xC45D9D: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C45C90.asm:145 EOR #$FF
    case 0xC45DA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:146 STA @VIRTUAL00
    case 0xC45DA3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:146 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45DA1.
    case 0xC45DA4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:147 REP #PROC_FLAGS::INDEX8
    case 0xC45DA5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:148 LDX @LOCAL03
    case 0xC45DA7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:149 STA __BSS_START__,X
    case 0xC45DA9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:150 LDY #256
    case 0xC45DAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C45C90.asm:150 LDY #256
    // Overlapping static entry reached from 0xC45DAC.
    case 0xC45DAE: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C45C90.asm:151 LDA [@VIRTUAL06],Y
    case 0xC45DAF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:151 LDA [@VIRTUAL06],Y
    // Overlapping static entry reached from 0xC45DAE.
    case 0xC45DB0: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:152 EOR #$FF
    case 0xC45DB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:152 EOR #$FF
    // Overlapping static entry reached from 0xC45DB0.
    case 0xC45DB2: cpu.execute_instruction<0xFF>(0xE20085, 4); return true;
    // src/unknown/C4/C45C90.asm:153 STA @VIRTUAL00
    case 0xC45DB3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:153 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45DB1.
    case 0xC45DB4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45C90.asm:154 SEP #PROC_FLAGS::INDEX8
    case 0xC45DB5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:154 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC45DB2.
    case 0xC45DB6: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:155 LDY @VIRTUAL01
    case 0xC45DB7: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:155 LDY @VIRTUAL01
    // Overlapping static entry reached from 0xC45DB6.
    case 0xC45DB8: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C45C90.asm:156 LDA @VIRTUAL00
    case 0xC45DB9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:156 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC45DB8.
    case 0xC45DBA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C45C90.asm:157 JSL ASL16_ENTRY2
    case 0xC45DBB: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C45C90.asm:158 EOR #$FF
    case 0xC45DBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:159 STA @VIRTUAL00
    case 0xC45DC1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:159 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC45DBF.
    case 0xC45DC2: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:160 REP #PROC_FLAGS::INDEX8
    case 0xC45DC3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:161 LDX @LOCAL03
    case 0xC45DC5: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:162 STA __BSS_START__+16,X
    case 0xC45DC7: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC45DCA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:164 LDA @LOCAL00
    case 0xC45DCC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:165 INC
    case 0xC45DCE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:166 STA @LOCAL00
    case 0xC45DCF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:167 INC @VIRTUAL06
    case 0xC45DD1: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:168 INX
    case 0xC45DD3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:169 STX @LOCAL03
    case 0xC45DD4: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:171 CMP #16
    case 0xC45DD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:171 CMP #16
    // Overlapping static entry reached from 0xC45DD6.
    case 0xC45DD8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:172 BCC @UNKNOWN4
    case 0xC45DD9: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C45C90.asm:174 END_C_FUNCTION
    case 0xC45DDB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45C90.asm:174 END_C_FUNCTION
    case 0xC45DDC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45DDD.asm (unresolved).
bool execute_unresolved_c4_c45ddd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45DDD.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC45DDD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DDF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DE1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC45DE2.
    case 0xC45DE4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DE5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC45DE6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:11 TAX
    case 0xC45DE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:12 DEC
    case 0xC45DE8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:13 STA @LOCAL02
    case 0xC45DE9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:14 LDA UNKNOWN_7E9E27
    case 0xC45DEB: cpu.execute_instruction<0xAD>(0x009E27, 3); return true;
    // src/unknown/C4/C45DDD.asm:15 DEC
    case 0xC45DEE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:16 STA @LOCAL01
    case 0xC45DEF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:18 INC @LOCAL02
    case 0xC45DF1: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:19 LDA @LOCAL02
    case 0xC45DF3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:23 CMP #7
    case 0xC45DF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C4/C45DDD.asm:23 CMP #7
    // Overlapping static entry reached from 0xC45DF5.
    case 0xC45DF7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C45DDD.asm:25 BLTEQ @UNKNOWN1
    case 0xC45DF8: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C45DDD.asm:25 BLTEQ @UNKNOWN1
    case 0xC45DFA: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:26 STZ @LOCAL02
    case 0xC45DFC: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:28 INC @LOCAL01
    case 0xC45DFE: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:29 LDA @LOCAL01
    case 0xC45E00: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:30 CMP #48
    case 0xC45E02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C4/C45DDD.asm:30 CMP #48
    // Overlapping static entry reached from 0xC45E02.
    case 0xC45E04: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45DDD.asm:31 BCC @UNKNOWN2
    case 0xC45E05: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:32 STZ @LOCAL01
    case 0xC45E07: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:34 LDA @LOCAL01
    case 0xC45E09: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:35 AND #$000F
    case 0xC45E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C45DDD.asm:35 AND #$000F
    // Overlapping static entry reached from 0xC45E0B.
    case 0xC45E0D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C45DDD.asm:36 ASL
    case 0xC45E0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:37 ASL
    case 0xC45E0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:38 ASL
    case 0xC45E10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:39 STA @VIRTUAL02
    case 0xC45E11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:40 LDA @LOCAL01
    case 0xC45E13: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:41 AND #$00F0
    case 0xC45E15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/unknown/C4/C45DDD.asm:41 AND #$00F0
    // Overlapping static entry reached from 0xC45E15.
    case 0xC45E17: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C45DDD.asm:42 ASL
    case 0xC45E18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:43 ASL
    case 0xC45E19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:44 ASL
    case 0xC45E1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:45 ASL
    case 0xC45E1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:46 CLC
    case 0xC45E1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:47 ADC @VIRTUAL02
    case 0xC45E1D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:48 CLC
    case 0xC45E1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:49 ADC #VRAM::TEXT_LAYER_TILES + $1900
    case 0xC45E20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007900, 3); return true;
    // src/unknown/C4/C45DDD.asm:49 ADC #VRAM::TEXT_LAYER_TILES + $1900
    // Overlapping static entry reached from 0xC45E20.
    case 0xC45E22: cpu.execute_instruction<0x79>(0x000485, 3); return true;
    // src/unknown/C4/C45DDD.asm:50 STA @VIRTUAL04
    case 0xC45E23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C45DDD.asm:51 LDA @LOCAL02
    case 0xC45E25: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:52 ASL
    case 0xC45E27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:53 ASL
    case 0xC45E28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:54 ASL
    case 0xC45E29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:55 ASL
    case 0xC45E2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:56 ASL
    case 0xC45E2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:57 STA @VIRTUAL02
    case 0xC45E2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:58 CLC
    case 0xC45E2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:59 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC45E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x009D23, 3); return true;
    // src/unknown/C4/C45DDD.asm:59 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC45E2F.
    case 0xC45E31: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E32: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E34: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E37: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E38: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E3A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C45DDD.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC45E3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45E3E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45E40: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45E42: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45E44: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C45DDD.asm:63 LDY @VIRTUAL04
    case 0xC45E46: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C45DDD.asm:64 LDX #16
    case 0xC45E48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C45DDD.asm:64 LDX #16
    // Overlapping static entry reached from 0xC45E48.
    case 0xC45E4A: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45DDD.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC45E4B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45DDD.asm:66 LDA #0
    case 0xC45E4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    case 0xC45E4F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC45E4D.
    case 0xC45E50: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC45E50.
    case 0xC45E52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C45DDD.asm:69 LDA @VIRTUAL02
    case 0xC45E53: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:69 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC45E52.
    case 0xC45E54: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C45DDD.asm:70 CLC
    case 0xC45E55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:71 ADC #.LOWORD(UNKNOWN_7E9D23) + 16
    case 0xC45E56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x009D33, 3); return true;
    // src/unknown/C4/C45DDD.asm:71 ADC #.LOWORD(UNKNOWN_7E9D23) + 16
    // Overlapping static entry reached from 0xC45E56.
    case 0xC45E58: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E59: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E5B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E5C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E5E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45E61: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C45DDD.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC45E63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E65: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E67: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E69: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E6B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E6D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC45E70.
    case 0xC45E72: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E73: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC45E74.
    case 0xC45E76: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E77: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC45E7B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC45E79.
    case 0xC45E7C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC45E7C.
    case 0xC45E7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0025AD, 3); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    case 0xC45E7F: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    // Overlapping static entry reached from 0xC45E7E.
    case 0xC45E80: cpu.execute_instruction<0x25>(0x00009E, 2); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    // Overlapping static entry reached from 0xC45E7E.
    case 0xC45E81: cpu.execute_instruction<0x9E>(0x0014C5, 3); return true;
    // src/unknown/C4/C45DDD.asm:77 CMP @LOCAL02
    case 0xC45E82: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    case 0xC45E84: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    case 0xC45E86: cpu.execute_instruction<0x4C>(0x005DF1, 3); return true;
    // src/unknown/C4/C45DDD.asm:79 LDA @LOCAL01
    case 0xC45E89: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:80 STA UNKNOWN_7E9E27
    case 0xC45E8B: cpu.execute_instruction<0x8D>(0x009E27, 3); return true;
    // src/unknown/C4/C45DDD.asm:81 LDA #1
    case 0xC45E8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C45DDD.asm:81 LDA #1
    // Overlapping static entry reached from 0xC45E8E.
    case 0xC45E90: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C45DDD.asm:82 STA DMA_TRANSFER_FLAG
    case 0xC45E91: cpu.execute_instruction<0x8D>(0x009E2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C45DDD.asm:83 END_C_FUNCTION
    case 0xC45E94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45DDD.asm:83 END_C_FUNCTION
    case 0xC45E95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45E96.asm (unresolved).
bool execute_unresolved_c4_c45e96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45E96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45E96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C45E96.asm:6 LDA DMA_TRANSFER_FLAG
    case 0xC45E98: cpu.execute_instruction<0xAD>(0x009E2B, 3); return true;
    // src/unknown/C4/C45E96.asm:7 BNE @UNKNOWN0
    case 0xC45E9B: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/unknown/C4/C45E96.asm:8 LDX #0
    case 0xC45E9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C45E96.asm:8 LDX #0
    // Overlapping static entry reached from 0xC45E9D.
    case 0xC45E9F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C45E96.asm:9 BRA @UNKNOWN2
    case 0xC45EA0: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C45E96.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC45EA2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45E96.asm:12 LDA #<-1
    case 0xC45EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    case 0xC45EA6: cpu.execute_instruction<0x9D>(0x009D23, 3); return true;
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    // Overlapping static entry reached from 0xC45EA4.
    case 0xC45EA7: cpu.execute_instruction<0x23>(0x00009D, 2); return true;
    // src/unknown/C4/C45E96.asm:14 INX
    case 0xC45EA9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45E96.asm:16 CPX #32
    case 0xC45EAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C45E96.asm:16 CPX #32
    // Overlapping static entry reached from 0xC45EAA.
    case 0xC45EAC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45E96.asm:17 BCC @UNKNOWN1
    case 0xC45EAD: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C4/C45E96.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC45EAF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45E96.asm:19 STZ VWF_TILE
    case 0xC45EB1: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C45E96.asm:20 STZ VWF_X
    case 0xC45EB4: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C4/C45E96.asm:21 LDX UNKNOWN_7E9E27
    case 0xC45EB7: cpu.execute_instruction<0xAE>(0x009E27, 3); return true;
    // src/unknown/C4/C45E96.asm:22 INX
    case 0xC45EBA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45E96.asm:23 STX UNKNOWN_7E9E27
    case 0xC45EBB: cpu.execute_instruction<0x8E>(0x009E27, 3); return true;
    // src/unknown/C4/C45E96.asm:24 CPX #48
    case 0xC45EBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C4/C45E96.asm:24 CPX #48
    // Overlapping static entry reached from 0xC45EBE.
    case 0xC45EC0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45E96.asm:25 BCC @UNKNOWN3
    case 0xC45EC1: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C45E96.asm:26 STZ UNKNOWN_7E9E27
    case 0xC45EC3: cpu.execute_instruction<0x9C>(0x009E27, 3); return true;
    // src/unknown/C4/C45E96.asm:28 STZ UNKNOWN_7E9E29
    case 0xC45EC6: cpu.execute_instruction<0x9C>(0x009E29, 3); return true;
    // src/unknown/C4/C45E96.asm:30 JSL UNKNOWN_C44E44
    case 0xC45EC9: cpu.execute_instruction<0x22>(0xC44E44, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45E96.asm:32 END_C_FUNCTION
    case 0xC45ECD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46028.asm (unresolved).
bool execute_unresolved_c4_c46028_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46028.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46028: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC4602A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC4602B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC4602C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC4602D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4602D.
    case 0xC4602F: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC46030: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC46031: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:10 TAX
    case 0xC46032: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:11 STX @LOCAL01
    case 0xC46033: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46028.asm:12 LDA #0
    case 0xC46035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46028.asm:12 LDA #0
    // Overlapping static entry reached from 0xC46035.
    case 0xC46037: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46028.asm:13 STA @LOCAL00
    case 0xC46038: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:14 BRA @UNKNOWN2
    case 0xC4603A: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C46028.asm:16 ASL
    case 0xC4603C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:17 PHA
    case 0xC4603D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:18 LDX @LOCAL01
    case 0xC4603E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46028.asm:19 TXA
    case 0xC46040: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:20 PLX
    case 0xC46041: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:21 CMP ENTITY_SPRITE_IDS,X
    case 0xC46042: cpu.execute_instruction<0xDD>(0x002CD6, 3); return true;
    // src/unknown/C4/C46028.asm:22 BNE @UNKNOWN1
    case 0xC46045: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C46028.asm:23 LDA @LOCAL00
    case 0xC46047: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:24 BRA @UNKNOWN3
    case 0xC46049: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C46028.asm:26 LDA @LOCAL00
    case 0xC4604B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:27 INC
    case 0xC4604D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:28 STA @LOCAL00
    case 0xC4604E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:30 CMP #MAX_ENTITIES
    case 0xC46050: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C46028.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC46050.
    case 0xC46052: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C46028.asm:31 BCC @UNKNOWN0
    case 0xC46053: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C46028.asm:32 LDA #.LOWORD(-1)
    case 0xC46055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46028.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46055.
    case 0xC46057: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46028.asm:34 END_C_FUNCTION
    case 0xC46058: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46028.asm:34 END_C_FUNCTION
    case 0xC46059: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4605A.asm (unresolved).
bool execute_unresolved_c4_c4605a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4605A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4605A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4605A.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC46057.
    case 0xC4605B: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC4605C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC4605D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC4605E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC4605F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4605F.
    case 0xC46061: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC46062: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC46063: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:10 TAX
    case 0xC46064: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:11 STX @LOCAL01
    case 0xC46065: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4605A.asm:12 LDA #0
    case 0xC46067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4605A.asm:12 LDA #0
    // Overlapping static entry reached from 0xC46067.
    case 0xC46069: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4605A.asm:13 STA @LOCAL00
    case 0xC4606A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:14 BRA @UNKNOWN2
    case 0xC4606C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4605A.asm:16 ASL
    case 0xC4606E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:17 PHA
    case 0xC4606F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:18 LDX @LOCAL01
    case 0xC46070: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4605A.asm:19 TXA
    case 0xC46072: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:20 PLX
    case 0xC46073: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:21 CMP ENTITY_NPC_IDS,X
    case 0xC46074: cpu.execute_instruction<0xDD>(0x002C9A, 3); return true;
    // src/unknown/C4/C4605A.asm:22 BNE @UNKNOWN1
    case 0xC46077: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4605A.asm:23 LDA @LOCAL00
    case 0xC46079: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:24 BRA @UNKNOWN3
    case 0xC4607B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4605A.asm:26 LDA @LOCAL00
    case 0xC4607D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:27 INC
    case 0xC4607F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:28 STA @LOCAL00
    case 0xC46080: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:30 CMP #MAX_ENTITIES
    case 0xC46082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C4605A.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC46082.
    case 0xC46084: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4605A.asm:31 BCC @UNKNOWN0
    case 0xC46085: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4605A.asm:32 LDA #.LOWORD(-1)
    case 0xC46087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4605A.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46087.
    case 0xC46089: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4605A.asm:34 END_C_FUNCTION
    case 0xC4608A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4605A.asm:34 END_C_FUNCTION
    case 0xC4608B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4608C.asm (unresolved).
bool execute_unresolved_c4_c4608c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4608C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4608C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4608C.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC46089.
    case 0xC4608D: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC4608E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC4608F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC46090: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC46091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46091.
    case 0xC46093: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC46094: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4608C.asm:8 END_STACK_VARS
    case 0xC46095: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4608C.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC46096: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C.asm:9 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46093.
    case 0xC46097: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/unknown/C4/C4608C.asm:10 STA @LOCAL00
    case 0xC46098: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC4609A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C.asm:12 AND #$00FF
    case 0xC4609C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4608C.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC4609C.
    case 0xC4609E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4608C.asm:13 CMP #$00FF
    case 0xC4609F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4608C.asm:13 CMP #$00FF
    // Overlapping static entry reached from 0xC4609F.
    case 0xC460A1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4608C.asm:14 BNE @UNKNOWN0
    case 0xC460A2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4608C.asm:15 LDA GAME_STATE+game_state::current_party_members
    case 0xC460A4: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C4/C4608C.asm:16 BRA @UNKNOWN4
    case 0xC460A7: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C4/C4608C.asm:18 LDX #0
    case 0xC460A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4608C.asm:18 LDX #0
    // Overlapping static entry reached from 0xC460A9.
    case 0xC460AB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4608C.asm:19 BRA @UNKNOWN3
    case 0xC460AC: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4608C.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC460AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C.asm:22 LDA @LOCAL00
    case 0xC460B0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C.asm:23 CMP GAME_STATE + game_state::unknown96,X
    case 0xC460B2: cpu.execute_instruction<0xDD>(0x00988B, 3); return true;
    // src/unknown/C4/C4608C.asm:24 BNE @UNKNOWN2
    case 0xC460B5: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C4608C.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC460B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C.asm:26 TXA
    case 0xC460B9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C.asm:27 ASL
    case 0xC460BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C.asm:28 TAX
    case 0xC460BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4608C.asm:29 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC460BC: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C4608C.asm:30 BRA @UNKNOWN4
    case 0xC460BF: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C4608C.asm:32 INX
    case 0xC460C1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4608C.asm:34 CPX #6
    case 0xC460C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C4608C.asm:34 CPX #6
    // Overlapping static entry reached from 0xC460C2.
    case 0xC460C4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4608C.asm:35 BCC @UNKNOWN1
    case 0xC460C5: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4608C.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC460C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C.asm:37 LDA #.LOWORD(-1)
    case 0xC460C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4608C.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC460C9.
    case 0xC460CB: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4608C.asm:39 END_C_FUNCTION
    case 0xC460CC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4608C.asm:39 END_C_FUNCTION
    case 0xC460CD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C460CE.asm (unresolved).
bool execute_unresolved_c4_c460ce_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C460CE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC460CE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C460CE.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC460CB.
    case 0xC460CF: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC460D3.
    case 0xC460D5: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC460D7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:11 TXY
    case 0xC460D8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:12 STY @LOCAL02
    case 0xC460D9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C460CE.asm:13 TAX
    case 0xC460DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:14 JSL UNKNOWN_C4605A
    case 0xC460DC: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C460CE.asm:15 STA @LOCAL01
    case 0xC460E0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C460CE.asm:16 CMP #.LOWORD(-1)
    case 0xC460E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C460CE.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC460E2.
    case 0xC460E4: cpu.execute_instruction<0xFF>(0x0A3CF0, 4); return true;
    // src/unknown/C4/C460CE.asm:17 BEQ @UNKNOWN2
    case 0xC460E5: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C460CE.asm:18 ASL
    case 0xC460E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:19 TAX
    case 0xC460E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC460E9: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C460CE.asm:21 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC460EC: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/unknown/C4/C460CE.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC460EF: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C460CE.asm:23 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC460F2: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/unknown/C4/C460CE.asm:24 LDA ENTITY_DIRECTIONS,X
    case 0xC460F5: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C4/C460CE.asm:25 STA ENTITY_PREPARED_DIRECTION
    case 0xC460F8: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // src/unknown/C4/C460CE.asm:26 LDY @LOCAL02
    case 0xC460FB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C460CE.asm:27 CPY #6
    case 0xC460FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C460CE.asm:27 CPY #6
    // Overlapping static entry reached from 0xC460FD.
    case 0xC460FF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C460CE.asm:28 BEQ @UNKNOWN0
    case 0xC46100: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC46102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x00A209, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC46102.
    case 0xC46104: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC46105: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC46104.
    case 0xC46106: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC46107: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC46107.
    case 0xC46109: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC4610A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:30 BRA @UNKNOWN1
    case 0xC4610C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC4610E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A204, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC4610E.
    case 0xC46110: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC46111: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC46110.
    case 0xC46112: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC46113: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC46113.
    case 0xC46115: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC46116: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:34 LDY @LOCAL00+2
    case 0xC46118: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:35 LDA @LOCAL01
    case 0xC4611A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C460CE.asm:36 TAX
    case 0xC4611C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:37 LDA @LOCAL00
    case 0xC4611D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C460CE.asm:38 JSL INIT_ENTITY_UNKNOWN1
    case 0xC4611F: cpu.execute_instruction<0x22>(0xC093F9, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C460CE.asm:40 END_C_FUNCTION
    case 0xC46123: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C460CE.asm:40 END_C_FUNCTION
    case 0xC46124: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46125.asm (unresolved).
bool execute_unresolved_c4_c46125_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46125.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46125: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC46127: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC46128: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC46129: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC4612A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4612A.
    case 0xC4612C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC4612D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC4612E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:11 TXY
    case 0xC4612F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:12 STY @LOCAL02
    case 0xC46130: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C46125.asm:13 TAX
    case 0xC46132: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:14 JSL UNKNOWN_C46028
    case 0xC46133: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46125.asm:15 STA @LOCAL01
    case 0xC46137: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46125.asm:16 CMP #.LOWORD(-1)
    case 0xC46139: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46125.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46139.
    case 0xC4613B: cpu.execute_instruction<0xFF>(0x0A3CF0, 4); return true;
    // src/unknown/C4/C46125.asm:17 BEQ @UNKNOWN2
    case 0xC4613C: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C46125.asm:18 ASL
    case 0xC4613E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:19 TAX
    case 0xC4613F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46140: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46125.asm:21 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC46143: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/unknown/C4/C46125.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46146: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46125.asm:23 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46149: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/unknown/C4/C46125.asm:24 LDA ENTITY_DIRECTIONS,X
    case 0xC4614C: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C4/C46125.asm:25 STA ENTITY_PREPARED_DIRECTION
    case 0xC4614F: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // src/unknown/C4/C46125.asm:26 LDY @LOCAL02
    case 0xC46152: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C46125.asm:27 CPY #6
    case 0xC46154: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C46125.asm:27 CPY #6
    // Overlapping static entry reached from 0xC46154.
    case 0xC46156: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46125.asm:28 BEQ @UNKNOWN0
    case 0xC46157: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC46159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x00A209, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC46159.
    case 0xC4615B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC4615C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC4615B.
    case 0xC4615D: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC4615E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC4615E.
    case 0xC46160: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC46161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:30 BRA @UNKNOWN1
    case 0xC46163: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC46165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A204, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC46165.
    case 0xC46167: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC46168: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC46167.
    case 0xC46169: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC4616A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC4616A.
    case 0xC4616C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC4616D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:34 LDY @LOCAL00+2
    case 0xC4616F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:35 LDA @LOCAL01
    case 0xC46171: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46125.asm:36 TAX
    case 0xC46173: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:37 LDA @LOCAL00
    case 0xC46174: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46125.asm:38 JSL INIT_ENTITY_UNKNOWN1
    case 0xC46176: cpu.execute_instruction<0x22>(0xC093F9, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46125.asm:40 END_C_FUNCTION
    case 0xC4617A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46125.asm:40 END_C_FUNCTION
    case 0xC4617B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4617C.asm (unresolved).
bool execute_unresolved_c4_c4617c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4617C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4617C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC4617E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC4617F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC46180: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC46181: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46181.
    case 0xC46183: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC46184: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC46185: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:10 TXY
    case 0xC46186: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:11 STY @LOCAL01
    case 0xC46187: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4617C.asm:12 TAX
    case 0xC46189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:13 JSL UNKNOWN_C4605A
    case 0xC4618A: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C4617C.asm:14 TAX
    case 0xC4618E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:15 CPX #.LOWORD(-1)
    case 0xC4618F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4617C.asm:15 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4618F.
    case 0xC46191: cpu.execute_instruction<0xFF>(0xA936F0, 4); return true;
    // src/unknown/C4/C4617C.asm:16 BEQ @UNKNOWN0
    case 0xC46192: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC46194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0000D4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC46191.
    case 0xC46195: cpu.execute_instruction<0xD4>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC46194.
    case 0xC46196: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC46197: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC46199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC46199.
    case 0xC4619B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4619C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4617C.asm:18 LDY @LOCAL01
    case 0xC4619E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4617C.asm:19 TYA
    case 0xC461A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461A4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4617C.asm:21 STA @LOCAL00
    case 0xC461A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4617C.asm:22 INC
    case 0xC461A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:23 INC
    case 0xC461A9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461AA: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461AC: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461AE: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461B0: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4617C.asm:25 CLC
    case 0xC461B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:26 ADC @VIRTUAL0A
    case 0xC461B3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:27 STA @VIRTUAL0A
    case 0xC461B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:28 LDA [@VIRTUAL0A]
    case 0xC461B7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:29 AND #$00FF
    case 0xC461B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4617C.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC461B9.
    case 0xC461BB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4617C.asm:30 TAY
    case 0xC461BC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:31 LDA @LOCAL00
    case 0xC461BD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4617C.asm:32 CLC
    case 0xC461BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:33 ADC @VIRTUAL06
    case 0xC461C0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:34 STA @VIRTUAL06
    case 0xC461C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:35 LDA [@VIRTUAL06]
    case 0xC461C4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:36 JSL INIT_ENTITY_UNKNOWN1
    case 0xC461C6: cpu.execute_instruction<0x22>(0xC093F9, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4617C.asm:38 END_C_FUNCTION
    case 0xC461CA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4617C.asm:38 END_C_FUNCTION
    case 0xC461CB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C461CC.asm (unresolved).
bool execute_unresolved_c4_c461cc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C461CC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC461CC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461CE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461CF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461D0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC461D1.
    case 0xC461D3: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461D4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC461D5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:9 TXY
    case 0xC461D6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:10 STY @LOCAL01
    case 0xC461D7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C461CC.asm:11 TAX
    case 0xC461D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:12 JSL UNKNOWN_C46028
    case 0xC461DA: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C461CC.asm:13 TAX
    case 0xC461DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:14 CPX #.LOWORD(-1)
    case 0xC461DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C461CC.asm:14 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC461DF.
    case 0xC461E1: cpu.execute_instruction<0xFF>(0xA936F0, 4); return true;
    // src/unknown/C4/C461CC.asm:15 BEQ @UNKNOWN0
    case 0xC461E2: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC461E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0000D4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC461E1.
    case 0xC461E5: cpu.execute_instruction<0xD4>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC461E4.
    case 0xC461E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC461E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC461E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC461E9.
    case 0xC461EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC461EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C461CC.asm:17 LDY @LOCAL01
    case 0xC461EE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C461CC.asm:18 TYA
    case 0xC461F0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC461F4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C461CC.asm:20 STA @LOCAL00
    case 0xC461F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C461CC.asm:21 INC
    case 0xC461F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:22 INC
    case 0xC461F9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461FA: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461FC: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC461FE: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC46200: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C461CC.asm:24 CLC
    case 0xC46202: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:25 ADC @VIRTUAL0A
    case 0xC46203: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:26 STA @VIRTUAL0A
    case 0xC46205: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:27 LDA [@VIRTUAL0A]
    case 0xC46207: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:28 AND #$00FF
    case 0xC46209: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C461CC.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC46209.
    case 0xC4620B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C461CC.asm:29 TAY
    case 0xC4620C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:30 LDA @LOCAL00
    case 0xC4620D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C461CC.asm:31 CLC
    case 0xC4620F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:32 ADC @VIRTUAL06
    case 0xC46210: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:33 STA @VIRTUAL06
    case 0xC46212: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:34 LDA [@VIRTUAL06]
    case 0xC46214: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:35 JSL INIT_ENTITY_UNKNOWN1
    case 0xC46216: cpu.execute_instruction<0x22>(0xC093F9, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C461CC.asm:37 END_C_FUNCTION
    case 0xC4621A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C461CC.asm:37 END_C_FUNCTION
    case 0xC4621B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4621C.asm (unresolved).
bool execute_unresolved_c4_c4621c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4621C.asm:3 BEGIN_C_FUNCTION
    case 0xC4621C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC4621E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC4621F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC46220: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC46221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46221.
    case 0xC46223: cpu.execute_instruction<0xFF>(0xF0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC46224: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC46225: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:9 BEQ @UNKNOWN0
    case 0xC46226: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4621C.asm:9 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC46223.
    case 0xC46227: cpu.execute_instruction<0x0C>(0x0001C9, 3); return true;
    // src/unknown/C4/C4621C.asm:10 CMP #1
    case 0xC46228: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4621C.asm:10 CMP #1
    // Overlapping static entry reached from 0xC46228.
    case 0xC4622A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4621C.asm:11 BEQ @UNKNOWN1
    case 0xC4622B: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C4621C.asm:12 CMP #2
    case 0xC4622D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4621C.asm:12 CMP #2
    // Overlapping static entry reached from 0xC4622D.
    case 0xC4622F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4621C.asm:13 BEQ @UNKNOWN2
    case 0xC46230: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C4621C.asm:14 BRA @UNKNOWN3
    case 0xC46232: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4621C.asm:16 TXA
    case 0xC46234: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC46235: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4621C.asm:18 JSL UNKNOWN_C4608C
    case 0xC46237: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C4621C.asm:19 TAY
    case 0xC4623B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:20 STY @LOCAL00
    case 0xC4623C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:21 BRA @UNKNOWN3
    case 0xC4623E: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C4621C.asm:23 TXA
    case 0xC46240: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:24 JSL UNKNOWN_C4605A
    case 0xC46241: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C4621C.asm:25 TAY
    case 0xC46245: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:26 STY @LOCAL00
    case 0xC46246: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:27 BRA @UNKNOWN3
    case 0xC46248: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C4621C.asm:29 TXA
    case 0xC4624A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:30 JSL UNKNOWN_C46028
    case 0xC4624B: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C4621C.asm:31 TAY
    case 0xC4624F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:32 STY @LOCAL00
    case 0xC46250: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:34 LDY @LOCAL00
    case 0xC46252: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:35 TYA
    case 0xC46254: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4621C.asm:36 END_C_FUNCTION
    case 0xC46255: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4621C.asm:36 END_C_FUNCTION
    case 0xC46256: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46257.asm (unresolved).
bool execute_unresolved_c4_c46257_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46257.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46257: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC46259: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC4625A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC4625B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC4625C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4625C.
    case 0xC4625E: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC4625F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46257.asm:15 END_STACK_VARS
    case 0xC46260: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:16 STY @LOCAL04
    case 0xC46261: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C46257.asm:16 STY @LOCAL04
    // Overlapping static entry reached from 0xC4625E.
    case 0xC46262: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C46257.asm:17 STX @VIRTUAL02
    case 0xC46263: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46257.asm:17 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC46262.
    case 0xC46264: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C46257.asm:18 TAY
    case 0xC46265: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:19 LDX @PARAM03
    case 0xC46266: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C4/C46257.asm:20 STX @VIRTUAL04
    case 0xC46268: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C46257.asm:21 LDX @VIRTUAL02
    case 0xC4626A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46257.asm:22 TYA
    case 0xC4626C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:23 JSR UNKNOWN_C4621C
    case 0xC4626D: cpu.execute_instruction<0x20>(0x00621C, 3); return true;
    // src/unknown/C4/C46257.asm:24 TAY
    case 0xC46270: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:25 STY @LOCAL03
    case 0xC46271: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C46257.asm:26 LDX @VIRTUAL04
    case 0xC46273: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C46257.asm:27 LDA @LOCAL04
    case 0xC46275: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C46257.asm:28 JSR UNKNOWN_C4621C
    case 0xC46277: cpu.execute_instruction<0x20>(0x00621C, 3); return true;
    // src/unknown/C4/C46257.asm:29 TAX
    case 0xC4627A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:30 LDY @LOCAL03
    case 0xC4627B: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C46257.asm:31 TYA
    case 0xC4627D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:32 ASL
    case 0xC4627E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:33 STA @LOCAL02
    case 0xC4627F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46257.asm:34 TXA
    case 0xC46281: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:35 ASL
    case 0xC46282: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:36 TAX
    case 0xC46283: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:37 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46284: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46257.asm:38 STA @LOCAL00
    case 0xC46287: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46257.asm:39 LDY ENTITY_ABS_X_TABLE,X
    case 0xC46289: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/unknown/C4/C46257.asm:40 LDA @LOCAL02
    case 0xC4628C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46257.asm:41 TAX
    case 0xC4628E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:42 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4628F: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46257.asm:43 TAX
    case 0xC46292: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:44 STX @LOCAL01
    case 0xC46293: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46257.asm:45 LDA @LOCAL02
    case 0xC46295: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46257.asm:46 TAX
    case 0xC46297: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:47 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46298: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46257.asm:48 LDX @LOCAL01
    case 0xC4629B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46257.asm:49 JSL UNKNOWN_C41EFF
    case 0xC4629D: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C4/C46257.asm:50 LDY #$2000
    case 0xC462A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46257.asm:50 LDY #$2000
    // Overlapping static entry reached from 0xC462A1.
    case 0xC462A3: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46257.asm:51 CLC
    case 0xC462A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:52 ADC #$1000
    case 0xC462A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46257.asm:52 ADC #$1000
    // Overlapping static entry reached from 0xC462A3.
    case 0xC462A6: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46257.asm:52 ADC #$1000
    // Overlapping static entry reached from 0xC462A5.
    case 0xC462A7: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46257.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC462A8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C46257.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC462A7.
    case 0xC462A9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46257.asm:53 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC462A9.
    case 0xC462AA: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46257.asm:54 END_C_FUNCTION
    case 0xC462AC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46257.asm:54 END_C_FUNCTION
    case 0xC462AD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462AE.asm (unresolved).
bool execute_unresolved_c4_c462ae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462AE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462AE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC462B3.
    case 0xC462B5: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC462B7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:11 STY @VIRTUAL02
    case 0xC462B8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462AE.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC462B5.
    case 0xC462B9: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462AE.asm:12 TXY
    case 0xC462BA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:13 TAX
    case 0xC462BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:14 LDA @VIRTUAL02
    case 0xC462BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462AE.asm:15 STA @LOCAL00
    case 0xC462BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462AE.asm:16 LDA #1
    case 0xC462C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C462AE.asm:16 LDA #1
    // Overlapping static entry reached from 0xC462C0.
    case 0xC462C2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462AE.asm:17 JSL UNKNOWN_C46257
    case 0xC462C3: cpu.execute_instruction<0x22>(0xC46257, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462AE.asm:18 END_C_FUNCTION
    case 0xC462C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462AE.asm:18 END_C_FUNCTION
    case 0xC462C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462C9.asm (unresolved).
bool execute_unresolved_c4_c462c9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462C9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462CB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC462CE.
    case 0xC462D0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462D1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC462D2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:11 STY @VIRTUAL02
    case 0xC462D3: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462C9.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC462D0.
    case 0xC462D4: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462C9.asm:12 TXY
    case 0xC462D5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:13 TAX
    case 0xC462D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:14 LDA @VIRTUAL02
    case 0xC462D7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462C9.asm:15 STA @LOCAL00
    case 0xC462D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462C9.asm:16 LDA #2
    case 0xC462DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C462C9.asm:16 LDA #2
    // Overlapping static entry reached from 0xC462DB.
    case 0xC462DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462C9.asm:17 JSL UNKNOWN_C46257
    case 0xC462DE: cpu.execute_instruction<0x22>(0xC46257, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462C9.asm:18 END_C_FUNCTION
    case 0xC462E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462C9.asm:18 END_C_FUNCTION
    case 0xC462E3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462E4.asm (unresolved).
bool execute_unresolved_c4_c462e4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462E4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC462E9.
    case 0xC462EB: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC462ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:11 STY @VIRTUAL02
    case 0xC462EE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462E4.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC462EB.
    case 0xC462EF: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462E4.asm:12 TXY
    case 0xC462F0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:13 TAX
    case 0xC462F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:14 LDA @VIRTUAL02
    case 0xC462F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462E4.asm:15 STA @LOCAL00
    case 0xC462F4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462E4.asm:16 LDA #0
    case 0xC462F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C462E4.asm:16 LDA #0
    // Overlapping static entry reached from 0xC462F6.
    case 0xC462F8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462E4.asm:17 JSL UNKNOWN_C46257
    case 0xC462F9: cpu.execute_instruction<0x22>(0xC46257, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462E4.asm:18 END_C_FUNCTION
    case 0xC462FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462E4.asm:18 END_C_FUNCTION
    case 0xC462FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462FF.asm (unresolved).
bool execute_unresolved_c4_c462ff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462FF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46301: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46302: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46303: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46304: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46304.
    case 0xC46306: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46307: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC46308: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:9 STX @VIRTUAL02
    case 0xC46309: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC46306.
    case 0xC4630A: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C462FF.asm:10 TAX
    case 0xC4630B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:11 JSL UNKNOWN_C4605A
    case 0xC4630C: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C462FF.asm:12 STA @LOCAL00
    case 0xC46310: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462FF.asm:13 CMP #.LOWORD(-1)
    case 0xC46312: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C462FF.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46312.
    case 0xC46314: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C462FF.asm:14 BEQ @UNKNOWN0
    case 0xC46315: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C462FF.asm:15 ASL
    case 0xC46317: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:16 CLC
    case 0xC46318: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC46319: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C462FF.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC46319.
    case 0xC4631B: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:18 TAX
    case 0xC4631C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:19 LDA __BSS_START__,X
    case 0xC4631D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C462FF.asm:20 CMP @VIRTUAL02
    case 0xC46320: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:21 BEQ @UNKNOWN0
    case 0xC46322: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C462FF.asm:22 LDA @VIRTUAL02
    case 0xC46324: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:23 STA __BSS_START__,X
    case 0xC46326: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C462FF.asm:24 LDA @LOCAL00
    case 0xC46329: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C462FF.asm:25 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4632B: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462FF.asm:27 END_C_FUNCTION
    case 0xC4632F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462FF.asm:27 END_C_FUNCTION
    case 0xC46330: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46331.asm (unresolved).
bool execute_unresolved_c4_c46331_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46331.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46331: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC46333: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC46334: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC46335: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC46336: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46336.
    case 0xC46338: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC46339: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC4633A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:9 STX @VIRTUAL02
    case 0xC4633B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC46338.
    case 0xC4633C: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C46331.asm:10 TAX
    case 0xC4633D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:11 JSL UNKNOWN_C46028
    case 0xC4633E: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46331.asm:12 STA @LOCAL00
    case 0xC46342: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46331.asm:13 CMP #.LOWORD(-1)
    case 0xC46344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46331.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46344.
    case 0xC46346: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C46331.asm:14 BEQ @UNKNOWN0
    case 0xC46347: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C46331.asm:15 ASL
    case 0xC46349: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:16 CLC
    case 0xC4634A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC4634B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46331.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC4634B.
    case 0xC4634D: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:18 TAX
    case 0xC4634E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:19 LDA __BSS_START__,X
    case 0xC4634F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46331.asm:20 CMP @VIRTUAL02
    case 0xC46352: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:21 BEQ @UNKNOWN0
    case 0xC46354: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46331.asm:22 LDA @VIRTUAL02
    case 0xC46356: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:23 STA __BSS_START__,X
    case 0xC46358: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46331.asm:24 LDA @LOCAL00
    case 0xC4635B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46331.asm:25 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4635D: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46331.asm:27 END_C_FUNCTION
    case 0xC46361: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46331.asm:27 END_C_FUNCTION
    case 0xC46362: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46363.asm (unresolved).
bool execute_unresolved_c4_c46363_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46363.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46363: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC46365: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC46366: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC46367: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC46368: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46368.
    case 0xC4636A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC4636B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC4636C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:9 STX @VIRTUAL02
    case 0xC4636D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4636A.
    case 0xC4636E: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C46363.asm:10 TAX
    case 0xC4636F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC46370: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46363.asm:12 JSL UNKNOWN_C4608C
    case 0xC46372: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C46363.asm:14 STA @LOCAL00
    case 0xC46376: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46363.asm:15 CMP #.LOWORD(-1)
    case 0xC46378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46363.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46378.
    case 0xC4637A: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C46363.asm:16 BEQ @UNKNOWN0
    case 0xC4637B: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C46363.asm:17 ASL
    case 0xC4637D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:18 CLC
    case 0xC4637E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:19 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC4637F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46363.asm:19 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC4637F.
    case 0xC46381: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:20 TAX
    case 0xC46382: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:21 LDA __BSS_START__,X
    case 0xC46383: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46363.asm:22 CMP @VIRTUAL02
    case 0xC46386: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:23 BEQ @UNKNOWN0
    case 0xC46388: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46363.asm:24 LDA @VIRTUAL02
    case 0xC4638A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:25 STA __BSS_START__,X
    case 0xC4638C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46363.asm:26 LDA @LOCAL00
    case 0xC4638F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46363.asm:27 JSL UNKNOWN_C0A780
    case 0xC46391: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46363.asm:29 END_C_FUNCTION
    case 0xC46395: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46363.asm:29 END_C_FUNCTION
    case 0xC46396: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46397.asm (unresolved).
bool execute_unresolved_c4_c46397_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46397.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46397: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC46399: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC4639A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC4639B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC4639C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4639C.
    case 0xC4639E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC4639F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC463A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:9 STA @VIRTUAL02
    case 0xC463A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4639E.
    case 0xC463A2: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C46397.asm:10 LDY #0
    case 0xC463A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:10 LDY #0
    // Overlapping static entry reached from 0xC463A3.
    case 0xC463A5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C46397.asm:11 STY @LOCAL01
    case 0xC463A6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:12 BRA @UNKNOWN4
    case 0xC463A8: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C4/C46397.asm:21 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC463AA: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/unknown/C4/C46397.asm:23 AND #$00FF
    case 0xC463AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46397.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC463AD.
    case 0xC463AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46397.asm:24 STA @VIRTUAL04
    case 0xC463B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:25 LDA #16
    case 0xC463B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C46397.asm:25 LDA #16
    // Overlapping static entry reached from 0xC463B2.
    case 0xC463B4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46397.asm:26 CLC
    case 0xC463B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:27 SBC @VIRTUAL04
    case 0xC463B6: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC463B8: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC463BA: cpu.execute_instruction<0x10>(0x000024, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC463BC: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC463BE: cpu.execute_instruction<0x30>(0x000020, 2); return true;
    // src/unknown/C4/C46397.asm:29 TYA
    case 0xC463C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:30 ASL
    case 0xC463C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:37 TAX
    case 0xC463C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:38 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC463C3: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C46397.asm:40 STA @LOCAL00
    case 0xC463C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46397.asm:41 ASL
    case 0xC463C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:42 CLC
    case 0xC463C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:43 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC463CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46397.asm:43 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC463CA.
    case 0xC463CC: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:44 TAX
    case 0xC463CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:45 LDA __BSS_START__,X
    case 0xC463CE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:46 CMP @VIRTUAL02
    case 0xC463D1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:47 BEQ @UNKNOWN3
    case 0xC463D3: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46397.asm:48 LDA @VIRTUAL02
    case 0xC463D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:49 STA __BSS_START__,X
    case 0xC463D7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:50 LDA @LOCAL00
    case 0xC463DA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46397.asm:51 JSL UNKNOWN_C0A780
    case 0xC463DC: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C4/C46397.asm:53 LDY @LOCAL01
    case 0xC463E0: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:54 INY
    case 0xC463E2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:55 STY @LOCAL01
    case 0xC463E3: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:57 LDA GAME_STATE+game_state::party_count
    case 0xC463E5: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C46397.asm:58 AND #$00FF
    case 0xC463E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46397.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC463E8.
    case 0xC463EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46397.asm:59 STA @VIRTUAL04
    case 0xC463EB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:60 TYA
    case 0xC463ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:61 CMP @VIRTUAL04
    case 0xC463EE: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:62 BCC @UNKNOWN0
    case 0xC463F0: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46397.asm:63 END_C_FUNCTION
    case 0xC463F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46397.asm:63 END_C_FUNCTION
    case 0xC463F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C463F4.asm (unresolved).
bool execute_unresolved_c4_c463f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C463F4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC463F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463F8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC463F9.
    case 0xC463FB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463FC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC463FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:8 STA @LOCAL00
    case 0xC463FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC463FB.
    case 0xC463FF: cpu.execute_instruction<0x0E>(0x005B22, 3); return true;
    // src/unknown/C4/C463F4.asm:9 JSL UNKNOWN_C07C5B
    case 0xC46400: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/unknown/C4/C463F4.asm:9 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC463FF.
    case 0xC46402: cpu.execute_instruction<0x7C>(0x009CC0, 3); return true;
    // src/unknown/C4/C463F4.asm:10 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC46404: cpu.execute_instruction<0x9C>(0x005D58, 3); return true;
    // src/unknown/C4/C463F4.asm:11 LDA @LOCAL00
    case 0xC46407: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:12 CMP #$00FF
    case 0xC46409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C463F4.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC46409.
    case 0xC4640B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C463F4.asm:13 BEQ @UNKNOWN0
    case 0xC4640C: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C463F4.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC4640E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C463F4.asm:15 JSL UNKNOWN_C4608C
    case 0xC46410: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C463F4.asm:17 CMP #.LOWORD(-1)
    case 0xC46414: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C463F4.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46414.
    case 0xC46416: cpu.execute_instruction<0xFF>(0x0A3FF0, 4); return true;
    // src/unknown/C4/C463F4.asm:18 BEQ @UNKNOWN3
    case 0xC46417: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C4/C463F4.asm:19 ASL
    case 0xC46419: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:20 CLC
    case 0xC4641A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:21 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4641B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C463F4.asm:21 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4641B.
    case 0xC4641D: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C463F4.asm:22 TAX
    case 0xC4641E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:23 LDA __BSS_START__,X
    case 0xC4641F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:24 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC46422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C463F4.asm:24 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC46422.
    case 0xC46424: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C463F4.asm:25 STA __BSS_START__,X
    case 0xC46425: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:26 BRA @UNKNOWN3
    case 0xC46428: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C463F4.asm:28 LDA #0
    case 0xC4642A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:28 LDA #0
    // Overlapping static entry reached from 0xC4642A.
    case 0xC4642C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C463F4.asm:29 STA @LOCAL00
    case 0xC4642D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:30 BRA @UNKNOWN2
    case 0xC4642F: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C463F4.asm:32 ASL
    case 0xC46431: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:39 TAX
    case 0xC46432: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:40 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46433: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C463F4.asm:42 ASL
    case 0xC46436: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:43 CLC
    case 0xC46437: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC46438: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C463F4.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC46438.
    case 0xC4643A: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C463F4.asm:45 TAX
    case 0xC4643B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:46 LDA __BSS_START__,X
    case 0xC4643C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:47 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC4643F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C463F4.asm:47 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC4643F.
    case 0xC46441: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C463F4.asm:48 STA __BSS_START__,X
    case 0xC46442: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:49 LDA @LOCAL00
    case 0xC46445: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:50 INC
    case 0xC46447: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:51 STA @LOCAL00
    case 0xC46448: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC4644A: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C463F4.asm:54 AND #$00FF
    case 0xC4644D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C463F4.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4644D.
    case 0xC4644F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C463F4.asm:55 STA @VIRTUAL02
    case 0xC46450: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C463F4.asm:56 LDA @LOCAL00
    case 0xC46452: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:57 CMP @VIRTUAL02
    case 0xC46454: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C463F4.asm:58 BCC @UNKNOWN1
    case 0xC46456: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C463F4.asm:60 END_C_FUNCTION
    case 0xC46458: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C463F4.asm:60 END_C_FUNCTION
    case 0xC46459: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4645A.asm (unresolved).
bool execute_unresolved_c4_c4645a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4645A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4645A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC4645C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC4645D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC4645E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC4645F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4645F.
    case 0xC46461: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC46462: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC46463: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    case 0xC46464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC46461.
    case 0xC46465: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC46464.
    case 0xC46466: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4645A.asm:9 BEQ @UNKNOWN0
    case 0xC46467: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C4645A.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC46469: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4645A.asm:11 JSL UNKNOWN_C4608C
    case 0xC4646B: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C4645A.asm:13 CMP #.LOWORD(-1)
    case 0xC4646F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4645A.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4646F.
    case 0xC46471: cpu.execute_instruction<0xFF>(0x0A3FF0, 4); return true;
    // src/unknown/C4/C4645A.asm:14 BEQ @UNKNOWN3
    case 0xC46472: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C4/C4645A.asm:15 ASL
    case 0xC46474: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:16 CLC
    case 0xC46475: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:17 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC46476: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C4645A.asm:17 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC46476.
    case 0xC46478: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4645A.asm:18 TAX
    case 0xC46479: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:19 LDA __BSS_START__,X
    case 0xC4647A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:20 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC4647D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4645A.asm:20 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC4647D.
    case 0xC4647F: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4645A.asm:21 STA __BSS_START__,X
    case 0xC46480: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:22 BRA @UNKNOWN3
    case 0xC46483: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C4645A.asm:24 LDA #0
    case 0xC46485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:24 LDA #0
    // Overlapping static entry reached from 0xC46485.
    case 0xC46487: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4645A.asm:25 STA @LOCAL00
    case 0xC46488: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:26 BRA @UNKNOWN2
    case 0xC4648A: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4645A.asm:28 ASL
    case 0xC4648C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:35 TAX
    case 0xC4648D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:36 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC4648E: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C4645A.asm:38 ASL
    case 0xC46491: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:39 CLC
    case 0xC46492: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:40 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC46493: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C4645A.asm:40 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC46493.
    case 0xC46495: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4645A.asm:41 TAX
    case 0xC46496: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:42 LDA __BSS_START__,X
    case 0xC46497: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:43 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC4649A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4645A.asm:43 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC4649A.
    case 0xC4649C: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4645A.asm:44 STA __BSS_START__,X
    case 0xC4649D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:45 LDA @LOCAL00
    case 0xC464A0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:46 INC
    case 0xC464A2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:47 STA @LOCAL00
    case 0xC464A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:49 LDA GAME_STATE+game_state::party_count
    case 0xC464A5: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C4645A.asm:50 AND #$00FF
    case 0xC464A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4645A.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC464A8.
    case 0xC464AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4645A.asm:51 STA @VIRTUAL02
    case 0xC464AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4645A.asm:52 LDA @LOCAL00
    case 0xC464AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:53 CMP @VIRTUAL02
    case 0xC464AF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4645A.asm:54 BCC @UNKNOWN1
    case 0xC464B1: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4645A.asm:56 END_C_FUNCTION
    case 0xC464B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4645A.asm:56 END_C_FUNCTION
    case 0xC464B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46534.asm (unresolved).
bool execute_unresolved_c4_c46534_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46534.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46534: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC46536: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC46537: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC46538: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC46539: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC46539.
    case 0xC4653B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC4653C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC4653D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:12 STX @VIRTUAL02
    case 0xC4653E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46534.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4653B.
    case 0xC4653F: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C46534.asm:13 STA @LOCAL02
    case 0xC46540: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46534.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC46542: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46534.asm:15 ASL
    case 0xC46545: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:16 TAX
    case 0xC46546: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46547: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46534.asm:18 STA @LOCAL00
    case 0xC4654A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46534.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4654C: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46534.asm:20 STA @LOCAL01
    case 0xC4654F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46534.asm:21 LDY #.LOWORD(-1)
    case 0xC46551: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46534.asm:21 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46551.
    case 0xC46553: cpu.execute_instruction<0xFF>(0xA502A6, 4); return true;
    // src/unknown/C4/C46534.asm:22 LDX @VIRTUAL02
    case 0xC46554: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46534.asm:23 LDA @LOCAL02
    case 0xC46556: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46534.asm:23 LDA @LOCAL02
    // Overlapping static entry reached from 0xC46553.
    case 0xC46557: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C4/C46534.asm:24 JSL CREATE_ENTITY
    case 0xC46558: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C4/C46534.asm:24 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC46557.
    case 0xC46559: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/C4/C46534.asm:24 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC46559.
    case 0xC4655B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46534.asm:25 END_C_FUNCTION
    case 0xC4655C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46534.asm:25 END_C_FUNCTION
    case 0xC4655D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4655E.asm (unresolved).
bool execute_unresolved_c4_c4655e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4655E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4655E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4655E.asm:6 JSL UNKNOWN_C4605A
    case 0xC46560: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C4655E.asm:7 CMP #.LOWORD(-1)
    case 0xC46564: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4655E.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46564.
    case 0xC46566: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C4655E.asm:8 BEQ @UNKNOWN0
    case 0xC46567: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C4655E.asm:9 ASL
    case 0xC46569: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:10 CLC
    case 0xC4656A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4656B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C4655E.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4656B.
    case 0xC4656D: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4655E.asm:12 TAX
    case 0xC4656E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:13 LDA __BSS_START__,X
    case 0xC4656F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4655E.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC46572: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C4655E.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC46572.
    case 0xC46574: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    case 0xC46575: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC46574.
    case 0xC46576: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC46574.
    case 0xC46577: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4655E.asm:17 END_C_FUNCTION
    case 0xC46578: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46579.asm (unresolved).
bool execute_unresolved_c4_c46579_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46579.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46579: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46579.asm:6 JSL UNKNOWN_C46028
    case 0xC4657B: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    case 0xC4657F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC465C1.
    case 0xC46580: cpu.execute_instruction<0xFF>(0x0FF0FF, 4); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4657F.
    case 0xC46581: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C46579.asm:8 BEQ @UNKNOWN0
    case 0xC46582: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C46579.asm:9 ASL
    case 0xC46584: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:10 CLC
    case 0xC46585: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46586: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46579.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC465DB.
    case 0xC46587: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/unknown/C4/C46579.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46586.
    case 0xC46588: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46579.asm:12 TAX
    case 0xC46589: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:13 LDA __BSS_START__,X
    case 0xC4658A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46579.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC4658D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46579.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC4658D.
    case 0xC4658F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    case 0xC46590: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4658F.
    case 0xC46591: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4658F.
    case 0xC46592: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46579.asm:17 END_C_FUNCTION
    case 0xC46593: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46594.asm (unresolved).
bool execute_unresolved_c4_c46594_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46594.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46594: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC46596: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC46597: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC46598: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC46599: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46599.
    case 0xC4659B: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC4659C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC4659D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    case 0xC4659E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC4659B.
    case 0xC4659F: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC4659E.
    case 0xC465A0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46594.asm:9 BEQ @UNKNOWN0
    case 0xC465A1: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C46594.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC465A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46594.asm:11 JSL UNKNOWN_C4608C
    case 0xC465A5: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C46594.asm:13 CMP #.LOWORD(-1)
    case 0xC465A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46594.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC465A9.
    case 0xC465AB: cpu.execute_instruction<0xFF>(0x0A4BF0, 4); return true;
    // src/unknown/C4/C46594.asm:14 BEQ @UNKNOWN3
    case 0xC465AC: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/unknown/C4/C46594.asm:15 ASL
    case 0xC465AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:16 CLC
    case 0xC465AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC465B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46594.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC465B0.
    case 0xC465B2: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46594.asm:18 TAX
    case 0xC465B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:19 LDA __BSS_START__,X
    case 0xC465B4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4660A.
    case 0xC465B6: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C4/C46594.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC465B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC465B7.
    case 0xC465B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    case 0xC465BA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465B9.
    case 0xC465BB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465B9.
    case 0xC465BC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46594.asm:22 BRA @UNKNOWN3
    case 0xC465BD: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C46594.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    case 0xC465BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E4, 2); else cpu.execute_instruction<0xA2>(0x0010E4, 3); return true;
    // src/unknown/C4/C46594.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    // Overlapping static entry reached from 0xC465BF.
    case 0xC465C1: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C46594.asm:25 LDA __BSS_START__,X
    case 0xC465C2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:25 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC465C1.
    case 0xC465C3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:26 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC465C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:26 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC465C5.
    case 0xC465C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    case 0xC465C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465C7.
    case 0xC465C9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465C7.
    case 0xC465CA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C46594.asm:28 LDA #0
    case 0xC465CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:28 LDA #0
    // Overlapping static entry reached from 0xC465CB.
    case 0xC465CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46594.asm:29 STA @LOCAL00
    case 0xC465CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:30 BRA @UNKNOWN2
    case 0xC465D0: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C46594.asm:30 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC46625.
    case 0xC465D1: cpu.execute_instruction<0x19>(0x00AA0A, 3); return true;
    // src/unknown/C4/C46594.asm:32 ASL
    case 0xC465D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:39 TAX
    case 0xC465D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:40 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC465D4: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C46594.asm:42 ASL
    case 0xC465D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:43 CLC
    case 0xC465D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC465D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46594.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC465D9.
    case 0xC465DB: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46594.asm:45 TAX
    case 0xC465DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:46 LDA __BSS_START__,X
    case 0xC465DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:47 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC465E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:47 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC465E0.
    case 0xC465E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    case 0xC465E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465E2.
    case 0xC465E4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC465E2.
    case 0xC465E5: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C46594.asm:49 LDA @LOCAL00
    case 0xC465E6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:50 INC
    case 0xC465E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:51 STA @LOCAL00
    case 0xC465E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC465EB: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C46594.asm:54 AND #$00FF
    case 0xC465EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46594.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC465EE.
    case 0xC465F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46594.asm:55 STA @VIRTUAL02
    case 0xC465F1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46594.asm:56 LDA @LOCAL00
    case 0xC465F3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:57 CMP @VIRTUAL02
    case 0xC465F5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46594.asm:58 BCC @UNKNOWN1
    case 0xC465F7: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46594.asm:60 END_C_FUNCTION
    case 0xC465F9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46594.asm:60 END_C_FUNCTION
    case 0xC465FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C465FB.asm (unresolved).
bool execute_unresolved_c4_c465fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C465FB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC465FB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C465FB.asm:6 JSL UNKNOWN_C4605A
    case 0xC465FD: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C465FB.asm:7 CMP #.LOWORD(-1)
    case 0xC46601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C465FB.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46601.
    case 0xC46603: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C465FB.asm:8 BEQ @UNKNOWN0
    case 0xC46604: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C465FB.asm:9 ASL
    case 0xC46606: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:10 CLC
    case 0xC46607: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46608: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C465FB.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46608.
    case 0xC4660A: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C465FB.asm:12 TAX
    case 0xC4660B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:13 LDA __BSS_START__,X
    case 0xC4660C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C465FB.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC4660F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C465FB.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC4660F.
    case 0xC46611: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C465FB.asm:15 STA __BSS_START__,X
    case 0xC46612: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C465FB.asm:17 END_C_FUNCTION
    case 0xC46615: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46616.asm (unresolved).
bool execute_unresolved_c4_c46616_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46616.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46616: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46616.asm:6 JSL UNKNOWN_C46028
    case 0xC46618: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    case 0xC4661C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4665E.
    case 0xC4661D: cpu.execute_instruction<0xFF>(0x0FF0FF, 4); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4661C.
    case 0xC4661E: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C46616.asm:8 BEQ @UNKNOWN0
    case 0xC4661F: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C46616.asm:9 ASL
    case 0xC46621: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:10 CLC
    case 0xC46622: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46623: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46616.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46678.
    case 0xC46624: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/unknown/C4/C46616.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46623.
    case 0xC46625: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46616.asm:12 TAX
    case 0xC46626: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:13 LDA __BSS_START__,X
    case 0xC46627: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46616.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC4662A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46616.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC4662A.
    case 0xC4662C: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46616.asm:15 STA __BSS_START__,X
    case 0xC4662D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46616.asm:17 END_C_FUNCTION
    case 0xC46630: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46631.asm (unresolved).
bool execute_unresolved_c4_c46631_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46631.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46631: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC46633: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC46634: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC46635: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC46636: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46636.
    case 0xC46638: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC46639: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC4663A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    case 0xC4663B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC46638.
    case 0xC4663C: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC4663B.
    case 0xC4663D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46631.asm:9 BEQ @UNKNOWN0
    case 0xC4663E: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C46631.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC46640: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46631.asm:11 JSL UNKNOWN_C4608C
    case 0xC46642: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C46631.asm:13 CMP #.LOWORD(-1)
    case 0xC46646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46631.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46646.
    case 0xC46648: cpu.execute_instruction<0xFF>(0x0A4BF0, 4); return true;
    // src/unknown/C4/C46631.asm:14 BEQ @UNKNOWN3
    case 0xC46649: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/unknown/C4/C46631.asm:15 ASL
    case 0xC4664B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:16 CLC
    case 0xC4664C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4664D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46631.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4664D.
    case 0xC4664F: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46631.asm:18 TAX
    case 0xC46650: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:19 LDA __BSS_START__,X
    case 0xC46651: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:20 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC46654: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:20 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC46654.
    case 0xC46656: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:21 STA __BSS_START__,X
    case 0xC46657: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:22 BRA @UNKNOWN3
    case 0xC4665A: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C46631.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    case 0xC4665C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E4, 2); else cpu.execute_instruction<0xA2>(0x0010E4, 3); return true;
    // src/unknown/C4/C46631.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    // Overlapping static entry reached from 0xC4665C.
    case 0xC4665E: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C46631.asm:25 LDA __BSS_START__,X
    case 0xC4665F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:25 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4665E.
    case 0xC46660: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46631.asm:26 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC46662: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:26 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC46662.
    case 0xC46664: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:27 STA __BSS_START__,X
    case 0xC46665: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:28 LDA #0
    case 0xC46668: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:28 LDA #0
    // Overlapping static entry reached from 0xC46668.
    case 0xC4666A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46631.asm:29 STA @LOCAL00
    case 0xC4666B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:30 BRA @UNKNOWN2
    case 0xC4666D: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C46631.asm:32 ASL
    case 0xC4666F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:39 TAX
    case 0xC46670: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:40 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46671: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C46631.asm:42 ASL
    case 0xC46674: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:43 CLC
    case 0xC46675: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46676: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46631.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46676.
    case 0xC46678: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46631.asm:45 TAX
    case 0xC46679: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:46 LDA __BSS_START__,X
    case 0xC4667A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:47 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC4667D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:47 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC4667D.
    case 0xC4667F: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:48 STA __BSS_START__,X
    case 0xC46680: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:49 LDA @LOCAL00
    case 0xC46683: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:50 INC
    case 0xC46685: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:51 STA @LOCAL00
    case 0xC46686: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC46688: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C46631.asm:54 AND #$00FF
    case 0xC4668B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46631.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4668B.
    case 0xC4668D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46631.asm:55 STA @VIRTUAL02
    case 0xC4668E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46631.asm:56 LDA @LOCAL00
    case 0xC46690: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:57 CMP @VIRTUAL02
    case 0xC46692: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46631.asm:58 BCC @UNKNOWN1
    case 0xC46694: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46631.asm:60 END_C_FUNCTION
    case 0xC46696: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46631.asm:60 END_C_FUNCTION
    case 0xC46697: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46698.asm (unresolved).
bool execute_unresolved_c4_c46698_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46698.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46698: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46698.asm:6 JSL UNKNOWN_C4605A
    case 0xC4669A: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C46698.asm:7 STA CAMERA_FOCUS_ENTITY
    case 0xC4669E: cpu.execute_instruction<0x8D>(0x009E33, 3); return true;
    // src/unknown/C4/C46698.asm:8 LDA #2
    case 0xC466A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C46698.asm:8 LDA #2
    // Overlapping static entry reached from 0xC466A1.
    case 0xC466A3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C46698.asm:9 STA GAME_STATE + game_state::unknownB0
    case 0xC466A4: cpu.execute_instruction<0x8D>(0x0098A5, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46698.asm:10 END_C_FUNCTION
    case 0xC466A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466A8.asm (unresolved).
bool execute_unresolved_c4_c466a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC466A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C466A8.asm:6 JSL UNKNOWN_C46028
    case 0xC466AA: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C466A8.asm:7 STA CAMERA_FOCUS_ENTITY
    case 0xC466AE: cpu.execute_instruction<0x8D>(0x009E33, 3); return true;
    // src/unknown/C4/C466A8.asm:8 LDA #2
    case 0xC466B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C466A8.asm:8 LDA #2
    // Overlapping static entry reached from 0xC466B1.
    case 0xC466B3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C466A8.asm:9 STA GAME_STATE + game_state::unknownB0
    case 0xC466B4: cpu.execute_instruction<0x8D>(0x0098A5, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466A8.asm:10 END_C_FUNCTION
    case 0xC466B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466B8.asm (unresolved).
bool execute_unresolved_c4_c466b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466B8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC466B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C466B8.asm:5 STZ GAME_STATE + game_state::unknown90
    case 0xC466BA: cpu.execute_instruction<0x9C>(0x009885, 3); return true;
    // src/unknown/C4/C466B8.asm:6 STZ GAME_STATE + game_state::unknownB0
    case 0xC466BD: cpu.execute_instruction<0x9C>(0x0098A5, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466B8.asm:7 END_C_FUNCTION
    case 0xC466C0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466C1.asm (unresolved).
bool execute_unresolved_c4_c466c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466C1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC466C1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466C3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466C4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC466C6.
    case 0xC466C8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466C9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC466CA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:9 STA @LOCAL01
    case 0xC466CB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC466C8.
    case 0xC466CC: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    case 0xC466CD: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC466CC.
    case 0xC466CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC466CE.
    case 0xC466CF: cpu.execute_instruction<0x7C>(0x009CC0, 3); return true;
    // src/unknown/C4/C466C1.asm:11 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC466D1: cpu.execute_instruction<0x9C>(0x005D58, 3); return true;
    // src/unknown/C4/C466C1.asm:12 LDA @LOCAL01
    case 0xC466D4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:13 DEC
    case 0xC466D6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:14 STA SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    case 0xC466D7: cpu.execute_instruction<0x8D>(0x009E35, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC466DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00AB3F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC466DA.
    case 0xC466DC: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC466DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC466DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC466DF.
    case 0xC466E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC466E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC466E4: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C4/C466C1.asm:16 LDA @LOCAL01
    case 0xC466E8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:17 JSL UNKNOWN_C4343E
    case 0xC466EA: cpu.execute_instruction<0x22>(0xC4343E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C466C1.asm:18 END_C_FUNCTION
    case 0xC466EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466C1.asm:18 END_C_FUNCTION
    case 0xC466EF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466F0.asm (unresolved).
bool execute_unresolved_c4_c466f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC466F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC466F5.
    case 0xC466F7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC466F9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C466F0.asm:10 STX @LOCAL02
    case 0xC466FA: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C466F0.asm:10 STX @LOCAL02
    // Overlapping static entry reached from 0xC466F7.
    case 0xC466FB: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:11 STA @LOCAL01
    case 0xC466FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C466F0.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC466FB.
    case 0xC466FD: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:12 STA @VIRTUAL06
    case 0xC466FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C466F0.asm:12 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC466FD.
    case 0xC466FF: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C466F0.asm:13 LDA @LOCAL02
    case 0xC46700: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C466F0.asm:13 LDA @LOCAL02
    // Overlapping static entry reached from 0xC466FF.
    case 0xC46701: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:14 STA @VIRTUAL06+2
    case 0xC46702: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C466F0.asm:14 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC46701.
    case 0xC46703: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46704: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46706: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46708: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4670A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C466F0.asm:16 JSL DISPLAY_TEXT
    case 0xC4670C: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C466F0.asm:17 END_C_FUNCTION
    case 0xC46710: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466F0.asm:17 END_C_FUNCTION
    case 0xC46711: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46712.asm (unresolved).
bool execute_unresolved_c4_c46712_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46712.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46712: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC46714: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC46715: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC46716: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4676B.
    case 0xC46717: cpu.execute_instruction<0xF0>(0x0000FF, 2); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46716.
    case 0xC46718: cpu.execute_instruction<0xFF>(0x97AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC46719: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:7 LDA GAME_STATE + game_state::unknownA2
    case 0xC4671A: cpu.execute_instruction<0xAD>(0x009897, 3); return true;
    // src/unknown/C4/C46712.asm:7 LDA GAME_STATE + game_state::unknownA2
    // Overlapping static entry reached from 0xC46718.
    case 0xC4671C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:8 ASL
    case 0xC4671D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:9 CLC
    case 0xC4671E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4671F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C46712.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4671F.
    case 0xC46721: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46712.asm:11 TAX
    case 0xC46722: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:12 LDA __BSS_START__,X
    case 0xC46723: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:13 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC46726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46712.asm:13 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC46726.
    case 0xC46728: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    case 0xC46729: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC46728.
    case 0xC4672A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC46728.
    case 0xC4672B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C46712.asm:15 LDA #$0001
    case 0xC4672C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46712.asm:15 LDA #$0001
    // Overlapping static entry reached from 0xC4672C.
    case 0xC4672E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46712.asm:16 STA @LOCAL00
    case 0xC4672F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:17 BRA @UNKNOWN1
    case 0xC46731: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C46712.asm:19 ASL
    case 0xC46733: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:26 TAX
    case 0xC46734: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:27 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46735: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C46712.asm:29 ASL
    case 0xC46738: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:30 CLC
    case 0xC46739: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:31 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4673A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C46712.asm:31 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4673A.
    case 0xC4673C: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C46712.asm:32 TAX
    case 0xC4673D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:33 LDA __BSS_START__,X
    case 0xC4673E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:34 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC46741: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C46712.asm:34 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC46741.
    case 0xC46743: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C46712.asm:35 STA __BSS_START__,X
    case 0xC46744: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:36 LDA @LOCAL00
    case 0xC46747: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:37 INC
    case 0xC46749: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:38 STA @LOCAL00
    case 0xC4674A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:40 LDA GAME_STATE+game_state::party_count
    case 0xC4674C: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C46712.asm:41 AND #$00FF
    case 0xC4674F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46712.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC4674F.
    case 0xC46751: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46712.asm:42 STA @VIRTUAL02
    case 0xC46752: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46712.asm:43 LDA @LOCAL00
    case 0xC46754: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:44 CMP @VIRTUAL02
    case 0xC46756: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46712.asm:45 BCC @UNKNOWN0
    case 0xC46758: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46712.asm:46 END_C_FUNCTION
    case 0xC4675A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46712.asm:46 END_C_FUNCTION
    case 0xC4675B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4675C.asm (unresolved).
bool execute_unresolved_c4_c4675c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4675C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4675C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC4675E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC4675F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC46760: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46760.
    case 0xC46762: cpu.execute_instruction<0xFF>(0x97AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC46763: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:7 LDA GAME_STATE + game_state::unknownA2
    case 0xC46764: cpu.execute_instruction<0xAD>(0x009897, 3); return true;
    // src/unknown/C4/C4675C.asm:7 LDA GAME_STATE + game_state::unknownA2
    // Overlapping static entry reached from 0xC46762.
    case 0xC46766: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:8 ASL
    case 0xC46767: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:9 CLC
    case 0xC46768: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C4675C.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46769.
    case 0xC4676B: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4675C.asm:11 TAX
    case 0xC4676C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:12 LDA __BSS_START__,X
    case 0xC4676D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:13 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC46770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C4675C.asm:13 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC46770.
    case 0xC46772: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C4675C.asm:14 STA __BSS_START__,X
    case 0xC46773: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:15 LDA #1
    case 0xC46776: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4675C.asm:15 LDA #1
    // Overlapping static entry reached from 0xC46776.
    case 0xC46778: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4675C.asm:16 STA @LOCAL00
    case 0xC46779: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:17 BRA @UNKNOWN2
    case 0xC4677B: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C4/C4675C.asm:25 TAX
    case 0xC4677D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:26 LDA GAME_STATE + game_state::unknown96,X
    case 0xC4677E: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C4/C4675C.asm:28 AND #$00FF
    case 0xC46781: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4675C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC46781.
    case 0xC46783: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4675C.asm:29 CMP #9
    case 0xC46784: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C4675C.asm:29 CMP #9
    // Overlapping static entry reached from 0xC46784.
    case 0xC46786: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4675C.asm:30 BEQ @UNKNOWN1
    case 0xC46787: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4675C.asm:31 LDA @LOCAL00
    case 0xC46789: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:32 ASL
    case 0xC4678B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:39 TAX
    case 0xC4678C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:40 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC4678D: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C4/C4675C.asm:42 ASL
    case 0xC46790: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:43 CLC
    case 0xC46791: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC46792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C4675C.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC46792.
    case 0xC46794: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4675C.asm:45 TAX
    case 0xC46795: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:46 LDA __BSS_START__,X
    case 0xC46796: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:47 AND #$FFFF ^ (SPRITEMAP_FLAGS::DRAW_DISABLED)
    case 0xC46799: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4675C.asm:47 AND #$FFFF ^ (SPRITEMAP_FLAGS::DRAW_DISABLED)
    // Overlapping static entry reached from 0xC46799.
    case 0xC4679B: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4675C.asm:48 STA __BSS_START__,X
    case 0xC4679C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:50 LDA @LOCAL00
    case 0xC4679F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:51 INC
    case 0xC467A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:52 STA @LOCAL00
    case 0xC467A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:54 LDA GAME_STATE+game_state::party_count
    case 0xC467A4: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C4675C.asm:55 AND #$00FF
    case 0xC467A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4675C.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC467A7.
    case 0xC467A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4675C.asm:56 STA @VIRTUAL02
    case 0xC467AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4675C.asm:57 LDA @LOCAL00
    case 0xC467AC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:58 CMP @VIRTUAL02
    case 0xC467AE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4675C.asm:58 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC46803.
    case 0xC467AF: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/unknown/C4/C4675C.asm:59 BCC @UNKNOWN0
    case 0xC467B0: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4675C.asm:60 END_C_FUNCTION
    case 0xC467B2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4675C.asm:60 END_C_FUNCTION
    case 0xC467B3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467B4.asm (unresolved).
bool execute_unresolved_c4_c467b4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467B4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC467B4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C467B4.asm:6 JSL RAND
    case 0xC467B6: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C4/C467B4.asm:7 AND #$001F
    case 0xC467BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C467B4.asm:7 AND #$001F
    // Overlapping static entry reached from 0xC467BA.
    case 0xC467BC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C467B4.asm:8 CLC
    case 0xC467BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467B4.asm:9 ADC #12
    case 0xC467BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C4/C467B4.asm:9 ADC #12
    // Overlapping static entry reached from 0xC467BE.
    case 0xC467C0: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467B4.asm:10 END_C_FUNCTION
    case 0xC467C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467C2.asm (unresolved).
bool execute_unresolved_c4_c467c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC467C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC467C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC467C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC467C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC467C6.
    case 0xC467C8: cpu.execute_instruction<0xFF>(0x9A225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC467C9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:7 JSL RAND
    case 0xC467CA: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C4/C467C2.asm:7 JSL RAND
    // Overlapping static entry reached from 0xC467C8.
    case 0xC467CC: cpu.execute_instruction<0x8E>(0x0029C0, 3); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    case 0xC467CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    // Overlapping static entry reached from 0xC467CC.
    case 0xC467CF: cpu.execute_instruction<0x1F>(0x028500, 4); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    // Overlapping static entry reached from 0xC467CE.
    case 0xC467D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C467C2.asm:9 STA @VIRTUAL02
    case 0xC467D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C467C2.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC467D3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C467C2.asm:11 ASL
    case 0xC467D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:12 TAX
    case 0xC467D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:13 LDA #256
    case 0xC467D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C4/C467C2.asm:13 LDA #256
    // Overlapping static entry reached from 0xC467D8.
    case 0xC467DA: cpu.execute_instruction<0x01>(0x000038, 2); return true;
    // src/unknown/C4/C467C2.asm:14 SEC
    case 0xC467DB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:15 SBC ENTITY_SCREEN_Y_TABLE,X
    case 0xC467DC: cpu.execute_instruction<0xFD>(0x000B52, 3); return true;
    // src/unknown/C4/C467C2.asm:16 LSR
    case 0xC467DF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:17 LSR
    case 0xC467E0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:18 CLC
    case 0xC467E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:19 ADC @VIRTUAL02
    case 0xC467E2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C467C2.asm:20 END_C_FUNCTION
    case 0xC467E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467C2.asm:20 END_C_FUNCTION
    case 0xC467E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467E6.asm (unresolved).
bool execute_unresolved_c4_c467e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC467E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC467E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC467E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC467EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC467EA.
    case 0xC467EC: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC467ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:7 LDA #0
    case 0xC467EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:7 LDA #0
    // Overlapping static entry reached from 0xC467EE.
    case 0xC467F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C467E6.asm:8 STA @LOCAL00
    case 0xC467F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:9 BRA @UNKNOWN2
    case 0xC467F3: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C467E6.asm:11 ASL
    case 0xC467F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:12 TAX
    case 0xC467F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:13 LDA ENTITY_SPRITE_IDS,X
    case 0xC467F7: cpu.execute_instruction<0xBD>(0x002CD6, 3); return true;
    // src/unknown/C4/C467E6.asm:14 CMP #OVERWORLD_SPRITE::LEAVES_FOR_TESSIE_SCENE
    case 0xC467FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00006F, 2); else cpu.execute_instruction<0xC9>(0x00016F, 3); return true;
    // src/unknown/C4/C467E6.asm:14 CMP #OVERWORLD_SPRITE::LEAVES_FOR_TESSIE_SCENE
    // Overlapping static entry reached from 0xC467FA.
    case 0xC467FC: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C467E6.asm:15 BNE @UNKNOWN1
    case 0xC467FD: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C467E6.asm:15 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC467FC.
    case 0xC467FE: cpu.execute_instruction<0x0F>(0x69188A, 4); return true;
    // src/unknown/C4/C467E6.asm:16 TXA
    case 0xC467FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:17 CLC
    case 0xC46800: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC46801: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC467FE.
    case 0xC46802: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC46801.
    case 0xC46803: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C467E6.asm:19 TAX
    case 0xC46804: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:20 LDA __BSS_START__,X
    case 0xC46805: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:21 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC46808: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C467E6.asm:21 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC46808.
    case 0xC4680A: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C467E6.asm:22 STA __BSS_START__,X
    case 0xC4680B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:24 LDA @LOCAL00
    case 0xC4680E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:25 INC
    case 0xC46810: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:26 STA @LOCAL00
    case 0xC46811: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:28 CMP #MAX_ENTITIES
    case 0xC46813: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C467E6.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC46813.
    case 0xC46815: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C467E6.asm:29 BCC @UNKNOWN0
    case 0xC46816: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C467E6.asm:30 END_C_FUNCTION
    case 0xC46818: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467E6.asm:30 END_C_FUNCTION
    case 0xC46819: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4681A.asm (unresolved).
bool execute_unresolved_c4_c4681a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4681A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4681A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC4681C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC4681D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC4681E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4681E.
    case 0xC46820: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC46821: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC46822: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C4681A.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46820.
    case 0xC46824: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:9 ASL
    case 0xC46825: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:10 TAX
    case 0xC46826: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:11 LDA ENTITY_NPC_IDS,X
    case 0xC46827: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C4/C4681A.asm:12 STA @LOCAL01
    case 0xC4682A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4681A.asm:13 CMP #.LOWORD(-1)
    case 0xC4682C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4681A.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4682C.
    case 0xC4682E: cpu.execute_instruction<0xFF>(0xA94EF0, 4); return true;
    // src/unknown/C4/C4681A.asm:14 BEQ @UNKNOWN1
    case 0xC4682F: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC46831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4682E.
    case 0xC46832: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46831.
    case 0xC46833: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC46834: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46833.
    case 0xC46835: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC46836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46836.
    case 0xC46838: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC46839: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4681A.asm:16 LDA @LOCAL01
    case 0xC4683B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC4683D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC4683F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC46840: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC46841: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC46842: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC46843: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4681A.asm:18 CLC
    case 0xC46845: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:19 ADC #npc_config::text_pointer
    case 0xC46846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C4/C4681A.asm:19 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC46846.
    case 0xC46848: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4681A.asm:20 CLC
    case 0xC46849: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:21 ADC @VIRTUAL0A
    case 0xC4684A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4681A.asm:22 STA @VIRTUAL0A
    case 0xC4684C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4684E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4684E.
    case 0xC46850: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC46851: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC46853: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC46854: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC46856: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC46858: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC4685A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4685A.
    case 0xC4685C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC4685D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC4685F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4685F.
    case 0xC46861: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC46862: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC46864: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC46866: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC46868: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC4686A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC4686C: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C4/C4681A.asm:26 BEQ @UNKNOWN1
    case 0xC4686E: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46870: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46872: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46874: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46876: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4681A.asm:28 LDA #8
    case 0xC46878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C4681A.asm:28 LDA #8
    // Overlapping static entry reached from 0xC46878.
    case 0xC4687A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4681A.asm:29 JSL UNKNOWN_C064E3
    case 0xC4687B: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4681A.asm:31 END_C_FUNCTION
    case 0xC4687F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4681A.asm:31 END_C_FUNCTION
    case 0xC46880: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46881.asm (unresolved).
bool execute_unresolved_c4_c46881_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46881.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46881: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC46883: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC46884: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC46885: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46885.
    case 0xC46887: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC46888: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC46889: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4688B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4688D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4688F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46881.asm:9 LDA #<-1
    case 0xC46891: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46881.asm:9 LDA #<-1
    // Overlapping static entry reached from 0xC46891.
    case 0xC46893: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46881.asm:10 JSL UNKNOWN_C46594
    case 0xC46894: cpu.execute_instruction<0x22>(0xC46594, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46898: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4689A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4689C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4689E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46881.asm:12 LDA #8
    case 0xC468A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C46881.asm:12 LDA #8
    // Overlapping static entry reached from 0xC468A0.
    case 0xC468A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46881.asm:13 JSL UNKNOWN_C064E3
    case 0xC468A3: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46881.asm:14 END_C_FUNCTION
    case 0xC468A7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46881.asm:14 END_C_FUNCTION
    case 0xC468A8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468A9.asm (unresolved).
bool execute_unresolved_c4_c468a9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468A9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC468A9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C468A9.asm:6 LDA PAD_PRESS
    case 0xC468AB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468A9.asm:7 END_C_FUNCTION
    case 0xC468AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468AF.asm (unresolved).
bool execute_unresolved_c4_c468af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468AF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC468AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C468AF.asm:6 LDA PAD_STATE
    case 0xC468B1: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468AF.asm:7 END_C_FUNCTION
    case 0xC468B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468B5.asm (unresolved).
bool execute_unresolved_c4_c468b5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468B5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC468B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC468BA.
    case 0xC468BC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC468BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:9 STA @LOCAL01
    case 0xC468BF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C468B5.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC468BC.
    case 0xC468C0: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    case 0xC468C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    // Overlapping static entry reached from 0xC468C0.
    case 0xC468C2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    // Overlapping static entry reached from 0xC468C1.
    case 0xC468C3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468B5.asm:11 STX @LOCAL00
    case 0xC468C4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC468C6: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C468B5.asm:13 ASL
    case 0xC468C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:14 TAX
    case 0xC468CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:15 LDA @LOCAL01
    case 0xC468CB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C468B5.asm:16 CMP ENTITY_ABS_X_TABLE,X
    case 0xC468CD: cpu.execute_instruction<0xDD>(0x000B8E, 3); return true;
    // src/unknown/C4/C468B5.asm:17 BCS @UNKNOWN0
    case 0xC468D0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C468B5.asm:18 LDX #1
    case 0xC468D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C468B5.asm:18 LDX #1
    // Overlapping static entry reached from 0xC468D2.
    case 0xC468D4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468B5.asm:19 STX @LOCAL00
    case 0xC468D5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:21 LDX @LOCAL00
    case 0xC468D7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:22 TXA
    case 0xC468D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C468B5.asm:23 END_C_FUNCTION
    case 0xC468DA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468B5.asm:23 END_C_FUNCTION
    case 0xC468DB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468DC.asm (unresolved).
bool execute_unresolved_c4_c468dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468DC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC468DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC468E1.
    case 0xC468E3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC468E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:9 STA @LOCAL01
    case 0xC468E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C468DC.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC468E3.
    case 0xC468E7: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    case 0xC468E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC468E7.
    case 0xC468E9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC468E8.
    case 0xC468EA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468DC.asm:11 STX @LOCAL00
    case 0xC468EB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC468ED: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C468DC.asm:13 ASL
    case 0xC468F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:14 TAX
    case 0xC468F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:15 LDA @LOCAL01
    case 0xC468F2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C468DC.asm:16 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC468F4: cpu.execute_instruction<0xDD>(0x000BCA, 3); return true;
    // src/unknown/C4/C468DC.asm:17 BCS @UNKNOWN0
    case 0xC468F7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C468DC.asm:18 LDX #1
    case 0xC468F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C468DC.asm:18 LDX #1
    // Overlapping static entry reached from 0xC468F9.
    case 0xC468FB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468DC.asm:19 STX @LOCAL00
    case 0xC468FC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:21 LDX @LOCAL00
    case 0xC468FE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:22 TXA
    case 0xC46900: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C468DC.asm:23 END_C_FUNCTION
    case 0xC46901: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468DC.asm:23 END_C_FUNCTION
    case 0xC46902: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46903.asm (unresolved).
bool execute_unresolved_c4_c46903_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46903.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46903: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46903.asm:7 LDX #FALSE
    case 0xC46905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C46903.asm:7 LDX #FALSE
    // Overlapping static entry reached from 0xC46905.
    case 0xC46907: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C4/C46903.asm:8 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC46908: cpu.execute_instruction<0xCD>(0x00987B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C46903.asm:9 BLTEQ @UNKNOWN0
    case 0xC4690B: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C46903.asm:9 BLTEQ @UNKNOWN0
    case 0xC4690D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C46903.asm:10 LDX #TRUE
    case 0xC4690F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C46903.asm:10 LDX #TRUE
    // Overlapping static entry reached from 0xC4690F.
    case 0xC46911: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C46903.asm:12 TXA
    case 0xC46912: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46903.asm:13 END_C_FUNCTION
    case 0xC46913: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46914.asm (unresolved).
bool execute_unresolved_c4_c46914_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46914.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46914: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC46916: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC46917: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC46918: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46918.
    case 0xC4691A: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC4691B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC4691C: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46914.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4691A.
    case 0xC4691E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:9 ASL
    case 0xC4691F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:10 TAX
    case 0xC46920: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:11 LDA ENTITY_NPC_IDS,X
    case 0xC46921: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C4/C46914.asm:12 STA @LOCAL00
    case 0xC46924: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46914.asm:13 CMP #.LOWORD(-1)
    case 0xC46926: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46914.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46926.
    case 0xC46928: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C4/C46914.asm:14 BNE @UNKNOWN0
    case 0xC46929: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    case 0xC4692B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    // Overlapping static entry reached from 0xC46928.
    case 0xC4692C: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    // Overlapping static entry reached from 0xC4692B.
    case 0xC4692D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46914.asm:16 BRA @UNKNOWN1
    case 0xC4692E: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC46930: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46930.
    case 0xC46932: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC46933: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46932.
    case 0xC46934: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC46935: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46934.
    case 0xC46936: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46935.
    case 0xC46937: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC46938: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46914.asm:19 LDA @LOCAL00
    case 0xC4693A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC4693C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC4693E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC4693F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC46940: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC46941: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC46942: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C46914.asm:21 CLC
    case 0xC46944: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:22 ADC @VIRTUAL06
    case 0xC46945: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:23 STA @VIRTUAL06
    case 0xC46947: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC46949: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46914.asm:25 LDY #npc_config::direction
    case 0xC4694B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C46914.asm:25 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC4694B.
    case 0xC4694D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C46914.asm:26 LDA [@VIRTUAL06],Y
    case 0xC4694E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC46950: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C46914.asm:28 AND #$00FF
    case 0xC46952: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46914.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC46952.
    case 0xC46954: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46914.asm:30 END_C_FUNCTION
    case 0xC46955: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46914.asm:30 END_C_FUNCTION
    case 0xC46956: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46957.asm (unresolved).
bool execute_unresolved_c4_c46957_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46957.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46957: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC46959: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC4695A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC4695B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC4695C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4695C.
    case 0xC4695E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC4695F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC46960: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:8 STA @LOCAL00
    case 0xC46961: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4695E.
    case 0xC46962: cpu.execute_instruction<0x0E>(0x0042AC, 3); return true;
    // src/unknown/C4/C46957.asm:9 LDY CURRENT_ENTITY_SLOT
    case 0xC46963: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46957.asm:9 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46962.
    case 0xC46965: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:10 TYA
    case 0xC46966: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:11 ASL
    case 0xC46967: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:12 CLC
    case 0xC46968: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:13 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC46969: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46957.asm:13 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC46969.
    case 0xC4696B: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:14 TAX
    case 0xC4696C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:15 LDA @LOCAL00
    case 0xC4696D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:16 STA @VIRTUAL02
    case 0xC4696F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46957.asm:17 LDA __BSS_START__,X
    case 0xC46971: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46957.asm:18 CMP @VIRTUAL02
    case 0xC46974: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46957.asm:19 BEQ @UNKNOWN0
    case 0xC46976: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C46957.asm:20 LDA @LOCAL00
    case 0xC46978: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:21 STA __BSS_START__,X
    case 0xC4697A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46957.asm:22 TYA
    case 0xC4697D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:23 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4697E: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46957.asm:25 END_C_FUNCTION
    case 0xC46982: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46957.asm:25 END_C_FUNCTION
    case 0xC46983: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46984.asm (unresolved).
bool execute_unresolved_c4_c46984_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46984.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46984: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC46986: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC46987: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC46988: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC46989: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46989.
    case 0xC4698B: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC4698C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC4698D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:9 TAX
    case 0xC4698E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC4698F: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46984.asm:11 STY @LOCAL01
    case 0xC46992: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:12 TXA
    case 0xC46994: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:13 JSL UNKNOWN_C4605A
    case 0xC46995: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C46984.asm:14 STA @VIRTUAL04
    case 0xC46999: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:15 CMP #.LOWORD(-1)
    case 0xC4699B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46984.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4699B.
    case 0xC4699D: cpu.execute_instruction<0xFF>(0xA54FF0, 4); return true;
    // src/unknown/C4/C46984.asm:16 BEQ @UNKNOWN0
    case 0xC4699E: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C46984.asm:17 LDA @VIRTUAL04
    case 0xC469A0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:17 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4699D.
    case 0xC469A1: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C4/C46984.asm:18 ASL
    case 0xC469A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:19 STA @VIRTUAL02
    case 0xC469A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:20 LDY @LOCAL01
    case 0xC469A5: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:21 TYA
    case 0xC469A7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:22 ASL
    case 0xC469A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:23 TAX
    case 0xC469A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC469AA: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46984.asm:25 STA @LOCAL00
    case 0xC469AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46984.asm:26 LDY ENTITY_ABS_X_TABLE,X
    case 0xC469AF: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/unknown/C4/C46984.asm:27 LDX @VIRTUAL02
    case 0xC469B2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC469B4: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46984.asm:29 TAX
    case 0xC469B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:30 STX @LOCAL01
    case 0xC469B8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:31 LDX @VIRTUAL02
    case 0xC469BA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:32 LDA ENTITY_ABS_X_TABLE,X
    case 0xC469BC: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46984.asm:33 LDX @LOCAL01
    case 0xC469BF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:34 JSL UNKNOWN_C41EFF
    case 0xC469C1: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C4/C46984.asm:35 LDY #$2000
    case 0xC469C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46984.asm:35 LDY #$2000
    // Overlapping static entry reached from 0xC469C5.
    case 0xC469C7: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46984.asm:36 CLC
    case 0xC469C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    case 0xC469C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC469C7.
    case 0xC469CA: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC469C9.
    case 0xC469CB: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC469CC: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC469CB.
    case 0xC469CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC469CD.
    case 0xC469CE: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C46984.asm:39 STA @LOCAL01
    case 0xC469D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:40 LDA @VIRTUAL02
    case 0xC469D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:41 CLC
    case 0xC469D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC469D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46984.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC469D5.
    case 0xC469D7: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:43 TAX
    case 0xC469D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:44 LDA @LOCAL01
    case 0xC469D9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:45 STA @VIRTUAL02
    case 0xC469DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:46 LDA __BSS_START__,X
    case 0xC469DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46984.asm:47 CMP @VIRTUAL02
    case 0xC469E0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:48 BEQ @UNKNOWN0
    case 0xC469E2: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46984.asm:49 LDA @LOCAL01
    case 0xC469E4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:50 STA __BSS_START__,X
    case 0xC469E6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46984.asm:51 LDA @VIRTUAL04
    case 0xC469E9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:52 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC469EB: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46984.asm:54 END_C_FUNCTION
    case 0xC469EF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46984.asm:54 END_C_FUNCTION
    case 0xC469F0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C469F1.asm (unresolved).
bool execute_unresolved_c4_c469f1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C469F1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC469F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469F4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469F5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC469F6.
    case 0xC469F8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469F9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC469FA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:9 TAX
    case 0xC469FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC469FC: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C469F1.asm:11 STY @LOCAL01
    case 0xC469FF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:12 TXA
    case 0xC46A01: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:13 JSL UNKNOWN_C46028
    case 0xC46A02: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C469F1.asm:14 STA @VIRTUAL04
    case 0xC46A06: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:15 CMP #.LOWORD(-1)
    case 0xC46A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C469F1.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46A08.
    case 0xC46A0A: cpu.execute_instruction<0xFF>(0xA54FF0, 4); return true;
    // src/unknown/C4/C469F1.asm:16 BEQ @UNKNOWN0
    case 0xC46A0B: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C469F1.asm:17 LDA @VIRTUAL04
    case 0xC46A0D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:17 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC46A0A.
    case 0xC46A0E: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C4/C469F1.asm:18 ASL
    case 0xC46A0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:19 STA @VIRTUAL02
    case 0xC46A10: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:20 LDY @LOCAL01
    case 0xC46A12: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:21 TYA
    case 0xC46A14: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:22 ASL
    case 0xC46A15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:23 TAX
    case 0xC46A16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46A17: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C469F1.asm:25 STA @LOCAL00
    case 0xC46A1A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C469F1.asm:26 LDY ENTITY_ABS_X_TABLE,X
    case 0xC46A1C: cpu.execute_instruction<0xBC>(0x000B8E, 3); return true;
    // src/unknown/C4/C469F1.asm:27 LDX @VIRTUAL02
    case 0xC46A1F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46A21: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C469F1.asm:29 TAX
    case 0xC46A24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:30 STX @LOCAL01
    case 0xC46A25: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:31 LDX @VIRTUAL02
    case 0xC46A27: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:32 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46A29: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C469F1.asm:33 LDX @LOCAL01
    case 0xC46A2C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:34 JSL UNKNOWN_C41EFF
    case 0xC46A2E: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C4/C469F1.asm:35 LDY #$2000
    case 0xC46A32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C469F1.asm:35 LDY #$2000
    // Overlapping static entry reached from 0xC46A32.
    case 0xC46A34: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C469F1.asm:36 CLC
    case 0xC46A35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    case 0xC46A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC46A34.
    case 0xC46A37: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC46A36.
    case 0xC46A38: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C469F1.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46A39: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C469F1.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46A38.
    case 0xC46A3A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46A3A.
    case 0xC46A3B: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C469F1.asm:39 STA @LOCAL01
    case 0xC46A3D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:40 LDA @VIRTUAL02
    case 0xC46A3F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:41 CLC
    case 0xC46A41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC46A42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C469F1.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC46A42.
    case 0xC46A44: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:43 TAX
    case 0xC46A45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:44 LDA @LOCAL01
    case 0xC46A46: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:45 STA @VIRTUAL02
    case 0xC46A48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:46 LDA __BSS_START__,X
    case 0xC46A4A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C469F1.asm:47 CMP @VIRTUAL02
    case 0xC46A4D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:48 BEQ @UNKNOWN0
    case 0xC46A4F: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C469F1.asm:49 LDA @LOCAL01
    case 0xC46A51: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:50 STA __BSS_START__,X
    case 0xC46A53: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C469F1.asm:51 LDA @VIRTUAL04
    case 0xC46A56: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:52 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC46A58: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C469F1.asm:54 END_C_FUNCTION
    case 0xC46A5C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C469F1.asm:54 END_C_FUNCTION
    case 0xC46A5D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46A6E.asm (unresolved).
bool execute_unresolved_c4_c46a6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46A6E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46A6E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46A6E.asm:6 LDA GAME_STATE+game_state::leader_direction
    case 0xC46A70: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C4/C46A6E.asm:7 ASL
    case 0xC46A73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46A6E.asm:8 TAX
    case 0xC46A74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46A6E.asm:9 LDA f:UNKNOWN_C46A5E,X
    case 0xC46A75: cpu.execute_instruction<0xBF>(0xC46A5E, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46A6E.asm:10 END_C_FUNCTION
    case 0xC46A79: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46A9A.asm (unresolved).
bool execute_unresolved_c4_c46a9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46A9A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46A9A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46A9A.asm:7 ASL
    case 0xC46A9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46A9A.asm:8 TAX
    case 0xC46A9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46A9A.asm:9 LDA f:UNKNOWN_C46A7A,X
    case 0xC46A9E: cpu.execute_instruction<0xBF>(0xC46A7A, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46A9A.asm:10 END_C_FUNCTION
    case 0xC46AA2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46AA3.asm (unresolved).
bool execute_unresolved_c4_c46aa3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46AA3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46AA3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46AA3.asm:7 ASL
    case 0xC46AA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46AA3.asm:8 TAX
    case 0xC46AA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AA3.asm:9 LDA f:UNKNOWN_C46A8A,X
    case 0xC46AA7: cpu.execute_instruction<0xBF>(0xC46A8A, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46AA3.asm:10 END_C_FUNCTION
    case 0xC46AAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46AAC.asm (unresolved).
bool execute_unresolved_c4_c46aac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46AAC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46AAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC46AAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC46AAF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC46AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46AB0.
    case 0xC46AB2: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC46AB3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC46AB4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46AAC.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46AB2.
    case 0xC46AB6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:10 ASL
    case 0xC46AB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:11 STA @LOCAL02
    case 0xC46AB8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:12 TAX
    case 0xC46ABA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:13 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46ABB: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C46AAC.asm:14 STA @LOCAL00
    case 0xC46ABE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46AAC.asm:15 LDA @LOCAL02
    case 0xC46AC0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:16 TAX
    case 0xC46AC2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:17 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46AC3: cpu.execute_instruction<0xBC>(0x000FC6, 3); return true;
    // src/unknown/C4/C46AAC.asm:18 TAX
    case 0xC46AC6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46AC7: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46AAC.asm:20 TAX
    case 0xC46ACA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:21 STX @LOCAL01
    case 0xC46ACB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46AAC.asm:22 LDA @LOCAL02
    case 0xC46ACD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:23 TAX
    case 0xC46ACF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46AD0: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46AAC.asm:25 LDX @LOCAL01
    case 0xC46AD3: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46AAC.asm:26 JSL GET_DIRECTION_TO
    case 0xC46AD5: cpu.execute_instruction<0x22>(0xC45FA8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46AAC.asm:27 END_C_FUNCTION
    case 0xC46AD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46AAC.asm:27 END_C_FUNCTION
    case 0xC46ADA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46ADB.asm (unresolved).
bool execute_unresolved_c4_c46adb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46ADB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46ADB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC46ADD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC46ADE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC46ADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46ADF.
    case 0xC46AE1: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC46AE2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC46AE3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46ADB.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46AE1.
    case 0xC46AE5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:10 ASL
    case 0xC46AE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:11 STA @LOCAL02
    case 0xC46AE7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:12 TAX
    case 0xC46AE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:13 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46AEA: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C46ADB.asm:14 STA @LOCAL00
    case 0xC46AED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46ADB.asm:15 LDA @LOCAL02
    case 0xC46AEF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:16 TAX
    case 0xC46AF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:17 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46AF2: cpu.execute_instruction<0xBC>(0x000FC6, 3); return true;
    // src/unknown/C4/C46ADB.asm:18 TAX
    case 0xC46AF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46AF6: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46ADB.asm:20 TAX
    case 0xC46AF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:21 STX @LOCAL01
    case 0xC46AFA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46ADB.asm:22 LDA @LOCAL02
    case 0xC46AFC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:23 TAX
    case 0xC46AFE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46AFF: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46ADB.asm:25 LDX @LOCAL01
    case 0xC46B02: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46ADB.asm:26 JSL UNKNOWN_C41EFF
    case 0xC46B04: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46ADB.asm:27 END_C_FUNCTION
    case 0xC46B08: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46ADB.asm:27 END_C_FUNCTION
    case 0xC46B09: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B0A.asm (unresolved).
bool execute_unresolved_c4_c46b0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B0A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B0A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B0C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B0D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B0E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46B0F.
    case 0xC46B11: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B12: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC46B13: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    case 0xC46B14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    // Overlapping static entry reached from 0xC46B11.
    case 0xC46B15: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    // Overlapping static entry reached from 0xC46B14.
    case 0xC46B16: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46B0A.asm:9 CLC
    case 0xC46B17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    case 0xC46B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    // Overlapping static entry reached from 0xC46B16.
    case 0xC46B19: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    // Overlapping static entry reached from 0xC46B18.
    case 0xC46B1A: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46B0A.asm:11 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46B1B: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C46B0A.asm:11 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46B1A.
    case 0xC46B1C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:11 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46B1C.
    case 0xC46B1D: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C46B0A.asm:12 STA @LOCAL00
    case 0xC46B1F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46B0A.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC46B21: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46B0A.asm:14 ASL
    case 0xC46B24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:15 TAX
    case 0xC46B25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:16 LDA @LOCAL00
    case 0xC46B26: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46B0A.asm:17 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC46B28: cpu.execute_instruction<0x9D>(0x001A86, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46B0A.asm:18 END_C_FUNCTION
    case 0xC46B2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B0A.asm:18 END_C_FUNCTION
    case 0xC46B2C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B2D.asm (unresolved).
bool execute_unresolved_c4_c46b2d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B2D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B2D.asm:7 LDY #$2000
    case 0xC46B2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B2D.asm:7 LDY #$2000
    // Overlapping static entry reached from 0xC46B2F.
    case 0xC46B31: cpu.execute_instruction<0x20>(0x003222, 3); return true;
    // src/unknown/C4/C46B2D.asm:8 JSL MULT16
    case 0xC46B32: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C46B2D.asm:8 JSL MULT16
    // Overlapping static entry reached from 0xC46B31.
    case 0xC46B34: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B2D.asm:9 END_C_FUNCTION
    case 0xC46B36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B37.asm (unresolved).
bool execute_unresolved_c4_c46b37_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B37.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC46B39: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC46B3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC46B3B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC46B3C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    case 0xC46B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC46B1A.
    case 0xC46B3E: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC46B3D.
    case 0xC46B3F: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B37.asm:9 END_C_FUNCTION
    case 0xC46B40: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B51.asm (unresolved).
bool execute_unresolved_c4_c46b51_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B51.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B51: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B51.asm:7 LDY #$2000
    case 0xC46B53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B51.asm:7 LDY #$2000
    // Overlapping static entry reached from 0xC46B53.
    case 0xC46B55: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46B51.asm:8 CLC
    case 0xC46B56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    case 0xC46B57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    // Overlapping static entry reached from 0xC46B55.
    case 0xC46B58: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    // Overlapping static entry reached from 0xC46B57.
    case 0xC46B59: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46B51.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46B5A: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C46B51.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46B59.
    case 0xC46B5B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46B5B.
    case 0xC46B5C: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C46B51.asm:11 ASL
    case 0xC46B5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:12 TAX
    case 0xC46B5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:13 LDA f:UNKNOWN_C46B41,X
    case 0xC46B60: cpu.execute_instruction<0xBF>(0xC46B41, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B51.asm:14 END_C_FUNCTION
    case 0xC46B64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B65.asm (unresolved).
bool execute_unresolved_c4_c46b65_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B65.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B65.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46B67: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46B65.asm:6 ASL
    case 0xC46B6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B65.asm:7 TAX
    case 0xC46B6B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B65.asm:8 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC46B6C: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C4/C46B65.asm:9 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46B6F: cpu.execute_instruction<0x9D>(0x000FC6, 3); return true;
    // src/unknown/C4/C46B65.asm:10 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC46B72: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C4/C46B65.asm:11 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46B75: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B65.asm:12 END_C_FUNCTION
    case 0xC46B78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B79.asm (unresolved).
bool execute_unresolved_c4_c46b79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B79.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B79.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46B7B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46B79.asm:5 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46B59.
    case 0xC46B7D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:6 ASL
    case 0xC46B7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:7 TAX
    case 0xC46B7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:8 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC46B80: cpu.execute_instruction<0xAD>(0x009E2D, 3); return true;
    // src/unknown/C4/C46B79.asm:9 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46B83: cpu.execute_instruction<0x9D>(0x000FC6, 3); return true;
    // src/unknown/C4/C46B79.asm:10 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46B86: cpu.execute_instruction<0xAD>(0x009E2F, 3); return true;
    // src/unknown/C4/C46B79.asm:11 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46B89: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B79.asm:12 END_C_FUNCTION
    case 0xC46B8C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B8D.asm (unresolved).
bool execute_unresolved_c4_c46b8d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B8D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B8D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B8F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B90: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B91: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46B92.
    case 0xC46B94: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B95: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC46B96: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:9 TAX
    case 0xC46B97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC46B98: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46B8D.asm:11 STY @LOCAL01
    case 0xC46B9B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46B8D.asm:12 TXA
    case 0xC46B9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:13 JSL UNKNOWN_C4605A
    case 0xC46B9E: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C46B8D.asm:14 STA @LOCAL00
    case 0xC46BA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46B8D.asm:15 LDY @LOCAL01
    case 0xC46BA4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46B8D.asm:16 TYA
    case 0xC46BA6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:17 ASL
    case 0xC46BA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:18 TAY
    case 0xC46BA8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:19 LDA @LOCAL00
    case 0xC46BA9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46B8D.asm:20 ASL
    case 0xC46BAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:21 TAX
    case 0xC46BAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46BAD: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46B8D.asm:23 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC46BB0: cpu.execute_instruction<0x99>(0x000FC6, 3); return true;
    // src/unknown/C4/C46B8D.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46BB3: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46B8D.asm:25 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC46BB6: cpu.execute_instruction<0x99>(0x001002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46B8D.asm:26 END_C_FUNCTION
    case 0xC46BB9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B8D.asm:26 END_C_FUNCTION
    case 0xC46BBA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46BBB.asm (unresolved).
bool execute_unresolved_c4_c46bbb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46BBB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46BBB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BBD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BBE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BBF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46BC0.
    case 0xC46BC2: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BC3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC46BC4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:9 TAX
    case 0xC46BC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC46BC6: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46BBB.asm:11 STY @LOCAL01
    case 0xC46BC9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46BBB.asm:12 TXA
    case 0xC46BCB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:13 JSL UNKNOWN_C46028
    case 0xC46BCC: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46BBB.asm:14 STA @LOCAL00
    case 0xC46BD0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46BBB.asm:15 LDY @LOCAL01
    case 0xC46BD2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46BBB.asm:16 TYA
    case 0xC46BD4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:17 ASL
    case 0xC46BD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:18 TAY
    case 0xC46BD6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:19 LDA @LOCAL00
    case 0xC46BD7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46BBB.asm:20 ASL
    case 0xC46BD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:21 TAX
    case 0xC46BDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46BDB: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46BBB.asm:23 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC46BDE: cpu.execute_instruction<0x99>(0x000FC6, 3); return true;
    // src/unknown/C4/C46BBB.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46BE1: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46BBB.asm:25 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC46BE4: cpu.execute_instruction<0x99>(0x001002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46BBB.asm:26 END_C_FUNCTION
    case 0xC46BE7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46BBB.asm:26 END_C_FUNCTION
    case 0xC46BE8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C45.asm (unresolved).
bool execute_unresolved_c4_c46c45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C45.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46C45: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46C45.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46C47: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46C45.asm:6 ASL
    case 0xC46C4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:7 TAX
    case 0xC46C4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46C4C: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46C45.asm:9 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC46C4F: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // src/unknown/C4/C46C45.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC46C52: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46C45.asm:11 ASL
    case 0xC46C55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:12 TAX
    case 0xC46C56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46C57: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46C45.asm:14 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC46C5A: cpu.execute_instruction<0x9D>(0x000E9A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C45.asm:15 END_C_FUNCTION
    case 0xC46C5D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C5E.asm (unresolved).
bool execute_unresolved_c4_c46c5e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C5E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46C5E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C60: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C61: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C62: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46C63.
    case 0xC46C65: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C66: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC46C67: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:8 STA @LOCAL00
    case 0xC46C68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46C5E.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC46C65.
    case 0xC46C69: cpu.execute_instruction<0x0E>(0x0042AD, 3); return true;
    // src/unknown/C4/C46C5E.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC46C6A: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46C5E.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46C69.
    case 0xC46C6C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:10 ASL
    case 0xC46C6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:11 TAY
    case 0xC46C6E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:12 TXA
    case 0xC46C6F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:13 CLC
    case 0xC46C70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:14 ADC ENTITY_ABS_X_TABLE,Y
    case 0xC46C71: cpu.execute_instruction<0x79>(0x000B8E, 3); return true;
    // src/unknown/C4/C46C5E.asm:15 STA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC46C74: cpu.execute_instruction<0x99>(0x000E5E, 3); return true;
    // src/unknown/C4/C46C5E.asm:16 LDA CURRENT_ENTITY_SLOT
    case 0xC46C77: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46C5E.asm:17 ASL
    case 0xC46C7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:18 TAX
    case 0xC46C7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:19 LDA @LOCAL00
    case 0xC46C7C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46C5E.asm:20 CLC
    case 0xC46C7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:21 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC46C7F: cpu.execute_instruction<0x7D>(0x000BCA, 3); return true;
    // src/unknown/C4/C46C5E.asm:22 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC46C82: cpu.execute_instruction<0x9D>(0x000E9A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46C5E.asm:23 END_C_FUNCTION
    case 0xC46C85: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C5E.asm:23 END_C_FUNCTION
    case 0xC46C86: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C87.asm (unresolved).
bool execute_unresolved_c4_c46c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46C87: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46C87.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46C89: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46C87.asm:6 ASL
    case 0xC46C8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C87.asm:7 TAX
    case 0xC46C8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C87.asm:8 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46C8E: cpu.execute_instruction<0xBD>(0x000FC6, 3); return true;
    // src/unknown/C4/C46C87.asm:9 STA ENTITY_ABS_X_TABLE,X
    case 0xC46C91: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C4/C46C87.asm:10 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46C94: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C46C87.asm:11 STA ENTITY_ABS_Y_TABLE,X
    case 0xC46C97: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C87.asm:12 END_C_FUNCTION
    case 0xC46C9A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C9B.asm (unresolved).
bool execute_unresolved_c4_c46c9b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C9B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46C9B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46C9D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46C9E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46C9F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46CA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46CA0.
    case 0xC46CA2: cpu.execute_instruction<0xFF>(0xAE685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46CA3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC46CA4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:9 LDX CURRENT_ENTITY_SLOT
    case 0xC46CA5: cpu.execute_instruction<0xAE>(0x001A42, 3); return true;
    // src/unknown/C4/C46C9B.asm:9 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46CA2.
    case 0xC46CA6: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C4/C46C9B.asm:10 STX @LOCAL01
    case 0xC46CA8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46C9B.asm:11 JSL UNKNOWN_C4608C
    case 0xC46CAA: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C46C9B.asm:12 STA @LOCAL00
    case 0xC46CAE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46C9B.asm:13 LDX @LOCAL01
    case 0xC46CB0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46C9B.asm:14 TXA
    case 0xC46CB2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:15 ASL
    case 0xC46CB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:16 TAY
    case 0xC46CB4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:17 LDA @LOCAL00
    case 0xC46CB5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46C9B.asm:18 ASL
    case 0xC46CB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:19 TAX
    case 0xC46CB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46CB9: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46C9B.asm:21 STA ENTITY_ABS_X_TABLE,Y
    case 0xC46CBC: cpu.execute_instruction<0x99>(0x000B8E, 3); return true;
    // src/unknown/C4/C46C9B.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46CBF: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46C9B.asm:23 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC46CC2: cpu.execute_instruction<0x99>(0x000BCA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46C9B.asm:24 END_C_FUNCTION
    case 0xC46CC5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C9B.asm:24 END_C_FUNCTION
    case 0xC46CC6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46CC7.asm (unresolved).
bool execute_unresolved_c4_c46cc7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46CC7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46CC7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CC9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CCA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CCB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46CCC.
    case 0xC46CCE: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CCF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC46CD0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:9 TAX
    case 0xC46CD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC46CD2: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46CC7.asm:11 STY @LOCAL01
    case 0xC46CD5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46CC7.asm:12 TXA
    case 0xC46CD7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:13 JSL UNKNOWN_C46028
    case 0xC46CD8: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C46CC7.asm:14 STA @LOCAL00
    case 0xC46CDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46CC7.asm:15 LDY @LOCAL01
    case 0xC46CDE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46CC7.asm:16 TYA
    case 0xC46CE0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:17 ASL
    case 0xC46CE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:18 TAY
    case 0xC46CE2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:19 LDA @LOCAL00
    case 0xC46CE3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46CC7.asm:20 ASL
    case 0xC46CE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:21 TAX
    case 0xC46CE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46CE7: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46CC7.asm:23 STA ENTITY_ABS_X_TABLE,Y
    case 0xC46CEA: cpu.execute_instruction<0x99>(0x000B8E, 3); return true;
    // src/unknown/C4/C46CC7.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46CED: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46CC7.asm:25 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC46CF0: cpu.execute_instruction<0x99>(0x000BCA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46CC7.asm:26 END_C_FUNCTION
    case 0xC46CF3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46CC7.asm:26 END_C_FUNCTION
    case 0xC46CF4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46CF5.asm (unresolved).
bool execute_unresolved_c4_c46cf5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46CF5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46CF5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CF7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CF8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CF9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46CFA.
    case 0xC46CFC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CFD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC46CFE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:8 STX @VIRTUAL02
    case 0xC46CFF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46CF5.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC46CFC.
    case 0xC46D00: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C46CF5.asm:9 TAY
    case 0xC46D01: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC46D02: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46CF5.asm:11 ASL
    case 0xC46D05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:12 TAX
    case 0xC46D06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:13 LDA @VIRTUAL02
    case 0xC46D07: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46CF5.asm:14 CLC
    case 0xC46D09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:15 ADC BG1_X_POS
    case 0xC46D0A: cpu.execute_instruction<0x6D>(0x000031, 3); return true;
    // src/unknown/C4/C46CF5.asm:16 STA ENTITY_ABS_X_TABLE,X
    case 0xC46D0D: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C4/C46CF5.asm:17 TYA
    case 0xC46D10: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:18 CLC
    case 0xC46D11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:19 ADC BG1_Y_POS
    case 0xC46D12: cpu.execute_instruction<0x6D>(0x000033, 3); return true;
    // src/unknown/C4/C46CF5.asm:20 STA ENTITY_ABS_Y_TABLE,X
    case 0xC46D15: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C4/C46CF5.asm:21 LDA #$8000
    case 0xC46D18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C4/C46CF5.asm:21 LDA #$8000
    // Overlapping static entry reached from 0xC46D18.
    case 0xC46D1A: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C46CF5.asm:22 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC46D1B: cpu.execute_instruction<0x9D>(0x000C7E, 3); return true;
    // src/unknown/C4/C46CF5.asm:23 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC46D1E: cpu.execute_instruction<0x9D>(0x000C42, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46CF5.asm:24 END_C_FUNCTION
    case 0xC46D21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46CF5.asm:24 END_C_FUNCTION
    case 0xC46D22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46D23.asm (unresolved).
bool execute_unresolved_c4_c46d23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46D23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC46D25: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC46D26: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC46D27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46D27.
    case 0xC46D29: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC46D2A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC46D2B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46D23.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46D29.
    case 0xC46D2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:8 ASL
    case 0xC46D2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:9 TAX
    case 0xC46D2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:10 STX @LOCAL00
    case 0xC46D30: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C46D23.asm:11 JSL RAND
    case 0xC46D32: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C4/C46D23.asm:12 CLC
    case 0xC46D36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:13 ADC BG1_X_POS
    case 0xC46D37: cpu.execute_instruction<0x6D>(0x000031, 3); return true;
    // src/unknown/C4/C46D23.asm:14 CLC
    case 0xC46D3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:15 ADC #112
    case 0xC46D3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x000070, 3); return true;
    // src/unknown/C4/C46D23.asm:15 ADC #112
    // Overlapping static entry reached from 0xC46D3B.
    case 0xC46D3D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C46D23.asm:16 LDX @LOCAL00
    case 0xC46D3E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C46D23.asm:17 STA ENTITY_ABS_X_TABLE,X
    case 0xC46D40: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C4/C46D23.asm:18 LDA BG1_Y_POS
    case 0xC46D43: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C4/C46D23.asm:19 STA ENTITY_ABS_Y_TABLE,X
    case 0xC46D46: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46D23.asm:20 END_C_FUNCTION
    case 0xC46D49: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46D23.asm:20 END_C_FUNCTION
    case 0xC46D4A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46D4B.asm (unresolved).
bool execute_unresolved_c4_c46d4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46D4B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D4B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC46D4D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC46D4E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC46D4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46D4F.
    case 0xC46D51: cpu.execute_instruction<0xFF>(0x35AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC46D52: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:7 LDY SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    case 0xC46D53: cpu.execute_instruction<0xAC>(0x009E35, 3); return true;
    // src/unknown/C4/C46D4B.asm:7 LDY SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    // Overlapping static entry reached from 0xC46D51.
    case 0xC46D55: cpu.execute_instruction<0x9E>(0x0042AD, 3); return true;
    // src/unknown/C4/C46D4B.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC46D56: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46D4B.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46D55.
    case 0xC46D58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:9 ASL
    case 0xC46D59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:10 TAX
    case 0xC46D5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC46D5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x002F8A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46D5B.
    case 0xC46D5D: cpu.execute_instruction<0x2F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC46D5E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC46D60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46D5D.
    case 0xC46D61: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46D60.
    case 0xC46D62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC46D63: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46D4B.asm:12 TYA
    case 0xC46D65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:13 LDY #.SIZEOF(photographer_config_entry)
    case 0xC46D66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/unknown/C4/C46D4B.asm:13 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC46D66.
    case 0xC46D68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46D4B.asm:14 JSL MULT168
    case 0xC46D69: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C46D4B.asm:15 STA @LOCAL00
    case 0xC46D6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46D4B.asm:16 CLC
    case 0xC46D6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:17 ADC #photographer_config_entry::photographer_x
    case 0xC46D70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C46D4B.asm:17 ADC #photographer_config_entry::photographer_x
    // Overlapping static entry reached from 0xC46D70.
    case 0xC46D72: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC46D73: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC46D75: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC46D77: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC46D79: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C46D4B.asm:19 CLC
    case 0xC46D7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:20 ADC @VIRTUAL0A
    case 0xC46D7C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:21 STA @VIRTUAL0A
    case 0xC46D7E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:22 LDA [@VIRTUAL0A]
    case 0xC46D80: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:23 ASL
    case 0xC46D82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:24 ASL
    case 0xC46D83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:25 ASL
    case 0xC46D84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:26 STA ENTITY_ABS_X_TABLE,X
    case 0xC46D85: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C4/C46D4B.asm:27 LDA @LOCAL00
    case 0xC46D88: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46D4B.asm:28 CLC
    case 0xC46D8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:29 ADC #photographer_config_entry::photographer_y
    case 0xC46D8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C4/C46D4B.asm:29 ADC #photographer_config_entry::photographer_y
    // Overlapping static entry reached from 0xC46D8B.
    case 0xC46D8D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46D4B.asm:30 CLC
    case 0xC46D8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:31 ADC @VIRTUAL06
    case 0xC46D8F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:32 STA @VIRTUAL06
    case 0xC46D91: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:33 LDA [@VIRTUAL06]
    case 0xC46D93: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:34 ASL
    case 0xC46D95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:35 ASL
    case 0xC46D96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:36 ASL
    case 0xC46D97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xC46D98: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C4/C46D4B.asm:38 LDA CURRENT_ENTITY_SLOT
    case 0xC46D9B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46D4B.asm:39 ASL
    case 0xC46D9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:40 TAX
    case 0xC46D9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:41 STZ ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC46DA0: cpu.execute_instruction<0x9E>(0x000C7E, 3); return true;
    // src/unknown/C4/C46D4B.asm:42 LDA CURRENT_ENTITY_SLOT
    case 0xC46DA3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46D4B.asm:43 ASL
    case 0xC46DA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:44 TAX
    case 0xC46DA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:45 STZ ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC46DA8: cpu.execute_instruction<0x9E>(0x000C42, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46D4B.asm:46 END_C_FUNCTION
    case 0xC46DAB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46D4B.asm:46 END_C_FUNCTION
    case 0xC46DAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46E46.asm (unresolved).
bool execute_unresolved_c4_c46e46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46E46.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46E46.asm:5 LDA #1
    case 0xC46E48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46E46.asm:5 LDA #1
    // Overlapping static entry reached from 0xC46E48.
    case 0xC46E4A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C46E46.asm:6 STA ACTIONSCRIPT_STATE
    case 0xC46E4B: cpu.execute_instruction<0x8D>(0x009641, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46E46.asm:7 END_C_FUNCTION
    case 0xC46E4E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46E4F.asm (unresolved).
bool execute_unresolved_c4_c46e4f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46E4F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E51: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E52: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E53: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46E54.
    case 0xC46E56: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E57: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC46E58: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46E4F.asm:10 STX @LOCAL02
    case 0xC46E59: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C46E4F.asm:10 STX @LOCAL02
    // Overlapping static entry reached from 0xC46E56.
    case 0xC46E5A: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:11 STA @LOCAL01
    case 0xC46E5B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46E4F.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC46E5A.
    case 0xC46E5C: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:12 STA @VIRTUAL06
    case 0xC46E5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46E4F.asm:12 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC46E5C.
    case 0xC46E5E: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C46E4F.asm:13 LDA @LOCAL02
    case 0xC46E5F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C46E4F.asm:13 LDA @LOCAL02
    // Overlapping static entry reached from 0xC46E5E.
    case 0xC46E60: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:14 STA @VIRTUAL06+2
    case 0xC46E61: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46E4F.asm:14 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC46E60.
    case 0xC46E62: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E63: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E65: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E67: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E69: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46E4F.asm:16 LDA #8
    case 0xC46E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C46E4F.asm:16 LDA #8
    // Overlapping static entry reached from 0xC46E6B.
    case 0xC46E6D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46E4F.asm:17 JSL UNKNOWN_C064E3
    case 0xC46E6E: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46E4F.asm:18 END_C_FUNCTION
    case 0xC46E72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46E4F.asm:18 END_C_FUNCTION
    case 0xC46E73: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46EF8.asm (unresolved).
bool execute_unresolved_c4_c46ef8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46EF8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46EF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC46EFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC46EFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC46EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46EFC.
    case 0xC46EFE: cpu.execute_instruction<0xFF>(0x3FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC46EFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:8 LDA PSI_TELEPORT_DESTINATION
    case 0xC46F00: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/unknown/C4/C46EF8.asm:8 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC46EFE.
    case 0xC46F02: cpu.execute_instruction<0x9F>(0xA905F0, 4); return true;
    // src/unknown/C4/C46EF8.asm:9 BEQ @UNKNOWN0
    case 0xC46F03: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    case 0xC46F05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    // Overlapping static entry reached from 0xC46F02.
    case 0xC46F06: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    // Overlapping static entry reached from 0xC46F05.
    case 0xC46F07: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46EF8.asm:11 BRA @UNKNOWN10
    case 0xC46F08: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C4/C46EF8.asm:13 LDY CURRENT_ENTITY_SLOT
    case 0xC46F0A: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C46EF8.asm:14 TYA
    case 0xC46F0D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:15 ASL
    case 0xC46F0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:16 TAX
    case 0xC46F0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46F10: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46EF8.asm:18 SEC
    case 0xC46F13: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:19 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC46F14: cpu.execute_instruction<0xED>(0x009877, 3); return true;
    // src/unknown/C4/C46EF8.asm:20 STA @LOCAL01
    case 0xC46F17: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:21 STA @VIRTUAL02
    case 0xC46F19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46EF8.asm:22 LDA #0
    case 0xC46F1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:22 LDA #0
    // Overlapping static entry reached from 0xC46F1B.
    case 0xC46F1D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46EF8.asm:23 CLC
    case 0xC46F1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:24 SBC @VIRTUAL02
    case 0xC46F1F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC46F21: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC46F23: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC46F25: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC46F27: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46EF8.asm:26 LDA @LOCAL01
    case 0xC46F29: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:27 EOR #$FFFF
    case 0xC46F2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46EF8.asm:27 EOR #$FFFF
    // Overlapping static entry reached from 0xC46F2B.
    case 0xC46F2D: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/unknown/C4/C46EF8.asm:28 INC
    case 0xC46F2E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:29 STA @LOCAL00
    case 0xC46F2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:30 BRA @UNKNOWN4
    case 0xC46F31: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46EF8.asm:32 LDA @LOCAL01
    case 0xC46F33: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:33 STA @LOCAL00
    case 0xC46F35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:35 TYA
    case 0xC46F37: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:36 ASL
    case 0xC46F38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:37 TAX
    case 0xC46F39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:38 LDA @LOCAL00
    case 0xC46F3A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:39 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC46F3C: cpu.execute_instruction<0xDD>(0x000ED6, 3); return true;
    // src/unknown/C4/C46EF8.asm:40 BCS @UNKNOWN9
    case 0xC46F3F: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/unknown/C4/C46EF8.asm:41 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46F41: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46EF8.asm:42 SEC
    case 0xC46F44: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:43 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC46F45: cpu.execute_instruction<0xED>(0x00987B, 3); return true;
    // src/unknown/C4/C46EF8.asm:44 STA @LOCAL01
    case 0xC46F48: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:45 STA @VIRTUAL02
    case 0xC46F4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46EF8.asm:46 LDA #0
    case 0xC46F4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:46 LDA #0
    // Overlapping static entry reached from 0xC46F4C.
    case 0xC46F4E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46EF8.asm:47 CLC
    case 0xC46F4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:48 SBC @VIRTUAL02
    case 0xC46F50: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC46F52: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC46F54: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC46F56: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC46F58: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46EF8.asm:50 LDA @LOCAL01
    case 0xC46F5A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:51 EOR #$FFFF
    case 0xC46F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46EF8.asm:51 EOR #$FFFF
    // Overlapping static entry reached from 0xC46F5C.
    case 0xC46F5E: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/unknown/C4/C46EF8.asm:52 INC
    case 0xC46F5F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:53 STA @LOCAL01
    case 0xC46F60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:54 BRA @UNKNOWN8
    case 0xC46F62: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46EF8.asm:56 LDA @LOCAL01
    case 0xC46F64: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:57 STA @LOCAL01
    case 0xC46F66: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:59 TYA
    case 0xC46F68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:60 ASL
    case 0xC46F69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:61 TAX
    case 0xC46F6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:62 LDA @LOCAL01
    case 0xC46F6B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:63 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC46F6D: cpu.execute_instruction<0xDD>(0x000F12, 3); return true;
    // src/unknown/C4/C46EF8.asm:64 BCS @UNKNOWN9
    case 0xC46F70: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C46EF8.asm:65 LDA #1
    case 0xC46F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46EF8.asm:65 LDA #1
    // Overlapping static entry reached from 0xC46F72.
    case 0xC46F74: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46EF8.asm:66 BRA @UNKNOWN10
    case 0xC46F75: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C46EF8.asm:68 LDA #0
    case 0xC46F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:68 LDA #0
    // Overlapping static entry reached from 0xC46F77.
    case 0xC46F79: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46EF8.asm:70 END_C_FUNCTION
    case 0xC46F7A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46EF8.asm:70 END_C_FUNCTION
    case 0xC46F7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46F7C.asm (unresolved).
bool execute_unresolved_c4_c46f7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46F7C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46F7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC46F7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC46F7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC46F80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46F80.
    case 0xC46F82: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC46F83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC46F84: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46F82.
    case 0xC46F86: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:11 ASL
    case 0xC46F87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:12 TAX
    case 0xC46F88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:13 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC46F89: cpu.execute_instruction<0xBD>(0x000FC6, 3); return true;
    // src/unknown/C4/C46F7C.asm:14 SEC
    case 0xC46F8C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:15 SBC ENTITY_ABS_X_TABLE,X
    case 0xC46F8D: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C4/C46F7C.asm:16 STA @LOCAL02
    case 0xC46F90: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:17 STA @VIRTUAL02
    case 0xC46F92: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:18 LDA #0
    case 0xC46F94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:18 LDA #0
    // Overlapping static entry reached from 0xC46F94.
    case 0xC46F96: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46F7C.asm:19 CLC
    case 0xC46F97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:20 SBC @VIRTUAL02
    case 0xC46F98: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC46F9A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC46F9C: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC46F9E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC46FA0: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46F7C.asm:22 LDA @LOCAL02
    case 0xC46FA2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:23 EOR #$FFFF
    case 0xC46FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46F7C.asm:23 EOR #$FFFF
    // Overlapping static entry reached from 0xC46FA4.
    case 0xC46FA6: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/unknown/C4/C46F7C.asm:24 INC
    case 0xC46FA7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:25 STA @LOCAL01
    case 0xC46FA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:26 BRA @UNKNOWN3
    case 0xC46FAA: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46F7C.asm:28 LDA @LOCAL02
    case 0xC46FAC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:29 STA @LOCAL01
    case 0xC46FAE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:31 LDA CURRENT_ENTITY_SLOT
    case 0xC46FB0: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:32 ASL
    case 0xC46FB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:33 TAX
    case 0xC46FB4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:34 LDA @LOCAL01
    case 0xC46FB5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:35 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC46FB7: cpu.execute_instruction<0xDD>(0x000F8A, 3); return true;
    // src/unknown/C4/C46F7C.asm:36 BCS @UNKNOWN8
    case 0xC46FBA: cpu.execute_instruction<0xB0>(0x000038, 2); return true;
    // src/unknown/C4/C46F7C.asm:37 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC46FBC: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C46F7C.asm:38 SEC
    case 0xC46FBF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:39 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC46FC0: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C4/C46F7C.asm:40 STA @LOCAL02
    case 0xC46FC3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:41 STA @VIRTUAL02
    case 0xC46FC5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:42 LDA #0
    case 0xC46FC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:42 LDA #0
    // Overlapping static entry reached from 0xC46FC7.
    case 0xC46FC9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46F7C.asm:43 CLC
    case 0xC46FCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:44 SBC @VIRTUAL02
    case 0xC46FCB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC46FCD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC46FCF: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC46FD1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC46FD3: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46F7C.asm:46 LDA @LOCAL02
    case 0xC46FD5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:47 EOR #$FFFF
    case 0xC46FD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46F7C.asm:47 EOR #$FFFF
    // Overlapping static entry reached from 0xC46FD7.
    case 0xC46FD9: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/unknown/C4/C46F7C.asm:48 INC
    case 0xC46FDA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:49 STA @LOCAL00
    case 0xC46FDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:50 BRA @UNKNOWN7
    case 0xC46FDD: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46F7C.asm:52 LDA @LOCAL02
    case 0xC46FDF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:53 STA @LOCAL00
    case 0xC46FE1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:55 LDA CURRENT_ENTITY_SLOT
    case 0xC46FE3: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:56 ASL
    case 0xC46FE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:57 TAX
    case 0xC46FE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:58 LDA @LOCAL00
    case 0xC46FE8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:59 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC46FEA: cpu.execute_instruction<0xDD>(0x000F8A, 3); return true;
    // src/unknown/C4/C46F7C.asm:60 BCS @UNKNOWN8
    case 0xC46FED: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C46F7C.asm:61 LDA #TRUE
    case 0xC46FEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46F7C.asm:61 LDA #TRUE
    // Overlapping static entry reached from 0xC46FEF.
    case 0xC46FF1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46F7C.asm:62 BRA @UNKNOWN10
    case 0xC46FF2: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C4/C46F7C.asm:64 JSL UNKNOWN_C46AAC
    case 0xC46FF4: cpu.execute_instruction<0x22>(0xC46AAC, 4); return true;
    // src/unknown/C4/C46F7C.asm:65 TAY
    case 0xC46FF8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:66 STY @LOCAL01
    case 0xC46FF9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:67 LDA CURRENT_ENTITY_SLOT
    case 0xC46FFB: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:68 ASL
    case 0xC46FFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:69 TAX
    case 0xC46FFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:70 TYA
    case 0xC47000: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:71 CMP ENTITY_DIRECTIONS,X
    case 0xC47001: cpu.execute_instruction<0xDD>(0x002AF6, 3); return true;
    // src/unknown/C4/C46F7C.asm:72 BEQ @UNKNOWN9
    case 0xC47004: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C4/C46F7C.asm:73 TYA
    case 0xC47006: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:74 JSL UNKNOWN_C0C83B
    case 0xC47007: cpu.execute_instruction<0x22>(0xC0C83B, 4); return true;
    // src/unknown/C4/C46F7C.asm:75 LDA CURRENT_ENTITY_SLOT
    case 0xC4700B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:76 ASL
    case 0xC4700E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:77 CLC
    case 0xC4700F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:78 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC47010: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C46F7C.asm:78 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC47010.
    case 0xC47012: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:79 TAX
    case 0xC47013: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:80 LDA __BSS_START__,X
    case 0xC47014: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:81 STA @LOCAL02
    case 0xC47017: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:82 LDY @LOCAL01
    case 0xC47019: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:83 TYA
    case 0xC4701B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:84 STA __BSS_START__,X
    case 0xC4701C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:85 LDA @LOCAL02
    case 0xC4701F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:86 JSL UNKNOWN_C46AA3
    case 0xC47021: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C46F7C.asm:87 TAX
    case 0xC47025: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:88 STX @LOCAL00
    case 0xC47026: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:89 LDY @LOCAL01
    case 0xC47028: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:90 TYA
    case 0xC4702A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:91 JSL UNKNOWN_C46AA3
    case 0xC4702B: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C46F7C.asm:92 STA @VIRTUAL02
    case 0xC4702F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:93 LDX @LOCAL00
    case 0xC47031: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:94 TXA
    case 0xC47033: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:95 CMP @VIRTUAL02
    case 0xC47034: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:96 BEQ @UNKNOWN9
    case 0xC47036: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C46F7C.asm:97 LDA CURRENT_ENTITY_SLOT
    case 0xC47038: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C46F7C.asm:98 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4703B: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // src/unknown/C4/C46F7C.asm:100 LDA #FALSE
    case 0xC4703F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:100 LDA #FALSE
    // Overlapping static entry reached from 0xC4703F.
    case 0xC47041: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46F7C.asm:102 END_C_FUNCTION
    case 0xC47042: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46F7C.asm:102 END_C_FUNCTION
    case 0xC47043: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47044.asm (unresolved).
bool execute_unresolved_c4_c47044_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47044.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47044: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC47046: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC47047: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC47048: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC47049: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC47049.
    case 0xC4704B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC4704C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC4704D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:12 STA @VIRTUAL04
    case 0xC4704E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47044.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4704B.
    case 0xC4704F: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C4/C47044.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC47050: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47044.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4704F.
    case 0xC47051: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C4/C47044.asm:14 STA @VIRTUAL02
    case 0xC47053: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:15 ASL
    case 0xC47055: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:16 TAY
    case 0xC47056: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:17 STY @LOCAL03
    case 0xC47057: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:18 LDA ENTITY_MOVEMENT_SPEEDS,Y
    case 0xC47059: cpu.execute_instruction<0xB9>(0x002B32, 3); return true;
    // src/unknown/C4/C47044.asm:19 TAX
    case 0xC4705C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:20 LDA @VIRTUAL04
    case 0xC4705D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47044.asm:21 JSL UNKNOWN_C41FFF
    case 0xC4705F: cpu.execute_instruction<0x22>(0xC41FFF, 4); return true;
    // src/unknown/C4/C47044.asm:21 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4706F.
    case 0xC47061: cpu.execute_instruction<0x1F>(0x06A5C4, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47063: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47065: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47067: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47069: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:23 STA @LOCAL02
    case 0xC4706B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:24 AND #$8000
    case 0xC4706D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C47044.asm:24 AND #$8000
    // Overlapping static entry reached from 0xC4706D.
    case 0xC4706F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C47044.asm:25 BEQ @UNKNOWN0
    case 0xC47070: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C4/C47044.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC47072: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:27 LDY #8
    case 0xC47074: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:28 LDA @LOCAL02
    case 0xC47076: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:28 LDA @LOCAL02
    // Overlapping static entry reached from 0xC47074.
    case 0xC47077: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    case 0xC47078: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC47077.
    case 0xC47079: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC47079.
    case 0xC4707B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000009, 2); else cpu.execute_instruction<0xC0>(0x000009, 3); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    case 0xC4707C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC4707B.
    case 0xC4707D: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC4707C.
    case 0xC4707E: cpu.execute_instruction<0xFF>(0xA410C2, 4); return true;
    // src/unknown/C4/C47044.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC4707F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:32 LDY @LOCAL03
    case 0xC47081: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:32 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4707E.
    case 0xC47082: cpu.execute_instruction<0x16>(0x000099, 2); return true;
    // src/unknown/C4/C47044.asm:33 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC47083: cpu.execute_instruction<0x99>(0x000CF6, 3); return true;
    // src/unknown/C4/C47044.asm:33 STA ENTITY_DELTA_X_TABLE,Y
    // Overlapping static entry reached from 0xC47082.
    case 0xC47084: cpu.execute_instruction<0xF6>(0x00000C, 2); return true;
    // src/unknown/C4/C47044.asm:34 SEP #PROC_FLAGS::INDEX8
    case 0xC47086: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:35 LDY #8
    case 0xC47088: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:36 LDA @LOCAL02
    case 0xC4708A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:36 LDA @LOCAL02
    // Overlapping static entry reached from 0xC47088.
    case 0xC4708B: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:37 JSL ASL16_ENTRY2
    case 0xC4708C: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C47044.asm:37 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC4708B.
    case 0xC4708D: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/unknown/C4/C47044.asm:38 ORA #$00FF
    case 0xC47090: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:38 ORA #$00FF
    // Overlapping static entry reached from 0xC47090.
    case 0xC47092: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:39 REP #PROC_FLAGS::INDEX8
    case 0xC47093: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:40 LDY @LOCAL03
    case 0xC47095: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:41 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC47097: cpu.execute_instruction<0x99>(0x000DAA, 3); return true;
    // src/unknown/C4/C47044.asm:42 BRA @UNKNOWN1
    case 0xC4709A: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C47044.asm:42 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC470F1.
    case 0xC4709B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC4709C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:45 LDY #8
    case 0xC4709E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:46 LDA @LOCAL02
    case 0xC470A0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:46 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4709E.
    case 0xC470A1: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    case 0xC470A2: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC470A1.
    case 0xC470A3: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC470A3.
    case 0xC470A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x00FF29, 3); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    case 0xC470A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC470A5.
    case 0xC470A7: cpu.execute_instruction<0xFF>(0x10C200, 4); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC470A6.
    case 0xC470A8: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:49 REP #PROC_FLAGS::INDEX8
    case 0xC470A9: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:50 LDY @LOCAL03
    case 0xC470AB: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:51 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC470AD: cpu.execute_instruction<0x99>(0x000CF6, 3); return true;
    // src/unknown/C4/C47044.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC470B0: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:53 LDY #8
    case 0xC470B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:54 LDA @LOCAL02
    case 0xC470B4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:54 LDA @LOCAL02
    // Overlapping static entry reached from 0xC470B2.
    case 0xC470B5: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:55 JSL ASL16_ENTRY2
    case 0xC470B6: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C47044.asm:55 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC470B5.
    case 0xC470B7: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/unknown/C4/C47044.asm:56 AND #$FF00
    case 0xC470BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:56 AND #$FF00
    // Overlapping static entry reached from 0xC470BA.
    case 0xC470BC: cpu.execute_instruction<0xFF>(0xA410C2, 4); return true;
    // src/unknown/C4/C47044.asm:57 REP #PROC_FLAGS::INDEX8
    case 0xC470BD: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:58 LDY @LOCAL03
    case 0xC470BF: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:58 LDY @LOCAL03
    // Overlapping static entry reached from 0xC470BC.
    case 0xC470C0: cpu.execute_instruction<0x16>(0x000099, 2); return true;
    // src/unknown/C4/C47044.asm:59 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC470C1: cpu.execute_instruction<0x99>(0x000DAA, 3); return true;
    // src/unknown/C4/C47044.asm:59 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    // Overlapping static entry reached from 0xC470C0.
    case 0xC470C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:59 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    // Overlapping static entry reached from 0xC470C2.
    case 0xC470C3: cpu.execute_instruction<0x0D>(0x000EA5, 3); return true;
    // src/unknown/C4/C47044.asm:61 LDA @LOCAL00 + fixed_point::fraction
    case 0xC470C4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47044.asm:62 STA @LOCAL02
    case 0xC470C6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:63 AND #$8000
    case 0xC470C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C47044.asm:63 AND #$8000
    // Overlapping static entry reached from 0xC470C8.
    case 0xC470CA: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C47044.asm:64 BEQ @UNKNOWN2
    case 0xC470CB: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C4/C47044.asm:65 LDA @VIRTUAL02
    case 0xC470CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:66 ASL
    case 0xC470CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:67 TAX
    case 0xC470D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:68 STX @LOCAL01
    case 0xC470D1: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC470D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:70 LDA #8
    case 0xC470D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:71 SEP #PROC_FLAGS::INDEX8
    case 0xC470D7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:71 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC470D5.
    case 0xC470D8: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:72 TAY
    case 0xC470D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC470DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:74 LDA @LOCAL02
    case 0xC470DC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:75 JSL ASR8_UNKNOWN1
    case 0xC470DE: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C47044.asm:76 ORA #$FF00
    case 0xC470E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:76 ORA #$FF00
    // Overlapping static entry reached from 0xC470E2.
    case 0xC470E4: cpu.execute_instruction<0xFF>(0xA610C2, 4); return true;
    // src/unknown/C4/C47044.asm:77 REP #PROC_FLAGS::INDEX8
    case 0xC470E5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:78 LDX @LOCAL01
    case 0xC470E7: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:78 LDX @LOCAL01
    // Overlapping static entry reached from 0xC470E4.
    case 0xC470E8: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C4/C47044.asm:79 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC470E9: cpu.execute_instruction<0x9D>(0x000D32, 3); return true;
    // src/unknown/C4/C47044.asm:79 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC470E8.
    case 0xC470EA: cpu.execute_instruction<0x32>(0x00000D, 2); return true;
    // src/unknown/C4/C47044.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC470EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:81 LDA #8
    case 0xC470EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:82 SEP #PROC_FLAGS::INDEX8
    case 0xC470F0: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:82 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC470EE.
    case 0xC470F1: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:83 TAY
    case 0xC470F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC470F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:85 LDA @LOCAL02
    case 0xC470F5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:86 JSL ASL16_ENTRY2
    case 0xC470F7: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C47044.asm:87 ORA #$00FF
    case 0xC470FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:87 ORA #$00FF
    // Overlapping static entry reached from 0xC470FB.
    case 0xC470FD: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:88 REP #PROC_FLAGS::INDEX8
    case 0xC470FE: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:89 LDX @LOCAL01
    case 0xC47100: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:90 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC47102: cpu.execute_instruction<0x9D>(0x000DE6, 3); return true;
    // src/unknown/C4/C47044.asm:91 BRA @UNKNOWN3
    case 0xC47105: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C47044.asm:93 LDA @VIRTUAL02
    case 0xC47107: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:94 ASL
    case 0xC47109: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:95 TAX
    case 0xC4710A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:96 STX @LOCAL01
    case 0xC4710B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC4710D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:98 LDA #8
    case 0xC4710F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:99 SEP #PROC_FLAGS::INDEX8
    case 0xC47111: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:99 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC4710F.
    case 0xC47112: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:100 TAY
    case 0xC47113: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC47114: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:102 LDA @LOCAL02
    case 0xC47116: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:103 JSL ASR8_UNKNOWN1
    case 0xC47118: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C47044.asm:104 AND #$00FF
    case 0xC4711C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC4711C.
    case 0xC4711E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:105 REP #PROC_FLAGS::INDEX8
    case 0xC4711F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:106 LDX @LOCAL01
    case 0xC47121: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:107 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC47123: cpu.execute_instruction<0x9D>(0x000D32, 3); return true;
    // src/unknown/C4/C47044.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC47126: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:109 LDA #8
    case 0xC47128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:110 SEP #PROC_FLAGS::INDEX8
    case 0xC4712A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:110 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC47128.
    case 0xC4712B: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:111 TAY
    case 0xC4712C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC4712D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:113 LDA @LOCAL02
    case 0xC4712F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:114 JSL ASL16_ENTRY2
    case 0xC47131: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C47044.asm:115 AND #$FF00
    case 0xC47135: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:115 AND #$FF00
    // Overlapping static entry reached from 0xC47135.
    case 0xC47137: cpu.execute_instruction<0xFF>(0xA610C2, 4); return true;
    // src/unknown/C4/C47044.asm:116 REP #PROC_FLAGS::INDEX8
    case 0xC47138: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:117 LDX @LOCAL01
    case 0xC4713A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:117 LDX @LOCAL01
    // Overlapping static entry reached from 0xC47137.
    case 0xC4713B: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C4/C47044.asm:118 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC4713C: cpu.execute_instruction<0x9D>(0x000DE6, 3); return true;
    // src/unknown/C4/C47044.asm:118 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    // Overlapping static entry reached from 0xC4713B.
    case 0xC4713D: cpu.execute_instruction<0xE6>(0x00000D, 2); return true;
    // src/unknown/C4/C47044.asm:120 LDA @VIRTUAL04
    case 0xC4713F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47044.asm:121 END_C_FUNCTION
    case 0xC47141: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47044.asm:121 END_C_FUNCTION
    case 0xC47142: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47143.asm (unresolved).
bool execute_unresolved_c4_c47143_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47143.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47143: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC47145: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC47146: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC47147: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC47148: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC47148.
    case 0xC4714A: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC4714B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC4714C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:14 TXY
    case 0xC4714D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:15 STY @LOCAL04
    case 0xC4714E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:16 STA @VIRTUAL04
    case 0xC47150: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:17 LDA CURRENT_ENTITY_SLOT
    case 0xC47152: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47143.asm:18 STA @VIRTUAL02
    case 0xC47155: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:19 STA @LOCAL03
    case 0xC47157: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:20 LDA @VIRTUAL02
    case 0xC47159: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:21 ASL
    case 0xC4715B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:22 TAX
    case 0xC4715C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:23 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC4715D: cpu.execute_instruction<0xBD>(0x000FC6, 3); return true;
    // src/unknown/C4/C47143.asm:24 SEC
    case 0xC47160: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:25 SBC ENTITY_ABS_X_TABLE,X
    case 0xC47161: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C4/C47143.asm:26 STA @LOCAL02
    case 0xC47164: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:27 STA @VIRTUAL02
    case 0xC47166: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:28 LDA #0
    case 0xC47168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:28 LDA #0
    // Overlapping static entry reached from 0xC47168.
    case 0xC4716A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47143.asm:29 CLC
    case 0xC4716B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:30 SBC @VIRTUAL02
    case 0xC4716C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC4716E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC47170: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC47172: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC47174: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C47143.asm:32 LDA @LOCAL02
    case 0xC47176: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:33 EOR #$FFFF
    case 0xC47178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47143.asm:33 EOR #$FFFF
    // Overlapping static entry reached from 0xC47178.
    case 0xC4717A: cpu.execute_instruction<0xFF>(0x12851A, 4); return true;
    // src/unknown/C4/C47143.asm:34 INC
    case 0xC4717B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:35 STA @LOCAL02
    case 0xC4717C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:36 BRA @UNKNOWN3
    case 0xC4717E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:38 LDA @LOCAL02
    case 0xC47180: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:39 STA @LOCAL02
    case 0xC47182: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:41 LDA @LOCAL03
    case 0xC47184: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:42 STA @VIRTUAL02
    case 0xC47186: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:43 ASL
    case 0xC47188: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:44 TAX
    case 0xC47189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:45 LDA @LOCAL02
    case 0xC4718A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:46 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC4718C: cpu.execute_instruction<0xDD>(0x000F8A, 3); return true;
    // src/unknown/C4/C47143.asm:47 BCS @UNKNOWN8
    case 0xC4718F: cpu.execute_instruction<0xB0>(0x000039, 2); return true;
    // src/unknown/C4/C47143.asm:48 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC47191: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C47143.asm:49 SEC
    case 0xC47194: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:50 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC47195: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C4/C47143.asm:51 STA @LOCAL02
    case 0xC47198: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:52 STA @VIRTUAL02
    case 0xC4719A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:53 LDA #0
    case 0xC4719C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4719C.
    case 0xC4719E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47143.asm:54 CLC
    case 0xC4719F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:55 SBC @VIRTUAL02
    case 0xC471A0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC471A2: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC471A4: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC471A6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC471A8: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C47143.asm:57 LDA @LOCAL02
    case 0xC471AA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:58 EOR #$FFFF
    case 0xC471AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47143.asm:58 EOR #$FFFF
    // Overlapping static entry reached from 0xC471AC.
    case 0xC471AE: cpu.execute_instruction<0xFF>(0x12851A, 4); return true;
    // src/unknown/C4/C47143.asm:59 INC
    case 0xC471AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:60 STA @LOCAL02
    case 0xC471B0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:61 BRA @UNKNOWN7
    case 0xC471B2: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:63 LDA @LOCAL02
    case 0xC471B4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:64 STA @LOCAL02
    case 0xC471B6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:66 LDA @LOCAL03
    case 0xC471B8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:67 STA @VIRTUAL02
    case 0xC471BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:68 ASL
    case 0xC471BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:69 TAX
    case 0xC471BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:70 LDA @LOCAL02
    case 0xC471BE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:71 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC471C0: cpu.execute_instruction<0xDD>(0x000F8A, 3); return true;
    // src/unknown/C4/C47143.asm:72 BCS @UNKNOWN8
    case 0xC471C3: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47143.asm:73 LDA #TRUE
    case 0xC471C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C47143.asm:73 LDA #TRUE
    // Overlapping static entry reached from 0xC471C5.
    case 0xC471C7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47143.asm:74 BRA @UNKNOWN11
    case 0xC471C8: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/unknown/C4/C47143.asm:76 JSL UNKNOWN_C46ADB
    case 0xC471CA: cpu.execute_instruction<0x22>(0xC46ADB, 4); return true;
    // src/unknown/C4/C47143.asm:77 TAX
    case 0xC471CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:78 STX @LOCAL02
    case 0xC471CF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:79 TXA
    case 0xC471D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:80 JSL UNKNOWN_C47044
    case 0xC471D2: cpu.execute_instruction<0x22>(0xC47044, 4); return true;
    // src/unknown/C4/C47143.asm:81 LDY @LOCAL04
    case 0xC471D6: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:82 BNE @UNKNOWN10
    case 0xC471D8: cpu.execute_instruction<0xD0>(0x000046, 2); return true;
    // src/unknown/C4/C47143.asm:83 LDX @LOCAL02
    case 0xC471DA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:84 TXA
    case 0xC471DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:85 JSL UNKNOWN_C46B0A
    case 0xC471DD: cpu.execute_instruction<0x22>(0xC46B0A, 4); return true;
    // src/unknown/C4/C47143.asm:86 TAX
    case 0xC471E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:87 STX @LOCAL01
    case 0xC471E2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:88 LDA @VIRTUAL04
    case 0xC471E4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:89 BEQ @UNKNOWN9
    case 0xC471E6: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C47143.asm:90 TXA
    case 0xC471E8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:91 JSL UNKNOWN_C46B37
    case 0xC471E9: cpu.execute_instruction<0x22>(0xC46B37, 4); return true;
    // src/unknown/C4/C47143.asm:92 TAX
    case 0xC471ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:93 STX @LOCAL01
    case 0xC471EE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:95 LDA @VIRTUAL02
    case 0xC471F0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:96 ASL
    case 0xC471F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:97 CLC
    case 0xC471F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:98 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC471F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C47143.asm:98 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC471F4.
    case 0xC471F6: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:99 TAY
    case 0xC471F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:100 LDA __BSS_START__,Y
    case 0xC471F8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:101 STA @LOCAL00
    case 0xC471FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47143.asm:102 TXA
    case 0xC471FD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:103 STA __BSS_START__,Y
    case 0xC471FE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:104 LDA @LOCAL00
    case 0xC47201: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47143.asm:105 JSL UNKNOWN_C46AA3
    case 0xC47203: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C47143.asm:106 TAY
    case 0xC47207: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:107 STY @LOCAL04
    case 0xC47208: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:108 LDX @LOCAL01
    case 0xC4720A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:109 TXA
    case 0xC4720C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:110 JSL UNKNOWN_C46AA3
    case 0xC4720D: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C47143.asm:111 STA @VIRTUAL04
    case 0xC47211: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:112 LDY @LOCAL04
    case 0xC47213: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:113 TYA
    case 0xC47215: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:114 CMP @VIRTUAL04
    case 0xC47216: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:115 BEQ @UNKNOWN10
    case 0xC47218: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C47143.asm:116 LDA @VIRTUAL02
    case 0xC4721A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:117 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4721C: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // src/unknown/C4/C47143.asm:119 LDA #FALSE
    case 0xC47220: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:119 LDA #FALSE
    // Overlapping static entry reached from 0xC47220.
    case 0xC47222: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47143.asm:121 END_C_FUNCTION
    case 0xC47223: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47143.asm:121 END_C_FUNCTION
    case 0xC47224: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47225.asm (unresolved).
bool execute_unresolved_c4_c47225_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47225.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47225: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC47227: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC47228: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC47229: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC4722A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4722A.
    case 0xC4722C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC4722D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC4722E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:8 STX @VIRTUAL02
    case 0xC4722F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4722C.
    case 0xC47230: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47225.asm:9 STA @VIRTUAL04
    case 0xC47231: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC47233: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47225.asm:11 ASL
    case 0xC47236: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:12 TAY
    case 0xC47237: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:13 CLC
    case 0xC47238: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:14 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC47239: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x000B8E, 3); return true;
    // src/unknown/C4/C47225.asm:14 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC47239.
    case 0xC4723B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:15 TAX
    case 0xC4723C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:16 LDA __BSS_START__,X
    case 0xC4723D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:17 SEC
    case 0xC47240: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:18 SBC @VIRTUAL02
    case 0xC47241: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:19 STA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC47243: cpu.execute_instruction<0x99>(0x000E5E, 3); return true;
    // src/unknown/C4/C47225.asm:20 LDA __BSS_START__,X
    case 0xC47246: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:21 CLC
    case 0xC47249: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:22 ADC @VIRTUAL02
    case 0xC4724A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:23 STA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC4724C: cpu.execute_instruction<0x99>(0x000E9A, 3); return true;
    // src/unknown/C4/C47225.asm:24 TYA
    case 0xC4724F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:25 CLC
    case 0xC47250: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:26 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC47251: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x000BCA, 3); return true;
    // src/unknown/C4/C47225.asm:26 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC47251.
    case 0xC47253: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:27 TAX
    case 0xC47254: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:28 LDA __BSS_START__,X
    case 0xC47255: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:29 SEC
    case 0xC47258: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:30 SBC @VIRTUAL04
    case 0xC47259: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:31 STA ENTITY_SCRIPT_VAR2_TABLE,Y
    case 0xC4725B: cpu.execute_instruction<0x99>(0x000ED6, 3); return true;
    // src/unknown/C4/C47225.asm:32 LDA __BSS_START__,X
    case 0xC4725E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:33 CLC
    case 0xC47261: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:34 ADC @VIRTUAL04
    case 0xC47262: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:35 STA ENTITY_SCRIPT_VAR3_TABLE,Y
    case 0xC47264: cpu.execute_instruction<0x99>(0x000F12, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47225.asm:36 END_C_FUNCTION
    case 0xC47267: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47225.asm:36 END_C_FUNCTION
    case 0xC47268: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47269.asm (unresolved).
bool execute_unresolved_c4_c47269_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47269.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47269: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47269.asm:6 LDA CURRENT_ENTITY_SLOT
    case 0xC4726B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47269.asm:7 ASL
    case 0xC4726E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:8 TAX
    case 0xC4726F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC47270: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C47269.asm:10 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC47273: cpu.execute_instruction<0xBC>(0x000BCA, 3); return true;
    // src/unknown/C4/C47269.asm:11 CMP ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC47276: cpu.execute_instruction<0xDD>(0x000E5E, 3); return true;
    // src/unknown/C4/C47269.asm:12 BCS @UNKNOWN0
    case 0xC47279: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:13 LDA #3
    case 0xC4727B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C47269.asm:13 LDA #3
    // Overlapping static entry reached from 0xC4727B.
    case 0xC4727D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:14 BRA @UNKNOWN4
    case 0xC4727E: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C4/C47269.asm:16 CMP ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC47280: cpu.execute_instruction<0xDD>(0x000E9A, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47269.asm:17 BLTEQ @UNKNOWN1
    case 0xC47283: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47269.asm:17 BLTEQ @UNKNOWN1
    case 0xC47285: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:18 LDA #7
    case 0xC47287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C47269.asm:18 LDA #7
    // Overlapping static entry reached from 0xC47287.
    case 0xC47289: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:19 BRA @UNKNOWN4
    case 0xC4728A: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C47269.asm:21 TYA
    case 0xC4728C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:22 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC4728D: cpu.execute_instruction<0xDD>(0x000ED6, 3); return true;
    // src/unknown/C4/C47269.asm:23 BCS @UNKNOWN2
    case 0xC47290: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:24 LDA #5
    case 0xC47292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C47269.asm:24 LDA #5
    // Overlapping static entry reached from 0xC47292.
    case 0xC47294: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:25 BRA @UNKNOWN4
    case 0xC47295: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C47269.asm:27 TYA
    case 0xC47297: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:28 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC47298: cpu.execute_instruction<0xDD>(0x000F12, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47269.asm:29 BLTEQ @UNKNOWN3
    case 0xC4729B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47269.asm:29 BLTEQ @UNKNOWN3
    case 0xC4729D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:30 LDA #1
    case 0xC4729F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C47269.asm:30 LDA #1
    // Overlapping static entry reached from 0xC4729F.
    case 0xC472A1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:31 BRA @UNKNOWN4
    case 0xC472A2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C47269.asm:33 LDA #0
    case 0xC472A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47269.asm:33 LDA #0
    // Overlapping static entry reached from 0xC472A4.
    case 0xC472A6: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47269.asm:35 END_C_FUNCTION
    case 0xC472A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C472A8.asm (unresolved).
bool execute_unresolved_c4_c472a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C472A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC472A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472AA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472AB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472AC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC472AD.
    case 0xC472AF: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472B0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC472B1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:10 TAX
    case 0xC472B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:11 STX @LOCAL02
    case 0xC472B3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC472B5: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C472A8.asm:13 STA @VIRTUAL02
    case 0xC472B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:14 ASL
    case 0xC472BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:15 TAX
    case 0xC472BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:16 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC472BC: cpu.execute_instruction<0xBC>(0x000E5E, 3); return true;
    // src/unknown/C4/C472A8.asm:17 STY @LOCAL01
    case 0xC472BF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:18 TYA
    case 0xC472C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:19 JSL UNKNOWN_C47044
    case 0xC472C2: cpu.execute_instruction<0x22>(0xC47044, 4); return true;
    // src/unknown/C4/C472A8.asm:20 LDY @LOCAL01
    case 0xC472C6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:21 TYA
    case 0xC472C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:22 JSL UNKNOWN_C46B51
    case 0xC472C9: cpu.execute_instruction<0x22>(0xC46B51, 4); return true;
    // src/unknown/C4/C472A8.asm:23 TAY
    case 0xC472CD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:24 STY @LOCAL01
    case 0xC472CE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:25 LDX @LOCAL02
    case 0xC472D0: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:26 BEQ @UNKNOWN0
    case 0xC472D2: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C472A8.asm:27 TYA
    case 0xC472D4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:28 JSL UNKNOWN_C46B37
    case 0xC472D5: cpu.execute_instruction<0x22>(0xC46B37, 4); return true;
    // src/unknown/C4/C472A8.asm:29 TAY
    case 0xC472D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:30 STY @LOCAL01
    case 0xC472DA: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:32 LDA @VIRTUAL02
    case 0xC472DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:33 ASL
    case 0xC472DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:34 CLC
    case 0xC472DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:35 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC472E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x002AF6, 3); return true;
    // src/unknown/C4/C472A8.asm:35 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC472E0.
    case 0xC472E2: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:36 TAX
    case 0xC472E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:37 LDA __BSS_START__,X
    case 0xC472E4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C472A8.asm:38 STA @LOCAL00
    case 0xC472E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C472A8.asm:39 TYA
    case 0xC472E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:40 STA __BSS_START__,X
    case 0xC472EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C472A8.asm:41 LDA @LOCAL00
    case 0xC472ED: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C472A8.asm:42 JSL UNKNOWN_C46AA3
    case 0xC472EF: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C472A8.asm:43 TAX
    case 0xC472F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:44 STX @LOCAL02
    case 0xC472F4: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:45 LDY @LOCAL01
    case 0xC472F6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:46 TYA
    case 0xC472F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:47 JSL UNKNOWN_C46AA3
    case 0xC472F9: cpu.execute_instruction<0x22>(0xC46AA3, 4); return true;
    // src/unknown/C4/C472A8.asm:48 STA @VIRTUAL04
    case 0xC472FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C472A8.asm:49 LDX @LOCAL02
    case 0xC472FF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:50 TXA
    case 0xC47301: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:51 CMP @VIRTUAL04
    case 0xC47302: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C472A8.asm:52 BEQ @UNKNOWN1
    case 0xC47304: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C472A8.asm:53 LDA @VIRTUAL02
    case 0xC47306: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:54 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC47308: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C472A8.asm:56 END_C_FUNCTION
    case 0xC4730C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C472A8.asm:56 END_C_FUNCTION
    case 0xC4730D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4730E.asm (unresolved).
bool execute_unresolved_c4_c4730e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4730E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4730E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC47310: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC47311: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC47312: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC47312.
    case 0xC47314: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC47315: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC47316: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C4730E.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC47314.
    case 0xC47318: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:8 ASL
    case 0xC47319: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:9 CLC
    case 0xC4731A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:10 ADC #.LOWORD(ENTITY_DELTA_Y_TABLE)
    case 0xC4731B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000D32, 3); return true;
    // src/unknown/C4/C4730E.asm:10 ADC #.LOWORD(ENTITY_DELTA_Y_TABLE)
    // Overlapping static entry reached from 0xC4731B.
    case 0xC4731D: cpu.execute_instruction<0x0D>(0x00BDAA, 3); return true;
    // src/unknown/C4/C4730E.asm:11 TAX
    case 0xC4731E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:12 LDA __BSS_START__,X
    case 0xC4731F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4730E.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4731D.
    case 0xC47320: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4730E.asm:13 STA @LOCAL00
    case 0xC47322: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4730E.asm:14 AND #$8000
    case 0xC47324: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C4730E.asm:14 AND #$8000
    // Overlapping static entry reached from 0xC47324.
    case 0xC47326: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C4/C4730E.asm:15 STA @VIRTUAL02
    case 0xC47327: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4730E.asm:16 LDA @LOCAL00
    case 0xC47329: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4730E.asm:17 LSR
    case 0xC4732B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:18 ORA @VIRTUAL02
    case 0xC4732C: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4730E.asm:19 STA __BSS_START__,X
    case 0xC4732E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4730E.asm:20 END_C_FUNCTION
    case 0xC47331: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4730E.asm:20 END_C_FUNCTION
    case 0xC47332: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47333.asm (unresolved).
bool execute_unresolved_c4_c47333_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47333.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47333: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47333.asm:6 LDA GAME_STATE+game_state::party_count
    case 0xC47335: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C4/C47333.asm:7 AND #$00FF
    case 0xC47338: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47333.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC47338.
    case 0xC4733A: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47333.asm:8 END_C_FUNCTION
    case 0xC4733B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4733C.asm (unresolved).
bool execute_unresolved_c4_c4733c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4733C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4733C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4733C.asm:5 LDA LOADED_MAP_TILE_COMBO
    case 0xC4733E: cpu.execute_instruction<0xAD>(0x00436E, 3); return true;
    // src/unknown/C4/C4733C.asm:6 ASL
    case 0xC47341: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4733C.asm:7 TAX
    case 0xC47342: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4733C.asm:8 LDA f:TILESET_TABLE,X
    case 0xC47343: cpu.execute_instruction<0xBF>(0xEF101B, 4); return true;
    // src/unknown/C4/C4733C.asm:9 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    case 0xC47347: cpu.execute_instruction<0x22>(0xC006F2, 4); return true;
    // src/unknown/C4/C4733C.asm:9 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    // Overlapping static entry reached from 0xC473B6.
    case 0xC47348: cpu.execute_instruction<0xF2>(0x000006, 2); return true;
    // src/unknown/C4/C4733C.asm:9 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    // Overlapping static entry reached from 0xC47348.
    case 0xC4734A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00006B, 2); else cpu.execute_instruction<0xC0>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4733C.asm:10 END_C_FUNCTION
    case 0xC4734B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4734C.asm (unresolved).
bool execute_unresolved_c4_c4734c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4734C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4734C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4734C.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC4734A.
    case 0xC4734D: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC4734E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC4734F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC47350: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC47351: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC47351.
    case 0xC47353: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC47354: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC47355: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:9 TAY
    case 0xC47356: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:10 STY @LOCAL00
    case 0xC47357: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4734C.asm:11 TYX
    case 0xC47359: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:12 LDA BG1_X_POS
    case 0xC4735A: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C4734C.asm:13 LSR
    case 0xC4735D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:14 LSR
    case 0xC4735E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:15 LSR
    case 0xC4735F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:16 JSL UNKNOWN_C01A63
    case 0xC47360: cpu.execute_instruction<0x22>(0xC01A63, 4); return true;
    // src/unknown/C4/C4734C.asm:17 LDY @LOCAL00
    case 0xC47364: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4734C.asm:18 TYA
    case 0xC47366: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4734C.asm:19 END_C_FUNCTION
    case 0xC47367: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4734C.asm:19 END_C_FUNCTION
    case 0xC47368: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47369.asm (unresolved).
bool execute_unresolved_c4_c47369_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47369.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47369: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47369.asm:5 JSL UNKNOWN_C019E2
    case 0xC4736B: cpu.execute_instruction<0x22>(0xC019E2, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47369.asm:6 END_C_FUNCTION
    case 0xC4736F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C473B2.asm (unresolved).
bool execute_unresolved_c4_c473b2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C473B2.asm:3 BEGIN_C_FUNCTION
    case 0xC473B2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C473B2.asm:7 CMP #$8000
    case 0xC473B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C473B2.asm:7 CMP #$8000
    // Overlapping static entry reached from 0xC473B4.
    case 0xC473B6: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C473B2.asm:8 BLTEQ @UNKNOWN0
    case 0xC473B7: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C473B2.asm:8 BLTEQ @UNKNOWN0
    case 0xC473B9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C473B2.asm:9 LDA #0
    case 0xC473BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C473B2.asm:9 LDA #0
    // Overlapping static entry reached from 0xC473BB.
    case 0xC473BD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C473B2.asm:10 BRA @UNKNOWN2
    case 0xC473BE: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C4/C473B2.asm:12 CMP #31
    case 0xC473C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:12 CMP #31
    // Overlapping static entry reached from 0xC473C0.
    case 0xC473C2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C473B2.asm:13 BLTEQ @UNKNOWN1
    case 0xC473C3: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C473B2.asm:13 BLTEQ @UNKNOWN1
    case 0xC473C5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C473B2.asm:14 LDA #31
    case 0xC473C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:14 LDA #31
    // Overlapping static entry reached from 0xC473C7.
    case 0xC473C9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C473B2.asm:15 BRA @UNKNOWN2
    case 0xC473CA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C473B2.asm:17 AND #$001F
    case 0xC473CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:17 AND #$001F
    // Overlapping static entry reached from 0xC473CC.
    case 0xC473CE: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C473B2.asm:19 END_C_FUNCTION
    case 0xC473CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C473D0.asm (unresolved).
bool execute_unresolved_c4_c473d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C473D0.asm:3 BEGIN_C_FUNCTION
    case 0xC473D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC473D5.
    case 0xC473D7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC473D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:15 STX @LOCAL06
    case 0xC473DA: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:15 STX @LOCAL06
    // Overlapping static entry reached from 0xC473D7.
    case 0xC473DB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:16 ASL
    case 0xC473DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:17 ASL
    case 0xC473DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:18 ASL
    case 0xC473DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:19 ASL
    case 0xC473DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:20 ASL
    case 0xC473E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:21 STA @LOCAL05
    case 0xC473E1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:22 CLC
    case 0xC473E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:23 ADC #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC473E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x004476, 3); return true;
    // src/unknown/C4/C473D0.asm:23 ADC #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC473E4.
    case 0xC473E6: cpu.execute_instruction<0x44>(0x001685, 3); return true;
    // src/unknown/C4/C473D0.asm:24 STA @LOCAL04
    case 0xC473E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:25 LDA @LOCAL05
    case 0xC473E9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:26 CLC
    case 0xC473EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:27 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC473EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000240, 3); return true;
    // src/unknown/C4/C473D0.asm:27 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC473EC.
    case 0xC473EE: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C473D0.asm:28 STA @LOCAL05
    case 0xC473EF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:29 LDA #0
    case 0xC473F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C473D0.asm:29 LDA #0
    // Overlapping static entry reached from 0xC473F1.
    case 0xC473F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C473D0.asm:30 STA @VIRTUAL04
    case 0xC473F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:31 BRA @UNKNOWN1
    case 0xC473F6: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C4/C473D0.asm:33 LDA (@LOCAL04)
    case 0xC473F8: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:34 TAY
    case 0xC473FA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:35 AND #$001F
    case 0xC473FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:35 AND #$001F
    // Overlapping static entry reached from 0xC473FB.
    case 0xC473FD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:36 CLC
    case 0xC473FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:37 ADC @LOCAL06
    case 0xC473FF: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:38 STA @LOCAL03
    case 0xC47401: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C473D0.asm:39 TYA
    case 0xC47403: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:40 LSR
    case 0xC47404: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:41 LSR
    case 0xC47405: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:42 LSR
    case 0xC47406: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:43 LSR
    case 0xC47407: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:44 LSR
    case 0xC47408: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:45 AND #$001F
    case 0xC47409: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:45 AND #$001F
    // Overlapping static entry reached from 0xC47409.
    case 0xC4740B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:46 CLC
    case 0xC4740C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:47 ADC @LOCAL06
    case 0xC4740D: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:48 TAX
    case 0xC4740F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:49 STX @LOCAL02
    case 0xC47410: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:50 TYA
    case 0xC47412: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:51 XBA
    case 0xC47413: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:52 AND #$00FF
    case 0xC47414: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C473D0.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC47414.
    case 0xC47416: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C4/C473D0.asm:53 LSR
    case 0xC47417: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:54 LSR
    case 0xC47418: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:55 AND #$001F
    case 0xC47419: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:55 AND #$001F
    // Overlapping static entry reached from 0xC47419.
    case 0xC4741B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:56 CLC
    case 0xC4741C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:57 ADC @LOCAL06
    case 0xC4741D: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:58 TAY
    case 0xC4741F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:59 STY @LOCAL01
    case 0xC47420: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:60 LDA @LOCAL03
    case 0xC47422: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C473D0.asm:61 JSR UNKNOWN_C473B2
    case 0xC47424: cpu.execute_instruction<0x20>(0x0073B2, 3); return true;
    // src/unknown/C4/C473D0.asm:62 STA @VIRTUAL02
    case 0xC47427: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:63 STA @LOCAL00
    case 0xC47429: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C473D0.asm:64 LDX @LOCAL02
    case 0xC4742B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:65 TXA
    case 0xC4742D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:66 JSR UNKNOWN_C473B2
    case 0xC4742E: cpu.execute_instruction<0x20>(0x0073B2, 3); return true;
    // src/unknown/C4/C473D0.asm:67 TAX
    case 0xC47431: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:68 STX @LOCAL02
    case 0xC47432: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:69 LDY @LOCAL01
    case 0xC47434: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:70 TYA
    case 0xC47436: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:71 JSR UNKNOWN_C473B2
    case 0xC47437: cpu.execute_instruction<0x20>(0x0073B2, 3); return true;
    // src/unknown/C4/C473D0.asm:72 STA @LOCAL01
    case 0xC4743A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:73 INC @LOCAL04
    case 0xC4743C: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:74 INC @LOCAL04
    case 0xC4743E: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:75 LDX @LOCAL02
    case 0xC47440: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:76 TXA
    case 0xC47442: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:77 ASL
    case 0xC47443: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:78 ASL
    case 0xC47444: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:79 ASL
    case 0xC47445: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:80 ASL
    case 0xC47446: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:81 ASL
    case 0xC47447: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:82 STA @VIRTUAL02
    case 0xC47448: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:83 LDA @LOCAL01
    case 0xC4744A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:84 XBA
    case 0xC4744C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:85 AND #$FF00
    case 0xC4744D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C473D0.asm:85 AND #$FF00
    // Overlapping static entry reached from 0xC4744D.
    case 0xC4744F: cpu.execute_instruction<0xFF>(0x050A0A, 4); return true;
    // src/unknown/C4/C473D0.asm:86 ASL
    case 0xC47450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:87 ASL
    case 0xC47451: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:88 ORA @VIRTUAL02
    case 0xC47452: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:88 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC4744F.
    case 0xC47453: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C4/C473D0.asm:89 LDX @LOCAL00
    case 0xC47454: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C473D0.asm:90 STX @VIRTUAL02
    case 0xC47456: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:91 ORA @VIRTUAL02
    case 0xC47458: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:92 STA (@LOCAL05)
    case 0xC4745A: cpu.execute_instruction<0x92>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:93 INC @LOCAL05
    case 0xC4745C: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:94 INC @LOCAL05
    case 0xC4745E: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:95 INC @VIRTUAL04
    case 0xC47460: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:97 LDA @VIRTUAL04
    case 0xC47462: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:98 CMP #16
    case 0xC47464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C473D0.asm:98 CMP #16
    // Overlapping static entry reached from 0xC47464.
    case 0xC47466: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C473D0.asm:99 BCC @UNKNOWN0
    case 0xC47467: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C473D0.asm:100 END_C_FUNCTION
    case 0xC47469: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C473D0.asm:100 END_C_FUNCTION
    case 0xC4746A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4746B.asm (unresolved).
bool execute_unresolved_c4_c4746b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4746B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4746B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC4746D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC4746E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC4746F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC47470: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC47470.
    case 0xC47472: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC47473: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC47474: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:8 STA @VIRTUAL02
    case 0xC47475: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4746B.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47472.
    case 0xC47476: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C4746B.asm:9 LDY #0
    case 0xC47477: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4746B.asm:9 LDY #0
    // Overlapping static entry reached from 0xC47477.
    case 0xC47479: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4746B.asm:10 STY @LOCAL00
    case 0xC4747A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:11 BRA @UNKNOWN1
    case 0xC4747C: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C4746B.asm:13 LDX @VIRTUAL02
    case 0xC4747E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4746B.asm:14 TYA
    case 0xC47480: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:15 JSR UNKNOWN_C473D0
    case 0xC47481: cpu.execute_instruction<0x20>(0x0073D0, 3); return true;
    // src/unknown/C4/C4746B.asm:16 LDY @LOCAL00
    case 0xC47484: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:17 INY
    case 0xC47486: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:18 STY @LOCAL00
    case 0xC47487: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:20 CPY #16
    case 0xC47489: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/unknown/C4/C4746B.asm:20 CPY #16
    // Overlapping static entry reached from 0xC47489.
    case 0xC4748B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4746B.asm:21 BCC @UNKNOWN0
    case 0xC4748C: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/unknown/C4/C4746B.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4748E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4746B.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC47490: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C4746B.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC47492: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C4746B.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC47490.
    case 0xC47493: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C4746B.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC47495: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4746B.asm:26 END_C_FUNCTION
    case 0xC47497: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4746B.asm:26 END_C_FUNCTION
    case 0xC47498: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47499.asm (unresolved).
bool execute_unresolved_c4_c47499_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47499.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47499: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47499.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4749B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47499.asm:6 ASL
    case 0xC4749E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47499.asm:7 TAX
    case 0xC4749F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47499.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC474A0: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C47499.asm:9 JSL UNKNOWN_C4746B
    case 0xC474A3: cpu.execute_instruction<0x22>(0xC4746B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47499.asm:10 END_C_FUNCTION
    case 0xC474A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C474A8.asm (unresolved).
bool execute_unresolved_c4_c474a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C474A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC474A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC474AA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC474AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC474AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC474AC.
    case 0xC474AE: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC474AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC474B0: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C474A8.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC474AE.
    case 0xC474B2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:8 ASL
    case 0xC474B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:9 TAX
    case 0xC474B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC474B5: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C474A8.asm:11 STA @LOCAL00
    case 0xC474B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:12 STA @VIRTUAL02
    case 0xC474BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C474A8.asm:13 LDA #0
    case 0xC474BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C474A8.asm:13 LDA #0
    // Overlapping static entry reached from 0xC474BC.
    case 0xC474BE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C474A8.asm:14 CLC
    case 0xC474BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:15 SBC @VIRTUAL02
    case 0xC474C0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC474C2: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC474C4: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC474C6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC474C8: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C474A8.asm:17 LDA @LOCAL00
    case 0xC474CA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:18 TAX
    case 0xC474CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:19 BRA @UNKNOWN3
    case 0xC474CD: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C4/C474A8.asm:21 LDA @LOCAL00
    case 0xC474CF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:22 EOR #$FFFF
    case 0xC474D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C474A8.asm:22 EOR #$FFFF
    // Overlapping static entry reached from 0xC474D1.
    case 0xC474D3: cpu.execute_instruction<0xFF>(0xA5AA1A, 4); return true;
    // src/unknown/C4/C474A8.asm:23 INC
    case 0xC474D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:24 TAX
    case 0xC474D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:26 LDA @LOCAL00
    case 0xC474D6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:26 LDA @LOCAL00
    // Overlapping static entry reached from 0xC474D3.
    case 0xC474D7: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C4/C474A8.asm:27 STA @VIRTUAL02
    case 0xC474D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C474A8.asm:28 LDA #0
    case 0xC474DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C474A8.asm:28 LDA #0
    // Overlapping static entry reached from 0xC474DA.
    case 0xC474DC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C474A8.asm:29 CLC
    case 0xC474DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:30 SBC @VIRTUAL02
    case 0xC474DE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC474E0: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC474E2: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC474E4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC474E6: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C474A8.asm:32 LDA #$33
    case 0xC474E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x000033, 3); return true;
    // src/unknown/C4/C474A8.asm:32 LDA #$33
    // Overlapping static entry reached from 0xC474E8.
    case 0xC474EA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C474A8.asm:33 BRA @UNKNOWN7
    case 0xC474EB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C474A8.asm:35 LDA #$B3
    case 0xC474ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0000B3, 3); return true;
    // src/unknown/C4/C474A8.asm:35 LDA #$B3
    // Overlapping static entry reached from 0xC474ED.
    case 0xC474EF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C474A8.asm:37 JSL UNKNOWN_C4249A
    case 0xC474F0: cpu.execute_instruction<0x22>(0xC4249A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C474A8.asm:38 END_C_FUNCTION
    case 0xC474F4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C474A8.asm:38 END_C_FUNCTION
    case 0xC474F5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47501.asm (unresolved).
bool execute_unresolved_c4_c47501_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47501.asm:3 BEGIN_C_FUNCTION
    case 0xC47501: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC47503: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC47504: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC47505: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47505.
    case 0xC47507: cpu.execute_instruction<0xFF>(0x22A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC47508: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC47509: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4750B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4750D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4750F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47501.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC47511: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47501.asm:12 STA @VIRTUAL02
    case 0xC47514: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:13 ASL
    case 0xC47516: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:14 TAX
    case 0xC47517: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC47518: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C47501.asm:16 SEC
    case 0xC4751B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:17 SBC BG1_Y_POS
    case 0xC4751C: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C47501.asm:18 TAY
    case 0xC4751F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:19 INY
    case 0xC47520: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:20 INY
    case 0xC47521: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:21 INY
    case 0xC47522: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:22 INY
    case 0xC47523: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:23 CPY #$8000
    case 0xC47524: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C4/C47501.asm:23 CPY #$8000
    // Overlapping static entry reached from 0xC47524.
    case 0xC47526: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C47501.asm:24 BCC @UNKNOWN0
    case 0xC47527: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:25 JMP @UNKNOWN4
    case 0xC47529: cpu.execute_instruction<0x4C>(0x0075AA, 3); return true;
    // src/unknown/C4/C47501.asm:27 TYA
    case 0xC4752C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4752D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:29 INC
    case 0xC4752F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:30 STA [@VIRTUAL06]
    case 0xC47530: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC47532: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:32 INC @VIRTUAL06
    case 0xC47534: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:33 LDA ENTITY_ABS_X_TABLE,X
    case 0xC47536: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C47501.asm:34 STA @LOCAL02
    case 0xC47539: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:35 SEC
    case 0xC4753B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:36 SBC #16
    case 0xC4753C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C47501.asm:36 SBC #16
    // Overlapping static entry reached from 0xC4753C.
    case 0xC4753E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:37 SEC
    case 0xC4753F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:38 SBC BG1_X_POS
    case 0xC47540: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:39 TAX
    case 0xC47543: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:40 LDA @LOCAL02
    case 0xC47544: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:41 CLC
    case 0xC47546: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:42 ADC #16
    case 0xC47547: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C47501.asm:42 ADC #16
    // Overlapping static entry reached from 0xC47547.
    case 0xC47549: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:43 SEC
    case 0xC4754A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:44 SBC BG1_X_POS
    case 0xC4754B: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:45 STA @LOCAL02
    case 0xC4754E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:46 CPX #256
    case 0xC47550: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:46 CPX #256
    // Overlapping static entry reached from 0xC47550.
    case 0xC47552: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:47 BCS @UNKNOWN2
    case 0xC47553: cpu.execute_instruction<0xB0>(0x000026, 2); return true;
    // src/unknown/C4/C47501.asm:47 BCS @UNKNOWN2
    // Overlapping static entry reached from 0xC47552.
    case 0xC47554: cpu.execute_instruction<0x26>(0x00008A, 2); return true;
    // src/unknown/C4/C47501.asm:48 TXA
    case 0xC47555: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC47556: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:50 STA [@VIRTUAL06]
    case 0xC47558: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC4755A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:52 INC @VIRTUAL06
    case 0xC4755C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:53 LDA @LOCAL02
    case 0xC4755E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:54 CMP #256
    case 0xC47560: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:54 CMP #256
    // Overlapping static entry reached from 0xC47560.
    case 0xC47562: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:55 BCS @UNKNOWN1
    case 0xC47563: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:55 BCS @UNKNOWN1
    // Overlapping static entry reached from 0xC47562.
    case 0xC47564: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC47565: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:57 STA [@VIRTUAL06]
    case 0xC47567: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC47569: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:59 INC @VIRTUAL06
    case 0xC4756B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:60 BRA @UNKNOWN4
    case 0xC4756D: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C4/C47501.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4756F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:63 LDA #<-1
    case 0xC47571: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47501.asm:64 STA [@VIRTUAL06]
    case 0xC47573: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:64 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47571.
    case 0xC47574: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC47575: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:65 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47574.
    case 0xC47576: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:66 INC @VIRTUAL06
    case 0xC47577: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:67 BRA @UNKNOWN4
    case 0xC47579: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C4/C47501.asm:69 CMP #256
    case 0xC4757B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:69 CMP #256
    // Overlapping static entry reached from 0xC4757B.
    case 0xC4757D: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:70 BCS @UNKNOWN3
    case 0xC4757E: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/unknown/C4/C47501.asm:70 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC4757D.
    case 0xC4757F: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/unknown/C4/C47501.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC47580: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:71 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4757F.
    case 0xC47581: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C47501.asm:72 LDA #0
    case 0xC47582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:73 STA [@VIRTUAL06]
    case 0xC47584: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:73 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47582.
    case 0xC47585: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC47586: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:74 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47585.
    case 0xC47587: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:75 INC @VIRTUAL06
    case 0xC47588: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:76 LDA @LOCAL02
    case 0xC4758A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC4758C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:78 STA [@VIRTUAL06]
    case 0xC4758E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC47590: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:80 INC @VIRTUAL06
    case 0xC47592: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:81 BRA @UNKNOWN4
    case 0xC47594: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C47501.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC47596: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:84 LDA #128
    case 0xC47598: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:85 STA [@VIRTUAL06]
    case 0xC4759A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:85 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47598.
    case 0xC4759B: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC4759C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:86 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4759B.
    case 0xC4759D: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:87 INC @VIRTUAL06
    case 0xC4759E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC475A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:89 LDA #127
    case 0xC475A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:90 STA [@VIRTUAL06]
    case 0xC475A4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:90 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC475A2.
    case 0xC475A5: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC475A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:91 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC475A5.
    case 0xC475A7: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:92 INC @VIRTUAL06
    case 0xC475A8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:94 LDA @VIRTUAL02
    case 0xC475AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:95 ASL
    case 0xC475AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:96 TAX
    case 0xC475AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:97 LDA ENTITY_ABS_X_TABLE,X
    case 0xC475AE: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C47501.asm:98 SEC
    case 0xC475B1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:99 SBC BG1_X_POS
    case 0xC475B2: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:100 STA @VIRTUAL04
    case 0xC475B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:101 TYA
    case 0xC475B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:102 CLC
    case 0xC475B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:103 ADC #11
    case 0xC475B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C4/C47501.asm:103 ADC #11
    // Overlapping static entry reached from 0xC475B9.
    case 0xC475BB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C47501.asm:104 CMP #$8000
    case 0xC475BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C47501.asm:104 CMP #$8000
    // Overlapping static entry reached from 0xC475BC.
    case 0xC475BE: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C47501.asm:105 BCC @UNKNOWN5
    case 0xC475BF: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:106 JMP @UNKNOWN14
    case 0xC475C1: cpu.execute_instruction<0x4C>(0x00767D, 3); return true;
    // src/unknown/C4/C47501.asm:108 CMP #10
    case 0xC475C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:108 CMP #10
    // Overlapping static entry reached from 0xC475C4.
    case 0xC475C6: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:109 BCS @UNKNOWN6
    case 0xC475C7: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:110 TAX
    case 0xC475C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:111 BRA @UNKNOWN7
    case 0xC475CA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:113 LDX #10
    case 0xC475CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:113 LDX #10
    // Overlapping static entry reached from 0xC475CC.
    case 0xC475CE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C47501.asm:115 STX @VIRTUAL02
    case 0xC475CF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC475D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F6, 2); else cpu.execute_instruction<0xA9>(0x0074F6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC475D1.
    case 0xC475D3: cpu.execute_instruction<0x74>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC475D4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC475D3.
    case 0xC475D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC475D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC475D6.
    case 0xC475D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC475D9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C47501.asm:117 LDA #10
    case 0xC475DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:117 LDA #10
    // Overlapping static entry reached from 0xC475DB.
    case 0xC475DD: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:118 SEC
    case 0xC475DE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:119 SBC @VIRTUAL02
    case 0xC475DF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:120 CLC
    case 0xC475E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:121 ADC @VIRTUAL0A
    case 0xC475E2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:122 STA @VIRTUAL0A
    case 0xC475E4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:123 LDY @VIRTUAL02
    case 0xC475E6: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:124 INY
    case 0xC475E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:125 LDA #0
    case 0xC475E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47501.asm:125 LDA #0
    // Overlapping static entry reached from 0xC475E9.
    case 0xC475EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47501.asm:126 STA @LOCAL01
    case 0xC475EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:127 JMP @UNKNOWN13
    case 0xC475EE: cpu.execute_instruction<0x4C>(0x007672, 3); return true;
    // src/unknown/C4/C47501.asm:129 SEP #PROC_FLAGS::ACCUM8
    case 0xC475F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:130 LDA #1
    case 0xC475F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47501.asm:131 STA [@VIRTUAL06]
    case 0xC475F5: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:131 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC475F3.
    case 0xC475F6: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC475F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:132 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC475F6.
    case 0xC475F8: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:133 INC @VIRTUAL06
    case 0xC475F9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:134 LDA [@VIRTUAL0A]
    case 0xC475FB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:135 AND #$00FF
    case 0xC475FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47501.asm:135 AND #$00FF
    // Overlapping static entry reached from 0xC475FD.
    case 0xC475FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47501.asm:136 STA @VIRTUAL02
    case 0xC47600: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:137 LDA @VIRTUAL04
    case 0xC47602: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:138 SEC
    case 0xC47604: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:139 SBC @VIRTUAL02
    case 0xC47605: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:140 STA @LOCAL00
    case 0xC47607: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:141 LDA @VIRTUAL04
    case 0xC47609: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:142 CLC
    case 0xC4760B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:143 ADC @VIRTUAL02
    case 0xC4760C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:144 TAX
    case 0xC4760E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:145 DEX
    case 0xC4760F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:146 INC @VIRTUAL0A
    case 0xC47610: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:147 LDA @LOCAL00
    case 0xC47612: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:148 CMP #256
    case 0xC47614: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:148 CMP #256
    // Overlapping static entry reached from 0xC47614.
    case 0xC47616: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:149 BCS @UNKNOWN10
    case 0xC47617: cpu.execute_instruction<0xB0>(0x000026, 2); return true;
    // src/unknown/C4/C47501.asm:149 BCS @UNKNOWN10
    // Overlapping static entry reached from 0xC47616.
    case 0xC47618: cpu.execute_instruction<0x26>(0x0000A5, 2); return true;
    // src/unknown/C4/C47501.asm:150 LDA @LOCAL00
    case 0xC47619: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:150 LDA @LOCAL00
    // Overlapping static entry reached from 0xC47618.
    case 0xC4761A: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/unknown/C4/C47501.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC4761B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:152 STA [@VIRTUAL06]
    case 0xC4761D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC4761F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:154 INC @VIRTUAL06
    case 0xC47621: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:155 CPX #256
    case 0xC47623: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:155 CPX #256
    // Overlapping static entry reached from 0xC47623.
    case 0xC47625: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:156 BCS @UNKNOWN9
    case 0xC47626: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C4/C47501.asm:156 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC47625.
    case 0xC47627: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:157 TXA
    case 0xC47628: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC47629: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:159 STA [@VIRTUAL06]
    case 0xC4762B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC4762D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:161 INC @VIRTUAL06
    case 0xC4762F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:162 BRA @UNKNOWN12
    case 0xC47631: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C47501.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC47633: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:165 LDA #<-1
    case 0xC47635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47501.asm:166 STA [@VIRTUAL06]
    case 0xC47637: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:166 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47635.
    case 0xC47638: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC47639: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:167 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47638.
    case 0xC4763A: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:168 INC @VIRTUAL06
    case 0xC4763B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:169 BRA @UNKNOWN12
    case 0xC4763D: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C47501.asm:171 CPX #256
    case 0xC4763F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:171 CPX #256
    // Overlapping static entry reached from 0xC4763F.
    case 0xC47641: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:172 BCS @UNKNOWN11
    case 0xC47642: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/unknown/C4/C47501.asm:172 BCS @UNKNOWN11
    // Overlapping static entry reached from 0xC47641.
    case 0xC47643: cpu.execute_instruction<0x15>(0x0000E2, 2); return true;
    // src/unknown/C4/C47501.asm:173 SEP #PROC_FLAGS::ACCUM8
    case 0xC47644: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:173 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47643.
    case 0xC47645: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C47501.asm:174 LDA #0
    case 0xC47646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:175 STA [@VIRTUAL06]
    case 0xC47648: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:175 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47646.
    case 0xC47649: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC4764A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:176 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47649.
    case 0xC4764B: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:177 INC @VIRTUAL06
    case 0xC4764C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:178 TXA
    case 0xC4764E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:179 SEP #PROC_FLAGS::ACCUM8
    case 0xC4764F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:180 STA [@VIRTUAL06]
    case 0xC47651: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:181 REP #PROC_FLAGS::ACCUM8
    case 0xC47653: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:182 INC @VIRTUAL06
    case 0xC47655: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:183 BRA @UNKNOWN12
    case 0xC47657: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C47501.asm:185 SEP #PROC_FLAGS::ACCUM8
    case 0xC47659: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:186 LDA #128
    case 0xC4765B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:187 STA [@VIRTUAL06]
    case 0xC4765D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:187 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4765B.
    case 0xC4765E: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC4765F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:188 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4765E.
    case 0xC47660: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:189 INC @VIRTUAL06
    case 0xC47661: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:190 SEP #PROC_FLAGS::ACCUM8
    case 0xC47663: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:191 LDA #127
    case 0xC47665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:192 STA [@VIRTUAL06]
    case 0xC47667: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:192 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47665.
    case 0xC47668: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC47669: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:193 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47668.
    case 0xC4766A: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:194 INC @VIRTUAL06
    case 0xC4766B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:196 LDA @LOCAL01
    case 0xC4766D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:197 INC
    case 0xC4766F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:198 STA @LOCAL01
    case 0xC47670: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:200 STY @VIRTUAL02
    case 0xC47672: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:201 CMP @VIRTUAL02
    case 0xC47674: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC47676: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC47678: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC4767A: cpu.execute_instruction<0x4C>(0x0075F1, 3); return true;
    // src/unknown/C4/C47501.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC4767D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:205 LDA #1
    case 0xC4767F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47501.asm:206 STA [@VIRTUAL06]
    case 0xC47681: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:206 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4767F.
    case 0xC47682: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC47683: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:207 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47682.
    case 0xC47684: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:208 INC @VIRTUAL06
    case 0xC47685: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:209 SEP #PROC_FLAGS::ACCUM8
    case 0xC47687: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:210 LDA #128
    case 0xC47689: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:211 STA [@VIRTUAL06]
    case 0xC4768B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:211 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47689.
    case 0xC4768C: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC4768D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:212 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4768C.
    case 0xC4768E: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:213 INC @VIRTUAL06
    case 0xC4768F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC47691: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:215 LDA #127
    case 0xC47693: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:216 STA [@VIRTUAL06]
    case 0xC47695: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:216 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47693.
    case 0xC47696: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC47697: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:217 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47696.
    case 0xC47698: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:218 INC @VIRTUAL06
    case 0xC47699: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC4769B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:220 LDA #0
    case 0xC4769D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:221 STA [@VIRTUAL06]
    case 0xC4769F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:221 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4769D.
    case 0xC476A0: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC476A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:222 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC476A0.
    case 0xC476A2: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47501.asm:223 END_C_FUNCTION
    case 0xC476A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C47501.asm:223 END_C_FUNCTION
    case 0xC476A4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C476A5.asm (unresolved).
bool execute_unresolved_c4_c476a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C476A5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC476A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC476A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC476A8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC476A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC476A9.
    case 0xC476AB: cpu.execute_instruction<0xFF>(0x42AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC476AC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC476AD: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C476A5.asm:10 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC476AB.
    case 0xC476AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:11 STY @LOCAL03
    case 0xC476B0: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C476A5.asm:12 TYA
    case 0xC476B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:13 ASL
    case 0xC476B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:14 TAX
    case 0xC476B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC476B5: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C476A5.asm:16 AND #$0001
    case 0xC476B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C476A5.asm:16 AND #$0001
    // Overlapping static entry reached from 0xC476B8.
    case 0xC476BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C476A5.asm:17 BEQ @UNKNOWN0
    case 0xC476BB: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C476A5.asm:18 LDA #0
    case 0xC476BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C476A5.asm:18 LDA #0
    // Overlapping static entry reached from 0xC476BD.
    case 0xC476BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C476A5.asm:19 STA @LOCAL02
    case 0xC476C0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C476A5.asm:20 BRA @UNKNOWN1
    case 0xC476C2: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C476A5.asm:22 LDA #$02FE
    case 0xC476C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0002FE, 3); return true;
    // src/unknown/C4/C476A5.asm:22 LDA #$02FE
    // Overlapping static entry reached from 0xC476C4.
    case 0xC476C6: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C476A5.asm:23 STA @LOCAL02
    case 0xC476C7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC476C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC476C9.
    case 0xC476CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC476CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC476CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC476CE.
    case 0xC476D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC476D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C476A5.asm:26 LDA @LOCAL02
    case 0xC476D3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C476A5.asm:27 CLC
    case 0xC476D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:28 ADC @VIRTUAL06
    case 0xC476D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C476A5.asm:29 STA @VIRTUAL06
    case 0xC476D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C476A5.asm:30 STA @LOCAL01
    case 0xC476DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C476A5.asm:31 LDA @VIRTUAL06+2
    case 0xC476DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C476A5.asm:32 STA @LOCAL01+2
    case 0xC476DE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC476E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC476E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC476E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC476E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C476A5.asm:34 JSR UNKNOWN_C47501
    case 0xC476E8: cpu.execute_instruction<0x20>(0x007501, 3); return true;
    // src/unknown/C4/C476A5.asm:35 LDX @LOCAL01
    case 0xC476EB: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C476A5.asm:36 LDA @LOCAL01+2
    case 0xC476ED: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C476A5.asm:37 JSL UNKNOWN_C425CC
    case 0xC476EF: cpu.execute_instruction<0x22>(0xC425CC, 4); return true;
    // src/unknown/C4/C476A5.asm:38 LDY @LOCAL03
    case 0xC476F3: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C476A5.asm:39 TYA
    case 0xC476F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:40 ASL
    case 0xC476F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:41 CLC
    case 0xC476F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xC476F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x000E5E, 3); return true;
    // src/unknown/C4/C476A5.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xC476F8.
    case 0xC476FA: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C476A5.asm:43 TAX
    case 0xC476FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:44 LDA __BSS_START__,X
    case 0xC476FC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C476A5.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC476FA.
    case 0xC476FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C476A5.asm:45 INC
    case 0xC476FF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:46 STA __BSS_START__,X
    case 0xC47700: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C476A5.asm:47 END_C_FUNCTION
    case 0xC47703: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C476A5.asm:47 END_C_FUNCTION
    case 0xC47704: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47705.asm (unresolved).
bool execute_unresolved_c4_c47705_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47705.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47705: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC47707: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC47708: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC47709: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47709.
    case 0xC4770B: cpu.execute_instruction<0xFF>(0x42AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC4770C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC4770D: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C4/C47705.asm:10 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4770B.
    case 0xC4770F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:11 STY @LOCAL03
    case 0xC47710: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C47705.asm:12 TYA
    case 0xC47712: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:13 ASL
    case 0xC47713: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:14 TAX
    case 0xC47714: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC47715: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C47705.asm:16 AND #$0001
    case 0xC47718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C47705.asm:16 AND #$0001
    // Overlapping static entry reached from 0xC47718.
    case 0xC4771A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47705.asm:17 BEQ @UNKNOWN0
    case 0xC4771B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C47705.asm:18 LDA #$05FC
    case 0xC4771D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0005FC, 3); return true;
    // src/unknown/C4/C47705.asm:18 LDA #$05FC
    // Overlapping static entry reached from 0xC4771D.
    case 0xC4771F: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/unknown/C4/C47705.asm:19 STA @LOCAL02
    case 0xC47720: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47705.asm:19 STA @LOCAL02
    // Overlapping static entry reached from 0xC4771F.
    case 0xC47721: cpu.execute_instruction<0x16>(0x000080, 2); return true;
    // src/unknown/C4/C47705.asm:20 BRA @UNKNOWN1
    case 0xC47722: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C47705.asm:20 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC47721.
    case 0xC47723: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    case 0xC47724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0008FA, 3); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    // Overlapping static entry reached from 0xC47723.
    case 0xC47725: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    // Overlapping static entry reached from 0xC47724.
    case 0xC47726: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:23 STA @LOCAL02
    case 0xC47727: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC47729: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47729.
    case 0xC4772B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4772C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4772E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4772E.
    case 0xC47730: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC47731: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47705.asm:26 LDA @LOCAL02
    case 0xC47733: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47705.asm:27 CLC
    case 0xC47735: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:28 ADC @VIRTUAL06
    case 0xC47736: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47705.asm:29 STA @VIRTUAL06
    case 0xC47738: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47705.asm:30 STA @LOCAL01
    case 0xC4773A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47705.asm:31 LDA @VIRTUAL06+2
    case 0xC4773C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47705.asm:32 STA @LOCAL01+2
    case 0xC4773E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47740: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47742: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47744: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47746: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47705.asm:34 JSR UNKNOWN_C47501
    case 0xC47748: cpu.execute_instruction<0x20>(0x007501, 3); return true;
    // src/unknown/C4/C47705.asm:35 LDX @LOCAL01
    case 0xC4774B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47705.asm:36 LDA @LOCAL01+2
    case 0xC4774D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47705.asm:37 JSL UNKNOWN_C425FD
    case 0xC4774F: cpu.execute_instruction<0x22>(0xC425FD, 4); return true;
    // src/unknown/C4/C47705.asm:38 LDY @LOCAL03
    case 0xC47753: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C47705.asm:39 TYA
    case 0xC47755: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:40 ASL
    case 0xC47756: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:41 CLC
    case 0xC47757: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xC47758: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x000E5E, 3); return true;
    // src/unknown/C4/C47705.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xC47758.
    case 0xC4775A: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C47705.asm:43 TAX
    case 0xC4775B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:44 LDA __BSS_START__,X
    case 0xC4775C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47705.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4775A.
    case 0xC4775D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C47705.asm:45 INC
    case 0xC4775F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:46 STA __BSS_START__,X
    case 0xC47760: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47705.asm:47 END_C_FUNCTION
    case 0xC47763: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47705.asm:47 END_C_FUNCTION
    case 0xC47764: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47765.asm (unresolved).
bool execute_unresolved_c4_c47765_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47765.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47765: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC47767: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC47768: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC47769: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC4776A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4776A.
    case 0xC4776C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC4776D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC4776E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:12 STY @VIRTUAL02
    case 0xC4776F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C47765.asm:12 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4776C.
    case 0xC47770: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C47765.asm:13 TAY
    case 0xC47771: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC47772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x000BF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47772.
    case 0xC47774: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC47775: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC47777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47777.
    case 0xC47779: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC4777A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4777C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4777E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47780: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47782: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47784: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47786: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47788: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4778A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4778C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4778E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47790: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47792: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:18 TXA
    case 0xC47794: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:19 SEC
    case 0xC47795: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:20 SBC BG1_Y_POS
    case 0xC47796: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C47765.asm:21 STA @LOCAL02
    case 0xC47799: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47765.asm:22 CMP #127
    case 0xC4779B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00007F, 2); else cpu.execute_instruction<0xC9>(0x00007F, 3); return true;
    // src/unknown/C4/C47765.asm:22 CMP #127
    // Overlapping static entry reached from 0xC4779B.
    case 0xC4779D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47765.asm:23 BLTEQ @UNKNOWN0
    case 0xC4779E: cpu.execute_instruction<0x90>(0x00003E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47765.asm:23 BLTEQ @UNKNOWN0
    case 0xC477A0: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C47765.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC477A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:25 LDA #127
    case 0xC477A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47765.asm:26 STA [@VIRTUAL0A]
    case 0xC477A6: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C47765.asm:26 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC477A4.
    case 0xC477A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC477A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC477AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x000BF9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    // Overlapping static entry reached from 0xC477AA.
    case 0xC477AC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC477AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC477AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    // Overlapping static entry reached from 0xC477AF.
    case 0xC477B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC477B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC477B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:30 LDA #0
    case 0xC477B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:31 STA [@VIRTUAL06]
    case 0xC477B8: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:31 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC477B6.
    case 0xC477B9: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC477BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:32 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC477B9.
    case 0xC477BB: cpu.execute_instruction<0x20>(0x00FAA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC477BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x000BFA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    // Overlapping static entry reached from 0xC477BC.
    case 0xC477BE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC477BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC477C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    // Overlapping static entry reached from 0xC477C1.
    case 0xC477C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC477C4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC477C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:35 LDA #<-1
    case 0xC477C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47765.asm:36 STA [@VIRTUAL06]
    case 0xC477CA: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:36 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC477C8.
    case 0xC477CB: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC477CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:37 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC477CB.
    case 0xC477CD: cpu.execute_instruction<0x20>(0x00FBA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC477CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x000BFB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    // Overlapping static entry reached from 0xC477CE.
    case 0xC477D0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC477D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC477D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    // Overlapping static entry reached from 0xC477D3.
    case 0xC477D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC477D6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:39 LDA @LOCAL02
    case 0xC477D8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47765.asm:40 SEC
    case 0xC477DA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:41 SBC #127
    case 0xC477DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00007F, 3); return true;
    // src/unknown/C4/C47765.asm:41 SBC #127
    // Overlapping static entry reached from 0xC477DB.
    case 0xC477DD: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C47765.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC477DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:44 STA [@VIRTUAL06]
    case 0xC477E0: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC477E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:46 INC @VIRTUAL06
    case 0xC477E4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC477E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:48 LDA #0
    case 0xC477E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:49 STA [@VIRTUAL06]
    case 0xC477EA: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:49 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC477E8.
    case 0xC477EB: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC477EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:50 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC477EB.
    case 0xC477ED: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:51 INC @VIRTUAL06
    case 0xC477EE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC477F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:53 LDA #<-1
    case 0xC477F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47765.asm:54 STA [@VIRTUAL06]
    case 0xC477F4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:54 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC477F2.
    case 0xC477F5: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC477F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:55 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC477F5.
    case 0xC477F7: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:56 INC @VIRTUAL06
    case 0xC477F8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:57 TYA
    case 0xC477FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:58 SEC
    case 0xC477FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:59 SBC BG1_X_POS
    case 0xC477FC: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47765.asm:60 TAY
    case 0xC477FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:61 LDA @VIRTUAL02
    case 0xC47800: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47765.asm:62 SEC
    case 0xC47802: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:63 SBC BG1_X_POS
    case 0xC47803: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47765.asm:64 STA @LOCAL01
    case 0xC47806: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:65 LDX #0
    case 0xC47808: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C47765.asm:65 LDX #0
    // Overlapping static entry reached from 0xC47808.
    case 0xC4780A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47765.asm:66 BRA @UNKNOWN2
    case 0xC4780B: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C47765.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4780D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:69 LDA #1
    case 0xC4780F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47765.asm:70 STA [@VIRTUAL06]
    case 0xC47811: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:70 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4780F.
    case 0xC47812: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC47813: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47812.
    case 0xC47814: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:72 INC @VIRTUAL06
    case 0xC47815: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:73 TYA
    case 0xC47817: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC47818: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:75 STA [@VIRTUAL06]
    case 0xC4781A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC4781C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:77 INC @VIRTUAL06
    case 0xC4781E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:78 INY
    case 0xC47820: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:79 LDA @LOCAL01
    case 0xC47821: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC47823: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:81 STA [@VIRTUAL06]
    case 0xC47825: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC47827: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:83 INC @VIRTUAL06
    case 0xC47829: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:84 LDA @LOCAL01
    case 0xC4782B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:85 DEC
    case 0xC4782D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:86 STA @LOCAL01
    case 0xC4782E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:87 INX
    case 0xC47830: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:89 CPX #16
    case 0xC47831: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C4/C47765.asm:89 CPX #16
    // Overlapping static entry reached from 0xC47831.
    case 0xC47833: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C47765.asm:90 BCC @UNKNOWN1
    case 0xC47834: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C4/C47765.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC47836: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:92 LDA #1
    case 0xC47838: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47765.asm:93 STA [@VIRTUAL06]
    case 0xC4783A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:93 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47838.
    case 0xC4783B: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC4783C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:94 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4783B.
    case 0xC4783D: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:95 INC @VIRTUAL06
    case 0xC4783E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC47840: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:97 LDA #128
    case 0xC47842: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47765.asm:98 STA [@VIRTUAL06]
    case 0xC47844: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:98 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47842.
    case 0xC47845: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC47846: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:99 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47845.
    case 0xC47847: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:100 INC @VIRTUAL06
    case 0xC47848: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC4784A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:102 LDA #127
    case 0xC4784C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47765.asm:103 STA [@VIRTUAL06]
    case 0xC4784E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:103 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4784C.
    case 0xC4784F: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC47850: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:104 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4784F.
    case 0xC47851: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:105 INC @VIRTUAL06
    case 0xC47852: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC47854: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:107 LDA #0
    case 0xC47856: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:108 STA [@VIRTUAL06]
    case 0xC47858: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:108 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47856.
    case 0xC47859: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/unknown/C4/C47765.asm:109 LDX @LOCAL00
    case 0xC4785A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C47765.asm:109 LDX @LOCAL00
    // Overlapping static entry reached from 0xC47859.
    case 0xC4785B: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C47765.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC4785C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:111 LDA @LOCAL00+2
    case 0xC4785E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47765.asm:112 JSL UNKNOWN_C42542
    case 0xC47860: cpu.execute_instruction<0x22>(0xC42542, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47765.asm:113 END_C_FUNCTION
    case 0xC47864: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47765.asm:113 END_C_FUNCTION
    case 0xC47865: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47866.asm (unresolved).
bool execute_unresolved_c4_c47866_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47866.asm:3 BEGIN_C_FUNCTION
    case 0xC47866: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC47868: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC47869: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC4786A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC4786B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4786B.
    case 0xC4786D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC4786E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC4786F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:10 STX @VIRTUAL02
    case 0xC47870: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47866.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4786D.
    case 0xC47871: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47866.asm:11 STA @LOCAL00
    case 0xC47872: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:12 STA @VIRTUAL04
    case 0xC47874: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47866.asm:13 LDA #0
    case 0xC47876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47866.asm:13 LDA #0
    // Overlapping static entry reached from 0xC47876.
    case 0xC47878: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47866.asm:14 CLC
    case 0xC47879: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:15 SBC @VIRTUAL04
    case 0xC4787A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC4787C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC4787E: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC47880: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC47882: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C47866.asm:17 LDA #0
    case 0xC47884: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47866.asm:17 LDA #0
    // Overlapping static entry reached from 0xC47884.
    case 0xC47886: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47866.asm:18 STA @LOCAL00
    case 0xC47887: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:20 LDA @LOCAL00
    case 0xC47889: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:21 CLC
    case 0xC4788B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:22 SBC @VIRTUAL02
    case 0xC4788C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC4788E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC47890: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC47892: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC47894: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/unknown/C4/C47866.asm:24 LDA @VIRTUAL02
    case 0xC47896: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47866.asm:25 STA @LOCAL00
    case 0xC47898: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:27 LDA @LOCAL00
    case 0xC4789A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47866.asm:28 END_C_FUNCTION
    case 0xC4789C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C47866.asm:28 END_C_FUNCTION
    case 0xC4789D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4789E.asm (unresolved).
bool execute_unresolved_c4_c4789e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4789E.asm:3 BEGIN_C_FUNCTION
    case 0xC4789E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC478A3.
    case 0xC478A5: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC478A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:13 STY @VIRTUAL02
    case 0xC478A8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:13 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC478A5.
    case 0xC478A9: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C4789E.asm:14 TXY
    case 0xC478AA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:15 TAX
    case 0xC478AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:16 STX @LOCAL01
    case 0xC478AC: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC478AE: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC478B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC478B2: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC478B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4789E.asm:18 CPX #0
    case 0xC478B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4789E.asm:18 CPX #0
    // Overlapping static entry reached from 0xC478B6.
    case 0xC478B8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4789E.asm:19 BEQ @UNKNOWN1
    case 0xC478B9: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/unknown/C4/C4789E.asm:20 CPX #128
    case 0xC478BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C4/C4789E.asm:20 CPX #128
    // Overlapping static entry reached from 0xC478BB.
    case 0xC478BD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4789E.asm:21 BCS @UNKNOWN0
    case 0xC478BE: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C4/C4789E.asm:22 TXA
    case 0xC478C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC478C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:24 STA [@VIRTUAL06]
    case 0xC478C3: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC478C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:26 INC @VIRTUAL06
    case 0xC478C7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:27 TYA
    case 0xC478C9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC478CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:29 STA [@VIRTUAL06]
    case 0xC478CC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC478CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:31 INC @VIRTUAL06
    case 0xC478D0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:32 LDA @VIRTUAL02
    case 0xC478D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC478D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:34 STA [@VIRTUAL06]
    case 0xC478D6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC478D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:36 INC @VIRTUAL06
    case 0xC478DA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:37 BRA @UNKNOWN1
    case 0xC478DC: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C4/C4789E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC478DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:40 LDA #127
    case 0xC478E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C4789E.asm:41 STA [@VIRTUAL06]
    case 0xC478E2: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:41 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC478E0.
    case 0xC478E3: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4789E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC478E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:42 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC478E3.
    case 0xC478E5: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4789E.asm:43 INC @VIRTUAL06
    case 0xC478E6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC478E8: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4789E.asm:45 STY @VIRTUAL00
    case 0xC478EA: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC478EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:47 LDA @VIRTUAL00
    case 0xC478EE: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:48 STA [@VIRTUAL06]
    case 0xC478F0: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC478F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:50 INC @VIRTUAL06
    case 0xC478F4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:51 LDA @VIRTUAL02
    case 0xC478F6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC478F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:53 STA @LOCAL00
    case 0xC478FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4789E.asm:54 STA [@VIRTUAL06]
    case 0xC478FC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC478FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:56 INC @VIRTUAL06
    case 0xC47900: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:57 REP #PROC_FLAGS::INDEX8
    case 0xC47902: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4789E.asm:58 LDX @LOCAL01
    case 0xC47904: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/unknown/C4/C4789E.asm:59 TXA
    case 0xC47906: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC47907: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:61 SEC
    case 0xC47909: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:62 SBC #127
    case 0xC4790A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00877F, 3); return true;
    // src/unknown/C4/C4789E.asm:63 STA [@VIRTUAL06]
    case 0xC4790C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:63 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4790A.
    case 0xC4790D: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4789E.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC4790E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:64 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4790D.
    case 0xC4790F: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4789E.asm:65 INC @VIRTUAL06
    case 0xC47910: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC47912: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:67 LDA @VIRTUAL00
    case 0xC47914: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:68 STA [@VIRTUAL06]
    case 0xC47916: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC47918: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:70 INC @VIRTUAL06
    case 0xC4791A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC4791C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:72 LDA @LOCAL00
    case 0xC4791E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4789E.asm:73 STA [@VIRTUAL06]
    case 0xC47920: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC47922: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:75 INC @VIRTUAL06
    case 0xC47924: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC47926: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC47928: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC4792A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC4792C: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4789E.asm:78 END_C_FUNCTION
    case 0xC4792E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4789E.asm:78 END_C_FUNCTION
    case 0xC4792F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47930.asm (unresolved).
bool execute_unresolved_c4_c47930_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47930.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47930: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47932: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47933: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47934: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47935: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC47935.
    case 0xC47937: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47938: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47930.asm:15 END_STACK_VARS
    case 0xC47939: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:16 STY @LOCAL05
    case 0xC4793A: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C4/C47930.asm:16 STY @LOCAL05
    // Overlapping static entry reached from 0xC47937.
    case 0xC4793B: cpu.execute_instruction<0x1C>(0x00859B, 3); return true;
    // src/unknown/C4/C47930.asm:17 TXY
    case 0xC4793C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:18 STA @VIRTUAL04
    case 0xC4793D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47930.asm:18 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4793B.
    case 0xC4793E: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/unknown/C4/C47930.asm:19 LDX @PARAM03
    case 0xC4793F: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C4/C47930.asm:19 LDX @PARAM03
    // Overlapping static entry reached from 0xC4793E.
    case 0xC47940: cpu.execute_instruction<0x2C>(0x000286, 3); return true;
    // src/unknown/C4/C47930.asm:20 STX @VIRTUAL02
    case 0xC47941: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47930.asm:21 LDA RECTANGLE_WINDOW_BUFFER_INDEX
    case 0xC47943: cpu.execute_instruction<0xAD>(0x009E3A, 3); return true;
    // src/unknown/C4/C47930.asm:22 AND #$0001
    case 0xC47946: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C47930.asm:22 AND #$0001
    // Overlapping static entry reached from 0xC47946.
    case 0xC47948: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47930.asm:23 BEQ @UNKNOWN0
    case 0xC47949: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C47930.asm:24 LDA #0
    case 0xC4794B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47930.asm:24 LDA #0
    // Overlapping static entry reached from 0xC4794B.
    case 0xC4794D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47930.asm:25 STA @LOCAL04
    case 0xC4794E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C47930.asm:26 BRA @UNKNOWN1
    case 0xC47950: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C47930.asm:28 LDA #766
    case 0xC47952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0002FE, 3); return true;
    // src/unknown/C4/C47930.asm:28 LDA #766
    // Overlapping static entry reached from 0xC47952.
    case 0xC47954: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47930.asm:29 STA @LOCAL04
    case 0xC47955: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC47957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47957.
    case 0xC47959: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4795A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4795C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4795C.
    case 0xC4795E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47930.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4795F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47930.asm:32 LDA @LOCAL04
    case 0xC47961: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47930.asm:33 CLC
    case 0xC47963: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:34 ADC @VIRTUAL06
    case 0xC47964: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47930.asm:35 STA @VIRTUAL06
    case 0xC47966: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47930.asm:36 STA @LOCAL01
    case 0xC47968: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47930.asm:37 LDA @VIRTUAL06+2
    case 0xC4796A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47930.asm:38 STA @LOCAL01+2
    case 0xC4796C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47930.asm:39 LDX #224
    case 0xC4796E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930.asm:39 LDX #224
    // Overlapping static entry reached from 0xC4796E.
    case 0xC47970: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C47930.asm:40 TYA
    case 0xC47971: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:41 JSR UNKNOWN_C47866
    case 0xC47972: cpu.execute_instruction<0x20>(0x007866, 3); return true;
    // src/unknown/C4/C47930.asm:42 STA @LOCAL03
    case 0xC47975: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C47930.asm:43 LDX #224
    case 0xC47977: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930.asm:43 LDX #224
    // Overlapping static entry reached from 0xC47977.
    case 0xC47979: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930.asm:44 LDA @VIRTUAL02
    case 0xC4797A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47930.asm:45 JSR UNKNOWN_C47866
    case 0xC4797C: cpu.execute_instruction<0x20>(0x007866, 3); return true;
    // src/unknown/C4/C47930.asm:46 STA @LOCAL02
    case 0xC4797F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47930.asm:47 LDX #256
    case 0xC47981: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C47930.asm:47 LDX #256
    // Overlapping static entry reached from 0xC47981.
    case 0xC47983: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930.asm:48 LDA @VIRTUAL04
    case 0xC47984: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47930.asm:48 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC47983.
    case 0xC47985: cpu.execute_instruction<0x04>(0x000020, 2); return true;
    // src/unknown/C4/C47930.asm:49 JSR UNKNOWN_C47866
    case 0xC47986: cpu.execute_instruction<0x20>(0x007866, 3); return true;
    // src/unknown/C4/C47930.asm:49 JSR UNKNOWN_C47866
    // Overlapping static entry reached from 0xC47985.
    case 0xC47987: cpu.execute_instruction<0x66>(0x000078, 2); return true;
    // src/unknown/C4/C47930.asm:50 STA @VIRTUAL04
    case 0xC47989: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47930.asm:51 LDX #256
    case 0xC4798B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C47930.asm:51 LDX #256
    // Overlapping static entry reached from 0xC4798B.
    case 0xC4798D: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930.asm:52 LDA @LOCAL05
    case 0xC4798E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C47930.asm:52 LDA @LOCAL05
    // Overlapping static entry reached from 0xC4798D.
    case 0xC4798F: cpu.execute_instruction<0x1C>(0x006620, 3); return true;
    // src/unknown/C4/C47930.asm:53 JSR UNKNOWN_C47866
    case 0xC47990: cpu.execute_instruction<0x20>(0x007866, 3); return true;
    // src/unknown/C4/C47930.asm:53 JSR UNKNOWN_C47866
    // Overlapping static entry reached from 0xC4798F.
    case 0xC47992: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:54 STA @VIRTUAL02
    case 0xC47993: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47995: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47997: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47999: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4799B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930.asm:56 LDY #127
    case 0xC4799D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007F, 2); else cpu.execute_instruction<0xA0>(0x00007F, 3); return true;
    // src/unknown/C4/C47930.asm:56 LDY #127
    // Overlapping static entry reached from 0xC4799D.
    case 0xC4799F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C47930.asm:57 LDX #128
    case 0xC479A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/C4/C47930.asm:57 LDX #128
    // Overlapping static entry reached from 0xC479A0.
    case 0xC479A2: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930.asm:58 LDA @LOCAL03
    case 0xC479A3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C47930.asm:59 JSR UNKNOWN_C4789E
    case 0xC479A5: cpu.execute_instruction<0x20>(0x00789E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930.asm:60 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930.asm:61 LDY @VIRTUAL02
    case 0xC479B0: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C47930.asm:62 LDX @VIRTUAL04
    case 0xC479B2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C47930.asm:63 LDA @LOCAL02
    case 0xC479B4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47930.asm:64 SEC
    case 0xC479B6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:65 SBC @LOCAL03
    case 0xC479B7: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C4/C47930.asm:66 JSR UNKNOWN_C4789E
    case 0xC479B9: cpu.execute_instruction<0x20>(0x00789E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930.asm:68 LDY #127
    case 0xC479C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007F, 2); else cpu.execute_instruction<0xA0>(0x00007F, 3); return true;
    // src/unknown/C4/C47930.asm:68 LDY #127
    // Overlapping static entry reached from 0xC479C4.
    case 0xC479C6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C47930.asm:69 LDX #128
    case 0xC479C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/C4/C47930.asm:69 LDX #128
    // Overlapping static entry reached from 0xC479C7.
    case 0xC479C9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47930.asm:70 LDA #224
    case 0xC479CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930.asm:70 LDA #224
    // Overlapping static entry reached from 0xC479CA.
    case 0xC479CC: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47930.asm:71 SEC
    case 0xC479CD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:72 SBC @LOCAL02
    case 0xC479CE: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C4/C47930.asm:73 DEC
    case 0xC479D0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C47930.asm:74 JSR UNKNOWN_C4789E
    case 0xC479D1: cpu.execute_instruction<0x20>(0x00789E, 3); return true;
    // src/unknown/C4/C47930.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC479D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47930.asm:76 LDA #0
    case 0xC479D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47930.asm:77 STA [@VIRTUAL06]
    case 0xC479D8: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47930.asm:77 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC479D6.
    case 0xC479D9: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/unknown/C4/C47930.asm:78 LDX @LOCAL01
    case 0xC479DA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47930.asm:78 LDX @LOCAL01
    // Overlapping static entry reached from 0xC479D9.
    case 0xC479DB: cpu.execute_instruction<0x12>(0x0000C2, 2); return true;
    // src/unknown/C4/C47930.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC479DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47930.asm:79 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC479DB.
    case 0xC479DD: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C47930.asm:80 LDA @LOCAL01+2
    case 0xC479DE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47930.asm:81 JSL UNKNOWN_C4245D
    case 0xC479E0: cpu.execute_instruction<0x22>(0xC4245D, 4); return true;
    // src/unknown/C4/C47930.asm:82 INC RECTANGLE_WINDOW_BUFFER_INDEX
    case 0xC479E4: cpu.execute_instruction<0xEE>(0x009E3A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47930.asm:83 END_C_FUNCTION
    case 0xC479E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47930.asm:83 END_C_FUNCTION
    case 0xC479E8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C479E9.asm (unresolved).
bool execute_unresolved_c4_c479e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C479E9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC479E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC479EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC479EC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC479ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC479ED.
    case 0xC479EF: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC479F0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC479F1: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C479E9.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC479EF.
    case 0xC479F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:10 ASL
    case 0xC479F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:11 TAX
    case 0xC479F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:12 LDA ENTITY_ABS_X_TABLE,X
    case 0xC479F6: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C479E9.asm:13 SEC
    case 0xC479F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:14 SBC BG1_X_POS
    case 0xC479FA: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C479E9.asm:15 STA @VIRTUAL04
    case 0xC479FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC479FF: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C479E9.asm:17 SEC
    case 0xC47A02: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:18 SBC BG1_Y_POS
    case 0xC47A03: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C479E9.asm:19 STA @LOCAL02
    case 0xC47A06: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C479E9.asm:20 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC47A08: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C479E9.asm:21 STA @VIRTUAL02
    case 0xC47A0B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:22 LDA @LOCAL02
    case 0xC47A0D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C479E9.asm:23 CLC
    case 0xC47A0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:24 ADC @VIRTUAL02
    case 0xC47A10: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:25 STA @LOCAL00
    case 0xC47A12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C479E9.asm:26 LDA @VIRTUAL04
    case 0xC47A14: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:27 CLC
    case 0xC47A16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:28 ADC @VIRTUAL02
    case 0xC47A17: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:29 TAY
    case 0xC47A19: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:30 LDX @LOCAL01
    case 0xC47A1A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C479E9.asm:31 LDA @VIRTUAL04
    case 0xC47A1C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:32 SEC
    case 0xC47A1E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:33 SBC @VIRTUAL02
    case 0xC47A1F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:34 JSL UNKNOWN_C47930
    case 0xC47A21: cpu.execute_instruction<0x22>(0xC47930, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C479E9.asm:35 END_C_FUNCTION
    case 0xC47A25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C479E9.asm:35 END_C_FUNCTION
    case 0xC47A26: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
