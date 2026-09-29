// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C4/C4D830.asm (unresolved).
bool execute_unresolved_c4_c4d830_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D830.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D830: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D832: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D833: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D834: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D835.
    case 0xC4D837: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D838: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D830.asm:9 END_STACK_VARS
    case 0xC4D839: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:10 STA @LOCAL02
    case 0xC4D83A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4D830.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4D837.
    case 0xC4D83B: cpu.execute_instruction<0x14>(0x000080, 2); return true;
    // src/unknown/C4/C4D830.asm:11 BRA @UNKNOWN1
    case 0xC4D83C: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4D830.asm:11 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4D83B.
    case 0xC4D83D: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C4/C4D830.asm:13 JSL UNKNOWN_C1004E
    case 0xC4D83E: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C4/C4D830.asm:13 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC4D83D.
    case 0xC4D83F: cpu.execute_instruction<0x4E>(0x00C100, 3); return true;
    // src/unknown/C4/C4D830.asm:15 LDA WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4D842: cpu.execute_instruction<0xAD>(0x00B4B4, 3); return true;
    // src/unknown/C4/C4D830.asm:16 BNE @UNKNOWN0
    case 0xC4D845: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4D847: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x00FD49, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D847.
    case 0xC4D849: cpu.execute_instruction<0xFD>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4D84A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4D84C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D84C.
    case 0xC4D84E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D830.asm:17 LOADPTR NAMING_SCREEN_ENTITIES + (7*4), @VIRTUAL0A
    case 0xC4D84F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D830.asm:18 LDA @LOCAL02
    case 0xC4D851: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4D830.asm:19 ASL
    case 0xC4D853: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:20 ASL
    case 0xC4D854: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:21 CLC
    case 0xC4D855: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:22 ADC @VIRTUAL0A
    case 0xC4D856: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:23 STA @VIRTUAL0A
    case 0xC4D858: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D85A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D85A.
    case 0xC4D85C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D85D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D85F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D860: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D862: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D864: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:25 BRA @UNKNOWN4
    case 0xC4D866: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D868: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D86A: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D86C: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:27 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D86E: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D830.asm:28 INC @VIRTUAL0A
    case 0xC4D870: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:29 INC @VIRTUAL0A
    case 0xC4D872: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4D830.asm:30 JSL UNKNOWN_C46028
    case 0xC4D874: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C4D830.asm:31 TAX
    case 0xC4D878: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:32 CPX #.LOWORD(-1)
    case 0xC4D879: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:32 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4D879.
    case 0xC4D87B: cpu.execute_instruction<0xFF>(0xA93FF0, 4); return true;
    // src/unknown/C4/C4D830.asm:33 BEQ @UNKNOWN3
    case 0xC4D87C: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4D87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0000D4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D87B.
    case 0xC4D87F: cpu.execute_instruction<0xD4>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D87E.
    case 0xC4D880: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4D881: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4D883: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D883.
    case 0xC4D885: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D830.asm:34 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC4D886: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D888: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D88A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D88C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:35 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D88E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D830.asm:36 LDA [@VIRTUAL0A]
    case 0xC4D890: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D892: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D894: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4D830.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D895: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D830.asm:38 STA @LOCAL00
    case 0xC4D897: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:39 INC
    case 0xC4D899: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:40 INC
    case 0xC4D89A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:41 CLC
    case 0xC4D89B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:42 ADC @VIRTUAL06
    case 0xC4D89C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:43 STA @VIRTUAL06
    case 0xC4D89E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:44 LDA [@VIRTUAL06]
    case 0xC4D8A0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:45 AND #$00FF
    case 0xC4D8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D830.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4D8A2.
    case 0xC4D8A4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D830.asm:46 TAY
    case 0xC4D8A5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:47 LDA @LOCAL00
    case 0xC4D8A6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:48 PHA
    case 0xC4D8A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4D8A9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4D8AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4D8AD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:49 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4D8AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:50 PLA
    case 0xC4D8B1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:51 CLC
    case 0xC4D8B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:52 ADC @VIRTUAL06
    case 0xC4D8B3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:53 STA @VIRTUAL06
    case 0xC4D8B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:54 LDA [@VIRTUAL06]
    case 0xC4D8B7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:55 JSL INIT_ENTITY_UNKNOWN1
    case 0xC4D8B9: cpu.execute_instruction<0x22>(0xC093F9, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4D8BD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4D8BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4D8C1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D830.asm:57 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4D8C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D830.asm:58 INC @VIRTUAL06
    case 0xC4D8C5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:59 INC @VIRTUAL06
    case 0xC4D8C7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:61 LDA [@VIRTUAL06]
    case 0xC4D8C9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D830.asm:62 BNE @UNKNOWN2
    case 0xC4D8CB: cpu.execute_instruction<0xD0>(0x00009B, 2); return true;
    // src/unknown/C4/C4D830.asm:64 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    case 0xC4D8CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000062, 2); else cpu.execute_instruction<0xA0>(0x000A62, 3); return true;
    // src/unknown/C4/C4D830.asm:64 LDY #.LOWORD(ENTITY_SCRIPT_TABLE)
    // Overlapping static entry reached from 0xC4D8CD.
    case 0xC4D8CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:65 LDA #.LOWORD(-1)
    case 0xC4D8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:65 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4D8D0.
    case 0xC4D8D2: cpu.execute_instruction<0xFF>(0xA20E85, 4); return true;
    // src/unknown/C4/C4D830.asm:66 STA @LOCAL00
    case 0xC4D8D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    case 0xC4D8D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    // Overlapping static entry reached from 0xC4D8D2.
    case 0xC4D8D6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D830.asm:67 LDX #0
    // Overlapping static entry reached from 0xC4D8D5.
    case 0xC4D8D7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4D830.asm:68 BRA @UNKNOWN7
    case 0xC4D8D8: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:70 LDA __BSS_START__,Y
    case 0xC4D8DA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4D830.asm:71 STA @VIRTUAL02
    case 0xC4D8DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D830.asm:72 LDA @LOCAL00
    case 0xC4D8DF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:73 AND @VIRTUAL02
    case 0xC4D8E1: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C4/C4D830.asm:74 STA @LOCAL00
    case 0xC4D8E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:75 INY
    case 0xC4D8E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:76 INY
    case 0xC4D8E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:77 INX
    case 0xC4D8E7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D830.asm:79 CPX #PARTY_LEADER_ENTITY_INDEX - 1
    case 0xC4D8E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C4/C4D830.asm:79 CPX #PARTY_LEADER_ENTITY_INDEX - 1
    // Overlapping static entry reached from 0xC4D8E8.
    case 0xC4D8EA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D830.asm:80 BCC @UNKNOWN6
    case 0xC4D8EB: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C4/C4D830.asm:81 JSL UNKNOWN_C1004E
    case 0xC4D8ED: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C4/C4D830.asm:82 LDA @LOCAL00
    case 0xC4D8F1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D830.asm:83 CMP #.LOWORD(-1)
    case 0xC4D8F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D830.asm:83 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4D8F3.
    case 0xC4D8F5: cpu.execute_instruction<0xFF>(0x2BD5D0, 4); return true;
    // src/unknown/C4/C4D830.asm:84 BNE @UNKNOWN5
    case 0xC4D8F6: cpu.execute_instruction<0xD0>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D830.asm:85 END_C_FUNCTION
    case 0xC4D8F8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D830.asm:85 END_C_FUNCTION
    case 0xC4D8F9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D8FA.asm (unresolved).
bool execute_unresolved_c4_c4d8fa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D8FA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D8FA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4D8FC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4D8FD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4D8FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D8FE.
    case 0xC4D900: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D8FA.asm:8 END_STACK_VARS
    case 0xC4D901: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:9 LDA #0
    case 0xC4D902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D8FA.asm:9 LDA #0
    // Overlapping static entry reached from 0xC4D902.
    case 0xC4D904: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D8FA.asm:10 STA @VIRTUAL04
    case 0xC4D905: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:11 BRA @UNKNOWN1
    case 0xC4D907: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4D909: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000065, 2); else cpu.execute_instruction<0xA9>(0x00FD65, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D909.
    case 0xC4D90B: cpu.execute_instruction<0xFD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4D90C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4D90E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D90E.
    case 0xC4D910: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:13 LOADPTR FILE_SELECT_SUMMARY_PARTY_SPRITE_CONFIG, @VIRTUAL06
    case 0xC4D911: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D8FA.asm:14 LDA @VIRTUAL04
    case 0xC4D913: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:15 ASL
    case 0xC4D915: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:16 ASL
    case 0xC4D916: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:17 ASL
    case 0xC4D917: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:18 STA @LOCAL02
    case 0xC4D918: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:19 INC
    case 0xC4D91A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:20 INC
    case 0xC4D91B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:21 INC
    case 0xC4D91C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:22 INC
    case 0xC4D91D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D91E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D920: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D922: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:23 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D924: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:24 CLC
    case 0xC4D926: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:25 ADC @VIRTUAL0A
    case 0xC4D927: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:26 STA @VIRTUAL0A
    case 0xC4D929: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:27 LDA [@VIRTUAL0A]
    case 0xC4D92B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:28 TAX
    case 0xC4D92D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:29 LDA @LOCAL02
    case 0xC4D92E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:30 CLC
    case 0xC4D930: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:31 ADC #6
    case 0xC4D931: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C4D8FA.asm:31 ADC #6
    // Overlapping static entry reached from 0xC4D931.
    case 0xC4D933: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4D934: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4D936: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4D938: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:32 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4D93A: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:33 CLC
    case 0xC4D93C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:34 ADC @VIRTUAL0A
    case 0xC4D93D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:35 STA @VIRTUAL0A
    case 0xC4D93F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:36 LDA [@VIRTUAL0A]
    case 0xC4D941: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:37 TAY
    case 0xC4D943: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:38 LDA @LOCAL02
    case 0xC4D944: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:39 INC
    case 0xC4D946: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:40 INC
    case 0xC4D947: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:41 PHA
    case 0xC4D948: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D949: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D94B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D94D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D8FA.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D94F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D8FA.asm:43 PLA
    case 0xC4D951: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:44 CLC
    case 0xC4D952: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:45 ADC @VIRTUAL0A
    case 0xC4D953: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:46 STA @VIRTUAL0A
    case 0xC4D955: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:47 LDA [@VIRTUAL0A]
    case 0xC4D957: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D8FA.asm:48 STA @VIRTUAL02
    case 0xC4D959: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D8FA.asm:49 LDA @LOCAL02
    case 0xC4D95B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D8FA.asm:50 CLC
    case 0xC4D95D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:51 ADC @VIRTUAL06
    case 0xC4D95E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:52 STA @VIRTUAL06
    case 0xC4D960: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:53 LDA [@VIRTUAL06]
    case 0xC4D962: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D8FA.asm:54 STX @LOCAL00
    case 0xC4D964: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D8FA.asm:55 STY @LOCAL01
    case 0xC4D966: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4D8FA.asm:56 LDY #.LOWORD(-1)
    case 0xC4D968: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D8FA.asm:56 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4D968.
    case 0xC4D96A: cpu.execute_instruction<0xFF>(0x2202A6, 4); return true;
    // src/unknown/C4/C4D8FA.asm:57 LDX @VIRTUAL02
    case 0xC4D96B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D8FA.asm:58 JSL CREATE_ENTITY
    case 0xC4D96D: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C4/C4D8FA.asm:58 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4D96A.
    case 0xC4D96E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/C4/C4D8FA.asm:58 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4D96E.
    case 0xC4D970: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00AA0A, 3); return true;
    // src/unknown/C4/C4D8FA.asm:59 ASL
    case 0xC4D971: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:60 TAX
    case 0xC4D972: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D8FA.asm:61 LDA #DIRECTION::DOWN
    case 0xC4D973: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4D8FA.asm:61 LDA #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC4D973.
    case 0xC4D975: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4D8FA.asm:62 STA ENTITY_DIRECTIONS,X
    case 0xC4D976: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C4/C4D8FA.asm:63 INC @VIRTUAL04
    case 0xC4D979: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:65 LDA @VIRTUAL04
    case 0xC4D97B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D8FA.asm:66 CMP #5
    case 0xC4D97D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4D8FA.asm:66 CMP #5
    // Overlapping static entry reached from 0xC4D97D.
    case 0xC4D97F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4D980: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4D982: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4D8FA.asm:67 BCCL @UNKNOWN0
    case 0xC4D984: cpu.execute_instruction<0x4C>(0x00D909, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D8FA.asm:68 END_C_FUNCTION
    case 0xC4D987: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D8FA.asm:68 END_C_FUNCTION
    case 0xC4D988: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D989.asm (unresolved).
bool execute_unresolved_c4_c4d989_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D989.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D989: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D98B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D98C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D98D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D98E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D98E.
    case 0xC4D990: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D991: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D989.asm:10 END_STACK_VARS
    case 0xC4D992: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:11 STA @VIRTUAL02
    case 0xC4D993: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D989.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4D990.
    case 0xC4D994: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:12 JSL UNKNOWN_C0927C
    case 0xC4D995: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/C4/C4D989.asm:13 JSL UNKNOWN_C01A86
    case 0xC4D999: cpu.execute_instruction<0x22>(0xC01A86, 4); return true;
    // src/unknown/C4/C4D989.asm:14 LDX #0
    case 0xC4D99D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:14 LDX #0
    // Overlapping static entry reached from 0xC4D99D.
    case 0xC4D99F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4D989.asm:15 LDA #$8000
    case 0xC4D9A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C4/C4D989.asm:15 LDA #$8000
    // Overlapping static entry reached from 0xC4D9A0.
    case 0xC4D9A2: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC4D9A3: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/unknown/C4/C4D989.asm:17 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC4D9A7: cpu.execute_instruction<0x22>(0xC01A69, 4); return true;
    // src/unknown/C4/C4D989.asm:18 LDA #1
    case 0xC4D9AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4D989.asm:18 LDA #1
    // Overlapping static entry reached from 0xC4D9AB.
    case 0xC4D9AD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989.asm:19 STA NPC_SPAWNS_ENABLED
    case 0xC4D9AE: cpu.execute_instruction<0x8D>(0x004A58, 3); return true;
    // src/unknown/C4/C4D989.asm:20 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4D9B1: cpu.execute_instruction<0x9C>(0x004A5A, 3); return true;
    // src/unknown/C4/C4D989.asm:21 LDA #0
    case 0xC4D9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:21 LDA #0
    // Overlapping static entry reached from 0xC4D9B4.
    case 0xC4D9B6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:22 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4D9B7: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/unknown/C4/C4D989.asm:23 LDA #23
    case 0xC4D9BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C4/C4D989.asm:23 LDA #23
    // Overlapping static entry reached from 0xC4D9BB.
    case 0xC4D9BD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989.asm:24 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4D9BE: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C4/C4D989.asm:25 LDA #24
    case 0xC4D9C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4D989.asm:25 LDA #24
    // Overlapping static entry reached from 0xC4D9C1.
    case 0xC4D9C3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D989.asm:26 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4D9C4: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C4/C4D989.asm:26 STA ENTITY_ALLOCATION_MAX_SLOT
    // Overlapping static entry reached from 0xC4D9A2.
    case 0xC4D9C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:27 LDY #0
    case 0xC4D9C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:27 LDY #0
    // Overlapping static entry reached from 0xC4D9C7.
    case 0xC4D9C9: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4D989.asm:28 TYX
    case 0xC4D9CA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:29 LDA #1
    case 0xC4D9CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4D989.asm:29 LDA #1
    // Overlapping static entry reached from 0xC4D9CB.
    case 0xC4D9CD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:30 JSL INIT_ENTITY
    case 0xC4D9CE: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/unknown/C4/C4D989.asm:31 JSL UNKNOWN_C02D29
    case 0xC4D9D2: cpu.execute_instruction<0x22>(0xC02D29, 4); return true;
    // src/unknown/C4/C4D989.asm:32 LDX #0
    case 0xC4D9D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:32 LDX #0
    // Overlapping static entry reached from 0xC4D9D6.
    case 0xC4D9D8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4D989.asm:33 BRA @UNKNOWN1
    case 0xC4D9D9: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C4/C4D989.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D9DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:36 STZ GAME_STATE + game_state::party_members,X
    case 0xC4D9DD: cpu.execute_instruction<0x9E>(0x00986F, 3); return true;
    // src/unknown/C4/C4D989.asm:37 INX
    case 0xC4D9E0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:39 CPX #.SIZEOF(game_state::party_members)
    case 0xC4D9E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C4D989.asm:39 CPX #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC4D9E1.
    case 0xC4D9E3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D989.asm:40 BCC @UNKNOWN0
    case 0xC4D9E4: cpu.execute_instruction<0x90>(0x0000F5, 2); return true;
    // src/unknown/C4/C4D989.asm:41 LDX #2824
    case 0xC4D9E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000B08, 3); return true;
    // src/unknown/C4/C4D989.asm:41 LDX #2824
    // Overlapping static entry reached from 0xC4D9E6.
    case 0xC4D9E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC4D9E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:43 LDA #7520
    case 0xC4D9EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x001D60, 3); return true;
    // src/unknown/C4/C4D989.asm:43 LDA #7520
    // Overlapping static entry reached from 0xC4D9EB.
    case 0xC4D9ED: cpu.execute_instruction<0x1D>(0x005F22, 3); return true;
    // src/unknown/C4/C4D989.asm:44 JSL UNKNOWN_C0B65F
    case 0xC4D9EE: cpu.execute_instruction<0x22>(0xC0B65F, 4); return true;
    // src/unknown/C4/C4D989.asm:44 JSL UNKNOWN_C0B65F
    // Overlapping static entry reached from 0xC4D9ED.
    case 0xC4D9F0: cpu.execute_instruction<0xB6>(0x0000C0, 2); return true;
    // src/unknown/C4/C4D989.asm:45 JSL UNKNOWN_C03A24
    case 0xC4D9F2: cpu.execute_instruction<0x22>(0xC03A24, 4); return true;
    // src/unknown/C4/C4D989.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D9F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:47 STZ @LOCAL00
    case 0xC4D9F8: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C4/C4D989.asm:48 LDX #BPP4PALETTE_SIZE * 16
    case 0xC4D9FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4D989.asm:48 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4D9FA.
    case 0xC4D9FC: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D989.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC4D9FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:50 LDA #.LOWORD(PALETTES)
    case 0xC4D9FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4D989.asm:50 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4D9FF.
    case 0xC4DA01: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:51 JSL MEMSET16
    case 0xC4DA02: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4D989.asm:52 JSL OVERWORLD_INITIALIZE
    case 0xC4DA06: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/C4/C4D989.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DA0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:54 STZ TM_MIRROR
    case 0xC4DA0C: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/unknown/C4/C4D989.asm:54 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC4DA5F.
    case 0xC4DA0E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D989.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC4DA0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:56 LDA #0
    case 0xC4DA11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4DA11.
    case 0xC4DA13: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D989.asm:57 JSL UNKNOWN_C2EA15
    case 0xC4DA14: cpu.execute_instruction<0x22>(0xC2EA15, 4); return true;
    // src/unknown/C4/C4D989.asm:58 JSL UNKNOWN_C4A7B0
    case 0xC4DA18: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/unknown/C4/C4D989.asm:59 STZ ACTIONSCRIPT_STATE
    case 0xC4DA1C: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/C4/C4D989.asm:60 LDX #0
    case 0xC4DA1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:60 LDX #0
    // Overlapping static entry reached from 0xC4DA1F.
    case 0xC4DA21: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D989.asm:61 STX @LOCAL02
    case 0xC4DA22: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4D989.asm:62 TXY
    case 0xC4DA24: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:63 STY @LOCAL01
    case 0xC4DA25: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4DA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00FD8D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4DA27.
    case 0xC4DA29: cpu.execute_instruction<0xFD>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4DA2A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4DA2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4DA2C.
    case 0xC4DA2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D989.asm:64 LOADPTR ATTRACT_MODE_TXT, @VIRTUAL0A
    case 0xC4DA2F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D989.asm:65 LDA @VIRTUAL02
    case 0xC4DA31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D989.asm:66 ASL
    case 0xC4DA33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:67 ASL
    case 0xC4DA34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:68 CLC
    case 0xC4DA35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:69 ADC @VIRTUAL0A
    case 0xC4DA36: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D989.asm:69 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC4DA65.
    case 0xC4DA37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:70 STA @VIRTUAL0A
    case 0xC4DA38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DA3A.
    case 0xC4DA3C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA3D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA40: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA42: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D989.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4DA44: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D989.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4DA46: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D989.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4DA48: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D989.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4DA4A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D989.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4DA4C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D989.asm:73 JSL DISPLAY_TEXT
    case 0xC4DA4E: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C4/C4D989.asm:74 BRA @UNKNOWN7
    case 0xC4DA52: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C4D989.asm:76 JSL UNKNOWN_C4A7B0
    case 0xC4DA54: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/unknown/C4/C4D989.asm:77 LDA PAD_PRESS
    case 0xC4DA58: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989.asm:78 AND #PAD::A_BUTTON
    case 0xC4DA5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4D989.asm:78 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC4DA5B.
    case 0xC4DA5D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989.asm:79 BNE @UNKNOWN3
    case 0xC4DA5E: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C4/C4D989.asm:79 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4DA6D.
    case 0xC4DA5F: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C4D989.asm:80 LDA PAD_PRESS
    case 0xC4DA60: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989.asm:80 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC4DA5F.
    case 0xC4DA61: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/unknown/C4/C4D989.asm:81 AND #PAD::B_BUTTON
    case 0xC4DA63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C4D989.asm:81 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC4DA61.
    case 0xC4DA64: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4D989.asm:81 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC4DA63.
    case 0xC4DA65: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989.asm:82 BNE @UNKNOWN3
    case 0xC4DA66: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C4/C4D989.asm:83 LDA PAD_PRESS
    case 0xC4DA68: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D989.asm:84 AND #PAD::START_BUTTON
    case 0xC4DA6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C4/C4D989.asm:84 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC4DA6B.
    case 0xC4DA6D: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D989.asm:85 BEQ @UNKNOWN4
    case 0xC4DA6E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4D989.asm:85 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC4DA6D.
    case 0xC4DA6F: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/unknown/C4/C4D989.asm:87 LDY #1
    case 0xC4DA70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D989.asm:87 LDY #1
    // Overlapping static entry reached from 0xC4DA6F.
    case 0xC4DA71: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4D989.asm:87 LDY #1
    // Overlapping static entry reached from 0xC4DA70.
    case 0xC4DA72: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D989.asm:88 STY @LOCAL01
    case 0xC4DA73: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4D989.asm:89 BRA @UNKNOWN8
    case 0xC4DA75: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4D989.asm:91 JSL UNKNOWN_C1004E
    case 0xC4DA77: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C4/C4D989.asm:92 LDX @LOCAL02
    case 0xC4DA7B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4D989.asm:93 BEQ @UNKNOWN5
    case 0xC4DA7D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D989.asm:94 CPX #1
    case 0xC4DA7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C4/C4D989.asm:94 CPX #1
    // Overlapping static entry reached from 0xC4DA7F.
    case 0xC4DA81: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989.asm:95 BNE @UNKNOWN6
    case 0xC4DA82: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C4/C4D989.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DA84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:98 LDA #$13
    case 0xC4DA86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C4/C4D989.asm:99 STA TM_MIRROR
    case 0xC4DA88: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4D989.asm:99 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DA86.
    case 0xC4DA89: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:99 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DA89.
    case 0xC4DA8A: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D989.asm:101 INX
    case 0xC4DA8B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:102 STX @LOCAL02
    case 0xC4DA8C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4D989.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC4DA8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D989.asm:105 LDA ACTIONSCRIPT_STATE
    case 0xC4DA90: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/unknown/C4/C4D989.asm:106 BEQ @UNKNOWN2
    case 0xC4DA93: cpu.execute_instruction<0xF0>(0x0000BF, 2); return true;
    // src/unknown/C4/C4D989.asm:108 JSL UNKNOWN_C2EA74
    case 0xC4DA95: cpu.execute_instruction<0x22>(0xC2EA74, 4); return true;
    // src/unknown/C4/C4D989.asm:109 BRA @UNKNOWN10
    case 0xC4DA99: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C4D989.asm:111 JSL UNKNOWN_C1004E
    case 0xC4DA9B: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C4/C4D989.asm:112 JSL UNKNOWN_C4A7B0
    case 0xC4DA9F: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/unknown/C4/C4D989.asm:114 JSL UNKNOWN_C2EACF
    case 0xC4DAA3: cpu.execute_instruction<0x22>(0xC2EACF, 4); return true;
    // src/unknown/C4/C4D989.asm:115 CMP #0
    case 0xC4DAA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4D989.asm:115 CMP #0
    // Overlapping static entry reached from 0xC4DAA7.
    case 0xC4DAA9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989.asm:116 BNE @UNKNOWN9
    case 0xC4DAAA: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/unknown/C4/C4D989.asm:117 LDX #1
    case 0xC4DAAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4D989.asm:117 LDX #1
    // Overlapping static entry reached from 0xC4DAAC.
    case 0xC4DAAE: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4D989.asm:118 TXA
    case 0xC4DAAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D989.asm:119 JSL FADE_OUT
    case 0xC4DAB0: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C4/C4D989.asm:120 BRA @UNKNOWN12
    case 0xC4DAB4: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4D989.asm:122 JSL UNKNOWN_C1004E
    case 0xC4DAB6: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C4/C4D989.asm:124 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4DABA: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C4/C4D989.asm:125 AND #$00FF
    case 0xC4DABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D989.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC4DABD.
    case 0xC4DABF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D989.asm:126 BNE @UNKNOWN11
    case 0xC4DAC0: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C4/C4D989.asm:127 JSL UNKNOWN_C2EAAA
    case 0xC4DAC2: cpu.execute_instruction<0x22>(0xC2EAAA, 4); return true;
    // src/unknown/C4/C4D989.asm:128 STZ ACTIONSCRIPT_STATE
    case 0xC4DAC6: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/C4/C4D989.asm:129 JSL UNKNOWN_C021E6
    case 0xC4DAC9: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/unknown/C4/C4D989.asm:130 LDY @LOCAL01
    case 0xC4DACD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4D989.asm:131 TYA
    case 0xC4DACF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D989.asm:132 END_C_FUNCTION
    case 0xC4DAD0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D989.asm:132 END_C_FUNCTION
    case 0xC4DAD1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4DCF6.asm (unresolved).
bool execute_unresolved_c4_c4dcf6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4DCF6.asm:3 BEGIN_C_FUNCTION
    case 0xC4DCF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4DCF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4DCF9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4DCFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DCFA.
    case 0xC4DCFC: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4DCF6.asm:5 END_STACK_VARS
    case 0xC4DCFD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4DCFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4DCFE.
    case 0xC4DD00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4DD01: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4DD03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4DD03.
    case 0xC4DD05: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:6 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4DD06: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4DCF6.asm:7 LDX #0
    case 0xC4DD08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4DCF6.asm:7 LDX #0
    // Overlapping static entry reached from 0xC4DD08.
    case 0xC4DD0A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4DCF6.asm:8 BRA @UNKNOWN1
    case 0xC4DD0B: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4DD0D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4DD0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4DD11: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4DCF6.asm:10 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4DD13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4DCF6.asm:11 LDA [@VIRTUAL06]
    case 0xC4DD15: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4DCF6.asm:12 ORA #$2000
    case 0xC4DD17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C4/C4DCF6.asm:12 ORA #$2000
    // Overlapping static entry reached from 0xC4DD17.
    case 0xC4DD19: cpu.execute_instruction<0x20>(0x000687, 3); return true;
    // src/unknown/C4/C4DCF6.asm:13 STA [@VIRTUAL06]
    case 0xC4DD1A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4DCF6.asm:14 INC @VIRTUAL0A
    case 0xC4DD1C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4DCF6.asm:15 INC @VIRTUAL0A
    case 0xC4DD1E: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4DCF6.asm:16 INX
    case 0xC4DD20: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4DCF6.asm:18 CPX #1024
    case 0xC4DD21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000400, 3); return true;
    // src/unknown/C4/C4DCF6.asm:18 CPX #1024
    // Overlapping static entry reached from 0xC4DD21.
    case 0xC4DD23: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/unknown/C4/C4DCF6.asm:19 BCC @UNKNOWN0
    case 0xC4DD24: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4DCF6.asm:19 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC4DD23.
    case 0xC4DD25: cpu.execute_instruction<0xE7>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4DCF6.asm:20 END_C_FUNCTION
    case 0xC4DD26: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4DCF6.asm:20 END_C_FUNCTION
    case 0xC4DD27: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
