// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unused/C4EDA3.asm (unresolved).
bool execute_unresolved_c4eda3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unused/C4EDA3.asm:3 BEGIN_C_FUNCTION
    case 0xC4EDA3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDA5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDA6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDA7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EDA8.
    case 0xC4EDAA: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDAB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unused/C4EDA3.asm:14 END_STACK_VARS
    case 0xC4EDAC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:15 STY @VIRTUAL04
    case 0xC4EDAD: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:15 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4EDAA.
    case 0xC4EDAE: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unused/C4EDA3.asm:16 STX @VIRTUAL02
    case 0xC4EDAF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:16 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4EDAE.
    case 0xC4EDB0: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unused/C4EDA3.asm:17 TAY
    case 0xC4EDB1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:18 STY @LOCAL05
    case 0xC4EDB2: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unused/C4EDA3.asm:19 STZ @LOCAL04
    case 0xC4EDB4: cpu.execute_instruction<0x64>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4EDB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EDB6.
    case 0xC4EDB8: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4EDB9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EDB8.
    case 0xC4EDBA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4EDBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EDBA.
    case 0xC4EDBC: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EDBB.
    case 0xC4EDBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unused/C4EDA3.asm:20 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4EDBE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unused/C4EDA3.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4EDC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unused/C4EDA3.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4EDC2: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unused/C4EDA3.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4EDC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unused/C4EDA3.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4EDC6: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unused/C4EDA3.asm:22 JSL UNKNOWN_C43CAA
    case 0xC4EDC8: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/unused/C4EDA3.asm:23 BRA @UNKNOWN1
    case 0xC4EDCC: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unused/C4EDA3.asm:25 LDA @LOCAL01
    case 0xC4EDCE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unused/C4EDA3.asm:26 AND #$00FF
    case 0xC4EDD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unused/C4EDA3.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC4EDD0.
    case 0xC4EDD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unused/C4EDA3.asm:27 STA @LOCAL02
    case 0xC4EDD3: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unused/C4EDA3.asm:28 PHA
    case 0xC4EDD5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:29 LDY #8
    case 0xC4EDD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unused/C4EDA3.asm:29 LDY #8
    // Overlapping static entry reached from 0xC4EDD6.
    case 0xC4EDD8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unused/C4EDA3.asm:30 LDA [@VIRTUAL06],Y
    case 0xC4EDD9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:31 PLY
    case 0xC4EDDB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:32 JSL MULT16
    case 0xC4EDDC: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unused/C4EDA3.asm:33 PHA
    case 0xC4EDE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:34 LDY #4
    case 0xC4EDE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unused/C4EDA3.asm:34 LDY #4
    // Overlapping static entry reached from 0xC4EDE1.
    case 0xC4EDE3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unused/C4EDA3.asm:35 LDA [@VIRTUAL06],Y
    case 0xC4EDE4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:36 PHA
    case 0xC4EDE6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:37 INY
    case 0xC4EDE7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:38 INY
    case 0xC4EDE8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:39 LDA [@VIRTUAL06],Y
    case 0xC4EDE9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:40 STA @VIRTUAL06+2
    case 0xC4EDEB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unused/C4EDA3.asm:41 PLA
    case 0xC4EDED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:42 STA @VIRTUAL06
    case 0xC4EDEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:43 PLA
    case 0xC4EDF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:44 CLC
    case 0xC4EDF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:45 ADC @VIRTUAL06
    case 0xC4EDF2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:46 STA @VIRTUAL06
    case 0xC4EDF4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:47 STA @LOCAL00
    case 0xC4EDF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unused/C4EDA3.asm:48 LDA @VIRTUAL06+2
    case 0xC4EDF8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unused/C4EDA3.asm:49 STA @LOCAL00+2
    case 0xC4EDFA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unused/C4EDA3.asm:50 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4EDFC: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unused/C4EDA3.asm:50 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4EDFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unused/C4EDA3.asm:50 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4EE00: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unused/C4EDA3.asm:50 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4EE02: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unused/C4EDA3.asm:51 LDY #10
    case 0xC4EE04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unused/C4EDA3.asm:51 LDY #10
    // Overlapping static entry reached from 0xC4EE04.
    case 0xC4EE06: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unused/C4EDA3.asm:52 LDA [@VIRTUAL06],Y
    case 0xC4EE07: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unused/C4EDA3.asm:53 TAX
    case 0xC4EE09: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unused/C4EDA3.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EE0A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unused/C4EDA3.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EE0C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unused/C4EDA3.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EE0E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unused/C4EDA3.asm:54 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EE10: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4EE12.
    case 0xC4EE14: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE15: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE17: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE18: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE1A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unused/C4EDA3.asm:55 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4EE1C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unused/C4EDA3.asm:56 LDA @LOCAL02
    case 0xC4EE1E: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unused/C4EDA3.asm:57 CLC
    case 0xC4EE20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:58 ADC @VIRTUAL0A
    case 0xC4EE21: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unused/C4EDA3.asm:59 STA @VIRTUAL0A
    case 0xC4EE23: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unused/C4EDA3.asm:60 LDA [@VIRTUAL0A]
    case 0xC4EE25: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unused/C4EDA3.asm:61 AND #$00FF
    case 0xC4EE27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unused/C4EDA3.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC4EE27.
    case 0xC4EE29: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unused/C4EDA3.asm:62 JSL UNKNOWN_C44B3A
    case 0xC4EE2A: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unused/C4EDA3.asm:63 LDA @VIRTUAL02
    case 0xC4EE2E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:64 DEC
    case 0xC4EE30: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:65 STA @VIRTUAL02
    case 0xC4EE31: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:66 LDY @LOCAL05
    case 0xC4EE33: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unused/C4EDA3.asm:67 INY
    case 0xC4EE35: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:68 STY @LOCAL05
    case 0xC4EE36: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/unused/C4EDA3.asm:69 INC @LOCAL04
    case 0xC4EE38: cpu.execute_instruction<0xE6>(0x000019, 2); return true;
    // src/unused/C4EDA3.asm:71 LDY @LOCAL05
    case 0xC4EE3A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/unused/C4EDA3.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EE3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unused/C4EDA3.asm:73 LDA __BSS_START__,Y
    case 0xC4EE3E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unused/C4EDA3.asm:74 STA @LOCAL01
    case 0xC4EE41: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unused/C4EDA3.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC4EE43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unused/C4EDA3.asm:76 AND #$00FF
    case 0xC4EE45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unused/C4EDA3.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC4EE45.
    case 0xC4EE47: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unused/C4EDA3.asm:77 BEQ @UNKNOWN2
    case 0xC4EE48: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unused/C4EDA3.asm:78 LDA @VIRTUAL02
    case 0xC4EE4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unused/C4EDA3.asm:79 BNEL @UNKNOWN0
    case 0xC4EE4C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unused/C4EDA3.asm:79 BNEL @UNKNOWN0
    case 0xC4EE4E: cpu.execute_instruction<0x4C>(0x00EDCE, 3); return true;
    // src/unused/C4EDA3.asm:81 LDA @VIRTUAL04
    case 0xC4EE51: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:82 ASL
    case 0xC4EE53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:83 ASL
    case 0xC4EE54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:84 ASL
    case 0xC4EE55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:85 STA @VIRTUAL04
    case 0xC4EE56: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:86 LDA #0
    case 0xC4EE58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unused/C4EDA3.asm:86 LDA #0
    // Overlapping static entry reached from 0xC4EE58.
    case 0xC4EE5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unused/C4EDA3.asm:87 STA @VIRTUAL02
    case 0xC4EE5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:88 BRA @UNKNOWN4
    case 0xC4EE5D: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unused/C4EDA3.asm:90 LDA @VIRTUAL02
    case 0xC4EE5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:91 ASL
    case 0xC4EE61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:92 ASL
    case 0xC4EE62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:93 ASL
    case 0xC4EE63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:94 ASL
    case 0xC4EE64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:95 ASL
    case 0xC4EE65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:96 CLC
    case 0xC4EE66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:97 ADC #.LOWORD(VWF_BUFFER)
    case 0xC4EE67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unused/C4EDA3.asm:97 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4EE67.
    case 0xC4EE69: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4EE69.
    case 0xC4EE6B: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE6C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE6F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE70: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unused/C4EDA3.asm:98 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4EE72: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unused/C4EDA3.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC4EE74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unused/C4EDA3.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EE76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unused/C4EDA3.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EE78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unused/C4EDA3.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EE7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unused/C4EDA3.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EE7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unused/C4EDA3.asm:101 LDY @VIRTUAL04
    case 0xC4EE7E: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:102 LDX #16
    case 0xC4EE80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unused/C4EDA3.asm:102 LDX #16
    // Overlapping static entry reached from 0xC4EE80.
    case 0xC4EE82: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unused/C4EDA3.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EE83: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unused/C4EDA3.asm:104 LDA #0
    case 0xC4EE85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unused/C4EDA3.asm:105 JSL PREPARE_VRAM_COPY
    case 0xC4EE87: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unused/C4EDA3.asm:105 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EE85.
    case 0xC4EE88: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unused/C4EDA3.asm:105 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EE88.
    case 0xC4EE8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E6, 2); else cpu.execute_instruction<0xC0>(0x0002E6, 3); return true;
    // src/unused/C4EDA3.asm:107 INC @VIRTUAL02
    case 0xC4EE8B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:107 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC4EE8A.
    case 0xC4EE8C: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unused/C4EDA3.asm:108 LDA @VIRTUAL04
    case 0xC4EE8D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:109 CLC
    case 0xC4EE8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C4EDA3.asm:110 ADC #8
    case 0xC4EE90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unused/C4EDA3.asm:110 ADC #8
    // Overlapping static entry reached from 0xC4EE90.
    case 0xC4EE92: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unused/C4EDA3.asm:111 STA @VIRTUAL04
    case 0xC4EE93: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unused/C4EDA3.asm:113 LDA @VIRTUAL02
    case 0xC4EE95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EDA3.asm:114 CMP @LOCAL04
    case 0xC4EE97: cpu.execute_instruction<0xC5>(0x000019, 2); return true;
    // src/unused/C4EDA3.asm:115 BCC @UNKNOWN3
    case 0xC4EE99: cpu.execute_instruction<0x90>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unused/C4EDA3.asm:116 END_C_FUNCTION
    case 0xC4EE9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unused/C4EDA3.asm:116 END_C_FUNCTION
    case 0xC4EE9C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
